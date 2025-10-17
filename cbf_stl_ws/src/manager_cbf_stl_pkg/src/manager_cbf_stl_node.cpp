#include <rclcpp/rclcpp.hpp>
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "my_interfaces/srv/input_request.hpp"    
#include "my_interfaces/msg/alldata.hpp" 
#include "my_interfaces/msg/input.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "tts_msgs/action/tts.hpp"
#include <std_msgs/msg/float32.hpp>
#include <vector> 
#include <fstream>

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

std::atomic_bool start_record_data = false;
std::atomic_bool proxy_goal_received = false;
std::atomic_bool last_goal_reached = false;

namespace Constants {
  constexpr char NODE_NAME[] = "sermas_test_node";
  constexpr char SRV_CLI_INPUT_NAME[] = "input_request";
  constexpr char SUB_INPUT_NAME[] = "/input";
  constexpr char SUB_ALL_DATA_NAME[] = "/alldata";
  constexpr char SRV_CLI_TTS_NAME[] = "/say";
  constexpr char SRV_CLI_VOLUME_NAME[] = "/volume";
  constexpr char TEXT_START[] = "Follow me to the destination!";
  constexpr char TEXT_ARRIVED[] = "We have arrived at the destination!";
  constexpr char TEXT_TOO_CLOSED[] = "Please move away, you are too close!";
  constexpr char TEXT_TOO_FAR[] = "Please move closer, you are too far away!";
  constexpr char TEXT_OFFICE1[] = "Office 1!";
  constexpr char TEXT_OFFICE2[] = "Office 2!";
  constexpr char TEXT_OFFICE3[] = "Office 3!";
  constexpr char TEXT_OFFICE4[] = "Office 4!";

  constexpr auto DELAY_TTS = std::chrono::seconds(1);   // Delay before initial TTS (11)
  constexpr auto DELAY_GOAL = std::chrono::seconds(1);  // Delay before sending goal (4)
  constexpr int ESP_STL = 2;                            // STL constraint barrier parameter
  constexpr float K_STL = 0.05;                         // STL constraint barrier parameter
  constexpr int VOLUME_MAX = 100;                       // Maximum robot volume
  constexpr float MIN_DISTANCE_NOTIFICATION = 0.8;      // Minimum distance
  constexpr float MAX_DISTANCE_NOTIFICATION = 2.5;      // Maximum distance
} 

class SayActionClient : public rclcpp::Node {
public:
  using TTS = tts_msgs::action::TTS;
  using GoalHandleTTS = rclcpp_action::ClientGoalHandle<TTS>;

  SayActionClient() : Node("say_action_client") {
    client_ = rclcpp_action::create_client<TTS>(this, Constants::SRV_CLI_TTS_NAME);
    timer_ = create_wall_timer(500ms, [this]() {
      timer_->cancel();
      if (!client_->wait_for_action_server()) {
        RCLCPP_ERROR(get_logger(), "TTS action server not available");
        rclcpp::shutdown();
      }
    });
  }

  void send_speech_goal(const std::string &text) {
    TTS::Goal goal;
    goal.input = text;
    goal.locale = "en_US";

    RCLCPP_INFO(get_logger(), "Sending phrase: '%s'", goal.input.c_str());

    rclcpp_action::Client<TTS>::SendGoalOptions options;
    options.goal_response_callback = [this](auto handle) {
      RCLCPP_INFO(get_logger(), handle ? "Voice goal accepted" : "Voice goal rejected");
    };
    options.feedback_callback = [this](auto, auto feedback) {
      RCLCPP_INFO(get_logger(), "Speaking: '%s'", feedback->word.c_str());
    };
    options.result_callback = [this](auto result) {
      if (!result.result->error_msg.empty()) {
        RCLCPP_ERROR(get_logger(), "TTS error: %s", result.result->error_msg.c_str());
      } else {
        RCLCPP_INFO(get_logger(), "Phrase completed");
      }
    };

    client_->async_send_goal(goal, options);
  }

private:
  rclcpp_action::Client<TTS>::SharedPtr client_;
  rclcpp::TimerBase::SharedPtr timer_;
};

