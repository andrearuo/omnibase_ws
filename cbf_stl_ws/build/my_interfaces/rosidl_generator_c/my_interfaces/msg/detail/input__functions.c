// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:msg/Input.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `temp_operator`
#include "rosidl_runtime_c/string_functions.h"
// Member `goal`
// Member `goal2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
my_interfaces__msg__Input__init(my_interfaces__msg__Input * msg)
{
  if (!msg) {
    return false;
  }
  // temp_operator
  if (!rosidl_runtime_c__String__init(&msg->temp_operator)) {
    my_interfaces__msg__Input__fini(msg);
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal, 0)) {
    my_interfaces__msg__Input__fini(msg);
    return false;
  }
  // goal2
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal2, 0)) {
    my_interfaces__msg__Input__fini(msg);
    return false;
  }
  // ta
  // tb
  // tab
  return true;
}

void
my_interfaces__msg__Input__fini(my_interfaces__msg__Input * msg)
{
  if (!msg) {
    return;
  }
  // temp_operator
  rosidl_runtime_c__String__fini(&msg->temp_operator);
  // goal
  rosidl_runtime_c__double__Sequence__fini(&msg->goal);
  // goal2
  rosidl_runtime_c__double__Sequence__fini(&msg->goal2);
  // ta
  // tb
  // tab
}

bool
my_interfaces__msg__Input__are_equal(const my_interfaces__msg__Input * lhs, const my_interfaces__msg__Input * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temp_operator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->temp_operator), &(rhs->temp_operator)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // goal2
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->goal2), &(rhs->goal2)))
  {
    return false;
  }
  // ta
  if (lhs->ta != rhs->ta) {
    return false;
  }
  // tb
  if (lhs->tb != rhs->tb) {
    return false;
  }
  // tab
  if (lhs->tab != rhs->tab) {
    return false;
  }
  return true;
}

bool
my_interfaces__msg__Input__copy(
  const my_interfaces__msg__Input * input,
  my_interfaces__msg__Input * output)
{
  if (!input || !output) {
    return false;
  }
  // temp_operator
  if (!rosidl_runtime_c__String__copy(
      &(input->temp_operator), &(output->temp_operator)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // goal2
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->goal2), &(output->goal2)))
  {
    return false;
  }
  // ta
  output->ta = input->ta;
  // tb
  output->tb = input->tb;
  // tab
  output->tab = input->tab;
  return true;
}

my_interfaces__msg__Input *
my_interfaces__msg__Input__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__Input * msg = (my_interfaces__msg__Input *)allocator.allocate(sizeof(my_interfaces__msg__Input), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__msg__Input));
  bool success = my_interfaces__msg__Input__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__msg__Input__destroy(my_interfaces__msg__Input * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__msg__Input__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__msg__Input__Sequence__init(my_interfaces__msg__Input__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__Input * data = NULL;

  if (size) {
    data = (my_interfaces__msg__Input *)allocator.zero_allocate(size, sizeof(my_interfaces__msg__Input), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__msg__Input__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__msg__Input__fini(&data[i - 1]);
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
my_interfaces__msg__Input__Sequence__fini(my_interfaces__msg__Input__Sequence * array)
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
      my_interfaces__msg__Input__fini(&array->data[i]);
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

my_interfaces__msg__Input__Sequence *
my_interfaces__msg__Input__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__Input__Sequence * array = (my_interfaces__msg__Input__Sequence *)allocator.allocate(sizeof(my_interfaces__msg__Input__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__msg__Input__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__msg__Input__Sequence__destroy(my_interfaces__msg__Input__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__msg__Input__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__msg__Input__Sequence__are_equal(const my_interfaces__msg__Input__Sequence * lhs, const my_interfaces__msg__Input__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__msg__Input__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__msg__Input__Sequence__copy(
  const my_interfaces__msg__Input__Sequence * input,
  my_interfaces__msg__Input__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__msg__Input);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__msg__Input * data =
      (my_interfaces__msg__Input *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__msg__Input__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__msg__Input__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__msg__Input__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
