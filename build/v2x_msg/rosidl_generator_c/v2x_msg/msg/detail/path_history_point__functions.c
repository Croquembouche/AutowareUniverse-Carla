// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/path_history_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `accuracy`
#include "v2x_msg/msg/detail/positional_accuracy__functions.h"

bool
v2x_msg__msg__PathHistoryPoint__init(v2x_msg__msg__PathHistoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // latoffset
  // lonoffset
  // elevationoffset
  // timeoffset
  // speed
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__init(&msg->accuracy)) {
    v2x_msg__msg__PathHistoryPoint__fini(msg);
    return false;
  }
  // heading
  return true;
}

void
v2x_msg__msg__PathHistoryPoint__fini(v2x_msg__msg__PathHistoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // latoffset
  // lonoffset
  // elevationoffset
  // timeoffset
  // speed
  // accuracy
  v2x_msg__msg__PositionalAccuracy__fini(&msg->accuracy);
  // heading
}

bool
v2x_msg__msg__PathHistoryPoint__are_equal(const v2x_msg__msg__PathHistoryPoint * lhs, const v2x_msg__msg__PathHistoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latoffset
  if (lhs->latoffset != rhs->latoffset) {
    return false;
  }
  // lonoffset
  if (lhs->lonoffset != rhs->lonoffset) {
    return false;
  }
  // elevationoffset
  if (lhs->elevationoffset != rhs->elevationoffset) {
    return false;
  }
  // timeoffset
  if (lhs->timeoffset != rhs->timeoffset) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__are_equal(
      &(lhs->accuracy), &(rhs->accuracy)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__PathHistoryPoint__copy(
  const v2x_msg__msg__PathHistoryPoint * input,
  v2x_msg__msg__PathHistoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // latoffset
  output->latoffset = input->latoffset;
  // lonoffset
  output->lonoffset = input->lonoffset;
  // elevationoffset
  output->elevationoffset = input->elevationoffset;
  // timeoffset
  output->timeoffset = input->timeoffset;
  // speed
  output->speed = input->speed;
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__copy(
      &(input->accuracy), &(output->accuracy)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  return true;
}

v2x_msg__msg__PathHistoryPoint *
v2x_msg__msg__PathHistoryPoint__create()
{
  v2x_msg__msg__PathHistoryPoint * msg = (v2x_msg__msg__PathHistoryPoint *)malloc(sizeof(v2x_msg__msg__PathHistoryPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__PathHistoryPoint));
  bool success = v2x_msg__msg__PathHistoryPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__PathHistoryPoint__destroy(v2x_msg__msg__PathHistoryPoint * msg)
{
  if (msg) {
    v2x_msg__msg__PathHistoryPoint__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__PathHistoryPoint__Sequence__init(v2x_msg__msg__PathHistoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__PathHistoryPoint * data = NULL;
  if (size) {
    data = (v2x_msg__msg__PathHistoryPoint *)calloc(size, sizeof(v2x_msg__msg__PathHistoryPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__PathHistoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__PathHistoryPoint__fini(&data[i - 1]);
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
v2x_msg__msg__PathHistoryPoint__Sequence__fini(v2x_msg__msg__PathHistoryPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__PathHistoryPoint__fini(&array->data[i]);
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

v2x_msg__msg__PathHistoryPoint__Sequence *
v2x_msg__msg__PathHistoryPoint__Sequence__create(size_t size)
{
  v2x_msg__msg__PathHistoryPoint__Sequence * array = (v2x_msg__msg__PathHistoryPoint__Sequence *)malloc(sizeof(v2x_msg__msg__PathHistoryPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__PathHistoryPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__PathHistoryPoint__Sequence__destroy(v2x_msg__msg__PathHistoryPoint__Sequence * array)
{
  if (array) {
    v2x_msg__msg__PathHistoryPoint__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__PathHistoryPoint__Sequence__are_equal(const v2x_msg__msg__PathHistoryPoint__Sequence * lhs, const v2x_msg__msg__PathHistoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__PathHistoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__PathHistoryPoint__Sequence__copy(
  const v2x_msg__msg__PathHistoryPoint__Sequence * input,
  v2x_msg__msg__PathHistoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__PathHistoryPoint);
    v2x_msg__msg__PathHistoryPoint * data =
      (v2x_msg__msg__PathHistoryPoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__PathHistoryPoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__PathHistoryPoint__fini(&data[i]);
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
    if (!v2x_msg__msg__PathHistoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
