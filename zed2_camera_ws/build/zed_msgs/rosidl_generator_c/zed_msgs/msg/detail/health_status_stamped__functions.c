// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
// generated code does not contain a copyright notice
#include "zed_msgs/msg/detail/health_status_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `camera_name`
#include "rosidl_runtime_c/string_functions.h"

bool
zed_msgs__msg__HealthStatusStamped__init(zed_msgs__msg__HealthStatusStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    zed_msgs__msg__HealthStatusStamped__fini(msg);
    return false;
  }
  // serial_number
  // camera_name
  if (!rosidl_runtime_c__String__init(&msg->camera_name)) {
    zed_msgs__msg__HealthStatusStamped__fini(msg);
    return false;
  }
  // low_image_quality
  // low_lighting
  // low_depth_reliability
  // low_motion_sensors_reliability
  return true;
}

void
zed_msgs__msg__HealthStatusStamped__fini(zed_msgs__msg__HealthStatusStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // serial_number
  // camera_name
  rosidl_runtime_c__String__fini(&msg->camera_name);
  // low_image_quality
  // low_lighting
  // low_depth_reliability
  // low_motion_sensors_reliability
}

bool
zed_msgs__msg__HealthStatusStamped__are_equal(const zed_msgs__msg__HealthStatusStamped * lhs, const zed_msgs__msg__HealthStatusStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // serial_number
  if (lhs->serial_number != rhs->serial_number) {
    return false;
  }
  // camera_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_name), &(rhs->camera_name)))
  {
    return false;
  }
  // low_image_quality
  if (lhs->low_image_quality != rhs->low_image_quality) {
    return false;
  }
  // low_lighting
  if (lhs->low_lighting != rhs->low_lighting) {
    return false;
  }
  // low_depth_reliability
  if (lhs->low_depth_reliability != rhs->low_depth_reliability) {
    return false;
  }
  // low_motion_sensors_reliability
  if (lhs->low_motion_sensors_reliability != rhs->low_motion_sensors_reliability) {
    return false;
  }
  return true;
}

bool
zed_msgs__msg__HealthStatusStamped__copy(
  const zed_msgs__msg__HealthStatusStamped * input,
  zed_msgs__msg__HealthStatusStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // serial_number
  output->serial_number = input->serial_number;
  // camera_name
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_name), &(output->camera_name)))
  {
    return false;
  }
  // low_image_quality
  output->low_image_quality = input->low_image_quality;
  // low_lighting
  output->low_lighting = input->low_lighting;
  // low_depth_reliability
  output->low_depth_reliability = input->low_depth_reliability;
  // low_motion_sensors_reliability
  output->low_motion_sensors_reliability = input->low_motion_sensors_reliability;
  return true;
}

zed_msgs__msg__HealthStatusStamped *
zed_msgs__msg__HealthStatusStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zed_msgs__msg__HealthStatusStamped * msg = (zed_msgs__msg__HealthStatusStamped *)allocator.allocate(sizeof(zed_msgs__msg__HealthStatusStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_msgs__msg__HealthStatusStamped));
  bool success = zed_msgs__msg__HealthStatusStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zed_msgs__msg__HealthStatusStamped__destroy(zed_msgs__msg__HealthStatusStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zed_msgs__msg__HealthStatusStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zed_msgs__msg__HealthStatusStamped__Sequence__init(zed_msgs__msg__HealthStatusStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zed_msgs__msg__HealthStatusStamped * data = NULL;

  if (size) {
    data = (zed_msgs__msg__HealthStatusStamped *)allocator.zero_allocate(size, sizeof(zed_msgs__msg__HealthStatusStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_msgs__msg__HealthStatusStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_msgs__msg__HealthStatusStamped__fini(&data[i - 1]);
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
zed_msgs__msg__HealthStatusStamped__Sequence__fini(zed_msgs__msg__HealthStatusStamped__Sequence * array)
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
      zed_msgs__msg__HealthStatusStamped__fini(&array->data[i]);
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

zed_msgs__msg__HealthStatusStamped__Sequence *
zed_msgs__msg__HealthStatusStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zed_msgs__msg__HealthStatusStamped__Sequence * array = (zed_msgs__msg__HealthStatusStamped__Sequence *)allocator.allocate(sizeof(zed_msgs__msg__HealthStatusStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zed_msgs__msg__HealthStatusStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zed_msgs__msg__HealthStatusStamped__Sequence__destroy(zed_msgs__msg__HealthStatusStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zed_msgs__msg__HealthStatusStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zed_msgs__msg__HealthStatusStamped__Sequence__are_equal(const zed_msgs__msg__HealthStatusStamped__Sequence * lhs, const zed_msgs__msg__HealthStatusStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zed_msgs__msg__HealthStatusStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zed_msgs__msg__HealthStatusStamped__Sequence__copy(
  const zed_msgs__msg__HealthStatusStamped__Sequence * input,
  zed_msgs__msg__HealthStatusStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zed_msgs__msg__HealthStatusStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zed_msgs__msg__HealthStatusStamped * data =
      (zed_msgs__msg__HealthStatusStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zed_msgs__msg__HealthStatusStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zed_msgs__msg__HealthStatusStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zed_msgs__msg__HealthStatusStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
