// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
// generated code does not contain a copyright notice
#include "zed_msgs/msg/detail/health_status_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "zed_msgs/msg/detail/health_status_stamped__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace zed_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zed_msgs
cdr_serialize(
  const zed_msgs::msg::HealthStatusStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: serial_number
  cdr << ros_message.serial_number;
  // Member: camera_name
  cdr << ros_message.camera_name;
  // Member: low_image_quality
  cdr << (ros_message.low_image_quality ? true : false);
  // Member: low_lighting
  cdr << (ros_message.low_lighting ? true : false);
  // Member: low_depth_reliability
  cdr << (ros_message.low_depth_reliability ? true : false);
  // Member: low_motion_sensors_reliability
  cdr << (ros_message.low_motion_sensors_reliability ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zed_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  zed_msgs::msg::HealthStatusStamped & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: serial_number
  cdr >> ros_message.serial_number;

  // Member: camera_name
  cdr >> ros_message.camera_name;

  // Member: low_image_quality
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_image_quality = tmp ? true : false;
  }

  // Member: low_lighting
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_lighting = tmp ? true : false;
  }

  // Member: low_depth_reliability
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_depth_reliability = tmp ? true : false;
  }

  // Member: low_motion_sensors_reliability
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_motion_sensors_reliability = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zed_msgs
get_serialized_size(
  const zed_msgs::msg::HealthStatusStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: serial_number
  {
    size_t item_size = sizeof(ros_message.serial_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.camera_name.size() + 1);
  // Member: low_image_quality
  {
    size_t item_size = sizeof(ros_message.low_image_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_lighting
  {
    size_t item_size = sizeof(ros_message.low_lighting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_depth_reliability
  {
    size_t item_size = sizeof(ros_message.low_depth_reliability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_motion_sensors_reliability
  {
    size_t item_size = sizeof(ros_message.low_motion_sensors_reliability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zed_msgs
max_serialized_size_HealthStatusStamped(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: serial_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: camera_name
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

  // Member: low_image_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_lighting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_depth_reliability
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_motion_sensors_reliability
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
    using DataType = zed_msgs::msg::HealthStatusStamped;
    is_plain =
      (
      offsetof(DataType, low_motion_sensors_reliability) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HealthStatusStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const zed_msgs::msg::HealthStatusStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HealthStatusStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<zed_msgs::msg::HealthStatusStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HealthStatusStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const zed_msgs::msg::HealthStatusStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HealthStatusStamped__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HealthStatusStamped(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HealthStatusStamped__callbacks = {
  "zed_msgs::msg",
  "HealthStatusStamped",
  _HealthStatusStamped__cdr_serialize,
  _HealthStatusStamped__cdr_deserialize,
  _HealthStatusStamped__get_serialized_size,
  _HealthStatusStamped__max_serialized_size
};

static rosidl_message_type_support_t _HealthStatusStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HealthStatusStamped__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace zed_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_zed_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<zed_msgs::msg::HealthStatusStamped>()
{
  return &zed_msgs::msg::typesupport_fastrtps_cpp::_HealthStatusStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zed_msgs, msg, HealthStatusStamped)() {
  return &zed_msgs::msg::typesupport_fastrtps_cpp::_HealthStatusStamped__handle;
}

#ifdef __cplusplus
}
#endif
