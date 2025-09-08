// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__OBSTACLES__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__OBSTACLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/obstacles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacles & msg,
  std::ostream & out)
{
  out << "{";
  // member: o_radius
  {
    if (msg.o_radius.size() == 0) {
      out << "o_radius: []";
    } else {
      out << "o_radius: [";
      size_t pending_items = msg.o_radius.size();
      for (auto item : msg.o_radius) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ox_pose
  {
    if (msg.ox_pose.size() == 0) {
      out << "ox_pose: []";
    } else {
      out << "ox_pose: [";
      size_t pending_items = msg.ox_pose.size();
      for (auto item : msg.ox_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: oy_pose
  {
    if (msg.oy_pose.size() == 0) {
      out << "oy_pose: []";
    } else {
      out << "oy_pose: [";
      size_t pending_items = msg.oy_pose.size();
      for (auto item : msg.oy_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o_number
  {
    out << "o_number: ";
    rosidl_generator_traits::value_to_yaml(msg.o_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Obstacles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: o_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o_radius.size() == 0) {
      out << "o_radius: []\n";
    } else {
      out << "o_radius:\n";
      for (auto item : msg.o_radius) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ox_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ox_pose.size() == 0) {
      out << "ox_pose: []\n";
    } else {
      out << "ox_pose:\n";
      for (auto item : msg.ox_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: oy_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.oy_pose.size() == 0) {
      out << "oy_pose: []\n";
    } else {
      out << "oy_pose:\n";
      for (auto item : msg.oy_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "o_number: ";
    rosidl_generator_traits::value_to_yaml(msg.o_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacles & msg, bool use_flow_style = false)
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

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::msg::Obstacles & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::Obstacles & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::Obstacles>()
{
  return "my_interfaces::msg::Obstacles";
}

template<>
inline const char * name<my_interfaces::msg::Obstacles>()
{
  return "my_interfaces/msg/Obstacles";
}

template<>
struct has_fixed_size<my_interfaces::msg::Obstacles>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::msg::Obstacles>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::msg::Obstacles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__OBSTACLES__TRAITS_HPP_
