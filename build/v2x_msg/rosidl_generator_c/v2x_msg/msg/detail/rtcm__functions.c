// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/RTCM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/rtcm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `anchorpoint`
#include "v2x_msg/msg/detail/full_position_vector__functions.h"
// Member `rtcmheader`
#include "v2x_msg/msg/detail/rtc_mheader__functions.h"
// Member `msgs`
#include "rosidl_runtime_c/string_functions.h"

bool
v2x_msg__msg__RTCM__init(v2x_msg__msg__RTCM * msg)
{
  if (!msg) {
    return false;
  }
  // msgcnt
  // rev
  // timestamp
  // anchorpoint
  if (!v2x_msg__msg__FullPositionVector__init(&msg->anchorpoint)) {
    v2x_msg__msg__RTCM__fini(msg);
    return false;
  }
  // rtcmheader
  if (!v2x_msg__msg__RTCMheader__init(&msg->rtcmheader)) {
    v2x_msg__msg__RTCM__fini(msg);
    return false;
  }
  // msgs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->msgs, 0)) {
    v2x_msg__msg__RTCM__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__RTCM__fini(v2x_msg__msg__RTCM * msg)
{
  if (!msg) {
    return;
  }
  // msgcnt
  // rev
  // timestamp
  // anchorpoint
  v2x_msg__msg__FullPositionVector__fini(&msg->anchorpoint);
  // rtcmheader
  v2x_msg__msg__RTCMheader__fini(&msg->rtcmheader);
  // msgs
  rosidl_runtime_c__String__Sequence__fini(&msg->msgs);
}

bool
v2x_msg__msg__RTCM__are_equal(const v2x_msg__msg__RTCM * lhs, const v2x_msg__msg__RTCM * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msgcnt
  if (lhs->msgcnt != rhs->msgcnt) {
    return false;
  }
  // rev
  if (lhs->rev != rhs->rev) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // anchorpoint
  if (!v2x_msg__msg__FullPositionVector__are_equal(
      &(lhs->anchorpoint), &(rhs->anchorpoint)))
  {
    return false;
  }
  // rtcmheader
  if (!v2x_msg__msg__RTCMheader__are_equal(
      &(lhs->rtcmheader), &(rhs->rtcmheader)))
  {
    return false;
  }
  // msgs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->msgs), &(rhs->msgs)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__RTCM__copy(
  const v2x_msg__msg__RTCM * input,
  v2x_msg__msg__RTCM * output)
{
  if (!input || !output) {
    return false;
  }
  // msgcnt
  output->msgcnt = input->msgcnt;
  // rev
  output->rev = input->rev;
  // timestamp
  output->timestamp = input->timestamp;
  // anchorpoint
  if (!v2x_msg__msg__FullPositionVector__copy(
      &(input->anchorpoint), &(output->anchorpoint)))
  {
    return false;
  }
  // rtcmheader
  if (!v2x_msg__msg__RTCMheader__copy(
      &(input->rtcmheader), &(output->rtcmheader)))
  {
    return false;
  }
  // msgs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->msgs), &(output->msgs)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__RTCM *
v2x_msg__msg__RTCM__create()
{
  v2x_msg__msg__RTCM * msg = (v2x_msg__msg__RTCM *)malloc(sizeof(v2x_msg__msg__RTCM));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__RTCM));
  bool success = v2x_msg__msg__RTCM__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__RTCM__destroy(v2x_msg__msg__RTCM * msg)
{
  if (msg) {
    v2x_msg__msg__RTCM__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__RTCM__Sequence__init(v2x_msg__msg__RTCM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__RTCM * data = NULL;
  if (size) {
    data = (v2x_msg__msg__RTCM *)calloc(size, sizeof(v2x_msg__msg__RTCM));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__RTCM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__RTCM__fini(&data[i - 1]);
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
v2x_msg__msg__RTCM__Sequence__fini(v2x_msg__msg__RTCM__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__RTCM__fini(&array->data[i]);
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

v2x_msg__msg__RTCM__Sequence *
v2x_msg__msg__RTCM__Sequence__create(size_t size)
{
  v2x_msg__msg__RTCM__Sequence * array = (v2x_msg__msg__RTCM__Sequence *)malloc(sizeof(v2x_msg__msg__RTCM__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__RTCM__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__RTCM__Sequence__destroy(v2x_msg__msg__RTCM__Sequence * array)
{
  if (array) {
    v2x_msg__msg__RTCM__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__RTCM__Sequence__are_equal(const v2x_msg__msg__RTCM__Sequence * lhs, const v2x_msg__msg__RTCM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__RTCM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__RTCM__Sequence__copy(
  const v2x_msg__msg__RTCM__Sequence * input,
  v2x_msg__msg__RTCM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__RTCM);
    v2x_msg__msg__RTCM * data =
      (v2x_msg__msg__RTCM *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__RTCM__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__RTCM__fini(&data[i]);
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
    if (!v2x_msg__msg__RTCM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
