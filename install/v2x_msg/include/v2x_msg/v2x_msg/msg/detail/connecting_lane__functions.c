// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/ConnectingLane.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/connecting_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `maneuver`
#include "v2x_msg/msg/detail/allowed_maneuvers__functions.h"

bool
v2x_msg__msg__ConnectingLane__init(v2x_msg__msg__ConnectingLane * msg)
{
  if (!msg) {
    return false;
  }
  // laneid
  // maneuver
  if (!v2x_msg__msg__AllowedManeuvers__init(&msg->maneuver)) {
    v2x_msg__msg__ConnectingLane__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__ConnectingLane__fini(v2x_msg__msg__ConnectingLane * msg)
{
  if (!msg) {
    return;
  }
  // laneid
  // maneuver
  v2x_msg__msg__AllowedManeuvers__fini(&msg->maneuver);
}

bool
v2x_msg__msg__ConnectingLane__are_equal(const v2x_msg__msg__ConnectingLane * lhs, const v2x_msg__msg__ConnectingLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // laneid
  if (lhs->laneid != rhs->laneid) {
    return false;
  }
  // maneuver
  if (!v2x_msg__msg__AllowedManeuvers__are_equal(
      &(lhs->maneuver), &(rhs->maneuver)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__ConnectingLane__copy(
  const v2x_msg__msg__ConnectingLane * input,
  v2x_msg__msg__ConnectingLane * output)
{
  if (!input || !output) {
    return false;
  }
  // laneid
  output->laneid = input->laneid;
  // maneuver
  if (!v2x_msg__msg__AllowedManeuvers__copy(
      &(input->maneuver), &(output->maneuver)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__ConnectingLane *
v2x_msg__msg__ConnectingLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ConnectingLane * msg = (v2x_msg__msg__ConnectingLane *)allocator.allocate(sizeof(v2x_msg__msg__ConnectingLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__ConnectingLane));
  bool success = v2x_msg__msg__ConnectingLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__ConnectingLane__destroy(v2x_msg__msg__ConnectingLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__ConnectingLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__ConnectingLane__Sequence__init(v2x_msg__msg__ConnectingLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ConnectingLane * data = NULL;

  if (size) {
    data = (v2x_msg__msg__ConnectingLane *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__ConnectingLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__ConnectingLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__ConnectingLane__fini(&data[i - 1]);
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
v2x_msg__msg__ConnectingLane__Sequence__fini(v2x_msg__msg__ConnectingLane__Sequence * array)
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
      v2x_msg__msg__ConnectingLane__fini(&array->data[i]);
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

v2x_msg__msg__ConnectingLane__Sequence *
v2x_msg__msg__ConnectingLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ConnectingLane__Sequence * array = (v2x_msg__msg__ConnectingLane__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__ConnectingLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__ConnectingLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__ConnectingLane__Sequence__destroy(v2x_msg__msg__ConnectingLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__ConnectingLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__ConnectingLane__Sequence__are_equal(const v2x_msg__msg__ConnectingLane__Sequence * lhs, const v2x_msg__msg__ConnectingLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__ConnectingLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__ConnectingLane__Sequence__copy(
  const v2x_msg__msg__ConnectingLane__Sequence * input,
  v2x_msg__msg__ConnectingLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__ConnectingLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__ConnectingLane * data =
      (v2x_msg__msg__ConnectingLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__ConnectingLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__ConnectingLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__ConnectingLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
