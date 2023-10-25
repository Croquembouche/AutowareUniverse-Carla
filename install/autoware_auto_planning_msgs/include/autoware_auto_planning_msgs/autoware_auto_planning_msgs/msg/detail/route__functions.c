// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `start_point`
// Member `goal_point`
#include "autoware_auto_planning_msgs/msg/detail/trajectory_point__functions.h"
// Member `primitives`
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__functions.h"

bool
autoware_auto_planning_msgs__msg__Route__init(autoware_auto_planning_msgs__msg__Route * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  // start_point
  if (!autoware_auto_planning_msgs__msg__TrajectoryPoint__init(&msg->start_point)) {
    autoware_auto_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  // goal_point
  if (!autoware_auto_planning_msgs__msg__TrajectoryPoint__init(&msg->goal_point)) {
    autoware_auto_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  // primitives
  if (!autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__init(&msg->primitives, 0)) {
    autoware_auto_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__msg__Route__fini(autoware_auto_planning_msgs__msg__Route * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // start_point
  autoware_auto_planning_msgs__msg__TrajectoryPoint__fini(&msg->start_point);
  // goal_point
  autoware_auto_planning_msgs__msg__TrajectoryPoint__fini(&msg->goal_point);
  // primitives
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__fini(&msg->primitives);
}

bool
autoware_auto_planning_msgs__msg__Route__are_equal(const autoware_auto_planning_msgs__msg__Route * lhs, const autoware_auto_planning_msgs__msg__Route * rhs)
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
  // start_point
  if (!autoware_auto_planning_msgs__msg__TrajectoryPoint__are_equal(
      &(lhs->start_point), &(rhs->start_point)))
  {
    return false;
  }
  // goal_point
  if (!autoware_auto_planning_msgs__msg__TrajectoryPoint__are_equal(
      &(lhs->goal_point), &(rhs->goal_point)))
  {
    return false;
  }
  // primitives
  if (!autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__are_equal(
      &(lhs->primitives), &(rhs->primitives)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__Route__copy(
  const autoware_auto_planning_msgs__msg__Route * input,
  autoware_auto_planning_msgs__msg__Route * output)
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
  // start_point
  if (!autoware_auto_planning_msgs__msg__TrajectoryPoint__copy(
      &(input->start_point), &(output->start_point)))
  {
    return false;
  }
  // goal_point
  if (!autoware_auto_planning_msgs__msg__TrajectoryPoint__copy(
      &(input->goal_point), &(output->goal_point)))
  {
    return false;
  }
  // primitives
  if (!autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__copy(
      &(input->primitives), &(output->primitives)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__msg__Route *
autoware_auto_planning_msgs__msg__Route__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__Route * msg = (autoware_auto_planning_msgs__msg__Route *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__Route), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__Route));
  bool success = autoware_auto_planning_msgs__msg__Route__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__Route__destroy(autoware_auto_planning_msgs__msg__Route * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__msg__Route__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__msg__Route__Sequence__init(autoware_auto_planning_msgs__msg__Route__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__Route * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__msg__Route *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__msg__Route), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__Route__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__Route__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__Route__Sequence__fini(autoware_auto_planning_msgs__msg__Route__Sequence * array)
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
      autoware_auto_planning_msgs__msg__Route__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__Route__Sequence *
autoware_auto_planning_msgs__msg__Route__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__Route__Sequence * array = (autoware_auto_planning_msgs__msg__Route__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__Route__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__Route__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__Route__Sequence__destroy(autoware_auto_planning_msgs__msg__Route__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__msg__Route__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__msg__Route__Sequence__are_equal(const autoware_auto_planning_msgs__msg__Route__Sequence * lhs, const autoware_auto_planning_msgs__msg__Route__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__Route__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__Route__Sequence__copy(
  const autoware_auto_planning_msgs__msg__Route__Sequence * input,
  autoware_auto_planning_msgs__msg__Route__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__msg__Route);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__msg__Route * data =
      (autoware_auto_planning_msgs__msg__Route *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__msg__Route__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__msg__Route__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__Route__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
