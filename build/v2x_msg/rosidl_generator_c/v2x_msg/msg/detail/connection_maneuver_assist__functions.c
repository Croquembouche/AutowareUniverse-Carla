// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/connection_maneuver_assist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__ConnectionManeuverAssist__init(v2x_msg__msg__ConnectionManeuverAssist * msg)
{
  if (!msg) {
    return false;
  }
  // connectionid
  // queuelength
  // availablestoragelength
  // waitonstop
  // pedbicycledetect
  return true;
}

void
v2x_msg__msg__ConnectionManeuverAssist__fini(v2x_msg__msg__ConnectionManeuverAssist * msg)
{
  if (!msg) {
    return;
  }
  // connectionid
  // queuelength
  // availablestoragelength
  // waitonstop
  // pedbicycledetect
}

bool
v2x_msg__msg__ConnectionManeuverAssist__are_equal(const v2x_msg__msg__ConnectionManeuverAssist * lhs, const v2x_msg__msg__ConnectionManeuverAssist * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connectionid
  if (lhs->connectionid != rhs->connectionid) {
    return false;
  }
  // queuelength
  if (lhs->queuelength != rhs->queuelength) {
    return false;
  }
  // availablestoragelength
  if (lhs->availablestoragelength != rhs->availablestoragelength) {
    return false;
  }
  // waitonstop
  if (lhs->waitonstop != rhs->waitonstop) {
    return false;
  }
  // pedbicycledetect
  if (lhs->pedbicycledetect != rhs->pedbicycledetect) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__ConnectionManeuverAssist__copy(
  const v2x_msg__msg__ConnectionManeuverAssist * input,
  v2x_msg__msg__ConnectionManeuverAssist * output)
{
  if (!input || !output) {
    return false;
  }
  // connectionid
  output->connectionid = input->connectionid;
  // queuelength
  output->queuelength = input->queuelength;
  // availablestoragelength
  output->availablestoragelength = input->availablestoragelength;
  // waitonstop
  output->waitonstop = input->waitonstop;
  // pedbicycledetect
  output->pedbicycledetect = input->pedbicycledetect;
  return true;
}

v2x_msg__msg__ConnectionManeuverAssist *
v2x_msg__msg__ConnectionManeuverAssist__create()
{
  v2x_msg__msg__ConnectionManeuverAssist * msg = (v2x_msg__msg__ConnectionManeuverAssist *)malloc(sizeof(v2x_msg__msg__ConnectionManeuverAssist));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__ConnectionManeuverAssist));
  bool success = v2x_msg__msg__ConnectionManeuverAssist__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__ConnectionManeuverAssist__destroy(v2x_msg__msg__ConnectionManeuverAssist * msg)
{
  if (msg) {
    v2x_msg__msg__ConnectionManeuverAssist__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__ConnectionManeuverAssist__Sequence__init(v2x_msg__msg__ConnectionManeuverAssist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__ConnectionManeuverAssist * data = NULL;
  if (size) {
    data = (v2x_msg__msg__ConnectionManeuverAssist *)calloc(size, sizeof(v2x_msg__msg__ConnectionManeuverAssist));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__ConnectionManeuverAssist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__ConnectionManeuverAssist__fini(&data[i - 1]);
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
v2x_msg__msg__ConnectionManeuverAssist__Sequence__fini(v2x_msg__msg__ConnectionManeuverAssist__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__ConnectionManeuverAssist__fini(&array->data[i]);
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

v2x_msg__msg__ConnectionManeuverAssist__Sequence *
v2x_msg__msg__ConnectionManeuverAssist__Sequence__create(size_t size)
{
  v2x_msg__msg__ConnectionManeuverAssist__Sequence * array = (v2x_msg__msg__ConnectionManeuverAssist__Sequence *)malloc(sizeof(v2x_msg__msg__ConnectionManeuverAssist__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__ConnectionManeuverAssist__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__ConnectionManeuverAssist__Sequence__destroy(v2x_msg__msg__ConnectionManeuverAssist__Sequence * array)
{
  if (array) {
    v2x_msg__msg__ConnectionManeuverAssist__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__ConnectionManeuverAssist__Sequence__are_equal(const v2x_msg__msg__ConnectionManeuverAssist__Sequence * lhs, const v2x_msg__msg__ConnectionManeuverAssist__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__ConnectionManeuverAssist__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__ConnectionManeuverAssist__Sequence__copy(
  const v2x_msg__msg__ConnectionManeuverAssist__Sequence * input,
  v2x_msg__msg__ConnectionManeuverAssist__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__ConnectionManeuverAssist);
    v2x_msg__msg__ConnectionManeuverAssist * data =
      (v2x_msg__msg__ConnectionManeuverAssist *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__ConnectionManeuverAssist__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__ConnectionManeuverAssist__fini(&data[i]);
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
    if (!v2x_msg__msg__ConnectionManeuverAssist__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
