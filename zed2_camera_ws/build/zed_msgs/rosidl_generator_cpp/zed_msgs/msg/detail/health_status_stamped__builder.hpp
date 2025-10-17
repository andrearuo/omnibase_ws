// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/health_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_HealthStatusStamped_low_motion_sensors_reliability
{
public:
  explicit Init_HealthStatusStamped_low_motion_sensors_reliability(::zed_msgs::msg::HealthStatusStamped & msg)
  : msg_(msg)
  {}
  ::zed_msgs::msg::HealthStatusStamped low_motion_sensors_reliability(::zed_msgs::msg::HealthStatusStamped::_low_motion_sensors_reliability_type arg)
  {
    msg_.low_motion_sensors_reliability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::HealthStatusStamped msg_;
};

class Init_HealthStatusStamped_low_depth_reliability
{
public:
  explicit Init_HealthStatusStamped_low_depth_reliability(::zed_msgs::msg::HealthStatusStamped & msg)
  : msg_(msg)
  {}
  Init_HealthStatusStamped_low_motion_sensors_reliability low_depth_reliability(::zed_msgs::msg::HealthStatusStamped::_low_depth_reliability_type arg)
  {
    msg_.low_depth_reliability = std::move(arg);
    return Init_HealthStatusStamped_low_motion_sensors_reliability(msg_);
  }

private:
  ::zed_msgs::msg::HealthStatusStamped msg_;
};

class Init_HealthStatusStamped_low_lighting
{
public:
  explicit Init_HealthStatusStamped_low_lighting(::zed_msgs::msg::HealthStatusStamped & msg)
  : msg_(msg)
  {}
  Init_HealthStatusStamped_low_depth_reliability low_lighting(::zed_msgs::msg::HealthStatusStamped::_low_lighting_type arg)
  {
    msg_.low_lighting = std::move(arg);
    return Init_HealthStatusStamped_low_depth_reliability(msg_);
  }

private:
  ::zed_msgs::msg::HealthStatusStamped msg_;
};

class Init_HealthStatusStamped_low_image_quality
{
public:
  explicit Init_HealthStatusStamped_low_image_quality(::zed_msgs::msg::HealthStatusStamped & msg)
  : msg_(msg)
  {}
  Init_HealthStatusStamped_low_lighting low_image_quality(::zed_msgs::msg::HealthStatusStamped::_low_image_quality_type arg)
  {
    msg_.low_image_quality = std::move(arg);
    return Init_HealthStatusStamped_low_lighting(msg_);
  }

private:
  ::zed_msgs::msg::HealthStatusStamped msg_;
};

class Init_HealthStatusStamped_camera_name
{
public:
  explicit Init_HealthStatusStamped_camera_name(::zed_msgs::msg::HealthStatusStamped & msg)
  : msg_(msg)
  {}
  Init_HealthStatusStamped_low_image_quality camera_name(::zed_msgs::msg::HealthStatusStamped::_camera_name_type arg)
  {
    msg_.camera_name = std::move(arg);
    return Init_HealthStatusStamped_low_image_quality(msg_);
  }

private:
  ::zed_msgs::msg::HealthStatusStamped msg_;
};

class Init_HealthStatusStamped_serial_number
{
public:
  explicit Init_HealthStatusStamped_serial_number(::zed_msgs::msg::HealthStatusStamped & msg)
  : msg_(msg)
  {}
  Init_HealthStatusStamped_camera_name serial_number(::zed_msgs::msg::HealthStatusStamped::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_HealthStatusStamped_camera_name(msg_);
  }

private:
  ::zed_msgs::msg::HealthStatusStamped msg_;
};

class Init_HealthStatusStamped_header
{
public:
  Init_HealthStatusStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HealthStatusStamped_serial_number header(::zed_msgs::msg::HealthStatusStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HealthStatusStamped_serial_number(msg_);
  }

private:
  ::zed_msgs::msg::HealthStatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::HealthStatusStamped>()
{
  return zed_msgs::msg::builder::Init_HealthStatusStamped_header();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__BUILDER_HPP_
