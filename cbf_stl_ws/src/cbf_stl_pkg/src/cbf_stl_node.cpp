#include "rclcpp/rclcpp.hpp"
#include "my_interfaces/srv/input_request.hpp"    
#include "my_interfaces/msg/obstacles.hpp" 
#include "my_interfaces/msg/alldata.hpp" 
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <std_msgs/msg/float32.hpp>
#include <Eigen/Dense> 
#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include "optimization.h"

using namespace std::chrono_literals;
using std::placeholders::_1;

// Constants
namespace Constants {
    constexpr char PUB_CONTROL_INPUT_NAME[] = "/cmd_vel";
    constexpr char SUB_ODOM_NAME[] = "/amcl_pose";
    constexpr char SRV_SERVER_NAME[] = "input_request";
    constexpr char PUB_ALL_DATA_NAME[] = "/alldata";
    constexpr char SUB_OBS_NAME[] = "/obstacles";
    constexpr char NODE_NAME[] = "cbf_stl_node";
    constexpr char SUB_HUMAN_DISTANCE[] = "/human_distance";
    constexpr float MARGIN_OBSTACLE = 0.2;              // Tolerance for obstacles
    constexpr int COMPUTATION_PC = 1;                   // [0: low - 1: high] computation performance
} 

// ********************************************************************************************************************
// SETTINGS PARAMETERS - YOU CAN CHANGE THESE PARAMETERS
// ********************************************************************************************************************
bool printServiceServer = true;
bool printAngularFunction = false;
bool printDataOdom = false;
bool printDataObs = false;
bool printDebug = true; 
bool sermas_test = true;                    // Set to true to get the data from camera and to publish the data in the /alldata topic

float MAX_VEL_ROBOT = 0.7;                  // 1.0f is the max
float OBS_VEL_ROBOT = 0.5;                  // Velocity to reduce the robot velocity from obstacles
float OBS_DIST_ROBOT = 1.5;                 // Distance to reduce the robot velocity from obstacles          
float K_OBS = 1.0;                          // Obstacle constraint barrier parameter
int ESP_OBS = 1;                            // Obstacle constraint barrier parameter

double FOV_GOAL_RADIANS = 5 * M_PI / 180.0; // Angular constraint barrier parameter
int ESP_FOV_GOAL = 1;                       // Angular constraint barrier parameter
int K_FOV_GOAL = 1;                         // Angular constraint barrier parameter

// ********************************************************************************************************************
// Structure definitions
struct Input_Compute_b_db_dt {
    std::string temp_operator;
    int ta,tb;
    std::vector<double> x0;
    std::vector<double> goal;
    double epsilon, margin, b0_min, b0_max;
};

struct Output_Compute_b_db_dt {
    double q1,q2,m1,m2;
};

// ********************************************************************************************************************
// GLOBAL VARIABLES INITIALIZATION - DON'T CHANGE 
// ********************************************************************************************************************
// Computation performance settings
std::chrono::milliseconds ms_iterations;
int sec_iterations;

// timer_compute_callback()
int temporal_operator_counter = -1;
int global_counter = -1;
int local_counter = -1;
std::vector<double> t_;

// Angular goal constraint global variable 
Eigen::Matrix<double, 2, 2> solver_A_fov_goal;
Eigen::Matrix<double, 2, 1> h_fov_goal;
Eigen::Matrix<double, 2, 1> solver_b_fov_goal;
Eigen::Matrix<double, 2, 2> Riw_fov;
Eigen::Matrix<double, 2, 1> relative_dist_RG;  // Relative distance between robot and goal pose 

// compute_control_input() and loadSystem()
Input_Compute_b_db_dt input_compute;
Output_Compute_b_db_dt output_compute;
Eigen::Matrix<double, 1, 3> solver_A_stl;
Eigen::Matrix<double, 1, 1> solver_b_stl;
Eigen::Matrix<double, 3, 1> vel_real;
Eigen::Matrix<double, 1, 3> solver_A_obs;
Eigen::Matrix<double, 1, 1> solver_b_obs;
std::vector<double> vel_max; 
bool flag_finish_ = false;                   // Flag to check if the robot has reached the goal pose
bool flag_half_finish_ = false;              // Flag to check if the robot has reached the goal pose in the G,U operators
bool correctAngle = false;
bool v_costraint_violation;
float v_costraint_violation_value;
// ********************************************************************************************************************

// Global functions
void computationPerformance(int option){
    switch (option){
        case 0:
            sec_iterations = 20;
            ms_iterations = std::chrono::milliseconds(50);
            break;
        case 1:
            sec_iterations = 50;
            ms_iterations = std::chrono::milliseconds(20);
            break;
        default:
            sec_iterations = 50;
            ms_iterations = std::chrono::milliseconds(20);
            break;
    }
    RCLCPP_INFO(rclcpp::get_logger(""), "\033[1;32mComputation performance set to OPTION: %d\033[0m", option);
    RCLCPP_INFO(rclcpp::get_logger(""), "\033[1;32mComputation performance: %d seconds and %ld milliseconds\033[0m", sec_iterations, ms_iterations.count());       
}

void nlcfunc2_jac(const alglib::real_1d_array &x, alglib::real_1d_array &fi, alglib::real_2d_array &jac, void *)
{
    // v_costraint_violation initialization
    v_costraint_violation = false;

    // Objective function f(x) = x'*x
    fi[0] = (x[0]*x[0]+x[1]*x[1]+x[2]*x[2]);

    // Inequality constraint - (Ax + b) <= 0
    // Where:
    // solver_A_stl = dbx_stl_; 
    // solver_b_stl = dbt_stl_(including alpha_stl);
    fi[1] = -(solver_A_stl(0, 0) * x[0] + solver_A_stl(0, 1) * x[1] + solver_A_stl(0, 2) * x[2] + solver_b_stl(0, 0));

    // Inequality constraint ||V|| - Vmax <= 0
    float Vx;
    float Vy;
    float Vz;

    // Compute velocities
    if ((x[0] != 0.0) || (x[1] != 0.0) || (x[2] != 0.0)){
        Vx = x[0];
        Vy = x[1];
        Vz = x[2];
    } else {
        Vx = 0.1;
        Vy = 0.1;
        Vz = 0.0;
    }

    double norm_v = sqrt((Vx*Vx)+(Vy*Vy));
    if (norm_v < 1e-6){
        norm_v = 1e-6; // Avoid division by zero
    } 

    fi[2] = norm_v - vel_max[global_counter];

    // Inequality -(h_dot_fov_goal + solver_b_fov_goal) <= 0
    fi[3] = -(-(solver_A_fov_goal(0,0)*Vx+solver_A_fov_goal(0,1)*Vy)+(solver_A_fov_goal(0,0)*Vz*relative_dist_RG(1,0)+solver_A_fov_goal(0,1)*Vz*(-relative_dist_RG(0,0)))+(solver_b_fov_goal(0,0)));
    fi[4] = -(-(solver_A_fov_goal(1,0)*Vx+solver_A_fov_goal(1,1)*Vy)+(solver_A_fov_goal(1,0)*Vz*relative_dist_RG(1,0)+solver_A_fov_goal(1,1)*Vz*(-relative_dist_RG(0,0)))+(solver_b_fov_goal(1,0)));

    // COLLISION AVOIDANCE
    // Inequality constraint - (Ax + b) <= 0 
    // Where:
    // solver_A = db_obs
    // solver_b = alpha_obs
    fi[5] = -(solver_A_obs(0,0)*x[0] + solver_A_obs(0,1)*x[1] + solver_A_obs(0,2)*x[2]+ solver_b_obs(0,0));
    

    // Jacobians
    jac[0][0] = x[0];
    jac[0][1] = x[1];
    jac[0][2] = x[2];
    jac[1][0] = -solver_A_stl(0, 0);
    jac[1][1] = -solver_A_stl(0, 1);
    jac[1][2] = -solver_A_stl(0, 2);
    jac[2][0] = (1/(norm_v))*(Vx);
    jac[2][1] = (1/(norm_v))*(Vy);
    jac[2][2] = 0;
    jac[3][0] = (solver_A_fov_goal(0,0));
    jac[3][1] = (solver_A_fov_goal(0,1));
    jac[3][2] = - (solver_A_fov_goal(0,0) * relative_dist_RG(1,0) - solver_A_fov_goal(0,1) * relative_dist_RG(0,0));
    jac[4][0] = (solver_A_fov_goal(1,0));
    jac[4][1] = (solver_A_fov_goal(1,1));
    jac[4][2] = - (solver_A_fov_goal(1,0) * relative_dist_RG(1,0) - solver_A_fov_goal(1,1) * relative_dist_RG(0,0));
    jac[5][0] = -solver_A_obs(0,0);
    jac[5][1] = -solver_A_obs(0,1);  
    jac[5][2] = -solver_A_obs(0,2);  

    // Check v_costraint_violation
    if (fi[2] >= 0.0){
        v_costraint_violation = true;
        v_costraint_violation_value = fi[2];
    } else if (fi[2] < 0.0){
        v_costraint_violation = false;
    }
}

