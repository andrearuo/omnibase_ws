// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tts_msgs:action/TTS.idl
// generated code does not contain a copyright notice

#ifndef TTS_MSGS__ACTION__DETAIL__TTS__STRUCT_H_
#define TTS_MSGS__ACTION__DETAIL__TTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
// Member 'locale'
// Member 'voice'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TTS in the package tts_msgs.
typedef struct tts_msgs__action__TTS_Goal
{
  rosidl_runtime_c__String input;
  /// (Optional) The desired locale, using following format:
  /// the [ISO 639-1 language code](https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes),
  /// followed by an underscore,
  /// followed by the [ISO 3166-1 alpha-2 region code](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2).
  /// For example, 'en_GB' specifies British English.
  /// If not provided, the system should use the default locale.
  rosidl_runtime_c__String locale;
  /// (Optional) The desired voice to use for the utterance.
  /// If no locale is provided, the system should attempt to match it with all the available ones, regardless of the locale.
  /// If not provided, the system should use the default voice for the selected locale.
  rosidl_runtime_c__String voice;
} tts_msgs__action__TTS_Goal;

// Struct for a sequence of tts_msgs__action__TTS_Goal.
typedef struct tts_msgs__action__TTS_Goal__Sequence
{
  tts_msgs__action__TTS_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tts_msgs__action__TTS_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TTS in the package tts_msgs.
typedef struct tts_msgs__action__TTS_Result
{
  rosidl_runtime_c__String error_msg;
} tts_msgs__action__TTS_Result;

// Struct for a sequence of tts_msgs__action__TTS_Result.
typedef struct tts_msgs__action__TTS_Result__Sequence
{
  tts_msgs__action__TTS_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tts_msgs__action__TTS_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'word'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TTS in the package tts_msgs.
typedef struct tts_msgs__action__TTS_Feedback
{
  rosidl_runtime_c__String word;
} tts_msgs__action__TTS_Feedback;

// Struct for a sequence of tts_msgs__action__TTS_Feedback.
typedef struct tts_msgs__action__TTS_Feedback__Sequence
{
  tts_msgs__action__TTS_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tts_msgs__action__TTS_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tts_msgs/action/detail/tts__struct.h"

/// Struct defined in action/TTS in the package tts_msgs.
typedef struct tts_msgs__action__TTS_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tts_msgs__action__TTS_Goal goal;
} tts_msgs__action__TTS_SendGoal_Request;

// Struct for a sequence of tts_msgs__action__TTS_SendGoal_Request.
typedef struct tts_msgs__action__TTS_SendGoal_Request__Sequence
{
  tts_msgs__action__TTS_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tts_msgs__action__TTS_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TTS in the package tts_msgs.
typedef struct tts_msgs__action__TTS_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tts_msgs__action__TTS_SendGoal_Response;

// Struct for a sequence of tts_msgs__action__TTS_SendGoal_Response.
typedef struct tts_msgs__action__TTS_SendGoal_Response__Sequence
{
  tts_msgs__action__TTS_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tts_msgs__action__TTS_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TTS in the package tts_msgs.
typedef struct tts_msgs__action__TTS_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tts_msgs__action__TTS_GetResult_Request;

// Struct for a sequence of tts_msgs__action__TTS_GetResult_Request.
typedef struct tts_msgs__action__TTS_GetResult_Request__Sequence
{
  tts_msgs__action__TTS_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tts_msgs__action__TTS_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tts_msgs/action/detail/tts__struct.h"

/// Struct defined in action/TTS in the package tts_msgs.
typedef struct tts_msgs__action__TTS_GetResult_Response
{
  int8_t status;
  tts_msgs__action__TTS_Result result;
} tts_msgs__action__TTS_GetResult_Response;

// Struct for a sequence of tts_msgs__action__TTS_GetResult_Response.
typedef struct tts_msgs__action__TTS_GetResult_Response__Sequence
{
  tts_msgs__action__TTS_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tts_msgs__action__TTS_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tts_msgs/action/detail/tts__struct.h"

/// Struct defined in action/TTS in the package tts_msgs.
typedef struct tts_msgs__action__TTS_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tts_msgs__action__TTS_Feedback feedback;
} tts_msgs__action__TTS_FeedbackMessage;

// Struct for a sequence of tts_msgs__action__TTS_FeedbackMessage.
typedef struct tts_msgs__action__TTS_FeedbackMessage__Sequence
{
  tts_msgs__action__TTS_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tts_msgs__action__TTS_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TTS_MSGS__ACTION__DETAIL__TTS__STRUCT_H_
