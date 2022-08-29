// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/ICA.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/ica__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
// Member `eventflag`
#include "rosidl_runtime_c/string_functions.h"
// Member `partone`
#include "v2x_msg/msg/detail/bsm_core_data__functions.h"
// Member `path`
#include "v2x_msg/msg/detail/path_history__functions.h"
// Member `pathprediction`
#include "v2x_msg/msg/detail/path_prediction__functions.h"
// Member `intersectionid`
#include "v2x_msg/msg/detail/intersection_reference_id__functions.h"
// Member `lanenumber`
#include "v2x_msg/msg/detail/approach_or_lane__functions.h"

bool
v2x_msg__msg__ICA__init(v2x_msg__msg__ICA * msg)
{
  if (!msg) {
    return false;
  }
  // msgcnt
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    v2x_msg__msg__ICA__fini(msg);
    return false;
  }
  // timestamp
  // partone
  if (!v2x_msg__msg__BSMCoreData__init(&msg->partone)) {
    v2x_msg__msg__ICA__fini(msg);
    return false;
  }
  // path
  if (!v2x_msg__msg__PathHistory__init(&msg->path)) {
    v2x_msg__msg__ICA__fini(msg);
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__init(&msg->pathprediction)) {
    v2x_msg__msg__ICA__fini(msg);
    return false;
  }
  // intersectionid
  if (!v2x_msg__msg__IntersectionReferenceID__init(&msg->intersectionid)) {
    v2x_msg__msg__ICA__fini(msg);
    return false;
  }
  // lanenumber
  if (!v2x_msg__msg__ApproachOrLane__init(&msg->lanenumber)) {
    v2x_msg__msg__ICA__fini(msg);
    return false;
  }
  // eventflag
  if (!rosidl_runtime_c__String__init(&msg->eventflag)) {
    v2x_msg__msg__ICA__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__ICA__fini(v2x_msg__msg__ICA * msg)
{
  if (!msg) {
    return;
  }
  // msgcnt
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // timestamp
  // partone
  v2x_msg__msg__BSMCoreData__fini(&msg->partone);
  // path
  v2x_msg__msg__PathHistory__fini(&msg->path);
  // pathprediction
  v2x_msg__msg__PathPrediction__fini(&msg->pathprediction);
  // intersectionid
  v2x_msg__msg__IntersectionReferenceID__fini(&msg->intersectionid);
  // lanenumber
  v2x_msg__msg__ApproachOrLane__fini(&msg->lanenumber);
  // eventflag
  rosidl_runtime_c__String__fini(&msg->eventflag);
}

bool
v2x_msg__msg__ICA__are_equal(const v2x_msg__msg__ICA * lhs, const v2x_msg__msg__ICA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msgcnt
  if (lhs->msgcnt != rhs->msgcnt) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // partone
  if (!v2x_msg__msg__BSMCoreData__are_equal(
      &(lhs->partone), &(rhs->partone)))
  {
    return false;
  }
  // path
  if (!v2x_msg__msg__PathHistory__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__are_equal(
      &(lhs->pathprediction), &(rhs->pathprediction)))
  {
    return false;
  }
  // intersectionid
  if (!v2x_msg__msg__IntersectionReferenceID__are_equal(
      &(lhs->intersectionid), &(rhs->intersectionid)))
  {
    return false;
  }
  // lanenumber
  if (!v2x_msg__msg__ApproachOrLane__are_equal(
      &(lhs->lanenumber), &(rhs->lanenumber)))
  {
    return false;
  }
  // eventflag
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->eventflag), &(rhs->eventflag)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__ICA__copy(
  const v2x_msg__msg__ICA * input,
  v2x_msg__msg__ICA * output)
{
  if (!input || !output) {
    return false;
  }
  // msgcnt
  output->msgcnt = input->msgcnt;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // partone
  if (!v2x_msg__msg__BSMCoreData__copy(
      &(input->partone), &(output->partone)))
  {
    return false;
  }
  // path
  if (!v2x_msg__msg__PathHistory__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__copy(
      &(input->pathprediction), &(output->pathprediction)))
  {
    return false;
  }
  // intersectionid
  if (!v2x_msg__msg__IntersectionReferenceID__copy(
      &(input->intersectionid), &(output->intersectionid)))
  {
    return false;
  }
  // lanenumber
  if (!v2x_msg__msg__ApproachOrLane__copy(
      &(input->lanenumber), &(output->lanenumber)))
  {
    return false;
  }
  // eventflag
  if (!rosidl_runtime_c__String__copy(
      &(input->eventflag), &(output->eventflag)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__ICA *
v2x_msg__msg__ICA__create()
{
  v2x_msg__msg__ICA * msg = (v2x_msg__msg__ICA *)malloc(sizeof(v2x_msg__msg__ICA));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__ICA));
  bool success = v2x_msg__msg__ICA__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__ICA__destroy(v2x_msg__msg__ICA * msg)
{
  if (msg) {
    v2x_msg__msg__ICA__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__ICA__Sequence__init(v2x_msg__msg__ICA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__ICA * data = NULL;
  if (size) {
    data = (v2x_msg__msg__ICA *)calloc(size, sizeof(v2x_msg__msg__ICA));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__ICA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__ICA__fini(&data[i - 1]);
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
v2x_msg__msg__ICA__Sequence__fini(v2x_msg__msg__ICA__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__ICA__fini(&array->data[i]);
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

v2x_msg__msg__ICA__Sequence *
v2x_msg__msg__ICA__Sequence__create(size_t size)
{
  v2x_msg__msg__ICA__Sequence * array = (v2x_msg__msg__ICA__Sequence *)malloc(sizeof(v2x_msg__msg__ICA__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__ICA__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__ICA__Sequence__destroy(v2x_msg__msg__ICA__Sequence * array)
{
  if (array) {
    v2x_msg__msg__ICA__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__ICA__Sequence__are_equal(const v2x_msg__msg__ICA__Sequence * lhs, const v2x_msg__msg__ICA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__ICA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__ICA__Sequence__copy(
  const v2x_msg__msg__ICA__Sequence * input,
  v2x_msg__msg__ICA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__ICA);
    v2x_msg__msg__ICA * data =
      (v2x_msg__msg__ICA *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__ICA__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__ICA__fini(&data[i]);
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
    if (!v2x_msg__msg__ICA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
