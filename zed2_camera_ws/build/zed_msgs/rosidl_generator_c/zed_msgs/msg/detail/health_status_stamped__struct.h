// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__STRUCT_H_
#define ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'camera_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HealthStatusStamped in the package zed_msgs.
/**
  * Message to provide information concerning the status of health of the ZED Camera
 */
typedef struct zed_msgs__msg__HealthStatusStamped
{
  /// Standard Header
  std_msgs__msg__Header header;
  /// ZED Camera serial number
  uint32_t serial_number;
  /// ZED Camera name
  rosidl_runtime_c__String camera_name;
  /// Image quality is degraded
  bool low_image_quality;
  /// Environmental light conditions are not optimal
  bool low_lighting;
  /// Depth reliability is low
  bool low_depth_reliability;
  /// Motion sensors reliability is low
  bool low_motion_sensors_reliability;
} zed_msgs__msg__HealthStatusStamped;

// Struct for a sequence of zed_msgs__msg__HealthStatusStamped.
typedef struct zed_msgs__msg__HealthStatusStamped__Sequence
{
  zed_msgs__msg__HealthStatusStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__msg__HealthStatusStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__STRUCT_H_
