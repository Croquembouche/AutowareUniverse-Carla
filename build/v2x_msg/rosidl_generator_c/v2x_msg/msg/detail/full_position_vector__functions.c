// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/FullPositionVector.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/full_position_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `utctime`
#include "v2x_msg/msg/detail/d_date_time__functions.h"
// Member `speed`
#include "v2x_msg/msg/detail/transmission_and_speed__functions.h"
// Member `posaccuracy`
#include "v2x_msg/msg/detail/positional_accuracy__functions.h"
// Member `posconfidence`
#include "v2x_msg/msg/detail/position_confidence_set__functions.h"
// Member `speedconfidence`
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__functions.h"

bool
v2x_msg__msg__FullPositionVector__init(v2x_msg__msg__FullPositionVector * msg)
{
  if (!msg) {
    return false;
  }
  // utctime
  if (!v2x_msg__msg__DDateTime__init(&msg->utctime)) {
    v2x_msg__msg__FullPositionVector__fini(msg);
    return false;
  }
  // longitude
  // lat
  // elevation
  // heading
  // speed
  if (!v2x_msg__msg__TransmissionAndSpeed__init(&msg->speed)) {
    v2x_msg__msg__FullPositionVector__fini(msg);
    return false;
  }
  // posaccuracy
  if (!v2x_msg__msg__PositionalAccuracy__init(&msg->posaccuracy)) {
    v2x_msg__msg__FullPositionVector__fini(msg);
    return false;
  }
  // timeconfidence
  // posconfidence
  if (!v2x_msg__msg__PositionConfidenceSet__init(&msg->posconfidence)) {
    v2x_msg__msg__FullPositionVector__fini(msg);
    return false;
  }
  // speedconfidence
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__init(&msg->speedconfidence)) {
    v2x_msg__msg__FullPositionVector__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__FullPositionVector__fini(v2x_msg__msg__FullPositionVector * msg)
{
  if (!msg) {
    return;
  }
  // utctime
  v2x_msg__msg__DDateTime__fini(&msg->utctime);
  // longitude
  // lat
  // elevation
  // heading
  // speed
  v2x_msg__msg__TransmissionAndSpeed__fini(&msg->speed);
  // posaccuracy
  v2x_msg__msg__PositionalAccuracy__fini(&msg->posaccuracy);
  // timeconfidence
  // posconfidence
  v2x_msg__msg__PositionConfidenceSet__fini(&msg->posconfidence);
  // speedconfidence
  v2x_msg__msg__SpeedandHeadingandThrottleConfidence__fini(&msg->speedconfidence);
}

bool
v2x_msg__msg__FullPositionVector__are_equal(const v2x_msg__msg__FullPositionVector * lhs, const v2x_msg__msg__FullPositionVector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // utctime
  if (!v2x_msg__msg__DDateTime__are_equal(
      &(lhs->utctime), &(rhs->utctime)))
  {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // speed
  if (!v2x_msg__msg__TransmissionAndSpeed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // posaccuracy
  if (!v2x_msg__msg__PositionalAccuracy__are_equal(
      &(lhs->posaccuracy), &(rhs->posaccuracy)))
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
  // speedconfidence
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__are_equal(
      &(lhs->speedconfidence), &(rhs->speedconfidence)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__FullPositionVector__copy(
  const v2x_msg__msg__FullPositionVector * input,
  v2x_msg__msg__FullPositionVector * output)
{
  if (!input || !output) {
    return false;
  }
  // utctime
  if (!v2x_msg__msg__DDateTime__copy(
      &(input->utctime), &(output->utctime)))
  {
    return false;
  }
  // longitude
  output->longitude = input->longitude;
  // lat
  output->lat = input->lat;
  // elevation
  output->elevation = input->elevation;
  // heading
  output->heading = input->heading;
  // speed
  if (!v2x_msg__msg__TransmissionAndSpeed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // posaccuracy
  if (!v2x_msg__msg__PositionalAccuracy__copy(
      &(input->posaccuracy), &(output->posaccuracy)))
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
  // speedconfidence
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__copy(
      &(input->speedconfidence), &(output->speedconfidence)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__FullPositionVector *
v2x_msg__msg__FullPositionVector__create()
{
  v2x_msg__msg__FullPositionVector * msg = (v2x_msg__msg__FullPositionVector *)malloc(sizeof(v2x_msg__msg__FullPositionVector));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__FullPositionVector));
  bool success = v2x_msg__msg__FullPositionVector__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__FullPositionVector__destroy(v2x_msg__msg__FullPositionVector * msg)
{
  if (msg) {
    v2x_msg__msg__FullPositionVector__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__FullPositionVector__Sequence__init(v2x_msg__msg__FullPositionVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__FullPositionVector * data = NULL;
  if (size) {
    data = (v2x_msg__msg__FullPositionVector *)calloc(size, sizeof(v2x_msg__msg__FullPositionVector));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__FullPositionVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__FullPositionVector__fini(&data[i - 1]);
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
v2x_msg__msg__FullPositionVector__Sequence__fini(v2x_msg__msg__FullPositionVector__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__FullPositionVector__fini(&array->data[i]);
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

v2x_msg__msg__FullPositionVector__Sequence *
v2x_msg__msg__FullPositionVector__Sequence__create(size_t size)
{
  v2x_msg__msg__FullPositionVector__Sequence * array = (v2x_msg__msg__FullPositionVector__Sequence *)malloc(sizeof(v2x_msg__msg__FullPositionVector__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__FullPositionVector__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__FullPositionVector__Sequence__destroy(v2x_msg__msg__FullPositionVector__Sequence * array)
{
  if (array) {
    v2x_msg__msg__FullPositionVector__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__FullPositionVector__Sequence__are_equal(const v2x_msg__msg__FullPositionVector__Sequence * lhs, const v2x_msg__msg__FullPositionVector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__FullPositionVector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__FullPositionVector__Sequence__copy(
  const v2x_msg__msg__FullPositionVector__Sequence * input,
  v2x_msg__msg__FullPositionVector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__FullPositionVector);
    v2x_msg__msg__FullPositionVector * data =
      (v2x_msg__msg__FullPositionVector *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__FullPositionVector__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__FullPositionVector__fini(&data[i]);
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
    if (!v2x_msg__msg__FullPositionVector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
