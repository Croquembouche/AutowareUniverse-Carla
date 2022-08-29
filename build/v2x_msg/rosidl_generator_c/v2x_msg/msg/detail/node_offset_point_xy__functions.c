// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_offset_point_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `nodexy1`
#include "v2x_msg/msg/detail/node_xy22b__functions.h"
// Member `nodexy2`
#include "v2x_msg/msg/detail/node_xy24b__functions.h"
// Member `nodexy3`
#include "v2x_msg/msg/detail/node_xy26b__functions.h"
// Member `nodexy4`
#include "v2x_msg/msg/detail/node_xy28b__functions.h"
// Member `nodexy5`
#include "v2x_msg/msg/detail/node_xy32b__functions.h"
// Member `nodelatlon`
#include "v2x_msg/msg/detail/nodellmd64b__functions.h"

bool
v2x_msg__msg__NodeOffsetPointXY__init(v2x_msg__msg__NodeOffsetPointXY * msg)
{
  if (!msg) {
    return false;
  }
  // nodexy1
  if (!v2x_msg__msg__NodeXY22b__init(&msg->nodexy1)) {
    v2x_msg__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy2
  if (!v2x_msg__msg__NodeXY24b__init(&msg->nodexy2)) {
    v2x_msg__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy3
  if (!v2x_msg__msg__NodeXY26b__init(&msg->nodexy3)) {
    v2x_msg__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy4
  if (!v2x_msg__msg__NodeXY28b__init(&msg->nodexy4)) {
    v2x_msg__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy5
  if (!v2x_msg__msg__NodeXY32b__init(&msg->nodexy5)) {
    v2x_msg__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodelatlon
  if (!v2x_msg__msg__Nodellmd64b__init(&msg->nodelatlon)) {
    v2x_msg__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__NodeOffsetPointXY__fini(v2x_msg__msg__NodeOffsetPointXY * msg)
{
  if (!msg) {
    return;
  }
  // nodexy1
  v2x_msg__msg__NodeXY22b__fini(&msg->nodexy1);
  // nodexy2
  v2x_msg__msg__NodeXY24b__fini(&msg->nodexy2);
  // nodexy3
  v2x_msg__msg__NodeXY26b__fini(&msg->nodexy3);
  // nodexy4
  v2x_msg__msg__NodeXY28b__fini(&msg->nodexy4);
  // nodexy5
  v2x_msg__msg__NodeXY32b__fini(&msg->nodexy5);
  // nodelatlon
  v2x_msg__msg__Nodellmd64b__fini(&msg->nodelatlon);
}

bool
v2x_msg__msg__NodeOffsetPointXY__are_equal(const v2x_msg__msg__NodeOffsetPointXY * lhs, const v2x_msg__msg__NodeOffsetPointXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nodexy1
  if (!v2x_msg__msg__NodeXY22b__are_equal(
      &(lhs->nodexy1), &(rhs->nodexy1)))
  {
    return false;
  }
  // nodexy2
  if (!v2x_msg__msg__NodeXY24b__are_equal(
      &(lhs->nodexy2), &(rhs->nodexy2)))
  {
    return false;
  }
  // nodexy3
  if (!v2x_msg__msg__NodeXY26b__are_equal(
      &(lhs->nodexy3), &(rhs->nodexy3)))
  {
    return false;
  }
  // nodexy4
  if (!v2x_msg__msg__NodeXY28b__are_equal(
      &(lhs->nodexy4), &(rhs->nodexy4)))
  {
    return false;
  }
  // nodexy5
  if (!v2x_msg__msg__NodeXY32b__are_equal(
      &(lhs->nodexy5), &(rhs->nodexy5)))
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
v2x_msg__msg__NodeOffsetPointXY__copy(
  const v2x_msg__msg__NodeOffsetPointXY * input,
  v2x_msg__msg__NodeOffsetPointXY * output)
{
  if (!input || !output) {
    return false;
  }
  // nodexy1
  if (!v2x_msg__msg__NodeXY22b__copy(
      &(input->nodexy1), &(output->nodexy1)))
  {
    return false;
  }
  // nodexy2
  if (!v2x_msg__msg__NodeXY24b__copy(
      &(input->nodexy2), &(output->nodexy2)))
  {
    return false;
  }
  // nodexy3
  if (!v2x_msg__msg__NodeXY26b__copy(
      &(input->nodexy3), &(output->nodexy3)))
  {
    return false;
  }
  // nodexy4
  if (!v2x_msg__msg__NodeXY28b__copy(
      &(input->nodexy4), &(output->nodexy4)))
  {
    return false;
  }
  // nodexy5
  if (!v2x_msg__msg__NodeXY32b__copy(
      &(input->nodexy5), &(output->nodexy5)))
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

v2x_msg__msg__NodeOffsetPointXY *
v2x_msg__msg__NodeOffsetPointXY__create()
{
  v2x_msg__msg__NodeOffsetPointXY * msg = (v2x_msg__msg__NodeOffsetPointXY *)malloc(sizeof(v2x_msg__msg__NodeOffsetPointXY));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__NodeOffsetPointXY));
  bool success = v2x_msg__msg__NodeOffsetPointXY__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__NodeOffsetPointXY__destroy(v2x_msg__msg__NodeOffsetPointXY * msg)
{
  if (msg) {
    v2x_msg__msg__NodeOffsetPointXY__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__NodeOffsetPointXY__Sequence__init(v2x_msg__msg__NodeOffsetPointXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__NodeOffsetPointXY * data = NULL;
  if (size) {
    data = (v2x_msg__msg__NodeOffsetPointXY *)calloc(size, sizeof(v2x_msg__msg__NodeOffsetPointXY));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__NodeOffsetPointXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__NodeOffsetPointXY__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_msg__msg__NodeOffsetPointXY__Sequence__fini(v2x_msg__msg__NodeOffsetPointXY__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__NodeOffsetPointXY__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_msg__msg__NodeOffsetPointXY__Sequence *
v2x_msg__msg__NodeOffsetPointXY__Sequence__create(size_t size)
{
  v2x_msg__msg__NodeOffsetPointXY__Sequence * array = (v2x_msg__msg__NodeOffsetPointXY__Sequence *)malloc(sizeof(v2x_msg__msg__NodeOffsetPointXY__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__NodeOffsetPointXY__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__NodeOffsetPointXY__Sequence__destroy(v2x_msg__msg__NodeOffsetPointXY__Sequence * array)
{
  if (array) {
    v2x_msg__msg__NodeOffsetPointXY__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__NodeOffsetPointXY__Sequence__are_equal(const v2x_msg__msg__NodeOffsetPointXY__Sequence * lhs, const v2x_msg__msg__NodeOffsetPointXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__NodeOffsetPointXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__NodeOffsetPointXY__Sequence__copy(
  const v2x_msg__msg__NodeOffsetPointXY__Sequence * input,
  v2x_msg__msg__NodeOffsetPointXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__NodeOffsetPointXY);
    v2x_msg__msg__NodeOffsetPointXY * data =
      (v2x_msg__msg__NodeOffsetPointXY *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__NodeOffsetPointXY__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__NodeOffsetPointXY__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__NodeOffsetPointXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
