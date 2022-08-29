// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/RequestorPositionVector.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/requestor_position_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position`
#include "v2x_msg/msg/detail/position3_d__functions.h"
// Member `speed`
#include "v2x_msg/msg/detail/transmission_and_speed__functions.h"

bool
v2x_msg__msg__RequestorPositionVector__init(v2x_msg__msg__RequestorPositionVector * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!v2x_msg__msg__Position3D__init(&msg->position)) {
    v2x_msg__msg__RequestorPositionVector__fini(msg);
    return false;
  }
  // heading
  // speed
  if (!v2x_msg__msg__TransmissionAndSpeed__init(&msg->speed)) {
    v2x_msg__msg__RequestorPositionVector__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__RequestorPositionVector__fini(v2x_msg__msg__RequestorPositionVector * msg)
{
  if (!msg) {
    return;
  }
  // position
  v2x_msg__msg__Position3D__fini(&msg->position);
  // heading
  // speed
  v2x_msg__msg__TransmissionAndSpeed__fini(&msg->speed);
}

bool
v2x_msg__msg__RequestorPositionVector__are_equal(const v2x_msg__msg__RequestorPositionVector * lhs, const v2x_msg__msg__RequestorPositionVector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!v2x_msg__msg__Position3D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // speed
  if (!v2x_msg__msg__TransmissionAndSpeed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__RequestorPositionVector__copy(
  const v2x_msg__msg__RequestorPositionVector * input,
  v2x_msg__msg__RequestorPositionVector * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!v2x_msg__msg__Position3D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // speed
  if (!v2x_msg__msg__TransmissionAndSpeed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__RequestorPositionVector *
v2x_msg__msg__RequestorPositionVector__create()
{
  v2x_msg__msg__RequestorPositionVector * msg = (v2x_msg__msg__RequestorPositionVector *)malloc(sizeof(v2x_msg__msg__RequestorPositionVector));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__RequestorPositionVector));
  bool success = v2x_msg__msg__RequestorPositionVector__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__RequestorPositionVector__destroy(v2x_msg__msg__RequestorPositionVector * msg)
{
  if (msg) {
    v2x_msg__msg__RequestorPositionVector__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__RequestorPositionVector__Sequence__init(v2x_msg__msg__RequestorPositionVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__RequestorPositionVector * data = NULL;
  if (size) {
    data = (v2x_msg__msg__RequestorPositionVector *)calloc(size, sizeof(v2x_msg__msg__RequestorPositionVector));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__RequestorPositionVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__RequestorPositionVector__fini(&data[i - 1]);
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
v2x_msg__msg__RequestorPositionVector__Sequence__fini(v2x_msg__msg__RequestorPositionVector__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__RequestorPositionVector__fini(&array->data[i]);
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

v2x_msg__msg__RequestorPositionVector__Sequence *
v2x_msg__msg__RequestorPositionVector__Sequence__create(size_t size)
{
  v2x_msg__msg__RequestorPositionVector__Sequence * array = (v2x_msg__msg__RequestorPositionVector__Sequence *)malloc(sizeof(v2x_msg__msg__RequestorPositionVector__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__RequestorPositionVector__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__RequestorPositionVector__Sequence__destroy(v2x_msg__msg__RequestorPositionVector__Sequence * array)
{
  if (array) {
    v2x_msg__msg__RequestorPositionVector__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__RequestorPositionVector__Sequence__are_equal(const v2x_msg__msg__RequestorPositionVector__Sequence * lhs, const v2x_msg__msg__RequestorPositionVector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__RequestorPositionVector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__RequestorPositionVector__Sequence__copy(
  const v2x_msg__msg__RequestorPositionVector__Sequence * input,
  v2x_msg__msg__RequestorPositionVector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__RequestorPositionVector);
    v2x_msg__msg__RequestorPositionVector * data =
      (v2x_msg__msg__RequestorPositionVector *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__RequestorPositionVector__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__RequestorPositionVector__fini(&data[i]);
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
    if (!v2x_msg__msg__RequestorPositionVector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
