// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zed_msgs/msg/detail/health_status_stamped__rosidl_typesupport_introspection_c.h"
#include "zed_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zed_msgs/msg/detail/health_status_stamped__functions.h"
#include "zed_msgs/msg/detail/health_status_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `camera_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zed_msgs__msg__HealthStatusStamped__init(message_memory);
}

void zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_fini_function(void * message_memory)
{
  zed_msgs__msg__HealthStatusStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__HealthStatusStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__HealthStatusStamped, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__HealthStatusStamped, camera_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_image_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__HealthStatusStamped, low_image_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_lighting",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__HealthStatusStamped, low_lighting),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_depth_reliability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__HealthStatusStamped, low_depth_reliability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_motion_sensors_reliability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__HealthStatusStamped, low_motion_sensors_reliability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_members = {
  "zed_msgs__msg",  // message namespace
  "HealthStatusStamped",  // message name
  7,  // number of fields
  sizeof(zed_msgs__msg__HealthStatusStamped),
  zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_member_array,  // message members
  zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_type_support_handle = {
  0,
  &zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zed_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zed_msgs, msg, HealthStatusStamped)() {
  zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_type_support_handle.typesupport_identifier) {
    zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zed_msgs__msg__HealthStatusStamped__rosidl_typesupport_introspection_c__HealthStatusStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
