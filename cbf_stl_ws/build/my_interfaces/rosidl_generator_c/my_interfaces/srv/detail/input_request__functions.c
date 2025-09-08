// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:srv/InputRequest.idl
// generated code does not contain a copyright notice
#include "my_interfaces/srv/detail/input_request__functions.h"

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
my_interfaces__srv__InputRequest_Request__init(my_interfaces__srv__InputRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // temp_operator
  if (!rosidl_runtime_c__String__init(&msg->temp_operator)) {
    my_interfaces__srv__InputRequest_Request__fini(msg);
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal, 0)) {
    my_interfaces__srv__InputRequest_Request__fini(msg);
    return false;
  }
  // goal2
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal2, 0)) {
    my_interfaces__srv__InputRequest_Request__fini(msg);
    return false;
  }
  // ta
  // tb
  // tab
  // epsilon
  // collision_avoidance
  // velocity_constraint
  // angular_constraint
  // eta
  // b0_min
  // b0_max
  // margin
  // k
  // esp
  return true;
}

void
my_interfaces__srv__InputRequest_Request__fini(my_interfaces__srv__InputRequest_Request * msg)
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
  // epsilon
  // collision_avoidance
  // velocity_constraint
  // angular_constraint
  // eta
  // b0_min
  // b0_max
  // margin
  // k
  // esp
}

bool
my_interfaces__srv__InputRequest_Request__are_equal(const my_interfaces__srv__InputRequest_Request * lhs, const my_interfaces__srv__InputRequest_Request * rhs)
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
  // epsilon
  if (lhs->epsilon != rhs->epsilon) {
    return false;
  }
  // collision_avoidance
  if (lhs->collision_avoidance != rhs->collision_avoidance) {
    return false;
  }
  // velocity_constraint
  if (lhs->velocity_constraint != rhs->velocity_constraint) {
    return false;
  }
  // angular_constraint
  if (lhs->angular_constraint != rhs->angular_constraint) {
    return false;
  }
  // eta
  if (lhs->eta != rhs->eta) {
    return false;
  }
  // b0_min
  if (lhs->b0_min != rhs->b0_min) {
    return false;
  }
  // b0_max
  if (lhs->b0_max != rhs->b0_max) {
    return false;
  }
  // margin
  if (lhs->margin != rhs->margin) {
    return false;
  }
  // k
  if (lhs->k != rhs->k) {
    return false;
  }
  // esp
  if (lhs->esp != rhs->esp) {
    return false;
  }
  return true;
}

bool
my_interfaces__srv__InputRequest_Request__copy(
  const my_interfaces__srv__InputRequest_Request * input,
  my_interfaces__srv__InputRequest_Request * output)
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
  // epsilon
  output->epsilon = input->epsilon;
  // collision_avoidance
  output->collision_avoidance = input->collision_avoidance;
  // velocity_constraint
  output->velocity_constraint = input->velocity_constraint;
  // angular_constraint
  output->angular_constraint = input->angular_constraint;
  // eta
  output->eta = input->eta;
  // b0_min
  output->b0_min = input->b0_min;
  // b0_max
  output->b0_max = input->b0_max;
  // margin
  output->margin = input->margin;
  // k
  output->k = input->k;
  // esp
  output->esp = input->esp;
  return true;
}

