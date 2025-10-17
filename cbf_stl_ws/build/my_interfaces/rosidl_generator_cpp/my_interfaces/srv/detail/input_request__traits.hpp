// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:srv/InputRequest.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__TRAITS_HPP_
#define MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/srv/detail/input_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InputRequest_Request & msg,
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
    out << ", ";
  }

  // member: epsilon
  {
    out << "epsilon: ";
    rosidl_generator_traits::value_to_yaml(msg.epsilon, out);
    out << ", ";
  }

  // member: collision_avoidance
  {
    out << "collision_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_avoidance, out);
    out << ", ";
  }

  // member: velocity_constraint
  {
    out << "velocity_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_constraint, out);
    out << ", ";
  }

  // member: angular_constraint
  {
    out << "angular_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_constraint, out);
    out << ", ";
  }

  // member: eta
  {
    out << "eta: ";
    rosidl_generator_traits::value_to_yaml(msg.eta, out);
    out << ", ";
  }

  // member: b0_min
  {
    out << "b0_min: ";
    rosidl_generator_traits::value_to_yaml(msg.b0_min, out);
    out << ", ";
  }

  // member: b0_max
  {
    out << "b0_max: ";
    rosidl_generator_traits::value_to_yaml(msg.b0_max, out);
    out << ", ";
  }

  // member: margin
  {
    out << "margin: ";
    rosidl_generator_traits::value_to_yaml(msg.margin, out);
    out << ", ";
  }

  // member: k
  {
    out << "k: ";
    rosidl_generator_traits::value_to_yaml(msg.k, out);
    out << ", ";
  }

  // member: esp
  {
    out << "esp: ";
    rosidl_generator_traits::value_to_yaml(msg.esp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InputRequest_Request & msg,
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

  // member: epsilon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epsilon: ";
    rosidl_generator_traits::value_to_yaml(msg.epsilon, out);
    out << "\n";
  }

  // member: collision_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_avoidance, out);
    out << "\n";
  }

  // member: velocity_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_constraint, out);
    out << "\n";
  }

  // member: angular_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_constraint, out);
    out << "\n";
  }

  // member: eta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eta: ";
    rosidl_generator_traits::value_to_yaml(msg.eta, out);
    out << "\n";
  }

  // member: b0_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b0_min: ";
    rosidl_generator_traits::value_to_yaml(msg.b0_min, out);
    out << "\n";
  }

  // member: b0_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b0_max: ";
    rosidl_generator_traits::value_to_yaml(msg.b0_max, out);
    out << "\n";
  }

  // member: margin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "margin: ";
    rosidl_generator_traits::value_to_yaml(msg.margin, out);
    out << "\n";
  }

  // member: k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k: ";
    rosidl_generator_traits::value_to_yaml(msg.k, out);
    out << "\n";
  }

  // member: esp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esp: ";
    rosidl_generator_traits::value_to_yaml(msg.esp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InputRequest_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::srv::InputRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::srv::InputRequest_Request & msg)
{
  return my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::srv::InputRequest_Request>()
{
  return "my_interfaces::srv::InputRequest_Request";
}

template<>
inline const char * name<my_interfaces::srv::InputRequest_Request>()
{
  return "my_interfaces/srv/InputRequest_Request";
}

template<>
struct has_fixed_size<my_interfaces::srv::InputRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::srv::InputRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::srv::InputRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InputRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InputRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InputRequest_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::srv::InputRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::srv::InputRequest_Response & msg)
{
  return my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::srv::InputRequest_Response>()
{
  return "my_interfaces::srv::InputRequest_Response";
}

template<>
inline const char * name<my_interfaces::srv::InputRequest_Response>()
{
  return "my_interfaces/srv/InputRequest_Response";
}

template<>
struct has_fixed_size<my_interfaces::srv::InputRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interfaces::srv::InputRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interfaces::srv::InputRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces::srv::InputRequest>()
{
  return "my_interfaces::srv::InputRequest";
}

template<>
inline const char * name<my_interfaces::srv::InputRequest>()
{
  return "my_interfaces/srv/InputRequest";
}

template<>
struct has_fixed_size<my_interfaces::srv::InputRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<my_interfaces::srv::InputRequest_Request>::value &&
    has_fixed_size<my_interfaces::srv::InputRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_interfaces::srv::InputRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<my_interfaces::srv::InputRequest_Request>::value &&
    has_bounded_size<my_interfaces::srv::InputRequest_Response>::value
  >
{
};

template<>
struct is_service<my_interfaces::srv::InputRequest>
  : std::true_type
{
};

template<>
struct is_service_request<my_interfaces::srv::InputRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_interfaces::srv::InputRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__TRAITS_HPP_
