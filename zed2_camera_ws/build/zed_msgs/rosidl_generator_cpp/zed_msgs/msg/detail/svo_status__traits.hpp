// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zed_msgs:msg/SvoStatus.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__SVO_STATUS__TRAITS_HPP_
#define ZED_MSGS__MSG__DETAIL__SVO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zed_msgs/msg/detail/svo_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zed_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SvoStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_name
  {
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: frame_ts
  {
    out << "frame_ts: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_ts, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: total_frames
  {
    out << "total_frames: ";
    rosidl_generator_traits::value_to_yaml(msg.total_frames, out);
    out << ", ";
  }

  // member: loop_active
  {
    out << "loop_active: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_active, out);
    out << ", ";
  }

  // member: loop_count
  {
    out << "loop_count: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_count, out);
    out << ", ";
  }

  // member: real_time_mode
  {
    out << "real_time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.real_time_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SvoStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: frame_ts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_ts: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_ts, out);
    out << "\n";
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: total_frames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_frames: ";
    rosidl_generator_traits::value_to_yaml(msg.total_frames, out);
    out << "\n";
  }

  // member: loop_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_active: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_active, out);
    out << "\n";
  }

  // member: loop_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_count: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_count, out);
    out << "\n";
  }

  // member: real_time_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.real_time_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SvoStatus & msg, bool use_flow_style = false)
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
  const zed_msgs::msg::SvoStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  zed_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zed_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const zed_msgs::msg::SvoStatus & msg)
{
  return zed_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zed_msgs::msg::SvoStatus>()
{
  return "zed_msgs::msg::SvoStatus";
}

template<>
inline const char * name<zed_msgs::msg::SvoStatus>()
{
  return "zed_msgs/msg/SvoStatus";
}

template<>
struct has_fixed_size<zed_msgs::msg::SvoStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zed_msgs::msg::SvoStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zed_msgs::msg::SvoStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZED_MSGS__MSG__DETAIL__SVO_STATUS__TRAITS_HPP_
