// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zed_msgs:srv/SetSvoFrame.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__SRV__DETAIL__SET_SVO_FRAME__STRUCT_H_
#define ZED_MSGS__SRV__DETAIL__SET_SVO_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetSvoFrame in the package zed_msgs.
typedef struct zed_msgs__srv__SetSvoFrame_Request
{
  /// Frame ID
  int32_t frame_id;
} zed_msgs__srv__SetSvoFrame_Request;

// Struct for a sequence of zed_msgs__srv__SetSvoFrame_Request.
typedef struct zed_msgs__srv__SetSvoFrame_Request__Sequence
{
  zed_msgs__srv__SetSvoFrame_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__srv__SetSvoFrame_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetSvoFrame in the package zed_msgs.
typedef struct zed_msgs__srv__SetSvoFrame_Response
{
  bool success;
  rosidl_runtime_c__String message;
} zed_msgs__srv__SetSvoFrame_Response;

// Struct for a sequence of zed_msgs__srv__SetSvoFrame_Response.
typedef struct zed_msgs__srv__SetSvoFrame_Response__Sequence
{
  zed_msgs__srv__SetSvoFrame_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__srv__SetSvoFrame_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__SRV__DETAIL__SET_SVO_FRAME__STRUCT_H_
