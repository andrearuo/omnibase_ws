#include <zed_msgs/msg/objects_stamped.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <std_msgs/msg/float32.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <cmath>

namespace Constants {
  constexpr char NODE_NAME[] = "zed2_camera_node";
  constexpr char SUB_SKELETON[] = "/zed/zed_node/body_trk/skeletons";
  constexpr char SUB_IMAGE[] = "/zed/zed_node/rgb/image_rect_color";
  constexpr char PUB_HUMAN_DISTANCE[] = "/human_distance";
  constexpr char WINDOW_NAME[] = "ZED Camera";
  constexpr int CAM_WIDTH = 1280;                        
  constexpr int CAM_HEIGHT = 720;
  constexpr int LANDMARK_NUMBER = 1;  // Landmark number to be used for distance calculation

} 

class SkeletonViewer : public rclcpp::Node
{
public:
  SkeletonViewer() : Node(Constants::NODE_NAME){
    image_sub_ = this->create_subscription<sensor_msgs::msg::Image>(Constants::SUB_IMAGE, 10, std::bind(&SkeletonViewer::image_callback, this, std::placeholders::_1));
    skeleton_sub_ = this->create_subscription<zed_msgs::msg::ObjectsStamped>(Constants::SUB_SKELETON, 10, std::bind(&SkeletonViewer::skeleton_callback, this, std::placeholders::_1));
    human_distance_pub_ = this->create_publisher<std_msgs::msg::Float32>(Constants::PUB_HUMAN_DISTANCE, 10);
    cv::namedWindow(Constants::WINDOW_NAME, cv::WINDOW_AUTOSIZE);
  }

private:
  
  rclcpp::Subscription<zed_msgs::msg::ObjectsStamped>::SharedPtr skeleton_sub_;
  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr human_distance_pub_;
  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_sub_;
  zed_msgs::msg::ObjectsStamped last_objects_;
  cv_bridge::CvImagePtr cv_ptr_;
  cv::Mat last_image_;


  void image_callback(const sensor_msgs::msg::Image::SharedPtr msg)
  {
    try {
      cv_ptr_ = cv_bridge::toCvCopy(msg, "bgr8");

      last_image_ = cv_ptr_->image.clone();

      for (const auto &object : last_objects_.objects) {
        if (!object.skeleton_2d.keypoints.empty()) {
          draw_skeleton(last_image_, object);
        }
      }

      cv::imshow(Constants::WINDOW_NAME, last_image_);
      cv::waitKey(1);
    } catch (cv_bridge::Exception &e) {
      RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
    }
  }

  void skeleton_callback(const zed_msgs::msg::ObjectsStamped::SharedPtr msg)
  {
    last_objects_ = *msg;
    
    // We consider only the closest person and calculate the distance from Landmark 0
    float min_distance = std::numeric_limits<float>::max();
    std::optional<float> closest_human_distance;

    for (const auto& object : msg->objects) {
      if (object.skeleton_available && !object.skeleton_3d.keypoints.empty()) {
        const auto& kp = object.skeleton_3d.keypoints[Constants::LANDMARK_NUMBER];
        float x = kp.kp[0];
        float y = kp.kp[1];
        float z = kp.kp[2];
        float distance = std::sqrt(x * x + y * y + z * z);

        if (distance < min_distance) {
          min_distance = distance;
          closest_human_distance = distance;
        }
      }
    }

    if (closest_human_distance.has_value()) {
      std_msgs::msg::Float32 msg_out;
      msg_out.data = closest_human_distance.value();
      human_distance_pub_->publish(msg_out);
      RCLCPP_INFO(this->get_logger(), "Distanza umana: %.2f m", msg_out.data);
    }
  }

  void draw_skeleton(cv::Mat &img, const zed_msgs::msg::Object &object)
  {
      if (!object.skeleton_available) return;

      int img_width = img.cols;
      int img_height = img.rows;

      float scale_x = static_cast<float>(img_width) / Constants::CAM_WIDTH;
      float scale_y = static_cast<float>(img_height) / Constants::CAM_HEIGHT;

      const auto& keypoints = object.skeleton_2d.keypoints;

      // Edges per POSE_18
      std::vector<std::pair<int, int>> edges = {
        {1, 2}, {2, 3}, {3, 4},   // Right arm
        {1, 5}, {5, 6}, {6, 7},   // Left arm
        {8, 9}, {9, 10},          // Right leg
        {8,11}, {5,11}, {2, 8},   // Torso
        {11, 12}, {12, 13},       // Left leg
        {0, 1},                   // Neck to head
        {0, 15}, {15, 17},        // Right eye to right ear
        {0, 14}, {14, 16}         // Left eye to left ear
      };

      // Draw edges
      for (const auto& edge : edges) {
          const auto& kp1 = keypoints[edge.first];
          const auto& kp2 = keypoints[edge.second];

          int x1 = static_cast<int>(kp1.kp[0] * scale_x);
          int y1 = static_cast<int>(kp1.kp[1] * scale_y);
          int x2 = static_cast<int>(kp2.kp[0] * scale_x);
          int y2 = static_cast<int>(kp2.kp[1] * scale_y);

          if ((x1 > 0 && y1 > 0 && x2 > 0 && y2 > 0)) {
              cv::line(img, cv::Point(x1, y1), cv::Point(x2, y2), cv::Scalar(0, 255, 0), 2);
          }
      }

      // Draw keypoints with numbers next to them
      for (size_t i = 0; i < keypoints.size(); ++i) {
          int x = static_cast<int>(keypoints[i].kp[0] * scale_x);
          int y = static_cast<int>(keypoints[i].kp[1] * scale_y);

          if (x > 0 && y > 0) {
              cv::circle(img, cv::Point(x, y), 2, cv::Scalar(0, 0, 255), -1);  
              cv::putText(img, std::to_string(i), cv::Point(x + 4, y - 4), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(255, 255, 255), 1);
          }
      }
  }

};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger(Constants::NODE_NAME), "\033[1;32m%s ready!\033[0m", Constants::NODE_NAME);
  auto node = std::make_shared<SkeletonViewer>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
