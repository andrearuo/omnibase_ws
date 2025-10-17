// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zed_msgs:msg/SvoStatus.idl
// generated code does not contain a copyright notice
#include "zed_msgs/msg/detail/svo_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `file_name`
#include "rosidl_runtime_c/string_functions.h"

bool
zed_msgs__msg__SvoStatus__init(zed_msgs__msg__SvoStatus * msg)
{
  if (!msg) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__init(&msg->file_name)) {
    zed_msgs__msg__SvoStatus__fini(msg);
    return false;
  }
  // status
  // frame_ts
  // frame_id
  // total_frames
  // loop_active
  // loop_count
  // real_time_mode
  return true;
}

void
zed_msgs__msg__SvoStatus__fini(zed_msgs__msg__SvoStatus * msg)
{
  if (!msg) {
    return;
  }
  // file_name
  rosidl_runtime_c__String__fini(&msg->file_name);
  // status
  // frame_ts
  // frame_id
  // total_frames
  // loop_active
  // loop_count
  // real_time_mode
}

bool
zed_msgs__msg__SvoStatus__are_equal(const zed_msgs__msg__SvoStatus * lhs, const zed_msgs__msg__SvoStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_name), &(rhs->file_name)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // frame_ts
  if (lhs->frame_ts != rhs->frame_ts) {
    return false;
  }
  // frame_id
  if (lhs->frame_id != rhs->frame_id) {
    return false;
  }
  // total_frames
  if (lhs->total_frames != rhs->total_frames) {
    return false;
  }
  // loop_active
  if (lhs->loop_active != rhs->loop_active) {
    return false;
  }
  // loop_count
  if (lhs->loop_count != rhs->loop_count) {
    return false;
  }
  // real_time_mode
  if (lhs->real_time_mode != rhs->real_time_mode) {
    return false;
  }
  return true;
}

bool
zed_msgs__msg__SvoStatus__copy(
  const zed_msgs__msg__SvoStatus * input,
  zed_msgs__msg__SvoStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__copy(
      &(input->file_name), &(output->file_name)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // frame_ts
  output->frame_ts = input->frame_ts;
  // frame_id
  output->frame_id = input->frame_id;
  // total_frames
  output->total_frames = input->total_frames;
  // loop_active
  output->loop_active = input->loop_active;
  // loop_count
  output->loop_count = input->loop_count;
  // real_time_mode
  output->real_time_mode = input->real_time_mode;
  return true;
}

zed_msgs__msg__SvoStatus *
zed_msgs__msg__SvoStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zed_msgs__msg__SvoStatus * msg = (zed_msgs__msg__SvoStatus *)allocator.allocate(sizeof(zed_msgs__msg__SvoStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_msgs__msg__SvoStatus));
  bool success = zed_msgs__msg__SvoStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zed_msgs__msg__SvoStatus__destroy(zed_msgs__msg__SvoStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zed_msgs__msg__SvoStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zed_msgs__msg__SvoStatus__Sequence__init(zed_msgs__msg__SvoStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zed_msgs__msg__SvoStatus * data = NULL;

  if (size) {
    data = (zed_msgs__msg__SvoStatus *)allocator.zero_allocate(size, sizeof(zed_msgs__msg__SvoStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_msgs__msg__SvoStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_msgs__msg__SvoStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
zed_msgs__msg__SvoStatus__Sequence__fini(zed_msgs__msg__SvoStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zed_msgs__msg__SvoStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

zed_msgs__msg__SvoStatus__Sequence *
zed_msgs__msg__SvoStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zed_msgs__msg__SvoStatus__Sequence * array = (zed_msgs__msg__SvoStatus__Sequence *)allocator.allocate(sizeof(zed_msgs__msg__SvoStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zed_msgs__msg__SvoStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zed_msgs__msg__SvoStatus__Sequence__destroy(zed_msgs__msg__SvoStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zed_msgs__msg__SvoStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zed_msgs__msg__SvoStatus__Sequence__are_equal(const zed_msgs__msg__SvoStatus__Sequence * lhs, const zed_msgs__msg__SvoStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zed_msgs__msg__SvoStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zed_msgs__msg__SvoStatus__Sequence__copy(
  const zed_msgs__msg__SvoStatus__Sequence * input,
  zed_msgs__msg__SvoStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zed_msgs__msg__SvoStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zed_msgs__msg__SvoStatus * data =
      (zed_msgs__msg__SvoStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zed_msgs__msg__SvoStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zed_msgs__msg__SvoStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zed_msgs__msg__SvoStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
