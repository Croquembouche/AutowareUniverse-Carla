// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/ConfidenceSet.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/confidence_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `accelconfidence`
#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__functions.h"
// Member `speedconfidence`
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__functions.h"
// Member `posconfidence`
#include "v2x_msg/msg/detail/position_confidence_set__functions.h"

bool
v2x_msg__msg__ConfidenceSet__init(v2x_msg__msg__ConfidenceSet * msg)
{
  if (!msg) {
    return false;
  }
  // accelconfidence
  if (!v2x_msg__msg__AccelSteerYawRateConfidence__init(&msg->accelconfidence)) {
    v2x_msg__msg__ConfidenceSet__fini(msg);
    return false;
  }
  // speedconfidence
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__init(&msg->speedconfidence)) {
    v2x_msg__msg__ConfidenceSet__fini(msg);
    return false;
  }
  // timeconfidence
  // posconfidence
  if (!v2x_msg__msg__PositionConfidenceSet__init(&msg->posconfidence)) {
    v2x_msg__msg__ConfidenceSet__fini(msg);
    return false;
  }
  // steerconfidence
  // headingconfidence
  // throttleconfidence
  return true;
}

void
v2x_msg__msg__ConfidenceSet__fini(v2x_msg__msg__ConfidenceSet * msg)
{
  if (!msg) {
    return;
  }
  // accelconfidence
  v2x_msg__msg__AccelSteerYawRateConfidence__fini(&msg->accelconfidence);
  // speedconfidence
  v2x_msg__msg__SpeedandHeadingandThrottleConfidence__fini(&msg->speedconfidence);
  // timeconfidence
  // posconfidence
  v2x_msg__msg__PositionConfidenceSet__fini(&msg->posconfidence);
  // steerconfidence
  // headingconfidence
  // throttleconfidence
}

bool
v2x_msg__msg__ConfidenceSet__are_equal(const v2x_msg__msg__ConfidenceSet * lhs, const v2x_msg__msg__ConfidenceSet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accelconfidence
  if (!v2x_msg__msg__AccelSteerYawRateConfidence__are_equal(
      &(lhs->accelconfidence), &(rhs->accelconfidence)))
  {
    return false;
  }
  // speedconfidence
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__are_equal(
      &(lhs->speedconfidence), &(rhs->speedconfidence)))
  {
    return false;
  }
  // timeconfidence
  if (lhs->timeconfidence != rhs->timeconfidence) {
    return false;
  }
  // posconfidence
  if (!v2x_msg__msg__PositionConfidenceSet__are_equal(
      &(lhs->posconfidence), &(rhs->posconfidence)))
  {
    return false;
  }
  // steerconfidence
  if (lhs->steerconfidence != rhs->steerconfidence) {
    return false;
  }
  // headingconfidence
  if (lhs->headingconfidence != rhs->headingconfidence) {
    return false;
  }
  // throttleconfidence
  if (lhs->throttleconfidence != rhs->throttleconfidence) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__ConfidenceSet__copy(
  const v2x_msg__msg__ConfidenceSet * input,
  v2x_msg__msg__ConfidenceSet * output)
{
  if (!input || !output) {
    return false;
  }
  // accelconfidence
  if (!v2x_msg__msg__AccelSteerYawRateConfidence__copy(
      &(input->accelconfidence), &(output->accelconfidence)))
  {
    return false;
  }
  // speedconfidence
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__copy(
      &(input->speedconfidence), &(output->speedconfidence)))
  {
    return false;
  }
  // timeconfidence
  output->timeconfidence = input->timeconfidence;
  // posconfidence
  if (!v2x_msg__msg__PositionConfidenceSet__copy(
      &(input->posconfidence), &(output->posconfidence)))
  {
    return false;
  }
  // steerconfidence
  output->steerconfidence = input->steerconfidence;
  // headingconfidence
  output->headingconfidence = input->headingconfidence;
  // throttleconfidence
  output->throttleconfidence = input->throttleconfidence;
  return true;
}

v2x_msg__msg__ConfidenceSet *
v2x_msg__msg__ConfidenceSet__create()
{
  v2x_msg__msg__ConfidenceSet * msg = (v2x_msg__msg__ConfidenceSet *)malloc(sizeof(v2x_msg__msg__ConfidenceSet));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__ConfidenceSet));
  bool success = v2x_msg__msg__ConfidenceSet__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__ConfidenceSet__destroy(v2x_msg__msg__ConfidenceSet * msg)
{
  if (msg) {
    v2x_msg__msg__ConfidenceSet__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__ConfidenceSet__Sequence__init(v2x_msg__msg__ConfidenceSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__ConfidenceSet * data = NULL;
  if (size) {
    data = (v2x_msg__msg__ConfidenceSet *)calloc(size, sizeof(v2x_msg__msg__ConfidenceSet));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__ConfidenceSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__ConfidenceSet__fini(&data[i - 1]);
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
v2x_msg__msg__ConfidenceSet__Sequence__fini(v2x_msg__msg__ConfidenceSet__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__ConfidenceSet__fini(&array->data[i]);
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

v2x_msg__msg__ConfidenceSet__Sequence *
v2x_msg__msg__ConfidenceSet__Sequence__create(size_t size)
{
  v2x_msg__msg__ConfidenceSet__Sequence * array = (v2x_msg__msg__ConfidenceSet__Sequence *)malloc(sizeof(v2x_msg__msg__ConfidenceSet__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__ConfidenceSet__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__ConfidenceSet__Sequence__destroy(v2x_msg__msg__ConfidenceSet__Sequence * array)
{
  if (array) {
    v2x_msg__msg__ConfidenceSet__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__ConfidenceSet__Sequence__are_equal(const v2x_msg__msg__ConfidenceSet__Sequence * lhs, const v2x_msg__msg__ConfidenceSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__ConfidenceSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__ConfidenceSet__Sequence__copy(
  const v2x_msg__msg__ConfidenceSet__Sequence * input,
  v2x_msg__msg__ConfidenceSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__ConfidenceSet);
    v2x_msg__msg__ConfidenceSet * data =
      (v2x_msg__msg__ConfidenceSet *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__ConfidenceSet__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__ConfidenceSet__fini(&data[i]);
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
    if (!v2x_msg__msg__ConfidenceSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
