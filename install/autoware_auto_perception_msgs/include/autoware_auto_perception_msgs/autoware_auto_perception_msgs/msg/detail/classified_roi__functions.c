// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoi.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `classifications`
#include "autoware_auto_perception_msgs/msg/detail/object_classification__functions.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/polygon__functions.h"

bool
autoware_auto_perception_msgs__msg__ClassifiedRoi__init(autoware_auto_perception_msgs__msg__ClassifiedRoi * msg)
{
  if (!msg) {
    return false;
  }
  // classifications
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(&msg->classifications, 0)) {
    autoware_auto_perception_msgs__msg__ClassifiedRoi__fini(msg);
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Polygon__init(&msg->polygon)) {
    autoware_auto_perception_msgs__msg__ClassifiedRoi__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__ClassifiedRoi__fini(autoware_auto_perception_msgs__msg__ClassifiedRoi * msg)
{
  if (!msg) {
    return;
  }
  // classifications
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(&msg->classifications);
  // polygon
  geometry_msgs__msg__Polygon__fini(&msg->polygon);
}

bool
autoware_auto_perception_msgs__msg__ClassifiedRoi__are_equal(const autoware_auto_perception_msgs__msg__ClassifiedRoi * lhs, const autoware_auto_perception_msgs__msg__ClassifiedRoi * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // classifications
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__are_equal(
      &(lhs->classifications), &(rhs->classifications)))
  {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Polygon__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__ClassifiedRoi__copy(
  const autoware_auto_perception_msgs__msg__ClassifiedRoi * input,
  autoware_auto_perception_msgs__msg__ClassifiedRoi * output)
{
  if (!input || !output) {
    return false;
  }
  // classifications
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__copy(
      &(input->classifications), &(output->classifications)))
  {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Polygon__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  return true;
}

autoware_auto_perception_msgs__msg__ClassifiedRoi *
autoware_auto_perception_msgs__msg__ClassifiedRoi__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__ClassifiedRoi * msg = (autoware_auto_perception_msgs__msg__ClassifiedRoi *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoi), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoi));
  bool success = autoware_auto_perception_msgs__msg__ClassifiedRoi__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__ClassifiedRoi__destroy(autoware_auto_perception_msgs__msg__ClassifiedRoi * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_perception_msgs__msg__ClassifiedRoi__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__init(autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__ClassifiedRoi * data = NULL;

  if (size) {
    data = (autoware_auto_perception_msgs__msg__ClassifiedRoi *)allocator.zero_allocate(size, sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoi), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__ClassifiedRoi__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__ClassifiedRoi__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__fini(autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * array)
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
      autoware_auto_perception_msgs__msg__ClassifiedRoi__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence *
autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * array = (autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__destroy(autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__are_equal(const autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * lhs, const autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__ClassifiedRoi__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__copy(
  const autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * input,
  autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoi);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_perception_msgs__msg__ClassifiedRoi * data =
      (autoware_auto_perception_msgs__msg__ClassifiedRoi *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__ClassifiedRoi__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__ClassifiedRoi__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__ClassifiedRoi__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