class NavigateToPoseActionClient : public rclcpp::Node {
public:
  NavigateToPoseActionClient() : Node(Constants::NODE_NAME) {
    sub_input_ = create_subscription<my_interfaces::msg::Input>(Constants::SUB_INPUT_NAME, 10,std::bind(&NavigateToPoseActionClient::sub_input_callback, this, _1));
    sub_all_data_ = this->create_subscription<my_interfaces::msg::Alldata>(Constants::SUB_ALL_DATA_NAME, 10, std::bind(&NavigateToPoseActionClient::sub_all_data_callback, this, _1));
    tts_client_ = std::make_shared<SayActionClient>();
    par_volume_client_ = std::make_shared<rclcpp::AsyncParametersClient>(this, Constants::SRV_CLI_VOLUME_NAME);
    srv_cbf_stl_client_ = this->create_client<my_interfaces::srv::InputRequest>(Constants::SRV_CLI_INPUT_NAME);

    timer_loop_ = this->create_wall_timer(50ms, std::bind(&NavigateToPoseActionClient::loop_callback, this));
    set_volume(Constants::VOLUME_MAX);
    last_voice_feedback_time_ = clock_.now();  // Initialize time
    previous_feedback_distance_ = 0;           // Initial state: safe zone
  }

private:
  rclcpp::Subscription<my_interfaces::msg::Input>::SharedPtr sub_input_;
  rclcpp::Subscription<my_interfaces::msg::Alldata>::SharedPtr sub_all_data_;
  std::shared_ptr<rclcpp::AsyncParametersClient> par_volume_client_;
  rclcpp::Client<my_interfaces::srv::InputRequest>::SharedPtr srv_cbf_stl_client_;
  std::shared_ptr<SayActionClient> tts_client_;
  rclcpp::TimerBase::SharedPtr timer_loop_;
  rclcpp::TimerBase::SharedPtr timer_delay_;  
  rclcpp::TimerBase::SharedPtr timer_tts_; 
  std::string temp_operator_user_;
  float goal_x_user_, goal_y_user_;
  float goal2_x_user_, goal2_y_user_ = 0.0;
  float epsilon_user_ = 0.5;  
  int32_t tab_user_ = 0;
  int32_t ta_user_, tb_user_;
  bool CA_user_, VC_user_, AC_user_ = true;
  bool sent_cbf_stl_request = false;

  // Output data
  std::vector<float> v_real;
  std::vector<float> v_max;
  std::vector<float> h_barrier;
  std::vector<float> x_pos;
  std::vector<float> y_pos;
  std::vector<float> theta_rot;
  std::vector<float> distance_hr;
  std::vector<int64_t> global_counter;
  std::vector<int64_t> temporal_operator_counter;
  std::vector<bool> flag_finish;
  std::vector<float> obs_x_closest;
  std::vector<float> obs_y_closest;

  // Timer per voice feedback
  rclcpp::Time last_voice_feedback_time_;
  rclcpp::Clock clock_{RCL_SYSTEM_TIME}; 
  rclcpp::Duration voice_feedback_cooldown_{rclcpp::Duration::from_seconds(4.0)};
  int previous_feedback_distance_ = 0; // 0 = neutral, 1 = too close, 2 = too far


  void sub_input_callback(const my_interfaces::msg::Input::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "New goal pose received: x=%.2f, y=%.2f", msg->goal[0], msg->goal[1]);
    RCLCPP_INFO(this->get_logger(), "New goal pose 2 received: x=%.2f, y=%.2f", msg->goal2[0], msg->goal2[1]);
    RCLCPP_INFO(this->get_logger(), "New ta: %ld, tb: %ld, tab: %ld", msg->ta, msg->tb, msg->tab);
    RCLCPP_INFO(this->get_logger(), "New temporal operator: %s", msg->temp_operator.c_str());

