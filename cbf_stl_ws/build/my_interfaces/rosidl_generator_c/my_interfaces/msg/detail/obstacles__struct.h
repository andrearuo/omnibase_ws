// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__OBSTACLES__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__OBSTACLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'o_radius'
// Member 'ox_pose'
// Member 'oy_pose'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Obstacles in the package my_interfaces.
/**
  * o_radius
 */
typedef struct my_interfaces__msg__Obstacles
{
  rosidl_runtime_c__float__Sequence o_radius;
  /// ox_pose
  rosidl_runtime_c__float__Sequence ox_pose;
  /// oy_pose
  rosidl_runtime_c__float__Sequence oy_pose;
  /// o_number
  int32_t o_number;
} my_interfaces__msg__Obstacles;

// Struct for a sequence of my_interfaces__msg__Obstacles.
typedef struct my_interfaces__msg__Obstacles__Sequence
{
  my_interfaces__msg__Obstacles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__Obstacles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__OBSTACLES__STRUCT_H_
