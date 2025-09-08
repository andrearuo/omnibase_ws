// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/Alldata.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__ALLDATA__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__ALLDATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/alldata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Alldata & msg,
  std::ostream & out)
{
  out << "{";
  // member: all_v_real
  {
    out << "all_v_real: ";
    rosidl_generator_traits::value_to_yaml(msg.all_v_real, out);
    out << ", ";
  }

  // member: all_v_max
  {
    out << "all_v_max: ";
    rosidl_generator_traits::value_to_yaml(msg.all_v_max, out);
    out << ", ";
  }

  // member: all_h_barrier
  {
    out << "all_h_barrier: ";
    rosidl_generator_traits::value_to_yaml(msg.all_h_barrier, out);
    out << ", ";
  }

  // member: all_x_pos
  {
    out << "all_x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.all_x_pos, out);
    out << ", ";
  }

  // member: all_y_pos
  {
    out << "all_y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.all_y_pos, out);
    out << ", ";
  }

  // member: all_theta_rot
  {
    out << "all_theta_rot: ";
    rosidl_generator_traits::value_to_yaml(msg.all_theta_rot, out);
    out << ", ";
  }

  // member: all_distance_hr
  {
    out << "all_distance_hr: ";
    rosidl_generator_traits::value_to_yaml(msg.all_distance_hr, out);
    out << ", ";
  }

  // member: all_global_counter
  {
    out << "all_global_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.all_global_counter, out);
    out << ", ";
  }

  // member: all_temporal_operator_counter
  {
    out << "all_temporal_operator_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.all_temporal_operator_counter, out);
    out << ", ";
  }

  // member: all_flag_finish
  {
    out << "all_flag_finish: ";
    rosidl_generator_traits::value_to_yaml(msg.all_flag_finish, out);
    out << ", ";
  }

  // member: all_obs_x_closer
  {
    out << "all_obs_x_closer: ";
    rosidl_generator_traits::value_to_yaml(msg.all_obs_x_closer, out);
    out << ", ";
  }

  // member: all_obs_y_closer
  {
    out << "all_obs_y_closer: ";
    rosidl_generator_traits::value_to_yaml(msg.all_obs_y_closer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Alldata & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: all_v_real
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_v_real: ";
    rosidl_generator_traits::value_to_yaml(msg.all_v_real, out);
    out << "\n";
  }

  // member: all_v_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_v_max: ";
    rosidl_generator_traits::value_to_yaml(msg.all_v_max, out);
    out << "\n";
  }

  // member: all_h_barrier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_h_barrier: ";
    rosidl_generator_traits::value_to_yaml(msg.all_h_barrier, out);
    out << "\n";
  }

  // member: all_x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.all_x_pos, out);
    out << "\n";
  }

  // member: all_y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.all_y_pos, out);
    out << "\n";
  }

  // member: all_theta_rot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_theta_rot: ";
    rosidl_generator_traits::value_to_yaml(msg.all_theta_rot, out);
    out << "\n";
  }

  // member: all_distance_hr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_distance_hr: ";
    rosidl_generator_traits::value_to_yaml(msg.all_distance_hr, out);
    out << "\n";
  }

  // member: all_global_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_global_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.all_global_counter, out);
    out << "\n";
  }

  // member: all_temporal_operator_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_temporal_operator_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.all_temporal_operator_counter, out);
    out << "\n";
  }

  // member: all_flag_finish
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_flag_finish: ";
    rosidl_generator_traits::value_to_yaml(msg.all_flag_finish, out);
    out << "\n";
  }

  // member: all_obs_x_closer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_obs_x_closer: ";
    rosidl_generator_traits::value_to_yaml(msg.all_obs_x_closer, out);
    out << "\n";
  }

  // member: all_obs_y_closer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_obs_y_closer: ";
    rosidl_generator_traits::value_to_yaml(msg.all_obs_y_closer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Alldata & msg, bool use_flow_style = false)
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
  const my_interfaces::msg::Alldata & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::Alldata & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::Alldata>()
{
  return "my_interfaces::msg::Alldata";
}

template<>
inline const char * name<my_interfaces::msg::Alldata>()
{
  return "my_interfaces/msg/Alldata";
}

template<>
struct has_fixed_size<my_interfaces::msg::Alldata>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interfaces::msg::Alldata>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interfaces::msg::Alldata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__ALLDATA__TRAITS_HPP_
