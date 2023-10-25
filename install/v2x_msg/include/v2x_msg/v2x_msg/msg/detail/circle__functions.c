// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/Circle.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/circle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "v2x_msg/msg/detail/position3_d__functions.h"

bool
v2x_msg__msg__Circle__init(v2x_msg__msg__Circle * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!v2x_msg__msg__Position3D__init(&msg->center)) {
    v2x_msg__msg__Circle__fini(msg);
    return false;
  }
  // radius
  // units
  return true;
}

void
v2x_msg__msg__Circle__fini(v2x_msg__msg__Circle * msg)
{
  if (!msg) {
    return;
  }
  // center
  v2x_msg__msg__Position3D__fini(&msg->center);
  // radius
  // units
}

bool
v2x_msg__msg__Circle__are_equal(const v2x_msg__msg__Circle * lhs, const v2x_msg__msg__Circle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!v2x_msg__msg__Position3D__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // units
  if (lhs->units != rhs->units) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__Circle__copy(
  const v2x_msg__msg__Circle * input,
  v2x_msg__msg__Circle * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!v2x_msg__msg__Position3D__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  // units
  output->units = input->units;
  return true;
}

v2x_msg__msg__Circle *
v2x_msg__msg__Circle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Circle * msg = (v2x_msg__msg__Circle *)allocator.allocate(sizeof(v2x_msg__msg__Circle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__Circle));
  bool success = v2x_msg__msg__Circle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__Circle__destroy(v2x_msg__msg__Circle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__Circle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__Circle__Sequence__init(v2x_msg__msg__Circle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Circle * data = NULL;

  if (size) {
    data = (v2x_msg__msg__Circle *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__Circle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__Circle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__Circle__fini(&data[i - 1]);
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
v2x_msg__msg__Circle__Sequence__fini(v2x_msg__msg__Circle__Sequence * array)
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
      v2x_msg__msg__Circle__fini(&array->data[i]);
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

v2x_msg__msg__Circle__Sequence *
v2x_msg__msg__Circle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Circle__Sequence * array = (v2x_msg__msg__Circle__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__Circle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__Circle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__Circle__Sequence__destroy(v2x_msg__msg__Circle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__Circle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__Circle__Sequence__are_equal(const v2x_msg__msg__Circle__Sequence * lhs, const v2x_msg__msg__Circle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__Circle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__Circle__Sequence__copy(
  const v2x_msg__msg__Circle__Sequence * input,
  v2x_msg__msg__Circle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__Circle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__Circle * data =
      (v2x_msg__msg__Circle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__Circle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__Circle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__Circle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