void clearScreen(){
    // This function clears the terminal screen
    #if defined(_WIN32) || defined(_WIN64)
        std::system("cls");
    #else
        std::system("clear");
    #endif
}

class Cbf_stl : public rclcpp::Node {
    public:
        Cbf_stl() : Node(Constants::NODE_NAME) {
            // Create a service, subscriptions and publisher
            srv_server_ = create_service<my_interfaces::srv::InputRequest>(Constants::SRV_SERVER_NAME, std::bind(&Cbf_stl::srv_server_callback, this, std::placeholders::_1, std::placeholders::_2));
            subscription_obs_ = this->create_subscription<my_interfaces::msg::Obstacles>(Constants::SUB_OBS_NAME, 10, std::bind(&Cbf_stl::topic_obs_callback, this, _1));
            subscription_odom_ = this->create_subscription<geometry_msgs::msg::PoseWithCovarianceStamped>(Constants::SUB_ODOM_NAME, 1, std::bind(&Cbf_stl::topic_odom_callback, this, _1));
            control_input_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(Constants::PUB_CONTROL_INPUT_NAME, 10);
            alldata_publisher_ = this->create_publisher<my_interfaces::msg::Alldata>(Constants::PUB_ALL_DATA_NAME, 10);
            sub_human_distance_ = this->create_subscription<std_msgs::msg::Float32>(Constants::SUB_HUMAN_DISTANCE, 10, std::bind(&Cbf_stl::sub_human_distance_callback, this, _1));

            // Create a timer to periodically check and call compute_control_input if new data is received
            timer_compute_ = rclcpp::create_timer(this, this->get_clock(), ms_iterations, std::bind(&Cbf_stl::timer_compute_callback, this));
        }

    private:
        // Rclcpp variables
        rclcpp::Service<my_interfaces::srv::InputRequest>::SharedPtr srv_server_;
        rclcpp::Subscription<my_interfaces::msg::Obstacles>::SharedPtr subscription_obs_;
        rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr subscription_odom_;
        rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr sub_human_distance_;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr control_input_publisher_;
        rclcpp::Publisher<my_interfaces::msg::Alldata>::SharedPtr alldata_publisher_;
        rclcpp::TimerBase::SharedPtr timer_compute_;

        // velocity
        float max_vel_robot_ = MAX_VEL_ROBOT; 
        
        // srv_server_callback()
        std::string temp_operator_user_;
        float goal_x_user_, goal_y_user_, goal2_x_user_, goal2_y_user_, epsilon_user_, margin_, b0_min_, b0_max_, gamma_stl_;
        bool data_service_received_ = false;                    
        int ta_user_, tb_user_, tab_user_, eta_stl_, esp_stl_;

        // topic_odom_callback()
        bool data_odom_received_ = false;            
        double pos_x_ = 0.0;
        double pos_y_ = 0.0;   
        double rot_z_ = 0.0;

        // topic_obs_callback()
        bool data_obs_received_ = false;
        int o_number_ = 0;
        std::vector<float> o_radius_, ox_pose_, oy_pose_;
        int no_obstacle_counter_ = 0;
        const int no_obstacle_limit_ = 1 * sec_iterations;  // 1 second

        // Solver variables
        alglib::real_1d_array solver_u0_;                           // initial point
        alglib::real_1d_array solver_s_;                            // need tuning ([1,1,1] default)
        alglib::ae_int_t solver_maxits_;                            // MAX iterations, 0 for unbounded
        alglib::minnlcstate solver_state_;
        alglib::minnlcreport solver_rep_;
        alglib::real_1d_array solver_u_;
        alglib::real_1d_array nl_;
        alglib::real_1d_array nu_;
        double solver_epsx_ = 0.000001;                           // need tuning (0.000001 default)

        // compute_control_input() & initialization() & loadSystem()
        Eigen::Matrix<double, 2, Eigen::Dynamic> log_arg_db_; 
        Eigen::Matrix<double, 2, Eigen::Dynamic> db_; 
        Eigen::Matrix<double, 2, Eigen::Dynamic> db_obs_;
        Eigen::MatrixXd x_;
        Eigen::Matrix<double, 3, 3> rot_matrix_;
        Eigen::Matrix<double, 3, 1> dbx_stl_; 
        Eigen::Matrix<double, 3, 1> dbx_obs_;
        Eigen::Matrix<double, 3, 1> u_;
        Eigen::Matrix<double, 1, 1> dbt_stl_; 
        std::vector<double> b_i_;
        std::vector<double> log_arg_;
        std::vector<double> log_arg_dt_;
        std::vector<double> b_b_;
        std::vector<double> b_b_obs_;
        std::vector<double> dt_;
        std::vector<double> vel_abs_;
        std::vector<double> hh_;   
        float b0_min_change_b_, b0_max_change_b_, step_, percentage_initial_, percentage_reduction_, m1_, m2_, m3_, m4_, q1_, q2_, q3_, q4_;
        int new_t1_, new_t2_, percentage_counter_, counter_flag_, max_percentage_counter_;
        double bb_, den_stl_,b_min_obs_;
        int b_number_, t_lim_;
        bool change_b_;
        int stagnation_counter_ = 0;
        int previous_percentage_counter_ = 0;
        float human_distance_ = 0.0;
        float obs_x_closest_ = 0.0;
        float obs_y_closest_ = 0.0;

