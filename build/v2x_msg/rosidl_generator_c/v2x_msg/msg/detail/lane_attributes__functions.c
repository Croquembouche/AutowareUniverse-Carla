// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/LaneAttributes.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/lane_attributes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `directionaluse`
// Member `sharedwith`
#include "rosidl_runtime_c/string_functions.h"

bool
v2x_msg__msg__LaneAttributes__init(v2x_msg__msg__LaneAttributes * msg)
{
  if (!msg) {
    return false;
  }
  // directionaluse
  if (!rosidl_runtime_c__String__init(&msg->directionaluse)) {
    v2x_msg__msg__LaneAttributes__fini(msg);
    return false;
  }
  // sharedwith
  if (!rosidl_runtime_c__String__init(&msg->sharedwith)) {
    v2x_msg__msg__LaneAttributes__fini(msg);
    return false;
  }
  // lanetype
  return true;
}

void
v2x_msg__msg__LaneAttributes__fini(v2x_msg__msg__LaneAttributes * msg)
{
  if (!msg) {
    return;
  }
  // directionaluse
  rosidl_runtime_c__String__fini(&msg->directionaluse);
  // sharedwith
  rosidl_runtime_c__String__fini(&msg->sharedwith);
  // lanetype
}

bool
v2x_msg__msg__LaneAttributes__are_equal(const v2x_msg__msg__LaneAttributes * lhs, const v2x_msg__msg__LaneAttributes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // directionaluse
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->directionaluse), &(rhs->directionaluse)))
  {
    return false;
  }
  // sharedwith
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sharedwith), &(rhs->sharedwith)))
  {
    return false;
  }
  // lanetype
  if (lhs->lanetype != rhs->lanetype) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__LaneAttributes__copy(
  const v2x_msg__msg__LaneAttributes * input,
  v2x_msg__msg__LaneAttributes * output)
{
  if (!input || !output) {
    return false;
  }
  // directionaluse
  if (!rosidl_runtime_c__String__copy(
      &(input->directionaluse), &(output->directionaluse)))
  {
    return false;
  }
  // sharedwith
  if (!rosidl_runtime_c__String__copy(
      &(input->sharedwith), &(output->sharedwith)))
  {
    return false;
  }
  // lanetype
  output->lanetype = input->lanetype;
  return true;
}

v2x_msg__msg__LaneAttributes *
v2x_msg__msg__LaneAttributes__create()
{
  v2x_msg__msg__LaneAttributes * msg = (v2x_msg__msg__LaneAttributes *)malloc(sizeof(v2x_msg__msg__LaneAttributes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__LaneAttributes));
  bool success = v2x_msg__msg__LaneAttributes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__LaneAttributes__destroy(v2x_msg__msg__LaneAttributes * msg)
{
  if (msg) {
    v2x_msg__msg__LaneAttributes__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__LaneAttributes__Sequence__init(v2x_msg__msg__LaneAttributes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__LaneAttributes * data = NULL;
  if (size) {
    data = (v2x_msg__msg__LaneAttributes *)calloc(size, sizeof(v2x_msg__msg__LaneAttributes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__LaneAttributes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__LaneAttributes__fini(&data[i - 1]);
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
v2x_msg__msg__LaneAttributes__Sequence__fini(v2x_msg__msg__LaneAttributes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__LaneAttributes__fini(&array->data[i]);
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

v2x_msg__msg__LaneAttributes__Sequence *
v2x_msg__msg__LaneAttributes__Sequence__create(size_t size)
{
  v2x_msg__msg__LaneAttributes__Sequence * array = (v2x_msg__msg__LaneAttributes__Sequence *)malloc(sizeof(v2x_msg__msg__LaneAttributes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__LaneAttributes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__LaneAttributes__Sequence__destroy(v2x_msg__msg__LaneAttributes__Sequence * array)
{
  if (array) {
    v2x_msg__msg__LaneAttributes__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__LaneAttributes__Sequence__are_equal(const v2x_msg__msg__LaneAttributes__Sequence * lhs, const v2x_msg__msg__LaneAttributes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__LaneAttributes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__LaneAttributes__Sequence__copy(
  const v2x_msg__msg__LaneAttributes__Sequence * input,
  v2x_msg__msg__LaneAttributes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__LaneAttributes);
    v2x_msg__msg__LaneAttributes * data =
      (v2x_msg__msg__LaneAttributes *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__LaneAttributes__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__LaneAttributes__fini(&data[i]);
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
    if (!v2x_msg__msg__LaneAttributes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
