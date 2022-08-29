// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/RoadSignID.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/road_sign_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position`
#include "v2x_msg/msg/detail/position3_d__functions.h"
// Member `viewangle`
// Member `msgcrc`
#include "rosidl_runtime_c/string_functions.h"

bool
v2x_msg__msg__RoadSignID__init(v2x_msg__msg__RoadSignID * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!v2x_msg__msg__Position3D__init(&msg->position)) {
    v2x_msg__msg__RoadSignID__fini(msg);
    return false;
  }
  // viewangle
  if (!rosidl_runtime_c__String__init(&msg->viewangle)) {
    v2x_msg__msg__RoadSignID__fini(msg);
    return false;
  }
  // mutcdcode
  // msgcrc
  if (!rosidl_runtime_c__String__init(&msg->msgcrc)) {
    v2x_msg__msg__RoadSignID__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__RoadSignID__fini(v2x_msg__msg__RoadSignID * msg)
{
  if (!msg) {
    return;
  }
  // position
  v2x_msg__msg__Position3D__fini(&msg->position);
  // viewangle
  rosidl_runtime_c__String__fini(&msg->viewangle);
  // mutcdcode
  // msgcrc
  rosidl_runtime_c__String__fini(&msg->msgcrc);
}

bool
v2x_msg__msg__RoadSignID__are_equal(const v2x_msg__msg__RoadSignID * lhs, const v2x_msg__msg__RoadSignID * rhs)
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
  // viewangle
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->viewangle), &(rhs->viewangle)))
  {
    return false;
  }
  // mutcdcode
  if (lhs->mutcdcode != rhs->mutcdcode) {
    return false;
  }
  // msgcrc
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msgcrc), &(rhs->msgcrc)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__RoadSignID__copy(
  const v2x_msg__msg__RoadSignID * input,
  v2x_msg__msg__RoadSignID * output)
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
  // viewangle
  if (!rosidl_runtime_c__String__copy(
      &(input->viewangle), &(output->viewangle)))
  {
    return false;
  }
  // mutcdcode
  output->mutcdcode = input->mutcdcode;
  // msgcrc
  if (!rosidl_runtime_c__String__copy(
      &(input->msgcrc), &(output->msgcrc)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__RoadSignID *
v2x_msg__msg__RoadSignID__create()
{
  v2x_msg__msg__RoadSignID * msg = (v2x_msg__msg__RoadSignID *)malloc(sizeof(v2x_msg__msg__RoadSignID));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__RoadSignID));
  bool success = v2x_msg__msg__RoadSignID__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__RoadSignID__destroy(v2x_msg__msg__RoadSignID * msg)
{
  if (msg) {
    v2x_msg__msg__RoadSignID__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__RoadSignID__Sequence__init(v2x_msg__msg__RoadSignID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__RoadSignID * data = NULL;
  if (size) {
    data = (v2x_msg__msg__RoadSignID *)calloc(size, sizeof(v2x_msg__msg__RoadSignID));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__RoadSignID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__RoadSignID__fini(&data[i - 1]);
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
v2x_msg__msg__RoadSignID__Sequence__fini(v2x_msg__msg__RoadSignID__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__RoadSignID__fini(&array->data[i]);
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

v2x_msg__msg__RoadSignID__Sequence *
v2x_msg__msg__RoadSignID__Sequence__create(size_t size)
{
  v2x_msg__msg__RoadSignID__Sequence * array = (v2x_msg__msg__RoadSignID__Sequence *)malloc(sizeof(v2x_msg__msg__RoadSignID__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__RoadSignID__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__RoadSignID__Sequence__destroy(v2x_msg__msg__RoadSignID__Sequence * array)
{
  if (array) {
    v2x_msg__msg__RoadSignID__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__RoadSignID__Sequence__are_equal(const v2x_msg__msg__RoadSignID__Sequence * lhs, const v2x_msg__msg__RoadSignID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__RoadSignID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__RoadSignID__Sequence__copy(
  const v2x_msg__msg__RoadSignID__Sequence * input,
  v2x_msg__msg__RoadSignID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__RoadSignID);
    v2x_msg__msg__RoadSignID * data =
      (v2x_msg__msg__RoadSignID *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__RoadSignID__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__RoadSignID__fini(&data[i]);
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
    if (!v2x_msg__msg__RoadSignID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
