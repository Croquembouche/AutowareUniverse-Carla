// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/NodeXY.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `delta`
#include "v2x_msg/msg/detail/node_offset_point_xy__functions.h"
// Member `attributes`
#include "v2x_msg/msg/detail/node_attribute_set_xy__functions.h"

bool
v2x_msg__msg__NodeXY__init(v2x_msg__msg__NodeXY * msg)
{
  if (!msg) {
    return false;
  }
  // delta
  if (!v2x_msg__msg__NodeOffsetPointXY__init(&msg->delta)) {
    v2x_msg__msg__NodeXY__fini(msg);
    return false;
  }
  // attributes
  if (!v2x_msg__msg__NodeAttributeSetXY__init(&msg->attributes)) {
    v2x_msg__msg__NodeXY__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__NodeXY__fini(v2x_msg__msg__NodeXY * msg)
{
  if (!msg) {
    return;
  }
  // delta
  v2x_msg__msg__NodeOffsetPointXY__fini(&msg->delta);
  // attributes
  v2x_msg__msg__NodeAttributeSetXY__fini(&msg->attributes);
}

bool
v2x_msg__msg__NodeXY__are_equal(const v2x_msg__msg__NodeXY * lhs, const v2x_msg__msg__NodeXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // delta
  if (!v2x_msg__msg__NodeOffsetPointXY__are_equal(
      &(lhs->delta), &(rhs->delta)))
  {
    return false;
  }
  // attributes
  if (!v2x_msg__msg__NodeAttributeSetXY__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__NodeXY__copy(
  const v2x_msg__msg__NodeXY * input,
  v2x_msg__msg__NodeXY * output)
{
  if (!input || !output) {
    return false;
  }
  // delta
  if (!v2x_msg__msg__NodeOffsetPointXY__copy(
      &(input->delta), &(output->delta)))
  {
    return false;
  }
  // attributes
  if (!v2x_msg__msg__NodeAttributeSetXY__copy(
      &(input->attributes), &(output->attributes)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__NodeXY *
v2x_msg__msg__NodeXY__create()
{
  v2x_msg__msg__NodeXY * msg = (v2x_msg__msg__NodeXY *)malloc(sizeof(v2x_msg__msg__NodeXY));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__NodeXY));
  bool success = v2x_msg__msg__NodeXY__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__NodeXY__destroy(v2x_msg__msg__NodeXY * msg)
{
  if (msg) {
    v2x_msg__msg__NodeXY__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__NodeXY__Sequence__init(v2x_msg__msg__NodeXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__NodeXY * data = NULL;
  if (size) {
    data = (v2x_msg__msg__NodeXY *)calloc(size, sizeof(v2x_msg__msg__NodeXY));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__NodeXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__NodeXY__fini(&data[i - 1]);
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
v2x_msg__msg__NodeXY__Sequence__fini(v2x_msg__msg__NodeXY__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__NodeXY__fini(&array->data[i]);
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

v2x_msg__msg__NodeXY__Sequence *
v2x_msg__msg__NodeXY__Sequence__create(size_t size)
{
  v2x_msg__msg__NodeXY__Sequence * array = (v2x_msg__msg__NodeXY__Sequence *)malloc(sizeof(v2x_msg__msg__NodeXY__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__NodeXY__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__NodeXY__Sequence__destroy(v2x_msg__msg__NodeXY__Sequence * array)
{
  if (array) {
    v2x_msg__msg__NodeXY__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__NodeXY__Sequence__are_equal(const v2x_msg__msg__NodeXY__Sequence * lhs, const v2x_msg__msg__NodeXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__NodeXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__NodeXY__Sequence__copy(
  const v2x_msg__msg__NodeXY__Sequence * input,
  v2x_msg__msg__NodeXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__NodeXY);
    v2x_msg__msg__NodeXY * data =
      (v2x_msg__msg__NodeXY *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__NodeXY__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__NodeXY__fini(&data[i]);
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
    if (!v2x_msg__msg__NodeXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
