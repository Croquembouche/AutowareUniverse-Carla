// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/VehicleSize.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/vehicle_size__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__VehicleSize__init(v2x_msg__msg__VehicleSize * msg)
{
  if (!msg) {
    return false;
  }
  // width
  // length
  return true;
}

void
v2x_msg__msg__VehicleSize__fini(v2x_msg__msg__VehicleSize * msg)
{
  if (!msg) {
    return;
  }
  // width
  // length
}

bool
v2x_msg__msg__VehicleSize__are_equal(const v2x_msg__msg__VehicleSize * lhs, const v2x_msg__msg__VehicleSize * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__VehicleSize__copy(
  const v2x_msg__msg__VehicleSize * input,
  v2x_msg__msg__VehicleSize * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // length
  output->length = input->length;
  return true;
}

v2x_msg__msg__VehicleSize *
v2x_msg__msg__VehicleSize__create()
{
  v2x_msg__msg__VehicleSize * msg = (v2x_msg__msg__VehicleSize *)malloc(sizeof(v2x_msg__msg__VehicleSize));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__VehicleSize));
  bool success = v2x_msg__msg__VehicleSize__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__VehicleSize__destroy(v2x_msg__msg__VehicleSize * msg)
{
  if (msg) {
    v2x_msg__msg__VehicleSize__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__VehicleSize__Sequence__init(v2x_msg__msg__VehicleSize__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__VehicleSize * data = NULL;
  if (size) {
    data = (v2x_msg__msg__VehicleSize *)calloc(size, sizeof(v2x_msg__msg__VehicleSize));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__VehicleSize__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__VehicleSize__fini(&data[i - 1]);
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
v2x_msg__msg__VehicleSize__Sequence__fini(v2x_msg__msg__VehicleSize__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__VehicleSize__fini(&array->data[i]);
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

v2x_msg__msg__VehicleSize__Sequence *
v2x_msg__msg__VehicleSize__Sequence__create(size_t size)
{
  v2x_msg__msg__VehicleSize__Sequence * array = (v2x_msg__msg__VehicleSize__Sequence *)malloc(sizeof(v2x_msg__msg__VehicleSize__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__VehicleSize__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__VehicleSize__Sequence__destroy(v2x_msg__msg__VehicleSize__Sequence * array)
{
  if (array) {
    v2x_msg__msg__VehicleSize__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__VehicleSize__Sequence__are_equal(const v2x_msg__msg__VehicleSize__Sequence * lhs, const v2x_msg__msg__VehicleSize__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__VehicleSize__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__VehicleSize__Sequence__copy(
  const v2x_msg__msg__VehicleSize__Sequence * input,
  v2x_msg__msg__VehicleSize__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__VehicleSize);
    v2x_msg__msg__VehicleSize * data =
      (v2x_msg__msg__VehicleSize *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__VehicleSize__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__VehicleSize__fini(&data[i]);
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
    if (!v2x_msg__msg__VehicleSize__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
