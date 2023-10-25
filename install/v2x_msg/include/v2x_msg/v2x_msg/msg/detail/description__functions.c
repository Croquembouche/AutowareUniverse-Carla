// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/Description.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path`
#include "v2x_msg/msg/detail/offset_system__functions.h"
// Member `geometry`
#include "v2x_msg/msg/detail/geometric_projection__functions.h"
// Member `oldregion`
#include "v2x_msg/msg/detail/valid_region__functions.h"

bool
v2x_msg__msg__Description__init(v2x_msg__msg__Description * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!v2x_msg__msg__OffsetSystem__init(&msg->path)) {
    v2x_msg__msg__Description__fini(msg);
    return false;
  }
  // geometry
  if (!v2x_msg__msg__GeometricProjection__init(&msg->geometry)) {
    v2x_msg__msg__Description__fini(msg);
    return false;
  }
  // oldregion
  if (!v2x_msg__msg__ValidRegion__init(&msg->oldregion)) {
    v2x_msg__msg__Description__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__Description__fini(v2x_msg__msg__Description * msg)
{
  if (!msg) {
    return;
  }
  // path
  v2x_msg__msg__OffsetSystem__fini(&msg->path);
  // geometry
  v2x_msg__msg__GeometricProjection__fini(&msg->geometry);
  // oldregion
  v2x_msg__msg__ValidRegion__fini(&msg->oldregion);
}

bool
v2x_msg__msg__Description__are_equal(const v2x_msg__msg__Description * lhs, const v2x_msg__msg__Description * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!v2x_msg__msg__OffsetSystem__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // geometry
  if (!v2x_msg__msg__GeometricProjection__are_equal(
      &(lhs->geometry), &(rhs->geometry)))
  {
    return false;
  }
  // oldregion
  if (!v2x_msg__msg__ValidRegion__are_equal(
      &(lhs->oldregion), &(rhs->oldregion)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__Description__copy(
  const v2x_msg__msg__Description * input,
  v2x_msg__msg__Description * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!v2x_msg__msg__OffsetSystem__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // geometry
  if (!v2x_msg__msg__GeometricProjection__copy(
      &(input->geometry), &(output->geometry)))
  {
    return false;
  }
  // oldregion
  if (!v2x_msg__msg__ValidRegion__copy(
      &(input->oldregion), &(output->oldregion)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__Description *
v2x_msg__msg__Description__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Description * msg = (v2x_msg__msg__Description *)allocator.allocate(sizeof(v2x_msg__msg__Description), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__Description));
  bool success = v2x_msg__msg__Description__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__Description__destroy(v2x_msg__msg__Description * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__Description__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__Description__Sequence__init(v2x_msg__msg__Description__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Description * data = NULL;

  if (size) {
    data = (v2x_msg__msg__Description *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__Description), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__Description__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__Description__fini(&data[i - 1]);
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
v2x_msg__msg__Description__Sequence__fini(v2x_msg__msg__Description__Sequence * array)
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
      v2x_msg__msg__Description__fini(&array->data[i]);
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

v2x_msg__msg__Description__Sequence *
v2x_msg__msg__Description__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Description__Sequence * array = (v2x_msg__msg__Description__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__Description__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__Description__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__Description__Sequence__destroy(v2x_msg__msg__Description__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__Description__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__Description__Sequence__are_equal(const v2x_msg__msg__Description__Sequence * lhs, const v2x_msg__msg__Description__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__Description__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__Description__Sequence__copy(
  const v2x_msg__msg__Description__Sequence * input,
  v2x_msg__msg__Description__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__Description);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__Description * data =
      (v2x_msg__msg__Description *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__Description__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__Description__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__Description__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
