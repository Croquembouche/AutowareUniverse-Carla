// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/computed_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `offsetxaxis`
#include "v2x_msg/msg/detail/offset_xaxis__functions.h"
// Member `offsetyaxis`
#include "v2x_msg/msg/detail/offset_yaxis__functions.h"

bool
v2x_msg__msg__ComputedLane__init(v2x_msg__msg__ComputedLane * msg)
{
  if (!msg) {
    return false;
  }
  // referencelaneid
  // offsetxaxis
  if (!v2x_msg__msg__OffsetXaxis__init(&msg->offsetxaxis)) {
    v2x_msg__msg__ComputedLane__fini(msg);
    return false;
  }
  // offsetyaxis
  if (!v2x_msg__msg__OffsetYaxis__init(&msg->offsetyaxis)) {
    v2x_msg__msg__ComputedLane__fini(msg);
    return false;
  }
  // rotatexy
  // scalexaxis
  // scaleyaxis
  return true;
}

void
v2x_msg__msg__ComputedLane__fini(v2x_msg__msg__ComputedLane * msg)
{
  if (!msg) {
    return;
  }
  // referencelaneid
  // offsetxaxis
  v2x_msg__msg__OffsetXaxis__fini(&msg->offsetxaxis);
  // offsetyaxis
  v2x_msg__msg__OffsetYaxis__fini(&msg->offsetyaxis);
  // rotatexy
  // scalexaxis
  // scaleyaxis
}

bool
v2x_msg__msg__ComputedLane__are_equal(const v2x_msg__msg__ComputedLane * lhs, const v2x_msg__msg__ComputedLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // referencelaneid
  if (lhs->referencelaneid != rhs->referencelaneid) {
    return false;
  }
  // offsetxaxis
  if (!v2x_msg__msg__OffsetXaxis__are_equal(
      &(lhs->offsetxaxis), &(rhs->offsetxaxis)))
  {
    return false;
  }
  // offsetyaxis
  if (!v2x_msg__msg__OffsetYaxis__are_equal(
      &(lhs->offsetyaxis), &(rhs->offsetyaxis)))
  {
    return false;
  }
  // rotatexy
  if (lhs->rotatexy != rhs->rotatexy) {
    return false;
  }
  // scalexaxis
  if (lhs->scalexaxis != rhs->scalexaxis) {
    return false;
  }
  // scaleyaxis
  if (lhs->scaleyaxis != rhs->scaleyaxis) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__ComputedLane__copy(
  const v2x_msg__msg__ComputedLane * input,
  v2x_msg__msg__ComputedLane * output)
{
  if (!input || !output) {
    return false;
  }
  // referencelaneid
  output->referencelaneid = input->referencelaneid;
  // offsetxaxis
  if (!v2x_msg__msg__OffsetXaxis__copy(
      &(input->offsetxaxis), &(output->offsetxaxis)))
  {
    return false;
  }
  // offsetyaxis
  if (!v2x_msg__msg__OffsetYaxis__copy(
      &(input->offsetyaxis), &(output->offsetyaxis)))
  {
    return false;
  }
  // rotatexy
  output->rotatexy = input->rotatexy;
  // scalexaxis
  output->scalexaxis = input->scalexaxis;
  // scaleyaxis
  output->scaleyaxis = input->scaleyaxis;
  return true;
}

v2x_msg__msg__ComputedLane *
v2x_msg__msg__ComputedLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ComputedLane * msg = (v2x_msg__msg__ComputedLane *)allocator.allocate(sizeof(v2x_msg__msg__ComputedLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__ComputedLane));
  bool success = v2x_msg__msg__ComputedLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__ComputedLane__destroy(v2x_msg__msg__ComputedLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__ComputedLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__ComputedLane__Sequence__init(v2x_msg__msg__ComputedLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ComputedLane * data = NULL;

  if (size) {
    data = (v2x_msg__msg__ComputedLane *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__ComputedLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__ComputedLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__ComputedLane__fini(&data[i - 1]);
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
v2x_msg__msg__ComputedLane__Sequence__fini(v2x_msg__msg__ComputedLane__Sequence * array)
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
      v2x_msg__msg__ComputedLane__fini(&array->data[i]);
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

v2x_msg__msg__ComputedLane__Sequence *
v2x_msg__msg__ComputedLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ComputedLane__Sequence * array = (v2x_msg__msg__ComputedLane__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__ComputedLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__ComputedLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__ComputedLane__Sequence__destroy(v2x_msg__msg__ComputedLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__ComputedLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__ComputedLane__Sequence__are_equal(const v2x_msg__msg__ComputedLane__Sequence * lhs, const v2x_msg__msg__ComputedLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__ComputedLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__ComputedLane__Sequence__copy(
  const v2x_msg__msg__ComputedLane__Sequence * input,
  v2x_msg__msg__ComputedLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__ComputedLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__ComputedLane * data =
      (v2x_msg__msg__ComputedLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__ComputedLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__ComputedLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__ComputedLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
