// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/PathHistory.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/path_history__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `initialposition`
#include "v2x_msg/msg/detail/full_position_vector__functions.h"
// Member `currgnssstatus`
#include "rosidl_runtime_c/string_functions.h"
// Member `crumbdata`
#include "v2x_msg/msg/detail/path_history_point__functions.h"

bool
v2x_msg__msg__PathHistory__init(v2x_msg__msg__PathHistory * msg)
{
  if (!msg) {
    return false;
  }
  // initialposition
  if (!v2x_msg__msg__FullPositionVector__init(&msg->initialposition)) {
    v2x_msg__msg__PathHistory__fini(msg);
    return false;
  }
  // currgnssstatus
  if (!rosidl_runtime_c__String__init(&msg->currgnssstatus)) {
    v2x_msg__msg__PathHistory__fini(msg);
    return false;
  }
  // crumbdata
  if (!v2x_msg__msg__PathHistoryPoint__Sequence__init(&msg->crumbdata, 0)) {
    v2x_msg__msg__PathHistory__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__PathHistory__fini(v2x_msg__msg__PathHistory * msg)
{
  if (!msg) {
    return;
  }
  // initialposition
  v2x_msg__msg__FullPositionVector__fini(&msg->initialposition);
  // currgnssstatus
  rosidl_runtime_c__String__fini(&msg->currgnssstatus);
  // crumbdata
  v2x_msg__msg__PathHistoryPoint__Sequence__fini(&msg->crumbdata);
}

bool
v2x_msg__msg__PathHistory__are_equal(const v2x_msg__msg__PathHistory * lhs, const v2x_msg__msg__PathHistory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // initialposition
  if (!v2x_msg__msg__FullPositionVector__are_equal(
      &(lhs->initialposition), &(rhs->initialposition)))
  {
    return false;
  }
  // currgnssstatus
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->currgnssstatus), &(rhs->currgnssstatus)))
  {
    return false;
  }
  // crumbdata
  if (!v2x_msg__msg__PathHistoryPoint__Sequence__are_equal(
      &(lhs->crumbdata), &(rhs->crumbdata)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__PathHistory__copy(
  const v2x_msg__msg__PathHistory * input,
  v2x_msg__msg__PathHistory * output)
{
  if (!input || !output) {
    return false;
  }
  // initialposition
  if (!v2x_msg__msg__FullPositionVector__copy(
      &(input->initialposition), &(output->initialposition)))
  {
    return false;
  }
  // currgnssstatus
  if (!rosidl_runtime_c__String__copy(
      &(input->currgnssstatus), &(output->currgnssstatus)))
  {
    return false;
  }
  // crumbdata
  if (!v2x_msg__msg__PathHistoryPoint__Sequence__copy(
      &(input->crumbdata), &(output->crumbdata)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__PathHistory *
v2x_msg__msg__PathHistory__create()
{
  v2x_msg__msg__PathHistory * msg = (v2x_msg__msg__PathHistory *)malloc(sizeof(v2x_msg__msg__PathHistory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__PathHistory));
  bool success = v2x_msg__msg__PathHistory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__PathHistory__destroy(v2x_msg__msg__PathHistory * msg)
{
  if (msg) {
    v2x_msg__msg__PathHistory__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__PathHistory__Sequence__init(v2x_msg__msg__PathHistory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__PathHistory * data = NULL;
  if (size) {
    data = (v2x_msg__msg__PathHistory *)calloc(size, sizeof(v2x_msg__msg__PathHistory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__PathHistory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__PathHistory__fini(&data[i - 1]);
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
v2x_msg__msg__PathHistory__Sequence__fini(v2x_msg__msg__PathHistory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__PathHistory__fini(&array->data[i]);
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

v2x_msg__msg__PathHistory__Sequence *
v2x_msg__msg__PathHistory__Sequence__create(size_t size)
{
  v2x_msg__msg__PathHistory__Sequence * array = (v2x_msg__msg__PathHistory__Sequence *)malloc(sizeof(v2x_msg__msg__PathHistory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__PathHistory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__PathHistory__Sequence__destroy(v2x_msg__msg__PathHistory__Sequence * array)
{
  if (array) {
    v2x_msg__msg__PathHistory__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__PathHistory__Sequence__are_equal(const v2x_msg__msg__PathHistory__Sequence * lhs, const v2x_msg__msg__PathHistory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__PathHistory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__PathHistory__Sequence__copy(
  const v2x_msg__msg__PathHistory__Sequence * input,
  v2x_msg__msg__PathHistory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__PathHistory);
    v2x_msg__msg__PathHistory * data =
      (v2x_msg__msg__PathHistory *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__PathHistory__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__PathHistory__fini(&data[i]);
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
    if (!v2x_msg__msg__PathHistory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
