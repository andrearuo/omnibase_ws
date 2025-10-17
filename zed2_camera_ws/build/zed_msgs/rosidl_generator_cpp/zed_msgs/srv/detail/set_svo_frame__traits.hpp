// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zed_msgs:srv/SetSvoFrame.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__SRV__DETAIL__SET_SVO_FRAME__TRAITS_HPP_
#define ZED_MSGS__SRV__DETAIL__SET_SVO_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zed_msgs/srv/detail/set_svo_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zed_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSvoFrame_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSvoFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSvoFrame_Request & msg, bool use_flow_style = false)
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

}  // namespace zed_msgs

namespace rosidl_generator_traits
{

[[deprecated("use zed_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zed_msgs::srv::SetSvoFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zed_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zed_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const zed_msgs::srv::SetSvoFrame_Request & msg)
{
  return zed_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zed_msgs::srv::SetSvoFrame_Request>()
{
  return "zed_msgs::srv::SetSvoFrame_Request";
}

template<>
inline const char * name<zed_msgs::srv::SetSvoFrame_Request>()
{
  return "zed_msgs/srv/SetSvoFrame_Request";
}

template<>
struct has_fixed_size<zed_msgs::srv::SetSvoFrame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<zed_msgs::srv::SetSvoFrame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<zed_msgs::srv::SetSvoFrame_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace zed_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSvoFrame_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSvoFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSvoFrame_Response & msg, bool use_flow_style = false)
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

}  // namespace zed_msgs

namespace rosidl_generator_traits
{

[[deprecated("use zed_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zed_msgs::srv::SetSvoFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zed_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zed_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const zed_msgs::srv::SetSvoFrame_Response & msg)
{
  return zed_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zed_msgs::srv::SetSvoFrame_Response>()
{
  return "zed_msgs::srv::SetSvoFrame_Response";
}

template<>
inline const char * name<zed_msgs::srv::SetSvoFrame_Response>()
{
  return "zed_msgs/srv/SetSvoFrame_Response";
}

template<>
struct has_fixed_size<zed_msgs::srv::SetSvoFrame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zed_msgs::srv::SetSvoFrame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zed_msgs::srv::SetSvoFrame_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zed_msgs::srv::SetSvoFrame>()
{
  return "zed_msgs::srv::SetSvoFrame";
}

template<>
inline const char * name<zed_msgs::srv::SetSvoFrame>()
{
  return "zed_msgs/srv/SetSvoFrame";
}

template<>
struct has_fixed_size<zed_msgs::srv::SetSvoFrame>
  : std::integral_constant<
    bool,
    has_fixed_size<zed_msgs::srv::SetSvoFrame_Request>::value &&
    has_fixed_size<zed_msgs::srv::SetSvoFrame_Response>::value
  >
{
};

template<>
struct has_bounded_size<zed_msgs::srv::SetSvoFrame>
  : std::integral_constant<
    bool,
    has_bounded_size<zed_msgs::srv::SetSvoFrame_Request>::value &&
    has_bounded_size<zed_msgs::srv::SetSvoFrame_Response>::value
  >
{
};

template<>
struct is_service<zed_msgs::srv::SetSvoFrame>
  : std::true_type
{
};

template<>
struct is_service_request<zed_msgs::srv::SetSvoFrame_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zed_msgs::srv::SetSvoFrame_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZED_MSGS__SRV__DETAIL__SET_SVO_FRAME__TRAITS_HPP_
