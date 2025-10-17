// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zed_msgs:msg/SvoStatus.idl
// generated code does not contain a copyright notice
#include "zed_msgs/msg/detail/svo_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zed_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zed_msgs/msg/detail/svo_status__struct.h"
#include "zed_msgs/msg/detail/svo_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // file_name
#include "rosidl_runtime_c/string_functions.h"  // file_name

// forward declare type support functions


using _SvoStatus__ros_msg_type = zed_msgs__msg__SvoStatus;

static bool _SvoStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SvoStatus__ros_msg_type * ros_message = static_cast<const _SvoStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: file_name
  {
    const rosidl_runtime_c__String * str = &ros_message->file_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: frame_ts
  {
    cdr << ros_message->frame_ts;
  }

  // Field name: frame_id
  {
    cdr << ros_message->frame_id;
  }

  // Field name: total_frames
  {
    cdr << ros_message->total_frames;
  }

  // Field name: loop_active
  {
    cdr << (ros_message->loop_active ? true : false);
  }

  // Field name: loop_count
  {
    cdr << ros_message->loop_count;
  }

  // Field name: real_time_mode
  {
    cdr << (ros_message->real_time_mode ? true : false);
  }

  return true;
}

static bool _SvoStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SvoStatus__ros_msg_type * ros_message = static_cast<_SvoStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: file_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->file_name.data) {
      rosidl_runtime_c__String__init(&ros_message->file_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->file_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'file_name'\n");
      return false;
    }
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: frame_ts
  {
    cdr >> ros_message->frame_ts;
  }

  // Field name: frame_id
  {
    cdr >> ros_message->frame_id;
  }

  // Field name: total_frames
  {
    cdr >> ros_message->total_frames;
  }

  // Field name: loop_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->loop_active = tmp ? true : false;
  }

  // Field name: loop_count
  {
    cdr >> ros_message->loop_count;
  }

  // Field name: real_time_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->real_time_mode = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zed_msgs
size_t get_serialized_size_zed_msgs__msg__SvoStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SvoStatus__ros_msg_type * ros_message = static_cast<const _SvoStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->file_name.size + 1);
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frame_ts
  {
    size_t item_size = sizeof(ros_message->frame_ts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frame_id
  {
    size_t item_size = sizeof(ros_message->frame_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_frames
  {
    size_t item_size = sizeof(ros_message->total_frames);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loop_active
  {
    size_t item_size = sizeof(ros_message->loop_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loop_count
  {
    size_t item_size = sizeof(ros_message->loop_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name real_time_mode
  {
    size_t item_size = sizeof(ros_message->real_time_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SvoStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zed_msgs__msg__SvoStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zed_msgs
size_t max_serialized_size_zed_msgs__msg__SvoStatus(
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

  // member: file_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frame_ts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: frame_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_frames
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: loop_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: loop_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: real_time_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zed_msgs__msg__SvoStatus;
    is_plain =
      (
      offsetof(DataType, real_time_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SvoStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zed_msgs__msg__SvoStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SvoStatus = {
  "zed_msgs::msg",
  "SvoStatus",
  _SvoStatus__cdr_serialize,
  _SvoStatus__cdr_deserialize,
  _SvoStatus__get_serialized_size,
  _SvoStatus__max_serialized_size
};

static rosidl_message_type_support_t _SvoStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SvoStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zed_msgs, msg, SvoStatus)() {
  return &_SvoStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
