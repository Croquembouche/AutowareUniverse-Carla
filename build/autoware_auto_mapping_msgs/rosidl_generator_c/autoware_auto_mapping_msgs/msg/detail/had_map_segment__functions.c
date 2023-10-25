// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_mapping_msgs:msg/HADMapSegment.idl
// generated code does not contain a copyright notice
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `primitives`
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__functions.h"

bool
autoware_auto_mapping_msgs__msg__HADMapSegment__init(autoware_auto_mapping_msgs__msg__HADMapSegment * msg)
{
  if (!msg) {
    return false;
  }
  // primitives
  if (!autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__init(&msg->primitives, 0)) {
    autoware_auto_mapping_msgs__msg__HADMapSegment__fini(msg);
    return false;
  }
  // preferred_primitive_id
  return true;
}

void
autoware_auto_mapping_msgs__msg__HADMapSegment__fini(autoware_auto_mapping_msgs__msg__HADMapSegment * msg)
{
  if (!msg) {
    return;
  }
  // primitives
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__fini(&msg->primitives);
  // preferred_primitive_id
}

bool
autoware_auto_mapping_msgs__msg__HADMapSegment__are_equal(const autoware_auto_mapping_msgs__msg__HADMapSegment * lhs, const autoware_auto_mapping_msgs__msg__HADMapSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // primitives
  if (!autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__are_equal(
      &(lhs->primitives), &(rhs->primitives)))
  {
    return false;
  }
  // preferred_primitive_id
  if (lhs->preferred_primitive_id != rhs->preferred_primitive_id) {
    return false;
  }
  return true;
}

bool
autoware_auto_mapping_msgs__msg__HADMapSegment__copy(
  const autoware_auto_mapping_msgs__msg__HADMapSegment * input,
  autoware_auto_mapping_msgs__msg__HADMapSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // primitives
  if (!autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__copy(
      &(input->primitives), &(output->primitives)))
  {
    return false;
  }
  // preferred_primitive_id
  output->preferred_primitive_id = input->preferred_primitive_id;
  return true;
}

autoware_auto_mapping_msgs__msg__HADMapSegment *
autoware_auto_mapping_msgs__msg__HADMapSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__HADMapSegment * msg = (autoware_auto_mapping_msgs__msg__HADMapSegment *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__msg__HADMapSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_mapping_msgs__msg__HADMapSegment));
  bool success = autoware_auto_mapping_msgs__msg__HADMapSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_mapping_msgs__msg__HADMapSegment__destroy(autoware_auto_mapping_msgs__msg__HADMapSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_mapping_msgs__msg__HADMapSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__init(autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__HADMapSegment * data = NULL;

  if (size) {
    data = (autoware_auto_mapping_msgs__msg__HADMapSegment *)allocator.zero_allocate(size, sizeof(autoware_auto_mapping_msgs__msg__HADMapSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_mapping_msgs__msg__HADMapSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_mapping_msgs__msg__HADMapSegment__fini(&data[i - 1]);
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
autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__fini(autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * array)
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
      autoware_auto_mapping_msgs__msg__HADMapSegment__fini(&array->data[i]);
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

autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence *
autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * array = (autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__destroy(autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__are_equal(const autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * lhs, const autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_mapping_msgs__msg__HADMapSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__copy(
  const autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * input,
  autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_mapping_msgs__msg__HADMapSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_mapping_msgs__msg__HADMapSegment * data =
      (autoware_auto_mapping_msgs__msg__HADMapSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_mapping_msgs__msg__HADMapSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_mapping_msgs__msg__HADMapSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_mapping_msgs__msg__HADMapSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
