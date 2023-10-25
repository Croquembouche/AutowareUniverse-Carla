// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/PathWithLaneId.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/path_with_lane_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__functions.h"
// Member `left_bound`
// Member `right_bound`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
autoware_auto_planning_msgs__msg__PathWithLaneId__init(autoware_auto_planning_msgs__msg__PathWithLaneId * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
    return false;
  }
  // points
  if (!autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__init(&msg->points, 0)) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
    return false;
  }
  // left_bound
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->left_bound, 0)) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
    return false;
  }
  // right_bound
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->right_bound, 0)) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__msg__PathWithLaneId__fini(autoware_auto_planning_msgs__msg__PathWithLaneId * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // points
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__fini(&msg->points);
  // left_bound
  geometry_msgs__msg__Point__Sequence__fini(&msg->left_bound);
  // right_bound
  geometry_msgs__msg__Point__Sequence__fini(&msg->right_bound);
}

bool
autoware_auto_planning_msgs__msg__PathWithLaneId__are_equal(const autoware_auto_planning_msgs__msg__PathWithLaneId * lhs, const autoware_auto_planning_msgs__msg__PathWithLaneId * rhs)
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
  // points
  if (!autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // left_bound
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->left_bound), &(rhs->left_bound)))
  {
    return false;
  }
  // right_bound
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->right_bound), &(rhs->right_bound)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__PathWithLaneId__copy(
  const autoware_auto_planning_msgs__msg__PathWithLaneId * input,
  autoware_auto_planning_msgs__msg__PathWithLaneId * output)
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
  // points
  if (!autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // left_bound
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->left_bound), &(output->left_bound)))
  {
    return false;
  }
  // right_bound
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->right_bound), &(output->right_bound)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__msg__PathWithLaneId *
autoware_auto_planning_msgs__msg__PathWithLaneId__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathWithLaneId * msg = (autoware_auto_planning_msgs__msg__PathWithLaneId *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId));
  bool success = autoware_auto_planning_msgs__msg__PathWithLaneId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__PathWithLaneId__destroy(autoware_auto_planning_msgs__msg__PathWithLaneId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__init(autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathWithLaneId * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__msg__PathWithLaneId *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__PathWithLaneId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__PathWithLaneId__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__fini(autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * array)
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
      autoware_auto_planning_msgs__msg__PathWithLaneId__fini(&array->data[i]);
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

autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence *
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * array = (autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__destroy(autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__are_equal(const autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * lhs, const autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__PathWithLaneId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence__copy(
  const autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * input,
  autoware_auto_planning_msgs__msg__PathWithLaneId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__msg__PathWithLaneId * data =
      (autoware_auto_planning_msgs__msg__PathWithLaneId *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__msg__PathWithLaneId__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__msg__PathWithLaneId__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__msg__PathWithLaneId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
