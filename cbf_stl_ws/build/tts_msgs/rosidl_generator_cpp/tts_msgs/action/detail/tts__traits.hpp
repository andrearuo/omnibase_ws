// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tts_msgs:action/TTS.idl
// generated code does not contain a copyright notice

#ifndef TTS_MSGS__ACTION__DETAIL__TTS__TRAITS_HPP_
#define TTS_MSGS__ACTION__DETAIL__TTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tts_msgs/action/detail/tts__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tts_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
    out << ", ";
  }

  // member: locale
  {
    out << "locale: ";
    rosidl_generator_traits::value_to_yaml(msg.locale, out);
    out << ", ";
  }

  // member: voice
  {
    out << "voice: ";
    rosidl_generator_traits::value_to_yaml(msg.voice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
    out << "\n";
  }

  // member: locale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locale: ";
    rosidl_generator_traits::value_to_yaml(msg.locale, out);
    out << "\n";
  }

  // member: voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice: ";
    rosidl_generator_traits::value_to_yaml(msg.voice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tts_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tts_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tts_msgs::action::TTS_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  tts_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tts_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tts_msgs::action::TTS_Goal & msg)
{
  return tts_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tts_msgs::action::TTS_Goal>()
{
  return "tts_msgs::action::TTS_Goal";
}

template<>
inline const char * name<tts_msgs::action::TTS_Goal>()
{
  return "tts_msgs/action/TTS_Goal";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tts_msgs::action::TTS_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tts_msgs::action::TTS_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tts_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tts_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tts_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tts_msgs::action::TTS_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  tts_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tts_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tts_msgs::action::TTS_Result & msg)
{
  return tts_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tts_msgs::action::TTS_Result>()
{
  return "tts_msgs::action::TTS_Result";
}

template<>
inline const char * name<tts_msgs::action::TTS_Result>()
{
  return "tts_msgs/action/TTS_Result";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tts_msgs::action::TTS_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tts_msgs::action::TTS_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tts_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: word
  {
    out << "word: ";
    rosidl_generator_traits::value_to_yaml(msg.word, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "word: ";
    rosidl_generator_traits::value_to_yaml(msg.word, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tts_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tts_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tts_msgs::action::TTS_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  tts_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tts_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tts_msgs::action::TTS_Feedback & msg)
{
  return tts_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tts_msgs::action::TTS_Feedback>()
{
  return "tts_msgs::action::TTS_Feedback";
}

template<>
inline const char * name<tts_msgs::action::TTS_Feedback>()
{
  return "tts_msgs/action/TTS_Feedback";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tts_msgs::action::TTS_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tts_msgs::action::TTS_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tts_msgs/action/detail/tts__traits.hpp"

namespace tts_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tts_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tts_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tts_msgs::action::TTS_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tts_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tts_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tts_msgs::action::TTS_SendGoal_Request & msg)
{
  return tts_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tts_msgs::action::TTS_SendGoal_Request>()
{
  return "tts_msgs::action::TTS_SendGoal_Request";
}

template<>
inline const char * name<tts_msgs::action::TTS_SendGoal_Request>()
{
  return "tts_msgs/action/TTS_SendGoal_Request";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tts_msgs::action::TTS_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tts_msgs::action::TTS_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tts_msgs::action::TTS_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tts_msgs::action::TTS_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tts_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tts_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tts_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tts_msgs::action::TTS_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tts_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tts_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tts_msgs::action::TTS_SendGoal_Response & msg)
{
  return tts_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tts_msgs::action::TTS_SendGoal_Response>()
{
  return "tts_msgs::action::TTS_SendGoal_Response";
}

template<>
inline const char * name<tts_msgs::action::TTS_SendGoal_Response>()
{
  return "tts_msgs/action/TTS_SendGoal_Response";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tts_msgs::action::TTS_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tts_msgs::action::TTS_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tts_msgs::action::TTS_SendGoal>()
{
  return "tts_msgs::action::TTS_SendGoal";
}

template<>
inline const char * name<tts_msgs::action::TTS_SendGoal>()
{
  return "tts_msgs/action/TTS_SendGoal";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tts_msgs::action::TTS_SendGoal_Request>::value &&
    has_fixed_size<tts_msgs::action::TTS_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tts_msgs::action::TTS_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tts_msgs::action::TTS_SendGoal_Request>::value &&
    has_bounded_size<tts_msgs::action::TTS_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tts_msgs::action::TTS_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tts_msgs::action::TTS_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tts_msgs::action::TTS_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace tts_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tts_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tts_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tts_msgs::action::TTS_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tts_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tts_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tts_msgs::action::TTS_GetResult_Request & msg)
{
  return tts_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tts_msgs::action::TTS_GetResult_Request>()
{
  return "tts_msgs::action::TTS_GetResult_Request";
}

template<>
inline const char * name<tts_msgs::action::TTS_GetResult_Request>()
{
  return "tts_msgs/action/TTS_GetResult_Request";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tts_msgs::action::TTS_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tts_msgs::action::TTS_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tts_msgs/action/detail/tts__traits.hpp"

namespace tts_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tts_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tts_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tts_msgs::action::TTS_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tts_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tts_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tts_msgs::action::TTS_GetResult_Response & msg)
{
  return tts_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tts_msgs::action::TTS_GetResult_Response>()
{
  return "tts_msgs::action::TTS_GetResult_Response";
}

template<>
inline const char * name<tts_msgs::action::TTS_GetResult_Response>()
{
  return "tts_msgs/action/TTS_GetResult_Response";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tts_msgs::action::TTS_Result>::value> {};

template<>
struct has_bounded_size<tts_msgs::action::TTS_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tts_msgs::action::TTS_Result>::value> {};

template<>
struct is_message<tts_msgs::action::TTS_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tts_msgs::action::TTS_GetResult>()
{
  return "tts_msgs::action::TTS_GetResult";
}

template<>
inline const char * name<tts_msgs::action::TTS_GetResult>()
{
  return "tts_msgs/action/TTS_GetResult";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tts_msgs::action::TTS_GetResult_Request>::value &&
    has_fixed_size<tts_msgs::action::TTS_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tts_msgs::action::TTS_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tts_msgs::action::TTS_GetResult_Request>::value &&
    has_bounded_size<tts_msgs::action::TTS_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tts_msgs::action::TTS_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tts_msgs::action::TTS_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tts_msgs::action::TTS_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tts_msgs/action/detail/tts__traits.hpp"

namespace tts_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tts_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tts_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tts_msgs::action::TTS_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tts_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tts_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tts_msgs::action::TTS_FeedbackMessage & msg)
{
  return tts_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tts_msgs::action::TTS_FeedbackMessage>()
{
  return "tts_msgs::action::TTS_FeedbackMessage";
}

template<>
inline const char * name<tts_msgs::action::TTS_FeedbackMessage>()
{
  return "tts_msgs/action/TTS_FeedbackMessage";
}

template<>
struct has_fixed_size<tts_msgs::action::TTS_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tts_msgs::action::TTS_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tts_msgs::action::TTS_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tts_msgs::action::TTS_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tts_msgs::action::TTS_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tts_msgs::action::TTS>
  : std::true_type
{
};

template<>
struct is_action_goal<tts_msgs::action::TTS_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tts_msgs::action::TTS_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tts_msgs::action::TTS_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TTS_MSGS__ACTION__DETAIL__TTS__TRAITS_HPP_
