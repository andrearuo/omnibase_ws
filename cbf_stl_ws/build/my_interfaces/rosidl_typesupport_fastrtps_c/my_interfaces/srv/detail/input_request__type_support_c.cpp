// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_interfaces:srv/InputRequest.idl
// generated code does not contain a copyright notice
#include "my_interfaces/srv/detail/input_request__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_interfaces/srv/detail/input_request__struct.h"
#include "my_interfaces/srv/detail/input_request__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // goal, goal2
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // goal, goal2
#include "rosidl_runtime_c/string.h"  // temp_operator
#include "rosidl_runtime_c/string_functions.h"  // temp_operator

// forward declare type support functions


using _InputRequest_Request__ros_msg_type = my_interfaces__srv__InputRequest_Request;

static bool _InputRequest_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InputRequest_Request__ros_msg_type * ros_message = static_cast<const _InputRequest_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: temp_operator
  {
    const rosidl_runtime_c__String * str = &ros_message->temp_operator;
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

  // Field name: goal
  {
    size_t size = ros_message->goal.size;
    auto array_ptr = ros_message->goal.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: goal2
  {
    size_t size = ros_message->goal2.size;
    auto array_ptr = ros_message->goal2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ta
  {
    cdr << ros_message->ta;
  }

  // Field name: tb
  {
    cdr << ros_message->tb;
  }

  // Field name: tab
  {
    cdr << ros_message->tab;
  }

  // Field name: epsilon
  {
    cdr << ros_message->epsilon;
  }

  // Field name: collision_avoidance
  {
    cdr << (ros_message->collision_avoidance ? true : false);
  }

  // Field name: velocity_constraint
  {
    cdr << (ros_message->velocity_constraint ? true : false);
  }

  // Field name: angular_constraint
  {
    cdr << (ros_message->angular_constraint ? true : false);
  }

  // Field name: eta
  {
    cdr << ros_message->eta;
  }

  // Field name: b0_min
  {
    cdr << ros_message->b0_min;
  }

  // Field name: b0_max
  {
    cdr << ros_message->b0_max;
  }

  // Field name: margin
  {
    cdr << ros_message->margin;
  }

  // Field name: k
  {
    cdr << ros_message->k;
  }

  // Field name: esp
  {
    cdr << ros_message->esp;
  }

  return true;
}

static bool _InputRequest_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InputRequest_Request__ros_msg_type * ros_message = static_cast<_InputRequest_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: temp_operator
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->temp_operator.data) {
      rosidl_runtime_c__String__init(&ros_message->temp_operator);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->temp_operator,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'temp_operator'\n");
      return false;
    }
  }

  // Field name: goal
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->goal.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->goal);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->goal, size)) {
      fprintf(stderr, "failed to create array for field 'goal'");
      return false;
    }
    auto array_ptr = ros_message->goal.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: goal2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->goal2.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->goal2);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->goal2, size)) {
      fprintf(stderr, "failed to create array for field 'goal2'");
      return false;
    }
    auto array_ptr = ros_message->goal2.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ta
  {
    cdr >> ros_message->ta;
  }

  // Field name: tb
  {
    cdr >> ros_message->tb;
  }

  // Field name: tab
  {
    cdr >> ros_message->tab;
  }

  // Field name: epsilon
  {
    cdr >> ros_message->epsilon;
  }

  // Field name: collision_avoidance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->collision_avoidance = tmp ? true : false;
  }

  // Field name: velocity_constraint
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->velocity_constraint = tmp ? true : false;
  }

  // Field name: angular_constraint
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->angular_constraint = tmp ? true : false;
  }

  // Field name: eta
  {
    cdr >> ros_message->eta;
  }

  // Field name: b0_min
  {
    cdr >> ros_message->b0_min;
  }

  // Field name: b0_max
  {
    cdr >> ros_message->b0_max;
  }

  // Field name: margin
  {
    cdr >> ros_message->margin;
  }

  // Field name: k
  {
    cdr >> ros_message->k;
  }

  // Field name: esp
  {
    cdr >> ros_message->esp;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t get_serialized_size_my_interfaces__srv__InputRequest_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InputRequest_Request__ros_msg_type * ros_message = static_cast<const _InputRequest_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name temp_operator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->temp_operator.size + 1);
  // field.name goal
  {
    size_t array_size = ros_message->goal.size;
    auto array_ptr = ros_message->goal.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal2
  {
    size_t array_size = ros_message->goal2.size;
    auto array_ptr = ros_message->goal2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ta
  {
    size_t item_size = sizeof(ros_message->ta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tb
  {
    size_t item_size = sizeof(ros_message->tb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tab
  {
    size_t item_size = sizeof(ros_message->tab);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epsilon
  {
    size_t item_size = sizeof(ros_message->epsilon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collision_avoidance
  {
    size_t item_size = sizeof(ros_message->collision_avoidance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_constraint
  {
    size_t item_size = sizeof(ros_message->velocity_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_constraint
  {
    size_t item_size = sizeof(ros_message->angular_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eta
  {
    size_t item_size = sizeof(ros_message->eta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b0_min
  {
    size_t item_size = sizeof(ros_message->b0_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b0_max
  {
    size_t item_size = sizeof(ros_message->b0_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name margin
  {
    size_t item_size = sizeof(ros_message->margin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k
  {
    size_t item_size = sizeof(ros_message->k);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esp
  {
    size_t item_size = sizeof(ros_message->esp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InputRequest_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_interfaces__srv__InputRequest_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t max_serialized_size_my_interfaces__srv__InputRequest_Request(
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

  // member: temp_operator
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
  // member: goal
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: goal2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tab
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: epsilon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: collision_avoidance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velocity_constraint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angular_constraint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b0_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b0_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: margin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: esp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_interfaces__srv__InputRequest_Request;
    is_plain =
      (
      offsetof(DataType, esp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InputRequest_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_interfaces__srv__InputRequest_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InputRequest_Request = {
  "my_interfaces::srv",
  "InputRequest_Request",
  _InputRequest_Request__cdr_serialize,
  _InputRequest_Request__cdr_deserialize,
  _InputRequest_Request__get_serialized_size,
  _InputRequest_Request__max_serialized_size
};

static rosidl_message_type_support_t _InputRequest_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InputRequest_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, srv, InputRequest_Request)() {
  return &_InputRequest_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_interfaces/srv/detail/input_request__struct.h"
// already included above
// #include "my_interfaces/srv/detail/input_request__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _InputRequest_Response__ros_msg_type = my_interfaces__srv__InputRequest_Response;

static bool _InputRequest_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InputRequest_Response__ros_msg_type * ros_message = static_cast<const _InputRequest_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: answer
  {
    cdr << (ros_message->answer ? true : false);
  }

  return true;
}

static bool _InputRequest_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InputRequest_Response__ros_msg_type * ros_message = static_cast<_InputRequest_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: answer
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->answer = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t get_serialized_size_my_interfaces__srv__InputRequest_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InputRequest_Response__ros_msg_type * ros_message = static_cast<const _InputRequest_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name answer
  {
    size_t item_size = sizeof(ros_message->answer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InputRequest_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_interfaces__srv__InputRequest_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t max_serialized_size_my_interfaces__srv__InputRequest_Response(
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

  // member: answer
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
    using DataType = my_interfaces__srv__InputRequest_Response;
    is_plain =
      (
      offsetof(DataType, answer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InputRequest_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_interfaces__srv__InputRequest_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InputRequest_Response = {
  "my_interfaces::srv",
  "InputRequest_Response",
  _InputRequest_Response__cdr_serialize,
  _InputRequest_Response__cdr_deserialize,
  _InputRequest_Response__get_serialized_size,
  _InputRequest_Response__max_serialized_size
};

static rosidl_message_type_support_t _InputRequest_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InputRequest_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, srv, InputRequest_Response)() {
  return &_InputRequest_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_interfaces/srv/input_request.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t InputRequest__callbacks = {
  "my_interfaces::srv",
  "InputRequest",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, srv, InputRequest_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, srv, InputRequest_Response)(),
};

static rosidl_service_type_support_t InputRequest__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &InputRequest__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, srv, InputRequest)() {
  return &InputRequest__handle;
}

#if defined(__cplusplus)
}
#endif