        void srv_server_callback(const std::shared_ptr<my_interfaces::srv::InputRequest::Request> request,const std::shared_ptr<my_interfaces::srv::InputRequest::Response> response) {
            temp_operator_user_ = request->temp_operator;
            goal_x_user_ = request->goal[0];
            goal_y_user_ = request->goal[1];
            goal2_x_user_ = request->goal2[0];
            goal2_y_user_ = request->goal2[1];
            ta_user_ = request->ta;
            tb_user_ = request->tb;
            tab_user_ = request->tab;
            epsilon_user_ = request->epsilon;
            eta_stl_ = request->eta;
            b0_min_ = request->b0_min;
            b0_max_ = request->b0_max;
            margin_ = request->margin;
            gamma_stl_ = request->k;
            esp_stl_ = request->esp;
            response->answer = true; 

            initialization();

            if (printServiceServer){
                // Debug input data
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "\033[1;32mIncoming request:\033[0m");
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "temp_operator: %s", temp_operator_user_.c_str()); 
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "goal: (%.2f, %.2f)", goal_x_user_, goal_y_user_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "goal2: (%.2f, %.2f)", goal2_x_user_, goal2_y_user_);  
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "ta: %d", ta_user_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "tb: %d", tb_user_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "tab: %d", tab_user_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "epsilon: %.2f", epsilon_user_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "eta: %d", eta_stl_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "b0_min: %.2f", b0_min_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "b0_max: %.2f", b0_max_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "margin: %.2f", margin_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "k: %.2f", gamma_stl_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "esp: %d", esp_stl_);
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "\033[1;32mSending back response:\033[0m");
                RCLCPP_INFO(rclcpp::get_logger("SERVICE SERVER"), "Bool: %d", response->answer);   
            }

            // Flag to check if data from service /input_request has been received
            data_service_received_= true;
        }

        void topic_odom_callback(const geometry_msgs::msg::PoseWithCovarianceStamped::ConstSharedPtr& msg) 
        {
            double q0, q1, q2, q3;

            // Save the message data in the class variables
            pos_x_ = msg->pose.pose.position.x;
            pos_y_ = msg->pose.pose.position.y;
            q0 = msg->pose.pose.orientation.x;
            q1 = msg->pose.pose.orientation.y;
            q2 = msg->pose.pose.orientation.z;
            q3 = msg->pose.pose.orientation.w;

            rot_z_ = atan2(2*(q0*q1+q2*q3),1-2*(q1*q1+q2*q2));

            // Flag to check if the message from /mobile_base_controller/odom has been received
            data_odom_received_ = true;

            if (printDataOdom){
                RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER ODOM"), "\033[1;32mIncoming message:\033[0m");
                RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER ODOM"), "Robot Pose: [x: %.2f, y: %.2f, theta: %.2f]", pos_x_, pos_y_, rot_z_);            
            }
        }

        void topic_obs_callback(const my_interfaces::msg::Obstacles &msg) 
        {
            // Save the message data in the class variables
            o_number_ = msg.o_number;
            o_radius_ = msg.o_radius;   
            ox_pose_ = msg.ox_pose;
            oy_pose_ = msg.oy_pose; 

            // Flag to check if the message from /obstacles has been received
            data_obs_received_ = true;

            // Print the message data
            if(printDataObs){
                RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER OBS"), "\033[1;32mIncoming message:\033[0m");
                RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER OBS"), "o_number: %d", o_number_);
                RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER OBS"), "o_radius: ");
                for(size_t i=0; i<o_radius_.size(); i++){
                    RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER OBS"), "o_radius: %f", o_radius_[i]);
                }
                RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER OBS"), "ox_pose: ");
                for(size_t i=0; i<ox_pose_.size(); i++){
                    RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER OBS"), "ox_pose: %f", ox_pose_[i]);
                }
                RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER OBS"), "oy_pose: ");
                for(size_t i=0; i<oy_pose_.size(); i++){
                    RCLCPP_INFO(rclcpp::get_logger("SUBSCRIBER OBS"), "oy_pose: %f", oy_pose_[i]);
                }
            }
        }

        void sub_human_distance_callback(const std_msgs::msg::Float32::SharedPtr msg) {
            human_distance_ = msg->data;
        }

        void timer_compute_callback() {
            if (data_service_received_ == true){
                if (correctAngle == false){
                    compute_correct_angle();
                } else if (correctAngle == true){
                    if ((global_counter>0) && (temporal_operator_counter == (t_lim_))){
                        RCLCPP_ERROR(rclcpp::get_logger("TIMER COMPUTE CALLBACK"), "Robot not arrived to the goal pose in the time limit!");
                        data_service_received_ = false;
                        flag_finish_ = true;
                        correctAngle = false;
                    }else{
                        // Update counters
                        global_counter += 1;
                        local_counter += 1;
                        temporal_operator_counter += 1;
                        compute_control_input();
                    }
                }
            }
            else if (data_service_received_ == false) {
                auto twist = geometry_msgs::msg::Twist();
                twist.linear.x = 0.0;
                twist.linear.y = 0.0;
                twist.angular.z = 0.0;
                
                if (data_odom_received_ == false){
                    RCLCPP_WARN(rclcpp::get_logger("TIMER COMPUTE CALLBACK"), "Waiting for robot pose...");
                }
                if (data_obs_received_ == false){
                    RCLCPP_WARN(rclcpp::get_logger("TIMER COMPUTE CALLBACK"), "Waiting for obs poses...");
                }
                control_input_publisher_->publish(twist);
            }            
        }

        void loadSystem(double phi) {
            rot_matrix_ << cos(phi), -sin(phi), 0, sin(phi), cos(phi), 0, 0, 0, 1;
        }
        
        void compute_b_db_dt(const Input_Compute_b_db_dt input_compute, Output_Compute_b_db_dt &output_compute){
            auto start_time_compute_b_db_dt = std::chrono::high_resolution_clock::now();
            double h_opt, t_star, gamma0, gamma00, h0, r, b;
            float b0_min = input_compute.b0_min;
            float b0_max = input_compute.b0_max;
            int while_counter = 0;
            int l = 1;
            int esp = 1;
            int opt = 2;    // 1 for official mode gamma00 between max(r,gamma0) and hl_opt
                            // 2 for personal mode gamma00 between max(r,gamma0) and hl_opt/2

            // Random seed
            srand(time(NULL));

            // Compute the response
            h_opt = pow(input_compute.epsilon, esp);

            if (input_compute.temp_operator == "G")
                t_star = input_compute.ta;
            else if (input_compute.temp_operator == "F")
                t_star = input_compute.tb;
            else {
                RCLCPP_ERROR(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "\nOPERATOR NOT CORRECT!");
                return;
            }

            h0 = h_opt - std::pow(norm(input_compute.x0, input_compute.goal), esp);

            if (t_star > 0) {
                if (opt == 1)
                    r = 0.001 + ((h_opt - 0.001) - 0.001) * static_cast<double>(rand()) / RAND_MAX;
                else if (opt == 2)
                    r = 0.001 + ((h_opt / 2 - 0.001) - 0.001) * static_cast<double>(rand()) / RAND_MAX;
            } else if (t_star == 0)
                r = 0.001 + (h0 - 0.001) * static_cast<double>(rand()) / RAND_MAX;

            gamma0 = (-fabs(h0) * input_compute.margin) + ((h0 - 0.001) - (-fabs(h0) * input_compute.margin)) * static_cast<double>(rand()) / RAND_MAX;

            if (opt == 1)
                gamma00 = (std::max(r, gamma0) - 0.001) + ((h_opt - 0.001) - (std::max(r, gamma0) - 0.001)) * static_cast<double>(rand()) / RAND_MAX;
            else if (opt == 2)
                gamma00 = (std::max(r, gamma0) - 0.001) + ((h_opt / 2) - (std::max(r, gamma0) - 0.001)) * static_cast<double>(rand()) / RAND_MAX;
            else {
                RCLCPP_ERROR(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "OPT PARAMETER NOT CORRECT!");
                return;
            }

            b=-gamma0 + (input_compute.epsilon - norm(input_compute.x0, input_compute.goal));

            // While loop
            while (b < b0_min || b > b0_max) {
                // Feedback output
                RCLCPP_WARN(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "No solution (gamma0 = %f, gamma00 = %f), recompute...", gamma0, gamma00);

                // Update counter
                while_counter += 1;

                // Recompute gamma0 and gamma00
                gamma0 = (-fabs(h0) * input_compute.margin) + ((h0 - 0.001) - (-fabs(h0) * input_compute.margin)) * static_cast<double>(rand()) / RAND_MAX;

                if (opt == 1)
                    gamma00 = (std::max(r, gamma0) - 0.001) + ((h_opt - 0.001) - (std::max(r, gamma0) - 0.001)) * static_cast<double>(rand()) / RAND_MAX;
                else if (opt == 2)
                    gamma00 = (std::max(r, gamma0) - 0.001) + ((h_opt / 2) - (std::max(r, gamma0) - 0.001)) * static_cast<double>(rand()) / RAND_MAX;
                else {
                    RCLCPP_ERROR(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "OPT PARAMETER NOT CORRECT!");
                    return;
                }

                // Recompute b
                b=-gamma0 + (input_compute.epsilon - norm(input_compute.x0, input_compute.goal));

                if(while_counter > (l*100)){
                    RCLCPP_ERROR(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "No solution found after 100 iterations!");
                    
                    // Edit b0_min and b0_max
                    b0_min = b0_min - ((b0_min * 10)/(100));
                    b0_max = b0_max + ((b0_min * 10)/(100));
                    l++;

                    // Debug
                    RCLCPP_WARN(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "New b0_min: %f, New b0_max: %f", input_compute.b0_min, input_compute.b0_max);
                }

                if(while_counter > 10000){
                    RCLCPP_ERROR(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "No solution found after 10000 iterations!");
                    data_service_received_ = false;
                    flag_finish_ = true;
                    break;
                }
            }

            output_compute.q1 = gamma0;
            output_compute.q2 = gamma00;
            output_compute.m1 = (gamma00-gamma0)/t_star;
            output_compute.m2 = 0.0;
            
            RCLCPP_INFO(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "Solution [m1 = %f, m2 = %f, q1 = %f, q2 = %f]", output_compute.m1, output_compute.m2, output_compute.q1, output_compute.q2);
            
            // Stop timer and compute duration
            auto end_time_compute_b_db_dt = std::chrono::high_resolution_clock::now();
            auto duration_compute_b_db_dt = std::chrono::duration_cast<std::chrono::milliseconds>(end_time_compute_b_db_dt - start_time_compute_b_db_dt);

            RCLCPP_INFO(rclcpp::get_logger("compute_b_db_dt FUNCTION"), "Duration: %ld microseconds", duration_compute_b_db_dt.count());
        }

        std::vector<double> linspace(double start, double end, int num_points) {
            // This function cretes a linspace Matlab function
            std::vector<double> result;
            double step_ = (end - start) / (num_points - 1);
            for (int i = 0; i < num_points; ++i) {
                result.push_back(start + i * step_);
            }

            return result;
        }
        
        double norm(const std::vector<double>& vec1, const std::vector<double>& vec2) {
            // This function return the square root of the sum of squares
            double sum_of_squares = 0.0;
            for (std::size_t i = 0; i < vec1.size(); ++i) {
                sum_of_squares += std::pow(vec1[i] - vec2[i], 2);
            }

            return std::sqrt(sum_of_squares);
        }
        
        void compute_control_input(){
            if (global_counter >= x_.cols()) {
                x_.conservativeResize(3, global_counter + 1);
                x_.col(global_counter).setZero();
            }

            // Update the robot pose
            x_(0,global_counter) = pos_x_;  
            x_(1,global_counter) = pos_y_;
            x_(2,global_counter) = rot_z_;
            
            // Update robot system
            loadSystem(x_(2,global_counter));

            // Update b_number
            if (temp_operator_user_ == "F" || temp_operator_user_ == "G"){
                b_number_ = 1;
            }
            else if (temp_operator_user_ == "U"){
                b_number_ = 2;
            }

            // Matrix inizialization
            log_arg_db_.resize(2,b_number_);
            log_arg_db_.col(b_number_-1).setZero();
            db_.resize(2,b_number_);
            db_.col(b_number_-1).setZero();

            // Vector inizialization
            b_i_.resize(b_number_, 0);
            log_arg_.resize(b_number_, 0);
            log_arg_dt_.resize(b_number_, 0);
            b_b_.resize(b_number_, 0);
            dt_.resize(b_number_, 0);

            if (o_number_ > 0){
                b_b_obs_.resize(o_number_, 0);
                db_obs_.resize(2, o_number_);
                db_obs_.col(0).setZero();
            }
            
            // Update v_max
            if (global_counter >= static_cast<int>(vel_max.size())) {
                vel_max.resize(global_counter + 1, max_vel_robot_);
            } else {
                vel_max[global_counter] = max_vel_robot_;
            }


            // Check the nearest obstacle 
            if (sermas_test && data_obs_received_) {
                int nearest_obstacle_index = 0;
                float min_distance = 100.00;
                for (size_t i = 0; i < o_radius_.size(); ++i) {
                    float distance = sqrt(pow(ox_pose_[i] - pos_x_, 2) + pow(oy_pose_[i] - pos_y_, 2));
                    if (distance < min_distance) {
                        min_distance = distance;
                        nearest_obstacle_index = i;
                        obs_x_closest_ = ox_pose_[nearest_obstacle_index];
                        obs_y_closest_ = oy_pose_[nearest_obstacle_index];
                    }
                }
                RCLCPP_INFO(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "\033[1;32mNearest obstacle distance:\033[0m %.2f, in pose: (%.2f, %.2f)", min_distance, obs_x_closest_, obs_y_closest_);

                if (min_distance < OBS_DIST_ROBOT) {
                    RCLCPP_WARN(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "\033[1;31mWarning: Obstacle too close!\033[0m");
                    max_vel_robot_ = OBS_VEL_ROBOT;
                    no_obstacle_counter_ = 0;  // reset counter
                } else {
                    no_obstacle_counter_++;
                    if (no_obstacle_counter_ >= no_obstacle_limit_) {
                        if (max_vel_robot_ != MAX_VEL_ROBOT) {
                            RCLCPP_INFO(rclcpp::get_logger("VELOCITY RESET"), "No obstacles for 2s, resetting max velocity to %.2f and triggering barrier recomputation.", MAX_VEL_ROBOT);
                            max_vel_robot_ = MAX_VEL_ROBOT;
                            change_b_ = true;
                        }
                    }
                }

            }

            // Update goal constraint
            Riw_fov << cos(x_(2,global_counter)), sin(x_(2,global_counter)),
                    -sin(x_(2,global_counter)), cos(x_(2,global_counter));

            if (change_b_ == true){
                // This "IF" is used to compute the new barrrier function
                local_counter = 0;

                // b0_min & b0_max setting
                if (v_costraint_violation == true){
                    b0_min_ = b0_min_change_b_;    
                    b0_max_ = b0_max_change_b_; 
                    RCLCPP_ERROR(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "b0_min updated: %.2f, b0_max updated: %.2f", b0_min_, b0_max_);  
                }

                // Compute b
                if (temp_operator_user_ == "F"){
                    new_t1_ = round(norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_})/((percentage_initial_-percentage_counter_*percentage_reduction_)*vel_max[global_counter]));
                    RCLCPP_INFO(rclcpp::get_logger("DEBUG"), "new_t1: %d, percentage_initial_: %.2f, b0_min: %.2f, b0_max: %.2f, percentage_counter_: %d", new_t1_,percentage_initial_,b0_min_,b0_max_,percentage_counter_);

                    if (new_t1_ < 2){
                        new_t1_ = 2;
                        RCLCPP_WARN(rclcpp::get_logger("DEBUG"), "new_t1: %d, percentage_initial_: %.2f, b0_min: %.2f, b0_max: %.2f, percentage_counter_: %d", new_t1_,percentage_initial_,b0_min_,b0_max_,percentage_counter_);
                    }

                    input_compute = {temp_operator_user_, ta_user_, new_t1_ , {pos_x_, pos_y_},{goal_x_user_, goal_y_user_}, epsilon_user_, margin_, b0_min_, b0_max_};
                    compute_b_db_dt(input_compute, output_compute);
                    m1_ = output_compute.m1;
                    m2_ = output_compute.m2;
                    q1_ = output_compute.q1;
                    q2_ = output_compute.q2;
                }else if (temp_operator_user_ == "G"){
                    new_t1_ = round(norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_})/((percentage_initial_-percentage_counter_*percentage_reduction_)*vel_max[global_counter]));
                    RCLCPP_INFO(rclcpp::get_logger("DEBUG"), "new_t1: %d, percentage_initial_: %.2f, b0_min: %.2f, b0_max: %.2f, percentage_counter_: %d", new_t1_,percentage_initial_,b0_min_,b0_max_,percentage_counter_);
                    
                    if (new_t1_ < 2){
                        new_t1_ = 2;
                        RCLCPP_WARN(rclcpp::get_logger("DEBUG"), "new_t1: %d, percentage_initial_: %.2f, b0_min: %.2f, b0_max: %.2f, percentage_counter_: %d", new_t1_,percentage_initial_,b0_min_,b0_max_,percentage_counter_);
                    }
                    
                    input_compute = {temp_operator_user_, new_t1_, tb_user_, {pos_x_, pos_y_},{goal_x_user_, goal_y_user_}, epsilon_user_, margin_, b0_min_, b0_max_};
                    compute_b_db_dt(input_compute, output_compute);
                    m1_ = output_compute.m1;
                    m2_ = output_compute.m2;
                    q1_ = output_compute.q1;
                    q2_ = output_compute.q2;
                }else if (temp_operator_user_ == "U"){
                    if (t_[temporal_operator_counter]<=tab_user_){
                        new_t1_ = round(norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_})/((percentage_initial_-percentage_counter_*percentage_reduction_)*vel_max[global_counter]));
                        RCLCPP_INFO(rclcpp::get_logger("DEBUG"), "new_t1: %d, percentage_initial_: %.2f, b0_min: %.2f, b0_max: %.2f, percentage_counter_: %d", new_t1_,percentage_initial_,b0_min_,b0_max_,percentage_counter_);
                        
                        if (new_t1_ < 2){
                            new_t1_ = 2;
                            RCLCPP_WARN(rclcpp::get_logger("DEBUG"), "new_t1: %d, percentage_initial_: %.2f, b0_min: %.2f, b0_max: %.2f, percentage_counter_: %d", new_t1_,percentage_initial_,b0_min_,b0_max_,percentage_counter_);
                        }
                        
                        input_compute = {"G", new_t1_, tab_user_ , {pos_x_, pos_y_},{goal_x_user_, goal_y_user_}, epsilon_user_, margin_, b0_min_, b0_max_};
                        compute_b_db_dt(input_compute, output_compute);
                        m1_ = output_compute.m1;
                        m2_ = output_compute.m2;
                        q1_ = output_compute.q1;
                        q2_ = output_compute.q2;
                        m3_ = 1.0;
                        q3_ = 1.0;
                    } else if (t_[temporal_operator_counter]>tab_user_){
                        new_t2_ = round(norm({x_(0,global_counter),x_(1,global_counter)},{goal2_x_user_,goal2_y_user_})/((percentage_initial_-percentage_counter_*percentage_reduction_)*vel_max[global_counter]));
                        RCLCPP_INFO(rclcpp::get_logger("DEBUG"), "new_t2: %d, percentage_initial_: %.2f, b0_min: %.2f, b0_max: %.2f, percentage_counter_: %d", new_t2_,percentage_initial_,b0_min_,b0_max_,percentage_counter_);
                        
                        if (new_t2_ < 2){
                            new_t2_ = 2;
                            RCLCPP_WARN(rclcpp::get_logger("DEBUG"), "new_t2: %d, percentage_initial_: %.2f, b0_min: %.2f, b0_max: %.2f, percentage_counter_: %d", new_t2_,percentage_initial_,b0_min_,b0_max_,percentage_counter_);
                        }
                        
                        input_compute = {"F", tab_user_, new_t2_ , {pos_x_, pos_y_},{goal2_x_user_, goal2_y_user_}, epsilon_user_, margin_, b0_min_,b0_max_};
                        compute_b_db_dt(input_compute, output_compute);
                        m3_ = output_compute.m1;
                        m4_ = output_compute.m2;
                        q3_ = output_compute.q1;
                        q4_ = output_compute.q2;
                    }
                }
                
                // Update change_b_
                change_b_ = false;

                // Update v_costraint_violation
                v_costraint_violation = false;
            }

            if (temp_operator_user_ == "F"){
                // phi1 F[0,t_star] (norm([x(1,i),x(2,i)]-goal)<=epsilon)
                b_b_[0]=-(m1_*t_[local_counter]+q1_)+(epsilon_user_-norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_}));
                db_(0,0)=-(x_(0,global_counter)-goal_x_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                db_(1,0)=-(x_(1,global_counter)-goal_y_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                dt_[0]=-m1_;
                b_i_[0]=1;

                // Update goal constraint
                relative_dist_RG(0,0)=Riw_fov(0,0)*(goal_x_user_-x_(0, global_counter))+Riw_fov(0,1)*(goal_y_user_-x_(1, global_counter));
                relative_dist_RG(1,0)=Riw_fov(1,0)*(goal_x_user_-x_(0, global_counter))+Riw_fov(1,1)*(goal_y_user_-x_(1, global_counter));
            }
            else if (temp_operator_user_ == "G"){
                // phi1 G[t_star,tb] (norm([x(1,i),x(2,i)]-goal)<=epsilon)
                if ((t_[temporal_operator_counter]>=ta_user_)||(flag_half_finish_ == true)){
                    // If t(temporal_operator_counter)>=ta, the robot remains there
                    b_b_[0]=-(q2_)+(epsilon_user_-norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_}));
                    db_(0,0)=-(x_(0,global_counter)-goal_x_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                    db_(1,0)=-(x_(1,global_counter)-goal_y_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                    dt_[0]=-m2_;
                    RCLCPP_INFO(rclcpp::get_logger("DEBUG"), "b_b_[0]: %f, flag_half_finish : %d", b_b_[0], flag_half_finish_);

                }else if ((t_[temporal_operator_counter]<ta_user_)&&(flag_half_finish_ == false)){
                    // If t(temporal_operator_counter)<ta,
                    b_b_[0]=-(m1_*t_[local_counter]+q1_)+(epsilon_user_-norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_}));
                    db_(0,0)=-(x_(0,global_counter)-goal_x_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                    db_(1,0)=-(x_(1,global_counter)-goal_y_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                    dt_[0]=-m1_;
                } 
                b_i_[0]=1;

                // Update goal constraint
                relative_dist_RG(0,0)=Riw_fov(0,0)*(goal_x_user_-x_(0, global_counter))+Riw_fov(0,1)*(goal_y_user_-x_(1, global_counter));
                relative_dist_RG(1,0)=Riw_fov(1,0)*(goal_x_user_-x_(0, global_counter))+Riw_fov(1,1)*(goal_y_user_-x_(1, global_counter));
            }
            else if (temp_operator_user_ == "U"){
                //G[ta,tab]
                if ((t_[temporal_operator_counter]>=ta_user_)||(flag_half_finish_ == true)){
                    // If t(temporal_operator_counter)>=ta, the robot remains there
                    b_b_[0]=-(q2_)+(epsilon_user_-norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_}));
                    db_(0,0)=-(x_(0,global_counter)-goal_x_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                    db_(1,0)=-(x_(1,global_counter)-goal_y_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                    dt_[0]=-m2_;
                    if (t_[temporal_operator_counter] >= tab_user_){
                        // Avoid NaN
                        b_b_[0] = 1.0; 
                        db_(0,0) = -1.0;
                        db_(1,0) = -1.0;
                        dt_[0] = -1.0;
                    }
                }else if ((t_[temporal_operator_counter]<ta_user_)&&(flag_half_finish_ == false)){
                    // If t(temporal_operator_counter)<ta,
                    b_b_[0]=-(m1_*t_[local_counter]+q1_)+(epsilon_user_-norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_}));
                    db_(0,0)=-(x_(0,global_counter)-goal_x_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                    db_(1,0)=-(x_(1,global_counter)-goal_y_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_});
                    dt_[0]=-m1_;
                } 

                //F[tab,tb]
                if(t_[temporal_operator_counter]>=tab_user_){
                    //F[tab,tb]
                    b_b_[1]=-(m3_*t_[local_counter]+q3_)+(epsilon_user_-norm({x_(0,global_counter),x_(1,global_counter)},{goal2_x_user_,goal2_y_user_}));
                    db_(0,1)=-(x_(0,global_counter)-goal2_x_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal2_x_user_,goal2_y_user_});
                    db_(1,1)=-(x_(1,global_counter)-goal2_y_user_)/norm({x_(0,global_counter),x_(1,global_counter)},{goal2_x_user_,goal2_y_user_});
                    dt_[1]=-m3_;
                } else {
                    // Avoid NaN
                    b_b_[1]= 1.0;
                    db_(0,1)= -1.0;
                    db_(1,1)= -1.0;
                    dt_[1]= -1.0;
                }
                
                // Switching sequence
                if (t_[temporal_operator_counter]<=tab_user_){
                    b_i_[0]=1;b_i_[1]=0;

                    // Update goal constraint
                    relative_dist_RG(0,0)=Riw_fov(0,0)*(goal_x_user_-x_(0, global_counter))+Riw_fov(0,1)*(goal_y_user_-x_(1, global_counter));
                    relative_dist_RG(1,0)=Riw_fov(1,0)*(goal_x_user_-x_(0, global_counter))+Riw_fov(1,1)*(goal_y_user_-x_(1, global_counter));
                }
                else if (t_[temporal_operator_counter]>tab_user_){
                    b_i_[0]=0;b_i_[1]=1;

                    // Update goal constraint
                    relative_dist_RG(0,0)=Riw_fov(0,0)*(goal2_x_user_-x_(0, global_counter))+Riw_fov(0,1)*(goal2_y_user_-x_(1, global_counter));
                    relative_dist_RG(1,0)=Riw_fov(1,0)*(goal2_x_user_-x_(0, global_counter))+Riw_fov(1,1)*(goal2_y_user_-x_(1, global_counter));
                }
            }

            // Obstacles ----------------------------------------------------------------------------------------
            if (o_number_>0){
                for (int q=0; q<o_number_; q++){
                    b_b_obs_[q]=norm({x_(0,global_counter),x_(1,global_counter)},{ox_pose_[q],oy_pose_[q]})-(o_radius_[q]+Constants::MARGIN_OBSTACLE);
                    db_obs_(0,q)=(x_(0,global_counter)-ox_pose_[q])/norm({x_(0,global_counter),x_(1,global_counter)},{ox_pose_[q],oy_pose_[q]});
                    db_obs_(1,q)=(x_(1,global_counter)-oy_pose_[q])/norm({x_(0,global_counter),x_(1,global_counter)},{ox_pose_[q],oy_pose_[q]});
                }

                // Find closest obstacle (min b_b_obs_)
                int closest_idx = 0;
                double min_val = b_b_obs_[0];
                for (int i = 1; i < o_number_; ++i) {
                    if (b_b_obs_[i] < min_val) {
                        min_val = b_b_obs_[i];
                        closest_idx = i;
                    }
                }

                b_min_obs_ = b_b_obs_[closest_idx];
                dbx_obs_(0,0) = db_obs_(0,closest_idx);
                dbx_obs_(1,0) = db_obs_(1,closest_idx);
                dbx_obs_(2,0) = 0.0;
                solver_A_obs = dbx_obs_.transpose() * rot_matrix_;
                solver_b_obs = Eigen::Matrix<double, 1, 1>::Constant(K_OBS * pow(b_min_obs_, ESP_OBS));
            }else{  
                RCLCPP_INFO(rclcpp::get_logger("COMPUTE CONTROL INPUT"), "No obstacles detected, setting default values for solver_A_obs and solver_b_obs");
                solver_A_obs(0,0) = 0.1;
                solver_A_obs(0,1) = 0.1;
                solver_A_obs(0,2) = 0.0;
                solver_b_obs(0,0) = 1.0;
            }
            // -----------------------------------------------------------------------------------------------

            // Update goal constraint ------------------------------------------------------------------------
            h_fov_goal = solver_A_fov_goal*relative_dist_RG;
            solver_b_fov_goal(0,0) = K_FOV_GOAL * pow(h_fov_goal (0,0),ESP_FOV_GOAL);
            solver_b_fov_goal(1,0) = K_FOV_GOAL * pow(h_fov_goal (1,0),ESP_FOV_GOAL);
            // -----------------------------------------------------------------------------------------------

            // STL constraints ---------------------------------------------------------------------------------
            for (int k=0; k<b_number_; k++){
                log_arg_[k] = b_i_[k]*exp(-eta_stl_*b_b_[k]);
                log_arg_db_(0,k) = b_i_[k]*exp(-eta_stl_*b_b_[k])*(-eta_stl_*db_(0,k));
                log_arg_db_(1,k) = b_i_[k]*exp(-eta_stl_*b_b_[k])*(-eta_stl_*db_(1,k));
                log_arg_dt_[k] = b_i_[k]*exp(-eta_stl_*b_b_[k])*(-eta_stl_*dt_[k]);  
            }

            // Min approximation
            bb_ = -(1.0/eta_stl_)*log(std::accumulate(log_arg_.begin(), log_arg_.end(), 0.0));
            den_stl_ = -(1.0/eta_stl_)*(1/(std::accumulate(log_arg_.begin(), log_arg_.end(), 0.0)));
            dbx_stl_(0,0) = den_stl_*(std::accumulate(log_arg_db_.row(0).begin(), log_arg_db_.row(0).end(), 0.0));
            dbx_stl_(1,0) = den_stl_*(std::accumulate(log_arg_db_.row(1).begin(), log_arg_db_.row(1).end(), 0.0));
            dbx_stl_(2,0) = 0.0;
            dbt_stl_(0,0) = den_stl_*(std::accumulate(log_arg_dt_.begin(), log_arg_dt_.end(), 0.0))+gamma_stl_*pow(bb_,esp_stl_);
            hh_.push_back(bb_);

            // Compute solver_A_stl and solver_b_stl
            solver_A_stl = dbx_stl_.transpose() * rot_matrix_; 
            solver_b_stl = dbt_stl_;
            // -------------------------------------------------------------------------------------------------

            // safe barrier check
            if (hh_[hh_.size() - 1] < 0.01){
                RCLCPP_WARN(rclcpp::get_logger("COMPUTE CONTROL INPUT"), "Barrier function is too small, change_b_ set to true");
                change_b_ = true;
            }
            
            // Solve optimization program
            if(dbx_stl_(0,0)==0.0 && dbx_stl_(1,0)==0.0 && dbx_stl_(2,0)==0.0){
                RCLCPP_WARN(rclcpp::get_logger("NO SOLVER"), "dbx_stl_ matrix is equal to ZERO");
                u_ = Eigen::Matrix<double, 3, 1>::Zero(); // Set u to zero if dbx_stl_ is zero
            }else{
                try{
                    alglib::minnlccreate(3, solver_u0_, solver_state_);    
                    alglib::minnlcsetcond(solver_state_, solver_epsx_, solver_maxits_);
                    alglib::minnlcsetscale(solver_state_, solver_s_);
                    alglib::minnlcsetstpmax(solver_state_, 10.0);                    
                    alglib::minnlcsetalgosqp(solver_state_);
                    alglib::minnlcsetnlc2(solver_state_, nl_, nu_);
                    alglib::minnlcoptimize(solver_state_, nlcfunc2_jac);
                    alglib::minnlcresults(solver_state_, solver_u_, solver_rep_);
                    u_(0,0) = solver_u_[0];
                    u_(1,0) = solver_u_[1];
                    u_(2,0) = solver_u_[2];
                    
                    if(v_costraint_violation == true){
                        RCLCPP_ERROR(rclcpp::get_logger("nlcfunc2_jac"), "v_costraint_violation!");
                        RCLCPP_WARN(rclcpp::get_logger("nlcfunc2_jac DEBUG"), "v_costraint_violation_value: %f", v_costraint_violation_value);

                        // Update control input
                        u_(0,0) = 0.0;
                        u_(1,0) = 0.0;
                        u_(2,0) = 0.0;

                        // Update change_b_
                        change_b_ = true;

                        // Update counter_flag_ and percentage_counter_
                        counter_flag_++;
                        if (counter_flag_ >= 5){
                            percentage_counter_++;
                            stagnation_counter_ = 0;
                            if (percentage_counter_>=max_percentage_counter_){
                                auto twist = geometry_msgs::msg::Twist();
                                twist.linear.x = 0.0;
                                twist.linear.y = 0.0;
                                twist.angular.z = 0.0;
                                control_input_publisher_->publish(twist);
                                RCLCPP_ERROR(rclcpp::get_logger("nlcfunc2_jac"), "percentage_counter_ ! Stopping the robot");
                                rclcpp::shutdown();
                                std::exit(0); 
                            }
                            RCLCPP_INFO(rclcpp::get_logger("DEBUG"), "percentage_counter_ incremented at: %d", percentage_counter_);
                            counter_flag_=0;
                        }
                    }
                }
                catch(alglib::ap_error alglib_exception)
                {
                    printf("ALGLIB exception with message '%s'\n", alglib_exception.msg.c_str());
                }
            }

            // Calculate velocity
            vel_real(0,0) = u_(0,0);
            vel_real(1,0) = u_(1,0);
            vel_real(2,0) = u_(2,0);
            vel_abs_.push_back(sqrt(pow(vel_real(0,0),2)+pow(vel_real(1,0),2)));

            // Send robot command
            auto twist = geometry_msgs::msg::Twist();
            twist.linear.x = vel_real(0,0);
            twist.linear.y = vel_real(1,0);
            twist.angular.z = vel_real(2,0);
            control_input_publisher_->publish(twist);
            
            // Reset percentage counter
            if (percentage_counter_ >= 3) {
                if (percentage_counter_ != previous_percentage_counter_) {
                    // If it has increased since the last cycle, reset the counter
                    stagnation_counter_ = 0;
                } else {
                    // Otherwise, increment the counter
                    stagnation_counter_++;
                }

                // Save the current state for comparison in the next cycle
                previous_percentage_counter_ = percentage_counter_;

                if (stagnation_counter_ >= 5 * sec_iterations) {
                    RCLCPP_WARN(rclcpp::get_logger("STAGNATION CHECK"), "No progress for %d cycles. Resetting percentage_counter_ and forcing new barrier computation.", stagnation_counter_);
                    percentage_counter_ = 0;
                    change_b_ = true;
                    stagnation_counter_ = 0;  // Reset the counter after the action
                }
            } else {
                // If the percentage_counter_ is < 3, reset stagnation_counter_
                stagnation_counter_ = 0;
                previous_percentage_counter_ = percentage_counter_;
            }

            // Check if Robot is arrived to Goal Pose with epsilon_user_ 
            if (temp_operator_user_ == "F"){
                if (norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_})<=epsilon_user_){
                    RCLCPP_INFO(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "\033[1;32mRobot arrived to Goal Pose\033[0m");
                    data_service_received_ = false;
                    flag_finish_ = true;
                    correctAngle = false;
                }
            } else if (temp_operator_user_ == "G"){
                if (temporal_operator_counter == t_lim_-1){
                    data_service_received_ = false;
                    flag_finish_ = true;
                    correctAngle = false;
                    
                    if (norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_})<=epsilon_user_){
                        RCLCPP_INFO(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "\033[1;32mRobot arrived to Goal Pose\033[0m"); 
                    } else {
                        RCLCPP_INFO(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "\033[1;32mRobot is not arrived to Goal Pose\033[0m");  
                    }
                }
                
                if((t_[temporal_operator_counter]<=ta_user_)&&(norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_})<=epsilon_user_/3)){
                    if (flag_half_finish_ == false){
                        RCLCPP_INFO(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "\033[1;32mRobot arrived to Goal Pose and holds position\033[0m");
                        flag_half_finish_ = true;
                    }
                } 
            } else if (temp_operator_user_ == "U"){
                if ((norm({x_(0,global_counter),x_(1,global_counter)},{goal2_x_user_,goal2_y_user_})<=epsilon_user_)&&(flag_half_finish_ == true)){
                    RCLCPP_INFO(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "\033[1;32mRobot arrived to Goal Pose\033[0m");
                    data_service_received_ = false;
                    flag_finish_ = true;
                }

                if((t_[temporal_operator_counter]<=ta_user_)&&(norm({x_(0,global_counter),x_(1,global_counter)},{goal_x_user_,goal_y_user_})<=epsilon_user_/3)){
                    if (flag_half_finish_ == false){
                        RCLCPP_INFO(rclcpp::get_logger("COMPUTE_CONTROL_INPUT"), "\033[1;32mRobot arrived to Goal Pose and holds position\033[0m");
                        flag_half_finish_ = true;
                        correctAngle = false;
                        compute_correct_angle();
                        b0_min_ = 0.5;
                        b0_max_ = 1.0;
                        percentage_counter_ = 0;
                        counter_flag_ = 0;
                    }
                } 

                // Set change_b_ to true if the temporal_operator_counter is equal to tab_user_
                if (t_[temporal_operator_counter] == tab_user_ - 1){
                    change_b_ = true;
                }
            }

            if (sermas_test == true){
                auto alldata_msg = my_interfaces::msg::Alldata();
                alldata_msg.all_v_real = vel_real(0, 0);
                alldata_msg.all_v_max = vel_max[global_counter];
                alldata_msg.all_h_barrier = hh_[global_counter];
                alldata_msg.all_x_pos = x_(0,global_counter);
                alldata_msg.all_y_pos = x_(1,global_counter);
                alldata_msg.all_theta_rot = x_(2,global_counter);
                alldata_msg.all_distance_hr = human_distance_;
                alldata_msg.all_global_counter = global_counter;
                alldata_msg.all_temporal_operator_counter = temporal_operator_counter;
                alldata_msg.all_flag_finish = flag_finish_;
                alldata_msg.all_obs_x_closer = obs_x_closest_;
                alldata_msg.all_obs_y_closer = obs_y_closest_;
                alldata_publisher_->publish(alldata_msg);
            }
            
            if (printDebug == true){
                // Debug info
                std::string color_hh = (hh_[global_counter] >= 0.0) ? "\033[1;32m" : "\033[1;31m"; 
                std::string color_vel = (vel_abs_[global_counter] <= vel_max[global_counter]) ? "\033[1;32m" : "\033[1;31m";
                std::string reset = "\033[0m";

                RCLCPP_INFO(rclcpp::get_logger(""), "======================== Debug Info =========================");
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %-15s ", "Global_counter", std::to_string(global_counter).c_str());
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %-15s ", "Local_counter", std::to_string(local_counter).c_str());
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %-15s ", "Temporal_operator_counter", std::to_string(temporal_operator_counter).c_str());
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %-15s ", "t_lim_", std::to_string(t_lim_).c_str());
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | [%.2f, %.2f, %.2f]", "Robot Pose", x_(0, global_counter), x_(1, global_counter), x_(2, global_counter));
                if (temp_operator_user_ == "U") {
                    RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | [%.2f, %.2f]", "Goal Pose", goal_x_user_, goal_y_user_);
                    RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | [%.2f, %.2f]", "Goal2 Pose", goal2_x_user_, goal2_y_user_);
                } else {
                    RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | [%.2f, %.2f]", "Goal Pose", goal_x_user_, goal_y_user_);
                }
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %s[%.2f / %.2f]%s","vel_abs_ / max",color_vel.c_str(), vel_abs_[global_counter], vel_max[global_counter],reset.c_str());
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %s[%.2f]%s / %.2f / %.2f","h / b0_min / b0_max",color_hh.c_str(),hh_[global_counter],reset.c_str(),b0_min_,b0_max_);
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %.2f", "Obs barrier", b_min_obs_);
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %-15s ", "o_number_", std::to_string(o_number_).c_str());
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %-15s ", "Percentage counter", std::to_string(percentage_counter_).c_str());
                RCLCPP_INFO(rclcpp::get_logger(""), "| %-30s | %-15s ", "no_obstacle_counter", std::to_string(no_obstacle_counter_).c_str());
                RCLCPP_INFO(rclcpp::get_logger(""), "=============================================================");
            }
            
        }
    
        void initialization(){
            // This function initializes the variables
            RCLCPP_INFO(rclcpp::get_logger("INITIALIZATION"), "INITIALIZATION...");
            change_b_ = true;
            flag_finish_ = false;
            flag_half_finish_ = false;
            correctAngle = false;

            // Time definitions
            t_lim_ = tb_user_ * sec_iterations + 1;
            t_ = linspace(0.0, tb_user_, t_lim_);
            step_ = t_[1] - t_[0];
            temporal_operator_counter = -1;

            // Velocity constraints settings
            RCLCPP_INFO(rclcpp::get_logger("INITIALIZATION"), "\033[1;32mVelocity Constraint ON\033[0m");
            percentage_initial_ = 0.9;
            percentage_reduction_ = 0.1; 
            max_vel_robot_ = MAX_VEL_ROBOT;
            max_percentage_counter_ = (percentage_initial_ / percentage_reduction_) - 1;
            percentage_counter_ = 0;
            counter_flag_ = 0;
            v_costraint_violation = false;
            b0_max_change_b_ = b0_max_/4;
            b0_min_change_b_ = b0_min_/4;

            // Variables inizialization
            bb_ = 0.0;
            den_stl_ = 0.0;
            b_min_obs_ = 0.0;

            // Solver variables inizialization
            // Where:
            // nl = [-inf] and nu = [0] -> inequality constraint c <= 0
            // nl = [0] and nu = [inf] -> inequality constraint c >= 0
            // nl = [0] and nu = [0] -> equality constraint c = 0
            solver_u0_ = "[0,0,0]";            // initial point
            solver_s_ = "[200,200,200]";       // need tuning ([1,1,1] default)
            solver_maxits_ = 0;                // MAX iterations, 0 for unbounded    
            nl_ = "[-inf, -inf, -inf, -inf, -inf]";
            nu_ = "[0, 0, 0, 0, 0]";               

            // Goal angular constraint
            solver_A_fov_goal << tan(FOV_GOAL_RADIANS/2), 1.0, 
                        tan(FOV_GOAL_RADIANS/2), -1.0;
        }
    
        void compute_correct_angle()
        {
            // Check if the goal is in the robot's field of view 80°
            double maxAngle = 30* M_PI / 180.0;    // In radians
            double cosTheta, crossProductZ;
            double angle;
            int sign = 1;
            Eigen::Matrix<double, 2, 1> direction; 
            Eigen::Matrix<double, 2, 1> vectorToPoint; 

            RCLCPP_INFO(rclcpp::get_logger("COMPUTE CORRECT ANGLE"), "Compute correct angle...");
            RCLCPP_INFO(rclcpp::get_logger("COMPUTE CORRECT ANGLE"), "Robot Pose: [%.2f, %.2f, %.2f]", pos_x_, pos_y_, rot_z_);

            direction << cos(rot_z_), sin(rot_z_);  

            if ((temp_operator_user_ == "F") || (temp_operator_user_ == "G")){
                vectorToPoint << goal_x_user_ - pos_x_, goal_y_user_ - pos_y_;
            } else if (temp_operator_user_ == "U"){
                vectorToPoint << goal_x_user_ - pos_x_, goal_y_user_ - pos_y_;
                if ((global_counter > 1)&&(flag_half_finish_ == true)){
                    vectorToPoint << goal2_x_user_ - pos_x_, goal2_y_user_ - pos_y_;
                }
            }

            cosTheta = direction.dot(vectorToPoint) / (direction.norm() * vectorToPoint.norm());
            cosTheta = std::min(1.0, std::max(-1.0, cosTheta));

            // Check if the robot must to rotate to reach the goal
            angle = acos(cosTheta);
            crossProductZ = direction(0,0) * vectorToPoint(1,0) - direction(1,0) * vectorToPoint(0,0);

            if (angle <= maxAngle){
                if (printAngularFunction == true){
                    RCLCPP_INFO(rclcpp::get_logger(""), "Goal is in the robot's field of view");
                    RCLCPP_INFO(rclcpp::get_logger(""), "Angle: %f", angle* 180.0 / M_PI);
                }
                
                correctAngle = true;
            } else {
                if (printAngularFunction == true){
                    RCLCPP_INFO(rclcpp::get_logger(""), "Goal is NOT in the robot's field of view");
                    RCLCPP_INFO(rclcpp::get_logger(""), "Angle: %f", angle* 180.0 / M_PI);
                }
                if (crossProductZ < 0){
                    if (printAngularFunction == true){
                        RCLCPP_INFO(rclcpp::get_logger(""), "Cross product: %f, need to rotate to RIGHT", crossProductZ);
                    }
                    sign = -1;
                } else if (crossProductZ > 0){
                    if (printAngularFunction == true){
                        RCLCPP_INFO(rclcpp::get_logger(""), "Cross product: %f, need to rotate to LEFT", crossProductZ);
                    }
                    sign = 1;
                } else {
                    if (printAngularFunction == true){
                        RCLCPP_INFO(rclcpp::get_logger(""), "Cross product: %f, no need to rotate", crossProductZ);
                    }
                }
                correctAngle = false;
            }

            if (correctAngle == false){
                // If the robot must rotate to reach the goal, send the robot command
                auto twist = geometry_msgs::msg::Twist();
                twist.linear.x = 0.0;
                twist.linear.y = 0.0;
                twist.angular.z = sign * 0.5;
                control_input_publisher_->publish(twist);
            } else if (correctAngle == true){
                // If the robot doesn't need to rotate to reach the goal, send the robot command
                auto twist = geometry_msgs::msg::Twist();
                twist.linear.x = 0.0;
                twist.linear.y = 0.0;
                twist.angular.z = 0.0;
                control_input_publisher_->publish(twist);
            }
        }
    };

int main(int argc, char *argv[]) {
    // Check computation performance
    computationPerformance(Constants::COMPUTATION_PC);

    // Initialize ROS 2 
    rclcpp::init(argc, argv);
    
    // Debug info
    RCLCPP_INFO(rclcpp::get_logger(""), "\033[1;32m%s ready!\033[0m", Constants::NODE_NAME);
    RCLCPP_INFO(rclcpp::get_logger(""), "\033[1;32m%s SERVER ready!\033[0m", Constants::SRV_SERVER_NAME);

    rclcpp::spin(std::make_shared<Cbf_stl>());

    rclcpp::shutdown();
    return 0;
}
