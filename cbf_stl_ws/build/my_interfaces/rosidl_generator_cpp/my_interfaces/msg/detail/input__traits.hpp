// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Input & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp_operator
  {
    out << "temp_operator: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_operator, out);
    out << ", ";
  }

  // member: goal
  {
    if (msg.goal.size() == 0) {
      out << "goal: []";
    } else {
      out << "goal: [";
      size_t pending_items = msg.goal.size();
      for (auto item : msg.goal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal2
  {
    if (msg.goal2.size() == 0) {
      out << "goal2: []";
    } else {
      out << "goal2: [";
      size_t pending_items = msg.goal2.size();
      for (auto item : msg.goal2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ta
  {
    out << "ta: ";
    rosidl_generator_traits::value_to_yaml(msg.ta, out);
    out << ", ";
  }

  // member: tb
  {
    out << "tb: ";
    rosidl_generator_traits::value_to_yaml(msg.tb, out);
    out << ", ";
  }

  // member: tab
  {
    out << "tab: ";
    rosidl_generator_traits::value_to_yaml(msg.tab, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Input & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp_operator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_operator: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_operator, out);
    out << "\n";
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal.size() == 0) {
      out << "goal: []\n";
    } else {
      out << "goal:\n";
      for (auto item : msg.goal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal2.size() == 0) {
      out << "goal2: []\n";
    } else {
      out << "goal2:\n";
      for (auto item : msg.goal2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ta: ";
    rosidl_generator_traits::value_to_yaml(msg.ta, out);
    out << "\n";
  }

  // member: tb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tb: ";
    rosidl_generator_traits::value_to_yaml(msg.tb, out);
    out << "\n";
  }

  // member: tab
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tab: ";
    rosidl_generator_traits::value_to_yaml(msg.tab, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Input & msg, bool use_flow_style = false)
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
  const my_interfaces::msg::Input & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::Input & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::Input>()
{
  return "my_interfaces::msg::Input";
}

template<>
inline const char * name<my_interfaces::msg::Input>()
{
  return "my_interfaces/msg/Input";
}

template<>
struct has_fixed_size<my_interfaces::msg::Input>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::msg::Input>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::msg::Input>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_
