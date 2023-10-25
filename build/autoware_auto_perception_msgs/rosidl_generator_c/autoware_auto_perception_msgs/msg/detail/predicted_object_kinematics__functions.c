// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `initial_pose_with_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `initial_twist_with_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `initial_acceleration_with_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"
// Member `predicted_paths`
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__functions.h"

bool
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__init(autoware_auto_perception_msgs__msg__PredictedObjectKinematics * msg)
{
  if (!msg) {
    return false;
  }
  // initial_pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->initial_pose_with_covariance)) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
    return false;
  }
  // initial_twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->initial_twist_with_covariance)) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
    return false;
  }
  // initial_acceleration_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__init(&msg->initial_acceleration_with_covariance)) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
    return false;
  }
  // predicted_paths
  if (!autoware_auto_perception_msgs__msg__PredictedPath__Sequence__init(&msg->predicted_paths, 0)) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(autoware_auto_perception_msgs__msg__PredictedObjectKinematics * msg)
{
  if (!msg) {
    return;
  }
  // initial_pose_with_covariance
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->initial_pose_with_covariance);
  // initial_twist_with_covariance
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->initial_twist_with_covariance);
  // initial_acceleration_with_covariance
  geometry_msgs__msg__AccelWithCovariance__fini(&msg->initial_acceleration_with_covariance);
  // predicted_paths
  autoware_auto_perception_msgs__msg__PredictedPath__Sequence__fini(&msg->predicted_paths);
}

bool
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__are_equal(const autoware_auto_perception_msgs__msg__PredictedObjectKinematics * lhs, const autoware_auto_perception_msgs__msg__PredictedObjectKinematics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // initial_pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->initial_pose_with_covariance), &(rhs->initial_pose_with_covariance)))
  {
    return false;
  }
  // initial_twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->initial_twist_with_covariance), &(rhs->initial_twist_with_covariance)))
  {
    return false;
  }
  // initial_acceleration_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__are_equal(
      &(lhs->initial_acceleration_with_covariance), &(rhs->initial_acceleration_with_covariance)))
  {
    return false;
  }
  // predicted_paths
  if (!autoware_auto_perception_msgs__msg__PredictedPath__Sequence__are_equal(
      &(lhs->predicted_paths), &(rhs->predicted_paths)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__copy(
  const autoware_auto_perception_msgs__msg__PredictedObjectKinematics * input,
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics * output)
{
  if (!input || !output) {
    return false;
  }
  // initial_pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->initial_pose_with_covariance), &(output->initial_pose_with_covariance)))
  {
    return false;
  }
  // initial_twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->initial_twist_with_covariance), &(output->initial_twist_with_covariance)))
  {
    return false;
  }
  // initial_acceleration_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__copy(
      &(input->initial_acceleration_with_covariance), &(output->initial_acceleration_with_covariance)))
  {
    return false;
  }
  // predicted_paths
  if (!autoware_auto_perception_msgs__msg__PredictedPath__Sequence__copy(
      &(input->predicted_paths), &(output->predicted_paths)))
  {
    return false;
  }
  return true;
}

autoware_auto_perception_msgs__msg__PredictedObjectKinematics *
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics * msg = (autoware_auto_perception_msgs__msg__PredictedObjectKinematics *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics));
  bool success = autoware_auto_perception_msgs__msg__PredictedObjectKinematics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__destroy(autoware_auto_perception_msgs__msg__PredictedObjectKinematics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__init(autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics * data = NULL;

  if (size) {
    data = (autoware_auto_perception_msgs__msg__PredictedObjectKinematics *)allocator.zero_allocate(size, sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__PredictedObjectKinematics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__fini(autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * array)
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
      autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence *
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * array = (autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__destroy(autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__are_equal(const autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * lhs, const autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__PredictedObjectKinematics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence__copy(
  const autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * input,
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__PredictedObjectKinematics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_perception_msgs__msg__PredictedObjectKinematics * data =
      (autoware_auto_perception_msgs__msg__PredictedObjectKinematics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__PredictedObjectKinematics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__PredictedObjectKinematics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
