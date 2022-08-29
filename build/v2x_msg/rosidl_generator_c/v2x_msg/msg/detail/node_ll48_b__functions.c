// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/NodeLL48B.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_ll48_b__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__NodeLL48B__init(v2x_msg__msg__NodeLL48B * msg)
{
  if (!msg) {
    return false;
  }
  // lon
  // lat
  return true;
}

void
v2x_msg__msg__NodeLL48B__fini(v2x_msg__msg__NodeLL48B * msg)
{
  if (!msg) {
    return;
  }
  // lon
  // lat
}

bool
v2x_msg__msg__NodeLL48B__are_equal(const v2x_msg__msg__NodeLL48B * lhs, const v2x_msg__msg__NodeLL48B * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__NodeLL48B__copy(
  const v2x_msg__msg__NodeLL48B * input,
  v2x_msg__msg__NodeLL48B * output)
{
  if (!input || !output) {
    return false;
  }
  // lon
  output->lon = input->lon;
  // lat
  output->lat = input->lat;
  return true;
}

v2x_msg__msg__NodeLL48B *
v2x_msg__msg__NodeLL48B__create()
{
  v2x_msg__msg__NodeLL48B * msg = (v2x_msg__msg__NodeLL48B *)malloc(sizeof(v2x_msg__msg__NodeLL48B));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__NodeLL48B));
  bool success = v2x_msg__msg__NodeLL48B__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__NodeLL48B__destroy(v2x_msg__msg__NodeLL48B * msg)
{
  if (msg) {
    v2x_msg__msg__NodeLL48B__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__NodeLL48B__Sequence__init(v2x_msg__msg__NodeLL48B__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__NodeLL48B * data = NULL;
  if (size) {
    data = (v2x_msg__msg__NodeLL48B *)calloc(size, sizeof(v2x_msg__msg__NodeLL48B));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__NodeLL48B__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__NodeLL48B__fini(&data[i - 1]);
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
v2x_msg__msg__NodeLL48B__Sequence__fini(v2x_msg__msg__NodeLL48B__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__NodeLL48B__fini(&array->data[i]);
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

v2x_msg__msg__NodeLL48B__Sequence *
v2x_msg__msg__NodeLL48B__Sequence__create(size_t size)
{
  v2x_msg__msg__NodeLL48B__Sequence * array = (v2x_msg__msg__NodeLL48B__Sequence *)malloc(sizeof(v2x_msg__msg__NodeLL48B__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__NodeLL48B__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__NodeLL48B__Sequence__destroy(v2x_msg__msg__NodeLL48B__Sequence * array)
{
  if (array) {
    v2x_msg__msg__NodeLL48B__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__NodeLL48B__Sequence__are_equal(const v2x_msg__msg__NodeLL48B__Sequence * lhs, const v2x_msg__msg__NodeLL48B__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__NodeLL48B__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__NodeLL48B__Sequence__copy(
  const v2x_msg__msg__NodeLL48B__Sequence * input,
  v2x_msg__msg__NodeLL48B__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__NodeLL48B);
    v2x_msg__msg__NodeLL48B * data =
      (v2x_msg__msg__NodeLL48B *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__NodeLL48B__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__NodeLL48B__fini(&data[i]);
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
    if (!v2x_msg__msg__NodeLL48B__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
