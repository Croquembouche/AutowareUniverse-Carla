// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/NodeLL.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_ll__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `delta`
#include "v2x_msg/msg/detail/node_offset_point_ll__functions.h"
// Member `attributes`
#include "v2x_msg/msg/detail/node_attribute_set_ll__functions.h"

bool
v2x_msg__msg__NodeLL__init(v2x_msg__msg__NodeLL * msg)
{
  if (!msg) {
    return false;
  }
  // delta
  if (!v2x_msg__msg__NodeOffsetPointLL__init(&msg->delta)) {
    v2x_msg__msg__NodeLL__fini(msg);
    return false;
  }
  // attributes
  if (!v2x_msg__msg__NodeAttributeSetLL__init(&msg->attributes)) {
    v2x_msg__msg__NodeLL__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__NodeLL__fini(v2x_msg__msg__NodeLL * msg)
{
  if (!msg) {
    return;
  }
  // delta
  v2x_msg__msg__NodeOffsetPointLL__fini(&msg->delta);
  // attributes
  v2x_msg__msg__NodeAttributeSetLL__fini(&msg->attributes);
}

bool
v2x_msg__msg__NodeLL__are_equal(const v2x_msg__msg__NodeLL * lhs, const v2x_msg__msg__NodeLL * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // delta
  if (!v2x_msg__msg__NodeOffsetPointLL__are_equal(
      &(lhs->delta), &(rhs->delta)))
  {
    return false;
  }
  // attributes
  if (!v2x_msg__msg__NodeAttributeSetLL__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__NodeLL__copy(
  const v2x_msg__msg__NodeLL * input,
  v2x_msg__msg__NodeLL * output)
{
  if (!input || !output) {
    return false;
  }
  // delta
  if (!v2x_msg__msg__NodeOffsetPointLL__copy(
      &(input->delta), &(output->delta)))
  {
    return false;
  }
  // attributes
  if (!v2x_msg__msg__NodeAttributeSetLL__copy(
      &(input->attributes), &(output->attributes)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__NodeLL *
v2x_msg__msg__NodeLL__create()
{
  v2x_msg__msg__NodeLL * msg = (v2x_msg__msg__NodeLL *)malloc(sizeof(v2x_msg__msg__NodeLL));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__NodeLL));
  bool success = v2x_msg__msg__NodeLL__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__NodeLL__destroy(v2x_msg__msg__NodeLL * msg)
{
  if (msg) {
    v2x_msg__msg__NodeLL__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__NodeLL__Sequence__init(v2x_msg__msg__NodeLL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__NodeLL * data = NULL;
  if (size) {
    data = (v2x_msg__msg__NodeLL *)calloc(size, sizeof(v2x_msg__msg__NodeLL));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__NodeLL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__NodeLL__fini(&data[i - 1]);
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
v2x_msg__msg__NodeLL__Sequence__fini(v2x_msg__msg__NodeLL__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__NodeLL__fini(&array->data[i]);
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

v2x_msg__msg__NodeLL__Sequence *
v2x_msg__msg__NodeLL__Sequence__create(size_t size)
{
  v2x_msg__msg__NodeLL__Sequence * array = (v2x_msg__msg__NodeLL__Sequence *)malloc(sizeof(v2x_msg__msg__NodeLL__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__NodeLL__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__NodeLL__Sequence__destroy(v2x_msg__msg__NodeLL__Sequence * array)
{
  if (array) {
    v2x_msg__msg__NodeLL__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__NodeLL__Sequence__are_equal(const v2x_msg__msg__NodeLL__Sequence * lhs, const v2x_msg__msg__NodeLL__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__NodeLL__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__NodeLL__Sequence__copy(
  const v2x_msg__msg__NodeLL__Sequence * input,
  v2x_msg__msg__NodeLL__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__NodeLL);
    v2x_msg__msg__NodeLL * data =
      (v2x_msg__msg__NodeLL *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__NodeLL__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__NodeLL__fini(&data[i]);
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
    if (!v2x_msg__msg__NodeLL__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
