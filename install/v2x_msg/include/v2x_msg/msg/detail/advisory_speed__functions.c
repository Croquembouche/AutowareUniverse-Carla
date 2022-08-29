// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/advisory_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__AdvisorySpeed__init(v2x_msg__msg__AdvisorySpeed * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // speed
  // confidence
  // zonelength
  // restrictionclassid
  return true;
}

void
v2x_msg__msg__AdvisorySpeed__fini(v2x_msg__msg__AdvisorySpeed * msg)
{
  if (!msg) {
    return;
  }
  // type
  // speed
  // confidence
  // zonelength
  // restrictionclassid
}

bool
v2x_msg__msg__AdvisorySpeed__are_equal(const v2x_msg__msg__AdvisorySpeed * lhs, const v2x_msg__msg__AdvisorySpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // zonelength
  if (lhs->zonelength != rhs->zonelength) {
    return false;
  }
  // restrictionclassid
  if (lhs->restrictionclassid != rhs->restrictionclassid) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__AdvisorySpeed__copy(
  const v2x_msg__msg__AdvisorySpeed * input,
  v2x_msg__msg__AdvisorySpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // speed
  output->speed = input->speed;
  // confidence
  output->confidence = input->confidence;
  // zonelength
  output->zonelength = input->zonelength;
  // restrictionclassid
  output->restrictionclassid = input->restrictionclassid;
  return true;
}

v2x_msg__msg__AdvisorySpeed *
v2x_msg__msg__AdvisorySpeed__create()
{
  v2x_msg__msg__AdvisorySpeed * msg = (v2x_msg__msg__AdvisorySpeed *)malloc(sizeof(v2x_msg__msg__AdvisorySpeed));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__AdvisorySpeed));
  bool success = v2x_msg__msg__AdvisorySpeed__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__AdvisorySpeed__destroy(v2x_msg__msg__AdvisorySpeed * msg)
{
  if (msg) {
    v2x_msg__msg__AdvisorySpeed__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__AdvisorySpeed__Sequence__init(v2x_msg__msg__AdvisorySpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__AdvisorySpeed * data = NULL;
  if (size) {
    data = (v2x_msg__msg__AdvisorySpeed *)calloc(size, sizeof(v2x_msg__msg__AdvisorySpeed));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__AdvisorySpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__AdvisorySpeed__fini(&data[i - 1]);
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
v2x_msg__msg__AdvisorySpeed__Sequence__fini(v2x_msg__msg__AdvisorySpeed__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__AdvisorySpeed__fini(&array->data[i]);
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

v2x_msg__msg__AdvisorySpeed__Sequence *
v2x_msg__msg__AdvisorySpeed__Sequence__create(size_t size)
{
  v2x_msg__msg__AdvisorySpeed__Sequence * array = (v2x_msg__msg__AdvisorySpeed__Sequence *)malloc(sizeof(v2x_msg__msg__AdvisorySpeed__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__AdvisorySpeed__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__AdvisorySpeed__Sequence__destroy(v2x_msg__msg__AdvisorySpeed__Sequence * array)
{
  if (array) {
    v2x_msg__msg__AdvisorySpeed__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__AdvisorySpeed__Sequence__are_equal(const v2x_msg__msg__AdvisorySpeed__Sequence * lhs, const v2x_msg__msg__AdvisorySpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__AdvisorySpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__AdvisorySpeed__Sequence__copy(
  const v2x_msg__msg__AdvisorySpeed__Sequence * input,
  v2x_msg__msg__AdvisorySpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__AdvisorySpeed);
    v2x_msg__msg__AdvisorySpeed * data =
      (v2x_msg__msg__AdvisorySpeed *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__AdvisorySpeed__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__AdvisorySpeed__fini(&data[i]);
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
    if (!v2x_msg__msg__AdvisorySpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
