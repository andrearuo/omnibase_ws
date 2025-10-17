// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_

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

/// Struct defined in msg/Input in the package my_interfaces.
typedef struct my_interfaces__msg__Input
{
  rosidl_runtime_c__String temp_operator;
  rosidl_runtime_c__double__Sequence goal;
  rosidl_runtime_c__double__Sequence goal2;
  int64_t ta;
  int64_t tb;
  int64_t tab;
} my_interfaces__msg__Input;

// Struct for a sequence of my_interfaces__msg__Input.
typedef struct my_interfaces__msg__Input__Sequence
{
  my_interfaces__msg__Input * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__Input__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_
