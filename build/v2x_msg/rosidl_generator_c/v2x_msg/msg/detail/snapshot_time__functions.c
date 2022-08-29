// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/SnapshotTime.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/snapshot_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__SnapshotTime__init(v2x_msg__msg__SnapshotTime * msg)
{
  if (!msg) {
    return false;
  }
  // speed1
  // time1
  // speed2
  // time2
  return true;
}

void
v2x_msg__msg__SnapshotTime__fini(v2x_msg__msg__SnapshotTime * msg)
{
  if (!msg) {
    return;
  }
  // speed1
  // time1
  // speed2
  // time2
}

bool
v2x_msg__msg__SnapshotTime__are_equal(const v2x_msg__msg__SnapshotTime * lhs, const v2x_msg__msg__SnapshotTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed1
  if (lhs->speed1 != rhs->speed1) {
    return false;
  }
  // time1
  if (lhs->time1 != rhs->time1) {
    return false;
  }
  // speed2
  if (lhs->speed2 != rhs->speed2) {
    return false;
  }
  // time2
  if (lhs->time2 != rhs->time2) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__SnapshotTime__copy(
  const v2x_msg__msg__SnapshotTime * input,
  v2x_msg__msg__SnapshotTime * output)
{
  if (!input || !output) {
    return false;
  }
  // speed1
  output->speed1 = input->speed1;
  // time1
  output->time1 = input->time1;
  // speed2
  output->speed2 = input->speed2;
  // time2
  output->time2 = input->time2;
  return true;
}

v2x_msg__msg__SnapshotTime *
v2x_msg__msg__SnapshotTime__create()
{
  v2x_msg__msg__SnapshotTime * msg = (v2x_msg__msg__SnapshotTime *)malloc(sizeof(v2x_msg__msg__SnapshotTime));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__SnapshotTime));
  bool success = v2x_msg__msg__SnapshotTime__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__SnapshotTime__destroy(v2x_msg__msg__SnapshotTime * msg)
{
  if (msg) {
    v2x_msg__msg__SnapshotTime__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__SnapshotTime__Sequence__init(v2x_msg__msg__SnapshotTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__SnapshotTime * data = NULL;
  if (size) {
    data = (v2x_msg__msg__SnapshotTime *)calloc(size, sizeof(v2x_msg__msg__SnapshotTime));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__SnapshotTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__SnapshotTime__fini(&data[i - 1]);
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
v2x_msg__msg__SnapshotTime__Sequence__fini(v2x_msg__msg__SnapshotTime__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__SnapshotTime__fini(&array->data[i]);
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

v2x_msg__msg__SnapshotTime__Sequence *
v2x_msg__msg__SnapshotTime__Sequence__create(size_t size)
{
  v2x_msg__msg__SnapshotTime__Sequence * array = (v2x_msg__msg__SnapshotTime__Sequence *)malloc(sizeof(v2x_msg__msg__SnapshotTime__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__SnapshotTime__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__SnapshotTime__Sequence__destroy(v2x_msg__msg__SnapshotTime__Sequence * array)
{
  if (array) {
    v2x_msg__msg__SnapshotTime__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__SnapshotTime__Sequence__are_equal(const v2x_msg__msg__SnapshotTime__Sequence * lhs, const v2x_msg__msg__SnapshotTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__SnapshotTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__SnapshotTime__Sequence__copy(
  const v2x_msg__msg__SnapshotTime__Sequence * input,
  v2x_msg__msg__SnapshotTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__SnapshotTime);
    v2x_msg__msg__SnapshotTime * data =
      (v2x_msg__msg__SnapshotTime *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__SnapshotTime__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__SnapshotTime__fini(&data[i]);
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
    if (!v2x_msg__msg__SnapshotTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
