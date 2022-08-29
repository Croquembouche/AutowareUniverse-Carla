// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/GeometricProjection.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/geometric_projection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"
// Member `circle`
#include "v2x_msg/msg/detail/circle__functions.h"

bool
v2x_msg__msg__GeometricProjection__init(v2x_msg__msg__GeometricProjection * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    v2x_msg__msg__GeometricProjection__fini(msg);
    return false;
  }
  // extent
  // lanewidth
  // circle
  if (!v2x_msg__msg__Circle__init(&msg->circle)) {
    v2x_msg__msg__GeometricProjection__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__GeometricProjection__fini(v2x_msg__msg__GeometricProjection * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
  // extent
  // lanewidth
  // circle
  v2x_msg__msg__Circle__fini(&msg->circle);
}

bool
v2x_msg__msg__GeometricProjection__are_equal(const v2x_msg__msg__GeometricProjection * lhs, const v2x_msg__msg__GeometricProjection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // extent
  if (lhs->extent != rhs->extent) {
    return false;
  }
  // lanewidth
  if (lhs->lanewidth != rhs->lanewidth) {
    return false;
  }
  // circle
  if (!v2x_msg__msg__Circle__are_equal(
      &(lhs->circle), &(rhs->circle)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__GeometricProjection__copy(
  const v2x_msg__msg__GeometricProjection * input,
  v2x_msg__msg__GeometricProjection * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // extent
  output->extent = input->extent;
  // lanewidth
  output->lanewidth = input->lanewidth;
  // circle
  if (!v2x_msg__msg__Circle__copy(
      &(input->circle), &(output->circle)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__GeometricProjection *
v2x_msg__msg__GeometricProjection__create()
{
  v2x_msg__msg__GeometricProjection * msg = (v2x_msg__msg__GeometricProjection *)malloc(sizeof(v2x_msg__msg__GeometricProjection));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__GeometricProjection));
  bool success = v2x_msg__msg__GeometricProjection__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__GeometricProjection__destroy(v2x_msg__msg__GeometricProjection * msg)
{
  if (msg) {
    v2x_msg__msg__GeometricProjection__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__GeometricProjection__Sequence__init(v2x_msg__msg__GeometricProjection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__GeometricProjection * data = NULL;
  if (size) {
    data = (v2x_msg__msg__GeometricProjection *)calloc(size, sizeof(v2x_msg__msg__GeometricProjection));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__GeometricProjection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__GeometricProjection__fini(&data[i - 1]);
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
v2x_msg__msg__GeometricProjection__Sequence__fini(v2x_msg__msg__GeometricProjection__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__GeometricProjection__fini(&array->data[i]);
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

v2x_msg__msg__GeometricProjection__Sequence *
v2x_msg__msg__GeometricProjection__Sequence__create(size_t size)
{
  v2x_msg__msg__GeometricProjection__Sequence * array = (v2x_msg__msg__GeometricProjection__Sequence *)malloc(sizeof(v2x_msg__msg__GeometricProjection__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__GeometricProjection__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__GeometricProjection__Sequence__destroy(v2x_msg__msg__GeometricProjection__Sequence * array)
{
  if (array) {
    v2x_msg__msg__GeometricProjection__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__GeometricProjection__Sequence__are_equal(const v2x_msg__msg__GeometricProjection__Sequence * lhs, const v2x_msg__msg__GeometricProjection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__GeometricProjection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__GeometricProjection__Sequence__copy(
  const v2x_msg__msg__GeometricProjection__Sequence * input,
  v2x_msg__msg__GeometricProjection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__GeometricProjection);
    v2x_msg__msg__GeometricProjection * data =
      (v2x_msg__msg__GeometricProjection *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__GeometricProjection__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__GeometricProjection__fini(&data[i]);
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
    if (!v2x_msg__msg__GeometricProjection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
