// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/OrderMovement.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/order_movement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
autoware_auto_planning_msgs__msg__OrderMovement__init(autoware_auto_planning_msgs__msg__OrderMovement * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_planning_msgs__msg__OrderMovement__fini(msg);
    return false;
  }
  // order_movement
  msg->order_movement = 0;
  return true;
}

void
autoware_auto_planning_msgs__msg__OrderMovement__fini(autoware_auto_planning_msgs__msg__OrderMovement * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // order_movement
}

bool
autoware_auto_planning_msgs__msg__OrderMovement__are_equal(const autoware_auto_planning_msgs__msg__OrderMovement * lhs, const autoware_auto_planning_msgs__msg__OrderMovement * rhs)
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
  // order_movement
  if (lhs->order_movement != rhs->order_movement) {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__OrderMovement__copy(
  const autoware_auto_planning_msgs__msg__OrderMovement * input,
  autoware_auto_planning_msgs__msg__OrderMovement * output)
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
  // order_movement
  output->order_movement = input->order_movement;
  return true;
}

autoware_auto_planning_msgs__msg__OrderMovement *
autoware_auto_planning_msgs__msg__OrderMovement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__OrderMovement * msg = (autoware_auto_planning_msgs__msg__OrderMovement *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__OrderMovement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__OrderMovement));
  bool success = autoware_auto_planning_msgs__msg__OrderMovement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__OrderMovement__destroy(autoware_auto_planning_msgs__msg__OrderMovement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__msg__OrderMovement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__msg__OrderMovement__Sequence__init(autoware_auto_planning_msgs__msg__OrderMovement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__OrderMovement * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__msg__OrderMovement *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__msg__OrderMovement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__OrderMovement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__OrderMovement__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__OrderMovement__Sequence__fini(autoware_auto_planning_msgs__msg__OrderMovement__Sequence * array)
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
      autoware_auto_planning_msgs__msg__OrderMovement__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__OrderMovement__Sequence *
autoware_auto_planning_msgs__msg__OrderMovement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__OrderMovement__Sequence * array = (autoware_auto_planning_msgs__msg__OrderMovement__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__OrderMovement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__OrderMovement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__OrderMovement__Sequence__destroy(autoware_auto_planning_msgs__msg__OrderMovement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__msg__OrderMovement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__msg__OrderMovement__Sequence__are_equal(const autoware_auto_planning_msgs__msg__OrderMovement__Sequence * lhs, const autoware_auto_planning_msgs__msg__OrderMovement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__OrderMovement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__OrderMovement__Sequence__copy(
  const autoware_auto_planning_msgs__msg__OrderMovement__Sequence * input,
  autoware_auto_planning_msgs__msg__OrderMovement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__msg__OrderMovement);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__msg__OrderMovement * data =
      (autoware_auto_planning_msgs__msg__OrderMovement *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__msg__OrderMovement__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__msg__OrderMovement__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__OrderMovement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
