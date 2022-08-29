// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/movement_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `movementname`
#include "rosidl_runtime_c/string_functions.h"
// Member `statetimespeed`
#include "v2x_msg/msg/detail/movement_event__functions.h"
// Member `maneuverassistlist`
#include "v2x_msg/msg/detail/connection_maneuver_assist__functions.h"

bool
v2x_msg__msg__MovementState__init(v2x_msg__msg__MovementState * msg)
{
  if (!msg) {
    return false;
  }
  // movementname
  if (!rosidl_runtime_c__String__init(&msg->movementname)) {
    v2x_msg__msg__MovementState__fini(msg);
    return false;
  }
  // signalgroupid
  // statetimespeed
  if (!v2x_msg__msg__MovementEvent__Sequence__init(&msg->statetimespeed, 0)) {
    v2x_msg__msg__MovementState__fini(msg);
    return false;
  }
  // maneuverassistlist
  if (!v2x_msg__msg__ConnectionManeuverAssist__init(&msg->maneuverassistlist)) {
    v2x_msg__msg__MovementState__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__MovementState__fini(v2x_msg__msg__MovementState * msg)
{
  if (!msg) {
    return;
  }
  // movementname
  rosidl_runtime_c__String__fini(&msg->movementname);
  // signalgroupid
  // statetimespeed
  v2x_msg__msg__MovementEvent__Sequence__fini(&msg->statetimespeed);
  // maneuverassistlist
  v2x_msg__msg__ConnectionManeuverAssist__fini(&msg->maneuverassistlist);
}

bool
v2x_msg__msg__MovementState__are_equal(const v2x_msg__msg__MovementState * lhs, const v2x_msg__msg__MovementState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // movementname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->movementname), &(rhs->movementname)))
  {
    return false;
  }
  // signalgroupid
  if (lhs->signalgroupid != rhs->signalgroupid) {
    return false;
  }
  // statetimespeed
  if (!v2x_msg__msg__MovementEvent__Sequence__are_equal(
      &(lhs->statetimespeed), &(rhs->statetimespeed)))
  {
    return false;
  }
  // maneuverassistlist
  if (!v2x_msg__msg__ConnectionManeuverAssist__are_equal(
      &(lhs->maneuverassistlist), &(rhs->maneuverassistlist)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__MovementState__copy(
  const v2x_msg__msg__MovementState * input,
  v2x_msg__msg__MovementState * output)
{
  if (!input || !output) {
    return false;
  }
  // movementname
  if (!rosidl_runtime_c__String__copy(
      &(input->movementname), &(output->movementname)))
  {
    return false;
  }
  // signalgroupid
  output->signalgroupid = input->signalgroupid;
  // statetimespeed
  if (!v2x_msg__msg__MovementEvent__Sequence__copy(
      &(input->statetimespeed), &(output->statetimespeed)))
  {
    return false;
  }
  // maneuverassistlist
  if (!v2x_msg__msg__ConnectionManeuverAssist__copy(
      &(input->maneuverassistlist), &(output->maneuverassistlist)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__MovementState *
v2x_msg__msg__MovementState__create()
{
  v2x_msg__msg__MovementState * msg = (v2x_msg__msg__MovementState *)malloc(sizeof(v2x_msg__msg__MovementState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__MovementState));
  bool success = v2x_msg__msg__MovementState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__MovementState__destroy(v2x_msg__msg__MovementState * msg)
{
  if (msg) {
    v2x_msg__msg__MovementState__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__MovementState__Sequence__init(v2x_msg__msg__MovementState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__MovementState * data = NULL;
  if (size) {
    data = (v2x_msg__msg__MovementState *)calloc(size, sizeof(v2x_msg__msg__MovementState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__MovementState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__MovementState__fini(&data[i - 1]);
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
v2x_msg__msg__MovementState__Sequence__fini(v2x_msg__msg__MovementState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__MovementState__fini(&array->data[i]);
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

v2x_msg__msg__MovementState__Sequence *
v2x_msg__msg__MovementState__Sequence__create(size_t size)
{
  v2x_msg__msg__MovementState__Sequence * array = (v2x_msg__msg__MovementState__Sequence *)malloc(sizeof(v2x_msg__msg__MovementState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__MovementState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__MovementState__Sequence__destroy(v2x_msg__msg__MovementState__Sequence * array)
{
  if (array) {
    v2x_msg__msg__MovementState__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__MovementState__Sequence__are_equal(const v2x_msg__msg__MovementState__Sequence * lhs, const v2x_msg__msg__MovementState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__MovementState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__MovementState__Sequence__copy(
  const v2x_msg__msg__MovementState__Sequence * input,
  v2x_msg__msg__MovementState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__MovementState);
    v2x_msg__msg__MovementState * data =
      (v2x_msg__msg__MovementState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__MovementState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__MovementState__fini(&data[i]);
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
    if (!v2x_msg__msg__MovementState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
