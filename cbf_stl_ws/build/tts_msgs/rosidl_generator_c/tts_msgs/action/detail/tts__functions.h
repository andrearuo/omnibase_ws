// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tts_msgs:action/TTS.idl
// generated code does not contain a copyright notice

#ifndef TTS_MSGS__ACTION__DETAIL__TTS__FUNCTIONS_H_
#define TTS_MSGS__ACTION__DETAIL__TTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tts_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tts_msgs/action/detail/tts__struct.h"

/// Initialize action/TTS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tts_msgs__action__TTS_Goal
 * )) before or use
 * tts_msgs__action__TTS_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Goal__init(tts_msgs__action__TTS_Goal * msg);

/// Finalize action/TTS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Goal__fini(tts_msgs__action__TTS_Goal * msg);

/// Create action/TTS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tts_msgs__action__TTS_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_Goal *
tts_msgs__action__TTS_Goal__create();

/// Destroy action/TTS message.
/**
 * It calls
 * tts_msgs__action__TTS_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Goal__destroy(tts_msgs__action__TTS_Goal * msg);

/// Check for action/TTS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Goal__are_equal(const tts_msgs__action__TTS_Goal * lhs, const tts_msgs__action__TTS_Goal * rhs);

/// Copy a action/TTS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Goal__copy(
  const tts_msgs__action__TTS_Goal * input,
  tts_msgs__action__TTS_Goal * output);

/// Initialize array of action/TTS messages.
/**
 * It allocates the memory for the number of elements and calls
 * tts_msgs__action__TTS_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Goal__Sequence__init(tts_msgs__action__TTS_Goal__Sequence * array, size_t size);

/// Finalize array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Goal__Sequence__fini(tts_msgs__action__TTS_Goal__Sequence * array);

/// Create array of action/TTS messages.
/**
 * It allocates the memory for the array and calls
 * tts_msgs__action__TTS_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_Goal__Sequence *
tts_msgs__action__TTS_Goal__Sequence__create(size_t size);

/// Destroy array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Goal__Sequence__destroy(tts_msgs__action__TTS_Goal__Sequence * array);

/// Check for action/TTS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Goal__Sequence__are_equal(const tts_msgs__action__TTS_Goal__Sequence * lhs, const tts_msgs__action__TTS_Goal__Sequence * rhs);

/// Copy an array of action/TTS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Goal__Sequence__copy(
  const tts_msgs__action__TTS_Goal__Sequence * input,
  tts_msgs__action__TTS_Goal__Sequence * output);

/// Initialize action/TTS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tts_msgs__action__TTS_Result
 * )) before or use
 * tts_msgs__action__TTS_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Result__init(tts_msgs__action__TTS_Result * msg);

/// Finalize action/TTS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Result__fini(tts_msgs__action__TTS_Result * msg);

/// Create action/TTS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tts_msgs__action__TTS_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_Result *
tts_msgs__action__TTS_Result__create();

/// Destroy action/TTS message.
/**
 * It calls
 * tts_msgs__action__TTS_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Result__destroy(tts_msgs__action__TTS_Result * msg);

/// Check for action/TTS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Result__are_equal(const tts_msgs__action__TTS_Result * lhs, const tts_msgs__action__TTS_Result * rhs);

/// Copy a action/TTS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Result__copy(
  const tts_msgs__action__TTS_Result * input,
  tts_msgs__action__TTS_Result * output);

/// Initialize array of action/TTS messages.
/**
 * It allocates the memory for the number of elements and calls
 * tts_msgs__action__TTS_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Result__Sequence__init(tts_msgs__action__TTS_Result__Sequence * array, size_t size);

/// Finalize array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Result__Sequence__fini(tts_msgs__action__TTS_Result__Sequence * array);

/// Create array of action/TTS messages.
/**
 * It allocates the memory for the array and calls
 * tts_msgs__action__TTS_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_Result__Sequence *
tts_msgs__action__TTS_Result__Sequence__create(size_t size);

/// Destroy array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Result__Sequence__destroy(tts_msgs__action__TTS_Result__Sequence * array);

/// Check for action/TTS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Result__Sequence__are_equal(const tts_msgs__action__TTS_Result__Sequence * lhs, const tts_msgs__action__TTS_Result__Sequence * rhs);

/// Copy an array of action/TTS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Result__Sequence__copy(
  const tts_msgs__action__TTS_Result__Sequence * input,
  tts_msgs__action__TTS_Result__Sequence * output);

/// Initialize action/TTS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tts_msgs__action__TTS_Feedback
 * )) before or use
 * tts_msgs__action__TTS_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Feedback__init(tts_msgs__action__TTS_Feedback * msg);

/// Finalize action/TTS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Feedback__fini(tts_msgs__action__TTS_Feedback * msg);

/// Create action/TTS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tts_msgs__action__TTS_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_Feedback *
tts_msgs__action__TTS_Feedback__create();

/// Destroy action/TTS message.
/**
 * It calls
 * tts_msgs__action__TTS_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Feedback__destroy(tts_msgs__action__TTS_Feedback * msg);

/// Check for action/TTS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Feedback__are_equal(const tts_msgs__action__TTS_Feedback * lhs, const tts_msgs__action__TTS_Feedback * rhs);

/// Copy a action/TTS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Feedback__copy(
  const tts_msgs__action__TTS_Feedback * input,
  tts_msgs__action__TTS_Feedback * output);

/// Initialize array of action/TTS messages.
/**
 * It allocates the memory for the number of elements and calls
 * tts_msgs__action__TTS_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Feedback__Sequence__init(tts_msgs__action__TTS_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Feedback__Sequence__fini(tts_msgs__action__TTS_Feedback__Sequence * array);

/// Create array of action/TTS messages.
/**
 * It allocates the memory for the array and calls
 * tts_msgs__action__TTS_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_Feedback__Sequence *
tts_msgs__action__TTS_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_Feedback__Sequence__destroy(tts_msgs__action__TTS_Feedback__Sequence * array);

/// Check for action/TTS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Feedback__Sequence__are_equal(const tts_msgs__action__TTS_Feedback__Sequence * lhs, const tts_msgs__action__TTS_Feedback__Sequence * rhs);

/// Copy an array of action/TTS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_Feedback__Sequence__copy(
  const tts_msgs__action__TTS_Feedback__Sequence * input,
  tts_msgs__action__TTS_Feedback__Sequence * output);

/// Initialize action/TTS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tts_msgs__action__TTS_SendGoal_Request
 * )) before or use
 * tts_msgs__action__TTS_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Request__init(tts_msgs__action__TTS_SendGoal_Request * msg);

/// Finalize action/TTS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_SendGoal_Request__fini(tts_msgs__action__TTS_SendGoal_Request * msg);

/// Create action/TTS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tts_msgs__action__TTS_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_SendGoal_Request *
tts_msgs__action__TTS_SendGoal_Request__create();

/// Destroy action/TTS message.
/**
 * It calls
 * tts_msgs__action__TTS_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_SendGoal_Request__destroy(tts_msgs__action__TTS_SendGoal_Request * msg);

/// Check for action/TTS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Request__are_equal(const tts_msgs__action__TTS_SendGoal_Request * lhs, const tts_msgs__action__TTS_SendGoal_Request * rhs);

/// Copy a action/TTS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Request__copy(
  const tts_msgs__action__TTS_SendGoal_Request * input,
  tts_msgs__action__TTS_SendGoal_Request * output);

/// Initialize array of action/TTS messages.
/**
 * It allocates the memory for the number of elements and calls
 * tts_msgs__action__TTS_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Request__Sequence__init(tts_msgs__action__TTS_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_SendGoal_Request__Sequence__fini(tts_msgs__action__TTS_SendGoal_Request__Sequence * array);

/// Create array of action/TTS messages.
/**
 * It allocates the memory for the array and calls
 * tts_msgs__action__TTS_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_SendGoal_Request__Sequence *
tts_msgs__action__TTS_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_SendGoal_Request__Sequence__destroy(tts_msgs__action__TTS_SendGoal_Request__Sequence * array);

/// Check for action/TTS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Request__Sequence__are_equal(const tts_msgs__action__TTS_SendGoal_Request__Sequence * lhs, const tts_msgs__action__TTS_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/TTS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Request__Sequence__copy(
  const tts_msgs__action__TTS_SendGoal_Request__Sequence * input,
  tts_msgs__action__TTS_SendGoal_Request__Sequence * output);

/// Initialize action/TTS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tts_msgs__action__TTS_SendGoal_Response
 * )) before or use
 * tts_msgs__action__TTS_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Response__init(tts_msgs__action__TTS_SendGoal_Response * msg);

/// Finalize action/TTS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_SendGoal_Response__fini(tts_msgs__action__TTS_SendGoal_Response * msg);

/// Create action/TTS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tts_msgs__action__TTS_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_SendGoal_Response *
tts_msgs__action__TTS_SendGoal_Response__create();

/// Destroy action/TTS message.
/**
 * It calls
 * tts_msgs__action__TTS_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_SendGoal_Response__destroy(tts_msgs__action__TTS_SendGoal_Response * msg);

/// Check for action/TTS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Response__are_equal(const tts_msgs__action__TTS_SendGoal_Response * lhs, const tts_msgs__action__TTS_SendGoal_Response * rhs);

/// Copy a action/TTS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Response__copy(
  const tts_msgs__action__TTS_SendGoal_Response * input,
  tts_msgs__action__TTS_SendGoal_Response * output);

/// Initialize array of action/TTS messages.
/**
 * It allocates the memory for the number of elements and calls
 * tts_msgs__action__TTS_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Response__Sequence__init(tts_msgs__action__TTS_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_SendGoal_Response__Sequence__fini(tts_msgs__action__TTS_SendGoal_Response__Sequence * array);

/// Create array of action/TTS messages.
/**
 * It allocates the memory for the array and calls
 * tts_msgs__action__TTS_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_SendGoal_Response__Sequence *
tts_msgs__action__TTS_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_SendGoal_Response__Sequence__destroy(tts_msgs__action__TTS_SendGoal_Response__Sequence * array);

/// Check for action/TTS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Response__Sequence__are_equal(const tts_msgs__action__TTS_SendGoal_Response__Sequence * lhs, const tts_msgs__action__TTS_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/TTS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_SendGoal_Response__Sequence__copy(
  const tts_msgs__action__TTS_SendGoal_Response__Sequence * input,
  tts_msgs__action__TTS_SendGoal_Response__Sequence * output);

/// Initialize action/TTS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tts_msgs__action__TTS_GetResult_Request
 * )) before or use
 * tts_msgs__action__TTS_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Request__init(tts_msgs__action__TTS_GetResult_Request * msg);

/// Finalize action/TTS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_GetResult_Request__fini(tts_msgs__action__TTS_GetResult_Request * msg);

/// Create action/TTS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tts_msgs__action__TTS_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_GetResult_Request *
tts_msgs__action__TTS_GetResult_Request__create();

/// Destroy action/TTS message.
/**
 * It calls
 * tts_msgs__action__TTS_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_GetResult_Request__destroy(tts_msgs__action__TTS_GetResult_Request * msg);

/// Check for action/TTS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Request__are_equal(const tts_msgs__action__TTS_GetResult_Request * lhs, const tts_msgs__action__TTS_GetResult_Request * rhs);

/// Copy a action/TTS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Request__copy(
  const tts_msgs__action__TTS_GetResult_Request * input,
  tts_msgs__action__TTS_GetResult_Request * output);

/// Initialize array of action/TTS messages.
/**
 * It allocates the memory for the number of elements and calls
 * tts_msgs__action__TTS_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Request__Sequence__init(tts_msgs__action__TTS_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_GetResult_Request__Sequence__fini(tts_msgs__action__TTS_GetResult_Request__Sequence * array);

/// Create array of action/TTS messages.
/**
 * It allocates the memory for the array and calls
 * tts_msgs__action__TTS_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_GetResult_Request__Sequence *
tts_msgs__action__TTS_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_GetResult_Request__Sequence__destroy(tts_msgs__action__TTS_GetResult_Request__Sequence * array);

/// Check for action/TTS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Request__Sequence__are_equal(const tts_msgs__action__TTS_GetResult_Request__Sequence * lhs, const tts_msgs__action__TTS_GetResult_Request__Sequence * rhs);

/// Copy an array of action/TTS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Request__Sequence__copy(
  const tts_msgs__action__TTS_GetResult_Request__Sequence * input,
  tts_msgs__action__TTS_GetResult_Request__Sequence * output);

/// Initialize action/TTS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tts_msgs__action__TTS_GetResult_Response
 * )) before or use
 * tts_msgs__action__TTS_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Response__init(tts_msgs__action__TTS_GetResult_Response * msg);

/// Finalize action/TTS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_GetResult_Response__fini(tts_msgs__action__TTS_GetResult_Response * msg);

/// Create action/TTS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tts_msgs__action__TTS_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_GetResult_Response *
tts_msgs__action__TTS_GetResult_Response__create();

/// Destroy action/TTS message.
/**
 * It calls
 * tts_msgs__action__TTS_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_GetResult_Response__destroy(tts_msgs__action__TTS_GetResult_Response * msg);

/// Check for action/TTS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Response__are_equal(const tts_msgs__action__TTS_GetResult_Response * lhs, const tts_msgs__action__TTS_GetResult_Response * rhs);

/// Copy a action/TTS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Response__copy(
  const tts_msgs__action__TTS_GetResult_Response * input,
  tts_msgs__action__TTS_GetResult_Response * output);

/// Initialize array of action/TTS messages.
/**
 * It allocates the memory for the number of elements and calls
 * tts_msgs__action__TTS_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Response__Sequence__init(tts_msgs__action__TTS_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_GetResult_Response__Sequence__fini(tts_msgs__action__TTS_GetResult_Response__Sequence * array);

/// Create array of action/TTS messages.
/**
 * It allocates the memory for the array and calls
 * tts_msgs__action__TTS_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_GetResult_Response__Sequence *
tts_msgs__action__TTS_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_GetResult_Response__Sequence__destroy(tts_msgs__action__TTS_GetResult_Response__Sequence * array);

/// Check for action/TTS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Response__Sequence__are_equal(const tts_msgs__action__TTS_GetResult_Response__Sequence * lhs, const tts_msgs__action__TTS_GetResult_Response__Sequence * rhs);

/// Copy an array of action/TTS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_GetResult_Response__Sequence__copy(
  const tts_msgs__action__TTS_GetResult_Response__Sequence * input,
  tts_msgs__action__TTS_GetResult_Response__Sequence * output);

/// Initialize action/TTS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tts_msgs__action__TTS_FeedbackMessage
 * )) before or use
 * tts_msgs__action__TTS_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_FeedbackMessage__init(tts_msgs__action__TTS_FeedbackMessage * msg);

/// Finalize action/TTS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_FeedbackMessage__fini(tts_msgs__action__TTS_FeedbackMessage * msg);

/// Create action/TTS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tts_msgs__action__TTS_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_FeedbackMessage *
tts_msgs__action__TTS_FeedbackMessage__create();

/// Destroy action/TTS message.
/**
 * It calls
 * tts_msgs__action__TTS_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_FeedbackMessage__destroy(tts_msgs__action__TTS_FeedbackMessage * msg);

/// Check for action/TTS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_FeedbackMessage__are_equal(const tts_msgs__action__TTS_FeedbackMessage * lhs, const tts_msgs__action__TTS_FeedbackMessage * rhs);

/// Copy a action/TTS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_FeedbackMessage__copy(
  const tts_msgs__action__TTS_FeedbackMessage * input,
  tts_msgs__action__TTS_FeedbackMessage * output);

/// Initialize array of action/TTS messages.
/**
 * It allocates the memory for the number of elements and calls
 * tts_msgs__action__TTS_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_FeedbackMessage__Sequence__init(tts_msgs__action__TTS_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_FeedbackMessage__Sequence__fini(tts_msgs__action__TTS_FeedbackMessage__Sequence * array);

/// Create array of action/TTS messages.
/**
 * It allocates the memory for the array and calls
 * tts_msgs__action__TTS_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
tts_msgs__action__TTS_FeedbackMessage__Sequence *
tts_msgs__action__TTS_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TTS messages.
/**
 * It calls
 * tts_msgs__action__TTS_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
void
tts_msgs__action__TTS_FeedbackMessage__Sequence__destroy(tts_msgs__action__TTS_FeedbackMessage__Sequence * array);

/// Check for action/TTS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_FeedbackMessage__Sequence__are_equal(const tts_msgs__action__TTS_FeedbackMessage__Sequence * lhs, const tts_msgs__action__TTS_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/TTS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tts_msgs
bool
tts_msgs__action__TTS_FeedbackMessage__Sequence__copy(
  const tts_msgs__action__TTS_FeedbackMessage__Sequence * input,
  tts_msgs__action__TTS_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TTS_MSGS__ACTION__DETAIL__TTS__FUNCTIONS_H_
