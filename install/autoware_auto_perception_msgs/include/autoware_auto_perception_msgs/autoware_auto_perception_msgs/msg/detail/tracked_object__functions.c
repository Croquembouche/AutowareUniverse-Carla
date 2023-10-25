// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/tracked_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `classification`
#include "autoware_auto_perception_msgs/msg/detail/object_classification__functions.h"
// Member `kinematics`
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__functions.h"
// Member `shape`
#include "autoware_auto_perception_msgs/msg/detail/shape__functions.h"

bool
autoware_auto_perception_msgs__msg__TrackedObject__init(autoware_auto_perception_msgs__msg__TrackedObject * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->object_id)) {
    autoware_auto_perception_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // existence_probability
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(&msg->classification, 0)) {
    autoware_auto_perception_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // kinematics
  if (!autoware_auto_perception_msgs__msg__TrackedObjectKinematics__init(&msg->kinematics)) {
    autoware_auto_perception_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__init(&msg->shape)) {
    autoware_auto_perception_msgs__msg__TrackedObject__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__TrackedObject__fini(autoware_auto_perception_msgs__msg__TrackedObject * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  unique_identifier_msgs__msg__UUID__fini(&msg->object_id);
  // existence_probability
  // classification
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(&msg->classification);
  // kinematics
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(&msg->kinematics);
  // shape
  autoware_auto_perception_msgs__msg__Shape__fini(&msg->shape);
}

bool
autoware_auto_perception_msgs__msg__TrackedObject__are_equal(const autoware_auto_perception_msgs__msg__TrackedObject * lhs, const autoware_auto_perception_msgs__msg__TrackedObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // existence_probability
  if (lhs->existence_probability != rhs->existence_probability) {
    return false;
  }
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__are_equal(
      &(lhs->classification), &(rhs->classification)))
  {
    return false;
  }
  // kinematics
  if (!autoware_auto_perception_msgs__msg__TrackedObjectKinematics__are_equal(
      &(lhs->kinematics), &(rhs->kinematics)))
  {
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrackedObject__copy(
  const autoware_auto_perception_msgs__msg__TrackedObject * input,
  autoware_auto_perception_msgs__msg__TrackedObject * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // existence_probability
  output->existence_probability = input->existence_probability;
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__copy(
      &(input->classification), &(output->classification)))
  {
    return false;
  }
  // kinematics
  if (!autoware_auto_perception_msgs__msg__TrackedObjectKinematics__copy(
      &(input->kinematics), &(output->kinematics)))
  {
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  return true;
}

autoware_auto_perception_msgs__msg__TrackedObject *
autoware_auto_perception_msgs__msg__TrackedObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrackedObject * msg = (autoware_auto_perception_msgs__msg__TrackedObject *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__TrackedObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__TrackedObject));
  bool success = autoware_auto_perception_msgs__msg__TrackedObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__TrackedObject__destroy(autoware_auto_perception_msgs__msg__TrackedObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_perception_msgs__msg__TrackedObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_perception_msgs__msg__TrackedObject__Sequence__init(autoware_auto_perception_msgs__msg__TrackedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrackedObject * data = NULL;

  if (size) {
    data = (autoware_auto_perception_msgs__msg__TrackedObject *)allocator.zero_allocate(size, sizeof(autoware_auto_perception_msgs__msg__TrackedObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__TrackedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__TrackedObject__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__TrackedObject__Sequence__fini(autoware_auto_perception_msgs__msg__TrackedObject__Sequence * array)
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
      autoware_auto_perception_msgs__msg__TrackedObject__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__TrackedObject__Sequence *
autoware_auto_perception_msgs__msg__TrackedObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrackedObject__Sequence * array = (autoware_auto_perception_msgs__msg__TrackedObject__Sequence *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__TrackedObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__TrackedObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__TrackedObject__Sequence__destroy(autoware_auto_perception_msgs__msg__TrackedObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_perception_msgs__msg__TrackedObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_perception_msgs__msg__TrackedObject__Sequence__are_equal(const autoware_auto_perception_msgs__msg__TrackedObject__Sequence * lhs, const autoware_auto_perception_msgs__msg__TrackedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__TrackedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrackedObject__Sequence__copy(
  const autoware_auto_perception_msgs__msg__TrackedObject__Sequence * input,
  autoware_auto_perception_msgs__msg__TrackedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__TrackedObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_perception_msgs__msg__TrackedObject * data =
      (autoware_auto_perception_msgs__msg__TrackedObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__TrackedObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__TrackedObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__TrackedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
