// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
// generated code does not contain a copyright notice
#include "zed_msgs/msg/detail/health_status_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zed_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zed_msgs/msg/detail/health_status_stamped__struct.h"
#include "zed_msgs/msg/detail/health_status_stamped__functions.h"
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

#include "rosidl_runtime_c/string.h"  // camera_name
#include "rosidl_runtime_c/string_functions.h"  // camera_name
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zed_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zed_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zed_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _HealthStatusStamped__ros_msg_type = zed_msgs__msg__HealthStatusStamped;

static bool _HealthStatusStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HealthStatusStamped__ros_msg_type * ros_message = static_cast<const _HealthStatusStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: serial_number
  {
    cdr << ros_message->serial_number;
  }

  // Field name: camera_name
  {
    const rosidl_runtime_c__String * str = &ros_message->camera_name;
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

  // Field name: low_image_quality
  {
    cdr << (ros_message->low_image_quality ? true : false);
  }

  // Field name: low_lighting
  {
    cdr << (ros_message->low_lighting ? true : false);
  }

  // Field name: low_depth_reliability
  {
    cdr << (ros_message->low_depth_reliability ? true : false);
  }

  // Field name: low_motion_sensors_reliability
  {
    cdr << (ros_message->low_motion_sensors_reliability ? true : false);
  }

  return true;
}

static bool _HealthStatusStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HealthStatusStamped__ros_msg_type * ros_message = static_cast<_HealthStatusStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: serial_number
  {
    cdr >> ros_message->serial_number;
  }

  // Field name: camera_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->camera_name.data) {
      rosidl_runtime_c__String__init(&ros_message->camera_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->camera_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'camera_name'\n");
      return false;
    }
  }

  // Field name: low_image_quality
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_image_quality = tmp ? true : false;
  }

  // Field name: low_lighting
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_lighting = tmp ? true : false;
  }

  // Field name: low_depth_reliability
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_depth_reliability = tmp ? true : false;
  }

  // Field name: low_motion_sensors_reliability
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_motion_sensors_reliability = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zed_msgs
size_t get_serialized_size_zed_msgs__msg__HealthStatusStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HealthStatusStamped__ros_msg_type * ros_message = static_cast<const _HealthStatusStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name serial_number
  {
    size_t item_size = sizeof(ros_message->serial_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->camera_name.size + 1);
  // field.name low_image_quality
  {
    size_t item_size = sizeof(ros_message->low_image_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_lighting
  {
    size_t item_size = sizeof(ros_message->low_lighting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_depth_reliability
  {
    size_t item_size = sizeof(ros_message->low_depth_reliability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_motion_sensors_reliability
  {
    size_t item_size = sizeof(ros_message->low_motion_sensors_reliability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HealthStatusStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zed_msgs__msg__HealthStatusStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zed_msgs
size_t max_serialized_size_zed_msgs__msg__HealthStatusStamped(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: serial_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: camera_name
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
  // member: low_image_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: low_lighting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: low_depth_reliability
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: low_motion_sensors_reliability
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
    using DataType = zed_msgs__msg__HealthStatusStamped;
    is_plain =
      (
      offsetof(DataType, low_motion_sensors_reliability) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HealthStatusStamped__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zed_msgs__msg__HealthStatusStamped(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HealthStatusStamped = {
  "zed_msgs::msg",
  "HealthStatusStamped",
  _HealthStatusStamped__cdr_serialize,
  _HealthStatusStamped__cdr_deserialize,
  _HealthStatusStamped__get_serialized_size,
  _HealthStatusStamped__max_serialized_size
};

static rosidl_message_type_support_t _HealthStatusStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HealthStatusStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zed_msgs, msg, HealthStatusStamped)() {
  return &_HealthStatusStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
