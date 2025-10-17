// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zed_msgs:msg/SvoStatus.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__SVO_STATUS__STRUCT_H_
#define ZED_MSGS__MSG__DETAIL__SVO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_PLAYING'.
/**
  * SVO playback status constants
 */
enum
{
  zed_msgs__msg__SvoStatus__STATUS_PLAYING = 0
};

/// Constant 'STATUS_PAUSED'.
enum
{
  zed_msgs__msg__SvoStatus__STATUS_PAUSED = 1
};

/// Constant 'STATUS_END'.
enum
{
  zed_msgs__msg__SvoStatus__STATUS_END = 2
};

// Include directives for member types
// Member 'file_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SvoStatus in the package zed_msgs.
/**
  * Message to provide information concerning the status of the SVO playback
 */
typedef struct zed_msgs__msg__SvoStatus
{
  /// SVO File name
  rosidl_runtime_c__String file_name;
  /// SVO playback status
  uint8_t status;
  /// SVO frame timestamp
  uint64_t frame_ts;
  /// SVO playback position
  uint32_t frame_id;
  /// SVO total number of frames
  uint32_t total_frames;
  /// SVO loop status
  bool loop_active;
  /// SVO loop count
  uint32_t loop_count;
  /// SVO real-time mode status
  bool real_time_mode;
} zed_msgs__msg__SvoStatus;

// Struct for a sequence of zed_msgs__msg__SvoStatus.
typedef struct zed_msgs__msg__SvoStatus__Sequence
{
  zed_msgs__msg__SvoStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__msg__SvoStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__MSG__DETAIL__SVO_STATUS__STRUCT_H_
