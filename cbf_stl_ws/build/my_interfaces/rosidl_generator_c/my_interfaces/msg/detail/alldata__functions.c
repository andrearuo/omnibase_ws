// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:msg/Alldata.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/alldata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_interfaces__msg__Alldata__init(my_interfaces__msg__Alldata * msg)
{
  if (!msg) {
    return false;
  }
  // all_v_real
  // all_v_max
  // all_h_barrier
  // all_x_pos
  // all_y_pos
  // all_theta_rot
  // all_distance_hr
  // all_global_counter
  // all_temporal_operator_counter
  // all_flag_finish
  // all_obs_x_closer
  // all_obs_y_closer
  return true;
}

void
my_interfaces__msg__Alldata__fini(my_interfaces__msg__Alldata * msg)
{
  if (!msg) {
    return;
  }
  // all_v_real
  // all_v_max
  // all_h_barrier
  // all_x_pos
  // all_y_pos
  // all_theta_rot
  // all_distance_hr
  // all_global_counter
  // all_temporal_operator_counter
  // all_flag_finish
  // all_obs_x_closer
  // all_obs_y_closer
}

bool
my_interfaces__msg__Alldata__are_equal(const my_interfaces__msg__Alldata * lhs, const my_interfaces__msg__Alldata * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // all_v_real
  if (lhs->all_v_real != rhs->all_v_real) {
    return false;
  }
  // all_v_max
  if (lhs->all_v_max != rhs->all_v_max) {
    return false;
  }
  // all_h_barrier
  if (lhs->all_h_barrier != rhs->all_h_barrier) {
    return false;
  }
  // all_x_pos
  if (lhs->all_x_pos != rhs->all_x_pos) {
    return false;
  }
  // all_y_pos
  if (lhs->all_y_pos != rhs->all_y_pos) {
    return false;
  }
  // all_theta_rot
  if (lhs->all_theta_rot != rhs->all_theta_rot) {
    return false;
  }
  // all_distance_hr
  if (lhs->all_distance_hr != rhs->all_distance_hr) {
    return false;
  }
  // all_global_counter
  if (lhs->all_global_counter != rhs->all_global_counter) {
    return false;
  }
  // all_temporal_operator_counter
  if (lhs->all_temporal_operator_counter != rhs->all_temporal_operator_counter) {
    return false;
  }
  // all_flag_finish
  if (lhs->all_flag_finish != rhs->all_flag_finish) {
    return false;
  }
  // all_obs_x_closer
  if (lhs->all_obs_x_closer != rhs->all_obs_x_closer) {
    return false;
  }
  // all_obs_y_closer
  if (lhs->all_obs_y_closer != rhs->all_obs_y_closer) {
    return false;
  }
  return true;
}

bool
my_interfaces__msg__Alldata__copy(
  const my_interfaces__msg__Alldata * input,
  my_interfaces__msg__Alldata * output)
{
  if (!input || !output) {
    return false;
  }
  // all_v_real
  output->all_v_real = input->all_v_real;
  // all_v_max
  output->all_v_max = input->all_v_max;
  // all_h_barrier
  output->all_h_barrier = input->all_h_barrier;
  // all_x_pos
  output->all_x_pos = input->all_x_pos;
  // all_y_pos
  output->all_y_pos = input->all_y_pos;
  // all_theta_rot
  output->all_theta_rot = input->all_theta_rot;
  // all_distance_hr
  output->all_distance_hr = input->all_distance_hr;
  // all_global_counter
  output->all_global_counter = input->all_global_counter;
  // all_temporal_operator_counter
  output->all_temporal_operator_counter = input->all_temporal_operator_counter;
  // all_flag_finish
  output->all_flag_finish = input->all_flag_finish;
  // all_obs_x_closer
  output->all_obs_x_closer = input->all_obs_x_closer;
  // all_obs_y_closer
  output->all_obs_y_closer = input->all_obs_y_closer;
  return true;
}

my_interfaces__msg__Alldata *
my_interfaces__msg__Alldata__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__Alldata * msg = (my_interfaces__msg__Alldata *)allocator.allocate(sizeof(my_interfaces__msg__Alldata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__msg__Alldata));
  bool success = my_interfaces__msg__Alldata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__msg__Alldata__destroy(my_interfaces__msg__Alldata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__msg__Alldata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__msg__Alldata__Sequence__init(my_interfaces__msg__Alldata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__Alldata * data = NULL;

  if (size) {
    data = (my_interfaces__msg__Alldata *)allocator.zero_allocate(size, sizeof(my_interfaces__msg__Alldata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__msg__Alldata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__msg__Alldata__fini(&data[i - 1]);
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
my_interfaces__msg__Alldata__Sequence__fini(my_interfaces__msg__Alldata__Sequence * array)
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
      my_interfaces__msg__Alldata__fini(&array->data[i]);
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

my_interfaces__msg__Alldata__Sequence *
my_interfaces__msg__Alldata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__Alldata__Sequence * array = (my_interfaces__msg__Alldata__Sequence *)allocator.allocate(sizeof(my_interfaces__msg__Alldata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__msg__Alldata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__msg__Alldata__Sequence__destroy(my_interfaces__msg__Alldata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__msg__Alldata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__msg__Alldata__Sequence__are_equal(const my_interfaces__msg__Alldata__Sequence * lhs, const my_interfaces__msg__Alldata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__msg__Alldata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__msg__Alldata__Sequence__copy(
  const my_interfaces__msg__Alldata__Sequence * input,
  my_interfaces__msg__Alldata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__msg__Alldata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__msg__Alldata * data =
      (my_interfaces__msg__Alldata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__msg__Alldata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__msg__Alldata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__msg__Alldata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
