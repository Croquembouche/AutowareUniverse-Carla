// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_geometry_msgs:msg/RelativePositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "autoware_auto_geometry_msgs/msg/detail/relative_position_with_covariance_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__init(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(msg);
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__init(&msg->child_frame_id)) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // child_frame_id
  rosidl_runtime_c__String__fini(&msg->child_frame_id);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // covariance
}

bool
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__are_equal(const autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * lhs, const autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * rhs)
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
  // child_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->child_frame_id), &(rhs->child_frame_id)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__copy(
  const autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * input,
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * output)
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
  // child_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->child_frame_id), &(output->child_frame_id)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  return true;
}

autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped *
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * msg = (autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped *)allocator.allocate(sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped));
  bool success = autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__destroy(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__init(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * data = NULL;

  if (size) {
    data = (autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped *)allocator.zero_allocate(size, sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(&data[i - 1]);
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
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__fini(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * array)
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
      autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(&array->data[i]);
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

autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence *
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * array = (autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence *)allocator.allocate(sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__destroy(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__are_equal(const autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * lhs, const autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__copy(
  const autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * input,
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * data =
      (autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
