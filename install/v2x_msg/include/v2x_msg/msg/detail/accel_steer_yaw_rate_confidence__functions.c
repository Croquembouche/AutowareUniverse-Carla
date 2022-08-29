// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/AccelSteerYawRateConfidence.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__AccelSteerYawRateConfidence__init(v2x_msg__msg__AccelSteerYawRateConfidence * msg)
{
  if (!msg) {
    return false;
  }
  // yawrate
  // acceleration
  // steeringwheelangle
  return true;
}

void
v2x_msg__msg__AccelSteerYawRateConfidence__fini(v2x_msg__msg__AccelSteerYawRateConfidence * msg)
{
  if (!msg) {
    return;
  }
  // yawrate
  // acceleration
  // steeringwheelangle
}

bool
v2x_msg__msg__AccelSteerYawRateConfidence__are_equal(const v2x_msg__msg__AccelSteerYawRateConfidence * lhs, const v2x_msg__msg__AccelSteerYawRateConfidence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yawrate
  if (lhs->yawrate != rhs->yawrate) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // steeringwheelangle
  if (lhs->steeringwheelangle != rhs->steeringwheelangle) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__AccelSteerYawRateConfidence__copy(
  const v2x_msg__msg__AccelSteerYawRateConfidence * input,
  v2x_msg__msg__AccelSteerYawRateConfidence * output)
{
  if (!input || !output) {
    return false;
  }
  // yawrate
  output->yawrate = input->yawrate;
  // acceleration
  output->acceleration = input->acceleration;
  // steeringwheelangle
  output->steeringwheelangle = input->steeringwheelangle;
  return true;
}

v2x_msg__msg__AccelSteerYawRateConfidence *
v2x_msg__msg__AccelSteerYawRateConfidence__create()
{
  v2x_msg__msg__AccelSteerYawRateConfidence * msg = (v2x_msg__msg__AccelSteerYawRateConfidence *)malloc(sizeof(v2x_msg__msg__AccelSteerYawRateConfidence));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__AccelSteerYawRateConfidence));
  bool success = v2x_msg__msg__AccelSteerYawRateConfidence__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__AccelSteerYawRateConfidence__destroy(v2x_msg__msg__AccelSteerYawRateConfidence * msg)
{
  if (msg) {
    v2x_msg__msg__AccelSteerYawRateConfidence__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__AccelSteerYawRateConfidence__Sequence__init(v2x_msg__msg__AccelSteerYawRateConfidence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__AccelSteerYawRateConfidence * data = NULL;
  if (size) {
    data = (v2x_msg__msg__AccelSteerYawRateConfidence *)calloc(size, sizeof(v2x_msg__msg__AccelSteerYawRateConfidence));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__AccelSteerYawRateConfidence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__AccelSteerYawRateConfidence__fini(&data[i - 1]);
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
v2x_msg__msg__AccelSteerYawRateConfidence__Sequence__fini(v2x_msg__msg__AccelSteerYawRateConfidence__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__AccelSteerYawRateConfidence__fini(&array->data[i]);
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

v2x_msg__msg__AccelSteerYawRateConfidence__Sequence *
v2x_msg__msg__AccelSteerYawRateConfidence__Sequence__create(size_t size)
{
  v2x_msg__msg__AccelSteerYawRateConfidence__Sequence * array = (v2x_msg__msg__AccelSteerYawRateConfidence__Sequence *)malloc(sizeof(v2x_msg__msg__AccelSteerYawRateConfidence__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__AccelSteerYawRateConfidence__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__AccelSteerYawRateConfidence__Sequence__destroy(v2x_msg__msg__AccelSteerYawRateConfidence__Sequence * array)
{
  if (array) {
    v2x_msg__msg__AccelSteerYawRateConfidence__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__AccelSteerYawRateConfidence__Sequence__are_equal(const v2x_msg__msg__AccelSteerYawRateConfidence__Sequence * lhs, const v2x_msg__msg__AccelSteerYawRateConfidence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__AccelSteerYawRateConfidence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__AccelSteerYawRateConfidence__Sequence__copy(
  const v2x_msg__msg__AccelSteerYawRateConfidence__Sequence * input,
  v2x_msg__msg__AccelSteerYawRateConfidence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__AccelSteerYawRateConfidence);
    v2x_msg__msg__AccelSteerYawRateConfidence * data =
      (v2x_msg__msg__AccelSteerYawRateConfidence *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__AccelSteerYawRateConfidence__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__AccelSteerYawRateConfidence__fini(&data[i]);
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
    if (!v2x_msg__msg__AccelSteerYawRateConfidence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
