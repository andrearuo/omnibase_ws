// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_interfaces:srv/InputRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_interfaces/srv/detail/input_request__rosidl_typesupport_introspection_c.h"
#include "my_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_interfaces/srv/detail/input_request__functions.h"
#include "my_interfaces/srv/detail/input_request__struct.h"


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

void my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_interfaces__srv__InputRequest_Request__init(message_memory);
}

void my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_fini_function(void * message_memory)
{
  my_interfaces__srv__InputRequest_Request__fini(message_memory);
}

size_t my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__size_function__InputRequest_Request__goal(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_const_function__InputRequest_Request__goal(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_function__InputRequest_Request__goal(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__fetch_function__InputRequest_Request__goal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_const_function__InputRequest_Request__goal(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__assign_function__InputRequest_Request__goal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_function__InputRequest_Request__goal(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__resize_function__InputRequest_Request__goal(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__size_function__InputRequest_Request__goal2(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_const_function__InputRequest_Request__goal2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_function__InputRequest_Request__goal2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__fetch_function__InputRequest_Request__goal2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_const_function__InputRequest_Request__goal2(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__assign_function__InputRequest_Request__goal2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_function__InputRequest_Request__goal2(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__resize_function__InputRequest_Request__goal2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_message_member_array[16] = {
  {
    "temp_operator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, temp_operator),  // bytes offset in struct
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
    offsetof(my_interfaces__srv__InputRequest_Request, goal),  // bytes offset in struct
    NULL,  // default value
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__size_function__InputRequest_Request__goal,  // size() function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_const_function__InputRequest_Request__goal,  // get_const(index) function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_function__InputRequest_Request__goal,  // get(index) function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__fetch_function__InputRequest_Request__goal,  // fetch(index, &value) function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__assign_function__InputRequest_Request__goal,  // assign(index, value) function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__resize_function__InputRequest_Request__goal  // resize(index) function pointer
  },
  {
    "goal2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, goal2),  // bytes offset in struct
    NULL,  // default value
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__size_function__InputRequest_Request__goal2,  // size() function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_const_function__InputRequest_Request__goal2,  // get_const(index) function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__get_function__InputRequest_Request__goal2,  // get(index) function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__fetch_function__InputRequest_Request__goal2,  // fetch(index, &value) function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__assign_function__InputRequest_Request__goal2,  // assign(index, value) function pointer
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__resize_function__InputRequest_Request__goal2  // resize(index) function pointer
  },
  {
    "ta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, ta),  // bytes offset in struct
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
    offsetof(my_interfaces__srv__InputRequest_Request, tb),  // bytes offset in struct
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
    offsetof(my_interfaces__srv__InputRequest_Request, tab),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epsilon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, epsilon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_avoidance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, collision_avoidance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_constraint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, velocity_constraint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_constraint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, angular_constraint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, eta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b0_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, b0_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b0_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, b0_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "margin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, margin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, k),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "esp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Request, esp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_message_members = {
  "my_interfaces__srv",  // message namespace
  "InputRequest_Request",  // message name
  16,  // number of fields
  sizeof(my_interfaces__srv__InputRequest_Request),
  my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_message_member_array,  // message members
  my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_message_type_support_handle = {
  0,
  &my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, srv, InputRequest_Request)() {
  if (!my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_message_type_support_handle.typesupport_identifier) {
    my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_interfaces__srv__InputRequest_Request__rosidl_typesupport_introspection_c__InputRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_interfaces/srv/detail/input_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_interfaces/srv/detail/input_request__functions.h"
// already included above
// #include "my_interfaces/srv/detail/input_request__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_interfaces__srv__InputRequest_Response__init(message_memory);
}

void my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_fini_function(void * message_memory)
{
  my_interfaces__srv__InputRequest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_message_member_array[1] = {
  {
    "answer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__srv__InputRequest_Response, answer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_message_members = {
  "my_interfaces__srv",  // message namespace
  "InputRequest_Response",  // message name
  1,  // number of fields
  sizeof(my_interfaces__srv__InputRequest_Response),
  my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_message_member_array,  // message members
  my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_message_type_support_handle = {
  0,
  &my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, srv, InputRequest_Response)() {
  if (!my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_message_type_support_handle.typesupport_identifier) {
    my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_interfaces__srv__InputRequest_Response__rosidl_typesupport_introspection_c__InputRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_interfaces/srv/detail/input_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_service_members = {
  "my_interfaces__srv",  // service namespace
  "InputRequest",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_Request_message_type_support_handle,
  NULL  // response message
  // my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_service_type_support_handle = {
  0,
  &my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, srv, InputRequest_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, srv, InputRequest_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, srv, InputRequest)() {
  if (!my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_service_type_support_handle.typesupport_identifier) {
    my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, srv, InputRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, srv, InputRequest_Response)()->data;
  }

  return &my_interfaces__srv__detail__input_request__rosidl_typesupport_introspection_c__InputRequest_service_type_support_handle;
}
