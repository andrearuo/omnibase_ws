// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_interfaces:msg/Alldata.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/alldata__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_interfaces/msg/detail/alldata__struct.hpp"

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

namespace my_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
cdr_serialize(
  const my_interfaces::msg::Alldata & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: all_v_real
  cdr << ros_message.all_v_real;
  // Member: all_v_max
  cdr << ros_message.all_v_max;
  // Member: all_h_barrier
  cdr << ros_message.all_h_barrier;
  // Member: all_x_pos
  cdr << ros_message.all_x_pos;
  // Member: all_y_pos
  cdr << ros_message.all_y_pos;
  // Member: all_theta_rot
  cdr << ros_message.all_theta_rot;
  // Member: all_distance_hr
  cdr << ros_message.all_distance_hr;
  // Member: all_global_counter
  cdr << ros_message.all_global_counter;
  // Member: all_temporal_operator_counter
  cdr << ros_message.all_temporal_operator_counter;
  // Member: all_flag_finish
  cdr << (ros_message.all_flag_finish ? true : false);
  // Member: all_obs_x_closer
  cdr << ros_message.all_obs_x_closer;
  // Member: all_obs_y_closer
  cdr << ros_message.all_obs_y_closer;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_interfaces::msg::Alldata & ros_message)
{
  // Member: all_v_real
  cdr >> ros_message.all_v_real;

  // Member: all_v_max
  cdr >> ros_message.all_v_max;

  // Member: all_h_barrier
  cdr >> ros_message.all_h_barrier;

  // Member: all_x_pos
  cdr >> ros_message.all_x_pos;

  // Member: all_y_pos
  cdr >> ros_message.all_y_pos;

  // Member: all_theta_rot
  cdr >> ros_message.all_theta_rot;

  // Member: all_distance_hr
  cdr >> ros_message.all_distance_hr;

  // Member: all_global_counter
  cdr >> ros_message.all_global_counter;

  // Member: all_temporal_operator_counter
  cdr >> ros_message.all_temporal_operator_counter;

  // Member: all_flag_finish
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.all_flag_finish = tmp ? true : false;
  }

  // Member: all_obs_x_closer
  cdr >> ros_message.all_obs_x_closer;

  // Member: all_obs_y_closer
  cdr >> ros_message.all_obs_y_closer;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
get_serialized_size(
  const my_interfaces::msg::Alldata & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: all_v_real
  {
    size_t item_size = sizeof(ros_message.all_v_real);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_v_max
  {
    size_t item_size = sizeof(ros_message.all_v_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_h_barrier
  {
    size_t item_size = sizeof(ros_message.all_h_barrier);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_x_pos
  {
    size_t item_size = sizeof(ros_message.all_x_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_y_pos
  {
    size_t item_size = sizeof(ros_message.all_y_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_theta_rot
  {
    size_t item_size = sizeof(ros_message.all_theta_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_distance_hr
  {
    size_t item_size = sizeof(ros_message.all_distance_hr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_global_counter
  {
    size_t item_size = sizeof(ros_message.all_global_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_temporal_operator_counter
  {
    size_t item_size = sizeof(ros_message.all_temporal_operator_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_flag_finish
  {
    size_t item_size = sizeof(ros_message.all_flag_finish);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_obs_x_closer
  {
    size_t item_size = sizeof(ros_message.all_obs_x_closer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_obs_y_closer
  {
    size_t item_size = sizeof(ros_message.all_obs_y_closer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
max_serialized_size_Alldata(
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


  // Member: all_v_real
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: all_v_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: all_h_barrier
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: all_x_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: all_y_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: all_theta_rot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: all_distance_hr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: all_global_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: all_temporal_operator_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: all_flag_finish
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: all_obs_x_closer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: all_obs_y_closer
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
    using DataType = my_interfaces::msg::Alldata;
    is_plain =
      (
      offsetof(DataType, all_obs_y_closer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Alldata__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_interfaces::msg::Alldata *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Alldata__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_interfaces::msg::Alldata *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Alldata__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_interfaces::msg::Alldata *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Alldata__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Alldata(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Alldata__callbacks = {
  "my_interfaces::msg",
  "Alldata",
  _Alldata__cdr_serialize,
  _Alldata__cdr_deserialize,
  _Alldata__get_serialized_size,
  _Alldata__max_serialized_size
};

static rosidl_message_type_support_t _Alldata__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Alldata__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::msg::Alldata>()
{
  return &my_interfaces::msg::typesupport_fastrtps_cpp::_Alldata__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, msg, Alldata)() {
  return &my_interfaces::msg::typesupport_fastrtps_cpp::_Alldata__handle;
}

#ifdef __cplusplus
}
#endif
