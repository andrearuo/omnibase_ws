// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/Alldata.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__ALLDATA__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__ALLDATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Alldata in the package my_interfaces.
/**
  * v_real
 */
typedef struct my_interfaces__msg__Alldata
{
  float all_v_real;
  /// v_max
  float all_v_max;
  /// h_barrier
  float all_h_barrier;
  /// x_pos
  float all_x_pos;
  /// y_pos
  float all_y_pos;
  /// theta_rot
  float all_theta_rot;
  /// distance HR
  float all_distance_hr;
  /// global_counter
  int64_t all_global_counter;
  /// temporal_operator_counter
  int64_t all_temporal_operator_counter;
  /// reach goal pose
  bool all_flag_finish;
  /// closer obs x
  float all_obs_x_closer;
  /// closer obs y
  float all_obs_y_closer;
} my_interfaces__msg__Alldata;

// Struct for a sequence of my_interfaces__msg__Alldata.
typedef struct my_interfaces__msg__Alldata__Sequence
{
  my_interfaces__msg__Alldata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__Alldata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__ALLDATA__STRUCT_H_
