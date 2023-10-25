// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/HADMapRoute.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `start_pose`
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `segments`
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__functions.h"

bool
autoware_auto_planning_msgs__msg__HADMapRoute__init(autoware_auto_planning_msgs__msg__HADMapRoute * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
    return false;
  }
  // start_pose
  if (!geometry_msgs__msg__Pose__init(&msg->start_pose)) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__init(&msg->goal_pose)) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
    return false;
  }
  // segments
  if (!autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__init(&msg->segments, 0)) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__msg__HADMapRoute__fini(autoware_auto_planning_msgs__msg__HADMapRoute * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // start_pose
  geometry_msgs__msg__Pose__fini(&msg->start_pose);
  // goal_pose
  geometry_msgs__msg__Pose__fini(&msg->goal_pose);
  // segments
  autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__fini(&msg->segments);
}

bool
autoware_auto_planning_msgs__msg__HADMapRoute__are_equal(const autoware_auto_planning_msgs__msg__HADMapRoute * lhs, const autoware_auto_planning_msgs__msg__HADMapRoute * rhs)
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
  // start_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->start_pose), &(rhs->start_pose)))
  {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->goal_pose), &(rhs->goal_pose)))
  {
    return false;
  }
  // segments
  if (!autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__are_equal(
      &(lhs->segments), &(rhs->segments)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__HADMapRoute__copy(
  const autoware_auto_planning_msgs__msg__HADMapRoute * input,
  autoware_auto_planning_msgs__msg__HADMapRoute * output)
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
  // start_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->start_pose), &(output->start_pose)))
  {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->goal_pose), &(output->goal_pose)))
  {
    return false;
  }
  // segments
  if (!autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__copy(
      &(input->segments), &(output->segments)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__msg__HADMapRoute *
autoware_auto_planning_msgs__msg__HADMapRoute__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__HADMapRoute * msg = (autoware_auto_planning_msgs__msg__HADMapRoute *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__HADMapRoute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__HADMapRoute));
  bool success = autoware_auto_planning_msgs__msg__HADMapRoute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__HADMapRoute__destroy(autoware_auto_planning_msgs__msg__HADMapRoute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__msg__HADMapRoute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__init(autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__HADMapRoute * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__msg__HADMapRoute *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__msg__HADMapRoute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__HADMapRoute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__HADMapRoute__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__fini(autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * array)
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
      autoware_auto_planning_msgs__msg__HADMapRoute__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__HADMapRoute__Sequence *
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * array = (autoware_auto_planning_msgs__msg__HADMapRoute__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__HADMapRoute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__destroy(autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__are_equal(const autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * lhs, const autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__HADMapRoute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__HADMapRoute__Sequence__copy(
  const autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * input,
  autoware_auto_planning_msgs__msg__HADMapRoute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__msg__HADMapRoute);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__msg__HADMapRoute * data =
      (autoware_auto_planning_msgs__msg__HADMapRoute *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__msg__HADMapRoute__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__msg__HADMapRoute__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__HADMapRoute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
