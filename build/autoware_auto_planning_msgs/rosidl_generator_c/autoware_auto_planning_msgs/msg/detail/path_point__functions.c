// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/path_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
autoware_auto_planning_msgs__msg__PathPoint__init(autoware_auto_planning_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_auto_planning_msgs__msg__PathPoint__fini(msg);
    return false;
  }
  // longitudinal_velocity_mps
  msg->longitudinal_velocity_mps = 0.0f;
  // lateral_velocity_mps
  msg->lateral_velocity_mps = 0.0f;
  // heading_rate_rps
  msg->heading_rate_rps = 0.0f;
  // is_final
  msg->is_final = false;
  return true;
}

void
autoware_auto_planning_msgs__msg__PathPoint__fini(autoware_auto_planning_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // longitudinal_velocity_mps
  // lateral_velocity_mps
  // heading_rate_rps
  // is_final
}

bool
autoware_auto_planning_msgs__msg__PathPoint__are_equal(const autoware_auto_planning_msgs__msg__PathPoint * lhs, const autoware_auto_planning_msgs__msg__PathPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // longitudinal_velocity_mps
  if (lhs->longitudinal_velocity_mps != rhs->longitudinal_velocity_mps) {
    return false;
  }
  // lateral_velocity_mps
  if (lhs->lateral_velocity_mps != rhs->lateral_velocity_mps) {
    return false;
  }
  // heading_rate_rps
  if (lhs->heading_rate_rps != rhs->heading_rate_rps) {
    return false;
  }
  // is_final
  if (lhs->is_final != rhs->is_final) {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__PathPoint__copy(
  const autoware_auto_planning_msgs__msg__PathPoint * input,
  autoware_auto_planning_msgs__msg__PathPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // longitudinal_velocity_mps
  output->longitudinal_velocity_mps = input->longitudinal_velocity_mps;
  // lateral_velocity_mps
  output->lateral_velocity_mps = input->lateral_velocity_mps;
  // heading_rate_rps
  output->heading_rate_rps = input->heading_rate_rps;
  // is_final
  output->is_final = input->is_final;
  return true;
}

autoware_auto_planning_msgs__msg__PathPoint *
autoware_auto_planning_msgs__msg__PathPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathPoint * msg = (autoware_auto_planning_msgs__msg__PathPoint *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__PathPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__PathPoint));
  bool success = autoware_auto_planning_msgs__msg__PathPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__PathPoint__destroy(autoware_auto_planning_msgs__msg__PathPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__msg__PathPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__msg__PathPoint__Sequence__init(autoware_auto_planning_msgs__msg__PathPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathPoint * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__msg__PathPoint *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__msg__PathPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__PathPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__PathPoint__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__PathPoint__Sequence__fini(autoware_auto_planning_msgs__msg__PathPoint__Sequence * array)
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
      autoware_auto_planning_msgs__msg__PathPoint__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__PathPoint__Sequence *
autoware_auto_planning_msgs__msg__PathPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathPoint__Sequence * array = (autoware_auto_planning_msgs__msg__PathPoint__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__PathPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__PathPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__PathPoint__Sequence__destroy(autoware_auto_planning_msgs__msg__PathPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__msg__PathPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__msg__PathPoint__Sequence__are_equal(const autoware_auto_planning_msgs__msg__PathPoint__Sequence * lhs, const autoware_auto_planning_msgs__msg__PathPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__PathPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__PathPoint__Sequence__copy(
  const autoware_auto_planning_msgs__msg__PathPoint__Sequence * input,
  autoware_auto_planning_msgs__msg__PathPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__msg__PathPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__msg__PathPoint * data =
      (autoware_auto_planning_msgs__msg__PathPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__msg__PathPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__msg__PathPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__PathPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
