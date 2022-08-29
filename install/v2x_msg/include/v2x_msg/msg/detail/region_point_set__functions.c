// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/RegionPointSet.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/region_point_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `anchor`
#include "v2x_msg/msg/detail/position3_d__functions.h"
// Member `nodelist`
#include "v2x_msg/msg/detail/region_offsets__functions.h"

bool
v2x_msg__msg__RegionPointSet__init(v2x_msg__msg__RegionPointSet * msg)
{
  if (!msg) {
    return false;
  }
  // anchor
  if (!v2x_msg__msg__Position3D__init(&msg->anchor)) {
    v2x_msg__msg__RegionPointSet__fini(msg);
    return false;
  }
  // scale
  // nodelist
  if (!v2x_msg__msg__RegionOffsets__Sequence__init(&msg->nodelist, 0)) {
    v2x_msg__msg__RegionPointSet__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__RegionPointSet__fini(v2x_msg__msg__RegionPointSet * msg)
{
  if (!msg) {
    return;
  }
  // anchor
  v2x_msg__msg__Position3D__fini(&msg->anchor);
  // scale
  // nodelist
  v2x_msg__msg__RegionOffsets__Sequence__fini(&msg->nodelist);
}

bool
v2x_msg__msg__RegionPointSet__are_equal(const v2x_msg__msg__RegionPointSet * lhs, const v2x_msg__msg__RegionPointSet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // anchor
  if (!v2x_msg__msg__Position3D__are_equal(
      &(lhs->anchor), &(rhs->anchor)))
  {
    return false;
  }
  // scale
  if (lhs->scale != rhs->scale) {
    return false;
  }
  // nodelist
  if (!v2x_msg__msg__RegionOffsets__Sequence__are_equal(
      &(lhs->nodelist), &(rhs->nodelist)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__RegionPointSet__copy(
  const v2x_msg__msg__RegionPointSet * input,
  v2x_msg__msg__RegionPointSet * output)
{
  if (!input || !output) {
    return false;
  }
  // anchor
  if (!v2x_msg__msg__Position3D__copy(
      &(input->anchor), &(output->anchor)))
  {
    return false;
  }
  // scale
  output->scale = input->scale;
  // nodelist
  if (!v2x_msg__msg__RegionOffsets__Sequence__copy(
      &(input->nodelist), &(output->nodelist)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__RegionPointSet *
v2x_msg__msg__RegionPointSet__create()
{
  v2x_msg__msg__RegionPointSet * msg = (v2x_msg__msg__RegionPointSet *)malloc(sizeof(v2x_msg__msg__RegionPointSet));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__RegionPointSet));
  bool success = v2x_msg__msg__RegionPointSet__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__RegionPointSet__destroy(v2x_msg__msg__RegionPointSet * msg)
{
  if (msg) {
    v2x_msg__msg__RegionPointSet__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__RegionPointSet__Sequence__init(v2x_msg__msg__RegionPointSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__RegionPointSet * data = NULL;
  if (size) {
    data = (v2x_msg__msg__RegionPointSet *)calloc(size, sizeof(v2x_msg__msg__RegionPointSet));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__RegionPointSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__RegionPointSet__fini(&data[i - 1]);
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
v2x_msg__msg__RegionPointSet__Sequence__fini(v2x_msg__msg__RegionPointSet__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__RegionPointSet__fini(&array->data[i]);
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

v2x_msg__msg__RegionPointSet__Sequence *
v2x_msg__msg__RegionPointSet__Sequence__create(size_t size)
{
  v2x_msg__msg__RegionPointSet__Sequence * array = (v2x_msg__msg__RegionPointSet__Sequence *)malloc(sizeof(v2x_msg__msg__RegionPointSet__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__RegionPointSet__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__RegionPointSet__Sequence__destroy(v2x_msg__msg__RegionPointSet__Sequence * array)
{
  if (array) {
    v2x_msg__msg__RegionPointSet__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__RegionPointSet__Sequence__are_equal(const v2x_msg__msg__RegionPointSet__Sequence * lhs, const v2x_msg__msg__RegionPointSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__RegionPointSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__RegionPointSet__Sequence__copy(
  const v2x_msg__msg__RegionPointSet__Sequence * input,
  v2x_msg__msg__RegionPointSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__RegionPointSet);
    v2x_msg__msg__RegionPointSet * data =
      (v2x_msg__msg__RegionPointSet *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__RegionPointSet__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__RegionPointSet__fini(&data[i]);
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
    if (!v2x_msg__msg__RegionPointSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
