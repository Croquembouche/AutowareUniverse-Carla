// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_offset_point_ll__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nodell1`
#include "v2x_msg/msg/detail/node_ll24_b__functions.h"
// Member `nodell2`
#include "v2x_msg/msg/detail/node_ll28_b__functions.h"
// Member `nodell3`
#include "v2x_msg/msg/detail/node_ll32_b__functions.h"
// Member `nodell4`
#include "v2x_msg/msg/detail/node_ll36_b__functions.h"
// Member `nodell5`
#include "v2x_msg/msg/detail/node_ll44_b__functions.h"
// Member `nodell6`
#include "v2x_msg/msg/detail/node_ll48_b__functions.h"
// Member `nodelatlon`
#include "v2x_msg/msg/detail/nodellmd64b__functions.h"

bool
v2x_msg__msg__NodeOffsetPointLL__init(v2x_msg__msg__NodeOffsetPointLL * msg)
{
  if (!msg) {
    return false;
  }
  // nodell1
  if (!v2x_msg__msg__NodeLL24B__init(&msg->nodell1)) {
    v2x_msg__msg__NodeOffsetPointLL__fini(msg);
    return false;
  }
  // nodell2
  if (!v2x_msg__msg__NodeLL28B__init(&msg->nodell2)) {
    v2x_msg__msg__NodeOffsetPointLL__fini(msg);
    return false;
  }
  // nodell3
  if (!v2x_msg__msg__NodeLL32B__init(&msg->nodell3)) {
    v2x_msg__msg__NodeOffsetPointLL__fini(msg);
    return false;
  }
  // nodell4
  if (!v2x_msg__msg__NodeLL36B__init(&msg->nodell4)) {
    v2x_msg__msg__NodeOffsetPointLL__fini(msg);
    return false;
  }
  // nodell5
  if (!v2x_msg__msg__NodeLL44B__init(&msg->nodell5)) {
    v2x_msg__msg__NodeOffsetPointLL__fini(msg);
    return false;
  }
  // nodell6
  if (!v2x_msg__msg__NodeLL48B__init(&msg->nodell6)) {
    v2x_msg__msg__NodeOffsetPointLL__fini(msg);
    return false;
  }
  // nodelatlon
  if (!v2x_msg__msg__Nodellmd64b__init(&msg->nodelatlon)) {
    v2x_msg__msg__NodeOffsetPointLL__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__NodeOffsetPointLL__fini(v2x_msg__msg__NodeOffsetPointLL * msg)
{
  if (!msg) {
    return;
  }
  // nodell1
  v2x_msg__msg__NodeLL24B__fini(&msg->nodell1);
  // nodell2
  v2x_msg__msg__NodeLL28B__fini(&msg->nodell2);
  // nodell3
  v2x_msg__msg__NodeLL32B__fini(&msg->nodell3);
  // nodell4
  v2x_msg__msg__NodeLL36B__fini(&msg->nodell4);
  // nodell5
  v2x_msg__msg__NodeLL44B__fini(&msg->nodell5);
  // nodell6
  v2x_msg__msg__NodeLL48B__fini(&msg->nodell6);
  // nodelatlon
  v2x_msg__msg__Nodellmd64b__fini(&msg->nodelatlon);
}

bool
v2x_msg__msg__NodeOffsetPointLL__are_equal(const v2x_msg__msg__NodeOffsetPointLL * lhs, const v2x_msg__msg__NodeOffsetPointLL * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nodell1
  if (!v2x_msg__msg__NodeLL24B__are_equal(
      &(lhs->nodell1), &(rhs->nodell1)))
  {
    return false;
  }
  // nodell2
  if (!v2x_msg__msg__NodeLL28B__are_equal(
      &(lhs->nodell2), &(rhs->nodell2)))
  {
    return false;
  }
  // nodell3
  if (!v2x_msg__msg__NodeLL32B__are_equal(
      &(lhs->nodell3), &(rhs->nodell3)))
  {
    return false;
  }
  // nodell4
  if (!v2x_msg__msg__NodeLL36B__are_equal(
      &(lhs->nodell4), &(rhs->nodell4)))
  {
    return false;
  }
  // nodell5
  if (!v2x_msg__msg__NodeLL44B__are_equal(
      &(lhs->nodell5), &(rhs->nodell5)))
  {
    return false;
  }
  // nodell6
  if (!v2x_msg__msg__NodeLL48B__are_equal(
      &(lhs->nodell6), &(rhs->nodell6)))
  {
    return false;
  }
  // nodelatlon
  if (!v2x_msg__msg__Nodellmd64b__are_equal(
      &(lhs->nodelatlon), &(rhs->nodelatlon)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__NodeOffsetPointLL__copy(
  const v2x_msg__msg__NodeOffsetPointLL * input,
  v2x_msg__msg__NodeOffsetPointLL * output)
{
  if (!input || !output) {
    return false;
  }
  // nodell1
  if (!v2x_msg__msg__NodeLL24B__copy(
      &(input->nodell1), &(output->nodell1)))
  {
    return false;
  }
  // nodell2
  if (!v2x_msg__msg__NodeLL28B__copy(
      &(input->nodell2), &(output->nodell2)))
  {
    return false;
  }
  // nodell3
  if (!v2x_msg__msg__NodeLL32B__copy(
      &(input->nodell3), &(output->nodell3)))
  {
    return false;
  }
  // nodell4
  if (!v2x_msg__msg__NodeLL36B__copy(
      &(input->nodell4), &(output->nodell4)))
  {
    return false;
  }
  // nodell5
  if (!v2x_msg__msg__NodeLL44B__copy(
      &(input->nodell5), &(output->nodell5)))
  {
    return false;
  }
  // nodell6
  if (!v2x_msg__msg__NodeLL48B__copy(
      &(input->nodell6), &(output->nodell6)))
  {
    return false;
  }
  // nodelatlon
  if (!v2x_msg__msg__Nodellmd64b__copy(
      &(input->nodelatlon), &(output->nodelatlon)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__NodeOffsetPointLL *
v2x_msg__msg__NodeOffsetPointLL__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__NodeOffsetPointLL * msg = (v2x_msg__msg__NodeOffsetPointLL *)allocator.allocate(sizeof(v2x_msg__msg__NodeOffsetPointLL), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__NodeOffsetPointLL));
  bool success = v2x_msg__msg__NodeOffsetPointLL__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__NodeOffsetPointLL__destroy(v2x_msg__msg__NodeOffsetPointLL * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__NodeOffsetPointLL__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__NodeOffsetPointLL__Sequence__init(v2x_msg__msg__NodeOffsetPointLL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__NodeOffsetPointLL * data = NULL;

  if (size) {
    data = (v2x_msg__msg__NodeOffsetPointLL *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__NodeOffsetPointLL), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__NodeOffsetPointLL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__NodeOffsetPointLL__fini(&data[i - 1]);
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
v2x_msg__msg__NodeOffsetPointLL__Sequence__fini(v2x_msg__msg__NodeOffsetPointLL__Sequence * array)
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
      v2x_msg__msg__NodeOffsetPointLL__fini(&array->data[i]);
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

v2x_msg__msg__NodeOffsetPointLL__Sequence *
v2x_msg__msg__NodeOffsetPointLL__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__NodeOffsetPointLL__Sequence * array = (v2x_msg__msg__NodeOffsetPointLL__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__NodeOffsetPointLL__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__NodeOffsetPointLL__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__NodeOffsetPointLL__Sequence__destroy(v2x_msg__msg__NodeOffsetPointLL__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__NodeOffsetPointLL__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__NodeOffsetPointLL__Sequence__are_equal(const v2x_msg__msg__NodeOffsetPointLL__Sequence * lhs, const v2x_msg__msg__NodeOffsetPointLL__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__NodeOffsetPointLL__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__NodeOffsetPointLL__Sequence__copy(
  const v2x_msg__msg__NodeOffsetPointLL__Sequence * input,
  v2x_msg__msg__NodeOffsetPointLL__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__NodeOffsetPointLL);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__NodeOffsetPointLL * data =
      (v2x_msg__msg__NodeOffsetPointLL *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__NodeOffsetPointLL__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__NodeOffsetPointLL__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__NodeOffsetPointLL__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
