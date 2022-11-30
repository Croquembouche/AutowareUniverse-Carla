// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/NodeXY26b.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_xy26b__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__NodeXY26b__init(v2x_msg__msg__NodeXY26b * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
v2x_msg__msg__NodeXY26b__fini(v2x_msg__msg__NodeXY26b * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
v2x_msg__msg__NodeXY26b__are_equal(const v2x_msg__msg__NodeXY26b * lhs, const v2x_msg__msg__NodeXY26b * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__NodeXY26b__copy(
  const v2x_msg__msg__NodeXY26b * input,
  v2x_msg__msg__NodeXY26b * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

v2x_msg__msg__NodeXY26b *
v2x_msg__msg__NodeXY26b__create()
{
  v2x_msg__msg__NodeXY26b * msg = (v2x_msg__msg__NodeXY26b *)malloc(sizeof(v2x_msg__msg__NodeXY26b));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__NodeXY26b));
  bool success = v2x_msg__msg__NodeXY26b__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__NodeXY26b__destroy(v2x_msg__msg__NodeXY26b * msg)
{
  if (msg) {
    v2x_msg__msg__NodeXY26b__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__NodeXY26b__Sequence__init(v2x_msg__msg__NodeXY26b__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__NodeXY26b * data = NULL;
  if (size) {
    data = (v2x_msg__msg__NodeXY26b *)calloc(size, sizeof(v2x_msg__msg__NodeXY26b));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__NodeXY26b__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__NodeXY26b__fini(&data[i - 1]);
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
v2x_msg__msg__NodeXY26b__Sequence__fini(v2x_msg__msg__NodeXY26b__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__NodeXY26b__fini(&array->data[i]);
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

v2x_msg__msg__NodeXY26b__Sequence *
v2x_msg__msg__NodeXY26b__Sequence__create(size_t size)
{
  v2x_msg__msg__NodeXY26b__Sequence * array = (v2x_msg__msg__NodeXY26b__Sequence *)malloc(sizeof(v2x_msg__msg__NodeXY26b__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__NodeXY26b__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__NodeXY26b__Sequence__destroy(v2x_msg__msg__NodeXY26b__Sequence * array)
{
  if (array) {
    v2x_msg__msg__NodeXY26b__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__NodeXY26b__Sequence__are_equal(const v2x_msg__msg__NodeXY26b__Sequence * lhs, const v2x_msg__msg__NodeXY26b__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__NodeXY26b__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__NodeXY26b__Sequence__copy(
  const v2x_msg__msg__NodeXY26b__Sequence * input,
  v2x_msg__msg__NodeXY26b__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__NodeXY26b);
    v2x_msg__msg__NodeXY26b * data =
      (v2x_msg__msg__NodeXY26b *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__NodeXY26b__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__NodeXY26b__fini(&data[i]);
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
    if (!v2x_msg__msg__NodeXY26b__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}