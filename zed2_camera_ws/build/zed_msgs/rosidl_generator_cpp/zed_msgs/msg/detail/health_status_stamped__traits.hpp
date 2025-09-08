// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__TRAITS_HPP_
#define ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zed_msgs/msg/detail/health_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace zed_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HealthStatusStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: camera_name
  {
    out << "camera_name: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_name, out);
    out << ", ";
  }

  // member: low_image_quality
  {
    out << "low_image_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.low_image_quality, out);
    out << ", ";
  }

  // member: low_lighting
  {
    out << "low_lighting: ";
    rosidl_generator_traits::value_to_yaml(msg.low_lighting, out);
    out << ", ";
  }

  // member: low_depth_reliability
  {
    out << "low_depth_reliability: ";
    rosidl_generator_traits::value_to_yaml(msg.low_depth_reliability, out);
    out << ", ";
  }

  // member: low_motion_sensors_reliability
  {
    out << "low_motion_sensors_reliability: ";
    rosidl_generator_traits::value_to_yaml(msg.low_motion_sensors_reliability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HealthStatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: camera_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_name: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_name, out);
    out << "\n";
  }

  // member: low_image_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_image_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.low_image_quality, out);
    out << "\n";
  }

  // member: low_lighting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_lighting: ";
    rosidl_generator_traits::value_to_yaml(msg.low_lighting, out);
    out << "\n";
  }

  // member: low_depth_reliability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_depth_reliability: ";
    rosidl_generator_traits::value_to_yaml(msg.low_depth_reliability, out);
    out << "\n";
  }

  // member: low_motion_sensors_reliability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_motion_sensors_reliability: ";
    rosidl_generator_traits::value_to_yaml(msg.low_motion_sensors_reliability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HealthStatusStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace zed_msgs

namespace rosidl_generator_traits
{

[[deprecated("use zed_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zed_msgs::msg::HealthStatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  zed_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zed_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const zed_msgs::msg::HealthStatusStamped & msg)
{
  return zed_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zed_msgs::msg::HealthStatusStamped>()
{
  return "zed_msgs::msg::HealthStatusStamped";
}

template<>
inline const char * name<zed_msgs::msg::HealthStatusStamped>()
{
  return "zed_msgs/msg/HealthStatusStamped";
}

template<>
struct has_fixed_size<zed_msgs::msg::HealthStatusStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zed_msgs::msg::HealthStatusStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zed_msgs::msg::HealthStatusStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__TRAITS_HPP_
