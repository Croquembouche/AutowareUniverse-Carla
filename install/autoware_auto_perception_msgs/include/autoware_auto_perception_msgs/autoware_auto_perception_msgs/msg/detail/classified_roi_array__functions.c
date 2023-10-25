// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoiArray.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/classified_roi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `rois`
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__functions.h"

bool
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__init(autoware_auto_perception_msgs__msg__ClassifiedRoiArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__fini(msg);
    return false;
  }
  // rois
  if (!autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__init(&msg->rois, 0)) {
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__fini(autoware_auto_perception_msgs__msg__ClassifiedRoiArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rois
  autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__fini(&msg->rois);
}

bool
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__are_equal(const autoware_auto_perception_msgs__msg__ClassifiedRoiArray * lhs, const autoware_auto_perception_msgs__msg__ClassifiedRoiArray * rhs)
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
  // rois
  if (!autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__are_equal(
      &(lhs->rois), &(rhs->rois)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__copy(
  const autoware_auto_perception_msgs__msg__ClassifiedRoiArray * input,
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray * output)
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
  // rois
  if (!autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__copy(
      &(input->rois), &(output->rois)))
  {
    return false;
  }
  return true;
}

autoware_auto_perception_msgs__msg__ClassifiedRoiArray *
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray * msg = (autoware_auto_perception_msgs__msg__ClassifiedRoiArray *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoiArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoiArray));
  bool success = autoware_auto_perception_msgs__msg__ClassifiedRoiArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__destroy(autoware_auto_perception_msgs__msg__ClassifiedRoiArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence__init(autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray * data = NULL;

  if (size) {
    data = (autoware_auto_perception_msgs__msg__ClassifiedRoiArray *)allocator.zero_allocate(size, sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoiArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__ClassifiedRoiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__ClassifiedRoiArray__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence__fini(autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence * array)
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
      autoware_auto_perception_msgs__msg__ClassifiedRoiArray__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence *
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence * array = (autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence__destroy(autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence__are_equal(const autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence * lhs, const autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__ClassifiedRoiArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence__copy(
  const autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence * input,
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoiArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray * data =
      (autoware_auto_perception_msgs__msg__ClassifiedRoiArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__ClassifiedRoiArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__ClassifiedRoiArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__ClassifiedRoiArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
