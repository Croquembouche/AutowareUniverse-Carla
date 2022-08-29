// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/MovementEvent.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/movement_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `timing`
#include "v2x_msg/msg/detail/time_change_details__functions.h"
// Member `speeds`
#include "v2x_msg/msg/detail/advisory_speed__functions.h"

bool
v2x_msg__msg__MovementEvent__init(v2x_msg__msg__MovementEvent * msg)
{
  if (!msg) {
    return false;
  }
  // movementphasestate
  // timing
  if (!v2x_msg__msg__TimeChangeDetails__init(&msg->timing)) {
    v2x_msg__msg__MovementEvent__fini(msg);
    return false;
  }
  // speeds
  if (!v2x_msg__msg__AdvisorySpeed__Sequence__init(&msg->speeds, 0)) {
    v2x_msg__msg__MovementEvent__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__MovementEvent__fini(v2x_msg__msg__MovementEvent * msg)
{
  if (!msg) {
    return;
  }
  // movementphasestate
  // timing
  v2x_msg__msg__TimeChangeDetails__fini(&msg->timing);
  // speeds
  v2x_msg__msg__AdvisorySpeed__Sequence__fini(&msg->speeds);
}

bool
v2x_msg__msg__MovementEvent__are_equal(const v2x_msg__msg__MovementEvent * lhs, const v2x_msg__msg__MovementEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // movementphasestate
  if (lhs->movementphasestate != rhs->movementphasestate) {
    return false;
  }
  // timing
  if (!v2x_msg__msg__TimeChangeDetails__are_equal(
      &(lhs->timing), &(rhs->timing)))
  {
    return false;
  }
  // speeds
  if (!v2x_msg__msg__AdvisorySpeed__Sequence__are_equal(
      &(lhs->speeds), &(rhs->speeds)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__MovementEvent__copy(
  const v2x_msg__msg__MovementEvent * input,
  v2x_msg__msg__MovementEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // movementphasestate
  output->movementphasestate = input->movementphasestate;
  // timing
  if (!v2x_msg__msg__TimeChangeDetails__copy(
      &(input->timing), &(output->timing)))
  {
    return false;
  }
  // speeds
  if (!v2x_msg__msg__AdvisorySpeed__Sequence__copy(
      &(input->speeds), &(output->speeds)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__MovementEvent *
v2x_msg__msg__MovementEvent__create()
{
  v2x_msg__msg__MovementEvent * msg = (v2x_msg__msg__MovementEvent *)malloc(sizeof(v2x_msg__msg__MovementEvent));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__MovementEvent));
  bool success = v2x_msg__msg__MovementEvent__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__MovementEvent__destroy(v2x_msg__msg__MovementEvent * msg)
{
  if (msg) {
    v2x_msg__msg__MovementEvent__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__MovementEvent__Sequence__init(v2x_msg__msg__MovementEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__MovementEvent * data = NULL;
  if (size) {
    data = (v2x_msg__msg__MovementEvent *)calloc(size, sizeof(v2x_msg__msg__MovementEvent));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__MovementEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__MovementEvent__fini(&data[i - 1]);
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
v2x_msg__msg__MovementEvent__Sequence__fini(v2x_msg__msg__MovementEvent__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__MovementEvent__fini(&array->data[i]);
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

v2x_msg__msg__MovementEvent__Sequence *
v2x_msg__msg__MovementEvent__Sequence__create(size_t size)
{
  v2x_msg__msg__MovementEvent__Sequence * array = (v2x_msg__msg__MovementEvent__Sequence *)malloc(sizeof(v2x_msg__msg__MovementEvent__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__MovementEvent__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__MovementEvent__Sequence__destroy(v2x_msg__msg__MovementEvent__Sequence * array)
{
  if (array) {
    v2x_msg__msg__MovementEvent__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__MovementEvent__Sequence__are_equal(const v2x_msg__msg__MovementEvent__Sequence * lhs, const v2x_msg__msg__MovementEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__MovementEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__MovementEvent__Sequence__copy(
  const v2x_msg__msg__MovementEvent__Sequence * input,
  v2x_msg__msg__MovementEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__MovementEvent);
    v2x_msg__msg__MovementEvent * data =
      (v2x_msg__msg__MovementEvent *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__MovementEvent__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__MovementEvent__fini(&data[i]);
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
    if (!v2x_msg__msg__MovementEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