my_interfaces__srv__InputRequest_Request *
my_interfaces__srv__InputRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__srv__InputRequest_Request * msg = (my_interfaces__srv__InputRequest_Request *)allocator.allocate(sizeof(my_interfaces__srv__InputRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__srv__InputRequest_Request));
  bool success = my_interfaces__srv__InputRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__srv__InputRequest_Request__destroy(my_interfaces__srv__InputRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__srv__InputRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__srv__InputRequest_Request__Sequence__init(my_interfaces__srv__InputRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__srv__InputRequest_Request * data = NULL;

  if (size) {
    data = (my_interfaces__srv__InputRequest_Request *)allocator.zero_allocate(size, sizeof(my_interfaces__srv__InputRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__srv__InputRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__srv__InputRequest_Request__fini(&data[i - 1]);
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
my_interfaces__srv__InputRequest_Request__Sequence__fini(my_interfaces__srv__InputRequest_Request__Sequence * array)
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
      my_interfaces__srv__InputRequest_Request__fini(&array->data[i]);
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

my_interfaces__srv__InputRequest_Request__Sequence *
my_interfaces__srv__InputRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__srv__InputRequest_Request__Sequence * array = (my_interfaces__srv__InputRequest_Request__Sequence *)allocator.allocate(sizeof(my_interfaces__srv__InputRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__srv__InputRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__srv__InputRequest_Request__Sequence__destroy(my_interfaces__srv__InputRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__srv__InputRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__srv__InputRequest_Request__Sequence__are_equal(const my_interfaces__srv__InputRequest_Request__Sequence * lhs, const my_interfaces__srv__InputRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__srv__InputRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__srv__InputRequest_Request__Sequence__copy(
  const my_interfaces__srv__InputRequest_Request__Sequence * input,
  my_interfaces__srv__InputRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__srv__InputRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__srv__InputRequest_Request * data =
      (my_interfaces__srv__InputRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__srv__InputRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__srv__InputRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__srv__InputRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
my_interfaces__srv__InputRequest_Response__init(my_interfaces__srv__InputRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // answer
  return true;
}

void
my_interfaces__srv__InputRequest_Response__fini(my_interfaces__srv__InputRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // answer
}

bool
my_interfaces__srv__InputRequest_Response__are_equal(const my_interfaces__srv__InputRequest_Response * lhs, const my_interfaces__srv__InputRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // answer
  if (lhs->answer != rhs->answer) {
    return false;
  }
  return true;
}

bool
my_interfaces__srv__InputRequest_Response__copy(
  const my_interfaces__srv__InputRequest_Response * input,
  my_interfaces__srv__InputRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // answer
  output->answer = input->answer;
  return true;
}

my_interfaces__srv__InputRequest_Response *
my_interfaces__srv__InputRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__srv__InputRequest_Response * msg = (my_interfaces__srv__InputRequest_Response *)allocator.allocate(sizeof(my_interfaces__srv__InputRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__srv__InputRequest_Response));
  bool success = my_interfaces__srv__InputRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__srv__InputRequest_Response__destroy(my_interfaces__srv__InputRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__srv__InputRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__srv__InputRequest_Response__Sequence__init(my_interfaces__srv__InputRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__srv__InputRequest_Response * data = NULL;

  if (size) {
    data = (my_interfaces__srv__InputRequest_Response *)allocator.zero_allocate(size, sizeof(my_interfaces__srv__InputRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__srv__InputRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__srv__InputRequest_Response__fini(&data[i - 1]);
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
my_interfaces__srv__InputRequest_Response__Sequence__fini(my_interfaces__srv__InputRequest_Response__Sequence * array)
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
      my_interfaces__srv__InputRequest_Response__fini(&array->data[i]);
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

my_interfaces__srv__InputRequest_Response__Sequence *
my_interfaces__srv__InputRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__srv__InputRequest_Response__Sequence * array = (my_interfaces__srv__InputRequest_Response__Sequence *)allocator.allocate(sizeof(my_interfaces__srv__InputRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__srv__InputRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__srv__InputRequest_Response__Sequence__destroy(my_interfaces__srv__InputRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__srv__InputRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__srv__InputRequest_Response__Sequence__are_equal(const my_interfaces__srv__InputRequest_Response__Sequence * lhs, const my_interfaces__srv__InputRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__srv__InputRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__srv__InputRequest_Response__Sequence__copy(
  const my_interfaces__srv__InputRequest_Response__Sequence * input,
  my_interfaces__srv__InputRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__srv__InputRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__srv__InputRequest_Response * data =
      (my_interfaces__srv__InputRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__srv__InputRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__srv__InputRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__srv__InputRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
