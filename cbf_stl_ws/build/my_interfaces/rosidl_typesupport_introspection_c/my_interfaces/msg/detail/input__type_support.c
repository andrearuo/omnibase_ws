// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_interfaces/msg/detail/input__rosidl_typesupport_introspection_c.h"
#include "my_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_interfaces/msg/detail/input__functions.h"
#include "my_interfaces/msg/detail/input__struct.h"


// Include directives for member types
// Member `temp_operator`
#include "rosidl_runtime_c/string_functions.h"
// Member `goal`
// Member `goal2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_interfaces__msg__Input__init(message_memory);
}

void my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_fini_function(void * message_memory)
{
  my_interfaces__msg__Input__fini(message_memory);
}

size_t my_interfaces__msg__Input__rosidl_typesupport_introspection_c__size_function__Input__goal(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__goal(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__goal(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_interfaces__msg__Input__rosidl_typesupport_introspection_c__fetch_function__Input__goal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__goal(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_interfaces__msg__Input__rosidl_typesupport_introspection_c__assign_function__Input__goal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__goal(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_interfaces__msg__Input__rosidl_typesupport_introspection_c__resize_function__Input__goal(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_interfaces__msg__Input__rosidl_typesupport_introspection_c__size_function__Input__goal2(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__goal2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__goal2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_interfaces__msg__Input__rosidl_typesupport_introspection_c__fetch_function__Input__goal2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__goal2(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_interfaces__msg__Input__rosidl_typesupport_introspection_c__assign_function__Input__goal2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__goal2(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_interfaces__msg__Input__rosidl_typesupport_introspection_c__resize_function__Input__goal2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_message_member_array[6] = {
  {
    "temp_operator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__msg__Input, temp_operator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__msg__Input, goal),  // bytes offset in struct
    NULL,  // default value
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__size_function__Input__goal,  // size() function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__goal,  // get_const(index) function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__goal,  // get(index) function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__fetch_function__Input__goal,  // fetch(index, &value) function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__assign_function__Input__goal,  // assign(index, value) function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__resize_function__Input__goal  // resize(index) function pointer
  },
  {
    "goal2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__msg__Input, goal2),  // bytes offset in struct
    NULL,  // default value
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__size_function__Input__goal2,  // size() function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__goal2,  // get_const(index) function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__goal2,  // get(index) function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__fetch_function__Input__goal2,  // fetch(index, &value) function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__assign_function__Input__goal2,  // assign(index, value) function pointer
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__resize_function__Input__goal2  // resize(index) function pointer
  },
  {
    "ta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__msg__Input, ta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__msg__Input, tb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tab",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__msg__Input, tab),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_message_members = {
  "my_interfaces__msg",  // message namespace
  "Input",  // message name
  6,  // number of fields
  sizeof(my_interfaces__msg__Input),
  my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_message_member_array,  // message members
  my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_init_function,  // function to initialize message memory (memory has to be allocated)
  my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_message_type_support_handle = {
  0,
  &my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, msg, Input)() {
  if (!my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_message_type_support_handle.typesupport_identifier) {
    my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_interfaces__msg__Input__rosidl_typesupport_introspection_c__Input_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
