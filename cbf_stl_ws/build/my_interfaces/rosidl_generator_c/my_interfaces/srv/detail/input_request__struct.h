// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:srv/InputRequest.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__STRUCT_H_
#define MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'temp_operator'
#include "rosidl_runtime_c/string.h"
// Member 'goal'
// Member 'goal2'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/InputRequest in the package my_interfaces.
typedef struct my_interfaces__srv__InputRequest_Request
{
  rosidl_runtime_c__String temp_operator;
  rosidl_runtime_c__double__Sequence goal;
  rosidl_runtime_c__double__Sequence goal2;
  int64_t ta;
  int64_t tb;
  int64_t tab;
  double epsilon;
  bool collision_avoidance;
  bool velocity_constraint;
  bool angular_constraint;
  int64_t eta;
  double b0_min;
  double b0_max;
  double margin;
  double k;
  int64_t esp;
} my_interfaces__srv__InputRequest_Request;

// Struct for a sequence of my_interfaces__srv__InputRequest_Request.
typedef struct my_interfaces__srv__InputRequest_Request__Sequence
{
  my_interfaces__srv__InputRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__InputRequest_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InputRequest in the package my_interfaces.
typedef struct my_interfaces__srv__InputRequest_Response
{
  bool answer;
} my_interfaces__srv__InputRequest_Response;

// Struct for a sequence of my_interfaces__srv__InputRequest_Response.
typedef struct my_interfaces__srv__InputRequest_Response__Sequence
{
  my_interfaces__srv__InputRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__InputRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__STRUCT_H_