    temp_operator_user_ = msg->temp_operator;
    goal_x_user_ = msg->goal[0];
    goal_y_user_ = msg->goal[1];
    goal2_x_user_ = msg->goal2[0];
    goal2_y_user_ = msg->goal2[1];
    ta_user_ = msg->ta;
    tb_user_ = msg->tb;
    tab_user_ = msg->tab;
    
    proxy_goal_received = true;
  }

  void loop_callback() {
    if ((proxy_goal_received)&&(!sent_cbf_stl_request)) {
      RCLCPP_INFO(this->get_logger(), "proxy_goal_received == true");
      proxy_goal_received = false;
      last_goal_reached = false;

      this->timer_tts_ = this->create_wall_timer(Constants::DELAY_TTS, [this]() {
        tts_client_->send_speech_goal(Constants::TEXT_START);
        timer_tts_->cancel();

        this->timer_delay_ = this->create_wall_timer(Constants::DELAY_GOAL, [this]() {
          timer_delay_->cancel();

          start_record_data = true;
          RCLCPP_INFO(this->get_logger(), "Starting data recording...");

          if (!srv_cbf_stl_client_->wait_for_service(1s)) {
            RCLCPP_ERROR(this->get_logger(), "Service not available");
            return;
          }

          send_cbf_stl_request();
          sent_cbf_stl_request = true;
        });
      });
    }

    if ((last_goal_reached)&&(sent_cbf_stl_request)) {
      RCLCPP_INFO(this->get_logger(), "Last goal reached");

      start_record_data = false;
      tts_client_->send_speech_goal(Constants::TEXT_ARRIVED);
      save_data_to_file();

      // Reset boolean flags
      last_goal_reached = false;
      sent_cbf_stl_request = false;
      proxy_goal_received = false;
    }
  }

  void save_data_to_file() {
    std::string filename = "/home/user/exchange/omnibase_ws/simulation_data/data_user_X_operator_X.csv";
    std::ofstream file(filename);

    if (!file.is_open()) {
      RCLCPP_ERROR(this->get_logger(), "Error opening file %s", filename.c_str());
      return;
    }

    // Column headers
    file << "v_real,v_max,x_pos,y_pos,theta_rot,distance_hr,global_counter,h_barrier,temporal_operator_counter,flag_finish,obs_x_closest,obs_y_closest\n";

    // Check that all vectors have the same length
    size_t size = v_real.size();
    if (v_max.size() != size || h_barrier.size() != size || x_pos.size() != size ||
        y_pos.size() != size || theta_rot.size() != size || distance_hr.size() != size ||
        global_counter.size() != size || temporal_operator_counter.size() != size || flag_finish.size() != size || obs_x_closest.size() != size || obs_y_closest.size() != size) {
      RCLCPP_WARN(this->get_logger(), "Vectors have different lengths, possible data synchronization error.");
      return;
    }

    // Write row by row
    for (size_t i = 0; i < size; ++i) {
      file << v_real[i] << ","
          << v_max[i] << ","
          << x_pos[i] << ","
          << y_pos[i] << ","
          << theta_rot[i] << ","
          << distance_hr[i] << ","
          << global_counter[i] << ","
          << h_barrier[i] << ","
          << temporal_operator_counter[i] << ","
          << (flag_finish[i] ? "1" : "0") << ","
          << obs_x_closest[i] << ","
          << obs_y_closest[i] << "\n";
    }

    file.close();
    RCLCPP_INFO(this->get_logger(), "Data saved in CSV format to '%s'", filename.c_str());
  }

  void send_cbf_stl_request() {
    auto request = std::make_shared<my_interfaces::srv::InputRequest::Request>();
    request->temp_operator = temp_operator_user_;
    request->goal = {goal_x_user_, goal_y_user_};
    request->goal2 = {goal2_x_user_, goal2_y_user_};
    request->ta = ta_user_;
    request->tb = tb_user_;
    request->tab = tab_user_;
    request->epsilon = epsilon_user_;
    request->collision_avoidance = CA_user_;
    request->velocity_constraint = VC_user_;
    request->angular_constraint = AC_user_;
    request->eta = 20;
    request->b0_min = 0.5;
    request->b0_max = 1.0;
    request->margin = 1.5;
    request->k = Constants::K_STL;     
    request->esp = Constants::ESP_STL;     
    RCLCPP_INFO(this->get_logger(), "Send request to CBF-STL service...");
    srv_cbf_stl_client_->async_send_request(request, std::bind(&NavigateToPoseActionClient::srv_cbf_stl_response_callback, this, std::placeholders::_1));
  }

  void sub_all_data_callback(const my_interfaces::msg::Alldata::SharedPtr msg) {
    if (start_record_data == true) {
      // Save received data
      v_real.push_back(msg->all_v_real);
      v_max.push_back(msg->all_v_max);
      h_barrier.push_back(msg->all_h_barrier);
      x_pos.push_back(msg->all_x_pos);
      y_pos.push_back(msg->all_y_pos);
      theta_rot.push_back(msg->all_theta_rot);
      global_counter.push_back(msg->all_global_counter);
      temporal_operator_counter.push_back(msg->all_temporal_operator_counter);
      flag_finish.push_back(msg->all_flag_finish);
      obs_x_closest.push_back(msg->all_obs_x_closer);
      obs_y_closest.push_back(msg->all_obs_y_closer);

      // Fix human robot distance if > 6m or < 0
      if ((msg->all_distance_hr > 6.0)|| (msg->all_distance_hr < 0.0)) {
        RCLCPP_WARN(this->get_logger(), "Invalid human-robot distance, set to 0.0");
        msg->all_distance_hr = 0.0;
        distance_hr.push_back(0.0);
      } else {
        distance_hr.push_back(msg->all_distance_hr);
      }

      // Voice feedback distance with filter and debounce
      rclcpp::Time now = clock_.now();
      float d = distance_hr.back();

      if ((now - last_voice_feedback_time_) > voice_feedback_cooldown_) {
        if (d > 0.1 && d <= Constants::MIN_DISTANCE_NOTIFICATION && previous_feedback_distance_ != 1) {
          tts_client_->send_speech_goal(Constants::TEXT_TOO_CLOSED);
          last_voice_feedback_time_ = now;
          previous_feedback_distance_ = 1;
        } else if (d > Constants::MAX_DISTANCE_NOTIFICATION && previous_feedback_distance_ != 2) {
          tts_client_->send_speech_goal(Constants::TEXT_TOO_FAR);
          last_voice_feedback_time_ = now;
          previous_feedback_distance_ = 2;
        }
      } else {
        // Reset state if distance is within safe zone
        if (d > 0.8 && d <= 3.5) {
          previous_feedback_distance_ = 0;
        }
      }

      // Check if the goal is reached
      if (msg->all_flag_finish) {
        last_goal_reached = true;
        RCLCPP_INFO(this->get_logger(), "Last goal reached, saving data...");
      }
    }
  }

  void srv_cbf_stl_response_callback(rclcpp::Client<my_interfaces::srv::InputRequest>::SharedFuture future) {
    auto status = future.wait_for(1s);
    if (status == std::future_status::ready) {
      auto result = future.get();
      RCLCPP_INFO(this->get_logger(), "Response received: %d", result->answer);
    } else {
      RCLCPP_ERROR(this->get_logger(), "Timeout waiting for service response");
    }
  }

  void set_volume(int volume) {
    if (!par_volume_client_->wait_for_service(5s)) {
      RCLCPP_ERROR(this->get_logger(), "Node /volume not available");
      return;
    }

    par_volume_client_->set_parameters({
      rclcpp::Parameter("playback", volume)
    });

    RCLCPP_INFO(this->get_logger(), "Volume set to %d", volume);
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger(Constants::NODE_NAME), "\033[1;32m%s ready!\033[0m", Constants::NODE_NAME);
  rclcpp::spin(std::make_shared<NavigateToPoseActionClient>());
  rclcpp::shutdown();
  return 0;
}
