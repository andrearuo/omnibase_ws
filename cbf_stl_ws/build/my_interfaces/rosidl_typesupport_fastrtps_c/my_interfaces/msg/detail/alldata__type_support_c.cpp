// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_interfaces:msg/Alldata.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/alldata__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_interfaces/msg/detail/alldata__struct.h"
#include "my_interfaces/msg/detail/alldata__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Alldata__ros_msg_type = my_interfaces__msg__Alldata;

static bool _Alldata__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Alldata__ros_msg_type * ros_message = static_cast<const _Alldata__ros_msg_type *>(untyped_ros_message);
  // Field name: all_v_real
  {
    cdr << ros_message->all_v_real;
  }

  // Field name: all_v_max
  {
    cdr << ros_message->all_v_max;
  }

  // Field name: all_h_barrier
  {
    cdr << ros_message->all_h_barrier;
  }

  // Field name: all_x_pos
  {
    cdr << ros_message->all_x_pos;
  }

  // Field name: all_y_pos
  {
    cdr << ros_message->all_y_pos;
  }

  // Field name: all_theta_rot
  {
    cdr << ros_message->all_theta_rot;
  }

  // Field name: all_distance_hr
  {
    cdr << ros_message->all_distance_hr;
  }

  // Field name: all_global_counter
  {
    cdr << ros_message->all_global_counter;
  }

  // Field name: all_temporal_operator_counter
  {
    cdr << ros_message->all_temporal_operator_counter;
  }

  // Field name: all_flag_finish
  {
    cdr << (ros_message->all_flag_finish ? true : false);
  }

  // Field name: all_obs_x_closer
  {
    cdr << ros_message->all_obs_x_closer;
  }

  // Field name: all_obs_y_closer
  {
    cdr << ros_message->all_obs_y_closer;
  }

  return true;
}

static bool _Alldata__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Alldata__ros_msg_type * ros_message = static_cast<_Alldata__ros_msg_type *>(untyped_ros_message);
  // Field name: all_v_real
  {
    cdr >> ros_message->all_v_real;
  }

  // Field name: all_v_max
  {
    cdr >> ros_message->all_v_max;
  }

  // Field name: all_h_barrier
  {
    cdr >> ros_message->all_h_barrier;
  }

  // Field name: all_x_pos
  {
    cdr >> ros_message->all_x_pos;
  }

  // Field name: all_y_pos
  {
    cdr >> ros_message->all_y_pos;
  }

  // Field name: all_theta_rot
  {
    cdr >> ros_message->all_theta_rot;
  }

  // Field name: all_distance_hr
  {
    cdr >> ros_message->all_distance_hr;
  }

  // Field name: all_global_counter
  {
    cdr >> ros_message->all_global_counter;
  }

  // Field name: all_temporal_operator_counter
  {
    cdr >> ros_message->all_temporal_operator_counter;
  }

  // Field name: all_flag_finish
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->all_flag_finish = tmp ? true : false;
  }

  // Field name: all_obs_x_closer
  {
    cdr >> ros_message->all_obs_x_closer;
  }

  // Field name: all_obs_y_closer
  {
    cdr >> ros_message->all_obs_y_closer;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t get_serialized_size_my_interfaces__msg__Alldata(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Alldata__ros_msg_type * ros_message = static_cast<const _Alldata__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name all_v_real
  {
    size_t item_size = sizeof(ros_message->all_v_real);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_v_max
  {
    size_t item_size = sizeof(ros_message->all_v_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_h_barrier
  {
    size_t item_size = sizeof(ros_message->all_h_barrier);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_x_pos
  {
    size_t item_size = sizeof(ros_message->all_x_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_y_pos
  {
    size_t item_size = sizeof(ros_message->all_y_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_theta_rot
  {
    size_t item_size = sizeof(ros_message->all_theta_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_distance_hr
  {
    size_t item_size = sizeof(ros_message->all_distance_hr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_global_counter
  {
    size_t item_size = sizeof(ros_message->all_global_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_temporal_operator_counter
  {
    size_t item_size = sizeof(ros_message->all_temporal_operator_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_flag_finish
  {
    size_t item_size = sizeof(ros_message->all_flag_finish);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_obs_x_closer
  {
    size_t item_size = sizeof(ros_message->all_obs_x_closer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_obs_y_closer
  {
    size_t item_size = sizeof(ros_message->all_obs_y_closer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Alldata__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_interfaces__msg__Alldata(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t max_serialized_size_my_interfaces__msg__Alldata(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: all_v_real
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: all_v_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: all_h_barrier
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: all_x_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: all_y_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: all_theta_rot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: all_distance_hr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: all_global_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: all_temporal_operator_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: all_flag_finish
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: all_obs_x_closer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: all_obs_y_closer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_interfaces__msg__Alldata;
    is_plain =
      (
      offsetof(DataType, all_obs_y_closer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Alldata__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_interfaces__msg__Alldata(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Alldata = {
  "my_interfaces::msg",
  "Alldata",
  _Alldata__cdr_serialize,
  _Alldata__cdr_deserialize,
  _Alldata__get_serialized_size,
  _Alldata__max_serialized_size
};

static rosidl_message_type_support_t _Alldata__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Alldata,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, msg, Alldata)() {
  return &_Alldata__type_support;
}

#if defined(__cplusplus)
}
#endif
