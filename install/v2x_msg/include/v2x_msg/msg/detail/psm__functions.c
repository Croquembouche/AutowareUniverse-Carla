// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/PSM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/psm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
// Member `usestate`
// Member `activitytype`
// Member `activitysubtype`
// Member `assisttype`
// Member `sizing`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "v2x_msg/msg/detail/position3_d__functions.h"
// Member `accuracy`
#include "v2x_msg/msg/detail/positional_accuracy__functions.h"
// Member `accelset`
#include "v2x_msg/msg/detail/acceleration_set4_way__functions.h"
// Member `pathhistory`
#include "v2x_msg/msg/detail/path_history__functions.h"
// Member `pathprediction`
#include "v2x_msg/msg/detail/path_prediction__functions.h"
// Member `propulsion`
#include "v2x_msg/msg/detail/propelled_information__functions.h"

bool
v2x_msg__msg__PSM__init(v2x_msg__msg__PSM * msg)
{
  if (!msg) {
    return false;
  }
  // basictype
  // secmark
  // msgcnt
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // position
  if (!v2x_msg__msg__Position3D__init(&msg->position)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__init(&msg->accuracy)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // speed
  // heading
  // accelset
  if (!v2x_msg__msg__AccelerationSet4Way__init(&msg->accelset)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // pathhistory
  if (!v2x_msg__msg__PathHistory__init(&msg->pathhistory)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__init(&msg->pathprediction)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // propulsion
  if (!v2x_msg__msg__PropelledInformation__init(&msg->propulsion)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // usestate
  if (!rosidl_runtime_c__String__init(&msg->usestate)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // crossrequest
  // crossstate
  // clustersize
  // clusterradius
  // eventrespondertype
  // activitytype
  if (!rosidl_runtime_c__String__init(&msg->activitytype)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // activitysubtype
  if (!rosidl_runtime_c__String__init(&msg->activitysubtype)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // assisttype
  if (!rosidl_runtime_c__String__init(&msg->assisttype)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // sizing
  if (!rosidl_runtime_c__String__init(&msg->sizing)) {
    v2x_msg__msg__PSM__fini(msg);
    return false;
  }
  // attachment
  // attachmentradius
  // animaltype
  return true;
}

void
v2x_msg__msg__PSM__fini(v2x_msg__msg__PSM * msg)
{
  if (!msg) {
    return;
  }
  // basictype
  // secmark
  // msgcnt
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // position
  v2x_msg__msg__Position3D__fini(&msg->position);
  // accuracy
  v2x_msg__msg__PositionalAccuracy__fini(&msg->accuracy);
  // speed
  // heading
  // accelset
  v2x_msg__msg__AccelerationSet4Way__fini(&msg->accelset);
  // pathhistory
  v2x_msg__msg__PathHistory__fini(&msg->pathhistory);
  // pathprediction
  v2x_msg__msg__PathPrediction__fini(&msg->pathprediction);
  // propulsion
  v2x_msg__msg__PropelledInformation__fini(&msg->propulsion);
  // usestate
  rosidl_runtime_c__String__fini(&msg->usestate);
  // crossrequest
  // crossstate
  // clustersize
  // clusterradius
  // eventrespondertype
  // activitytype
  rosidl_runtime_c__String__fini(&msg->activitytype);
  // activitysubtype
  rosidl_runtime_c__String__fini(&msg->activitysubtype);
  // assisttype
  rosidl_runtime_c__String__fini(&msg->assisttype);
  // sizing
  rosidl_runtime_c__String__fini(&msg->sizing);
  // attachment
  // attachmentradius
  // animaltype
}

bool
v2x_msg__msg__PSM__are_equal(const v2x_msg__msg__PSM * lhs, const v2x_msg__msg__PSM * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // basictype
  if (lhs->basictype != rhs->basictype) {
    return false;
  }
  // secmark
  if (lhs->secmark != rhs->secmark) {
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
  // position
  if (!v2x_msg__msg__Position3D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__are_equal(
      &(lhs->accuracy), &(rhs->accuracy)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // accelset
  if (!v2x_msg__msg__AccelerationSet4Way__are_equal(
      &(lhs->accelset), &(rhs->accelset)))
  {
    return false;
  }
  // pathhistory
  if (!v2x_msg__msg__PathHistory__are_equal(
      &(lhs->pathhistory), &(rhs->pathhistory)))
  {
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__are_equal(
      &(lhs->pathprediction), &(rhs->pathprediction)))
  {
    return false;
  }
  // propulsion
  if (!v2x_msg__msg__PropelledInformation__are_equal(
      &(lhs->propulsion), &(rhs->propulsion)))
  {
    return false;
  }
  // usestate
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->usestate), &(rhs->usestate)))
  {
    return false;
  }
  // crossrequest
  if (lhs->crossrequest != rhs->crossrequest) {
    return false;
  }
  // crossstate
  if (lhs->crossstate != rhs->crossstate) {
    return false;
  }
  // clustersize
  if (lhs->clustersize != rhs->clustersize) {
    return false;
  }
  // clusterradius
  if (lhs->clusterradius != rhs->clusterradius) {
    return false;
  }
  // eventrespondertype
  if (lhs->eventrespondertype != rhs->eventrespondertype) {
    return false;
  }
  // activitytype
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->activitytype), &(rhs->activitytype)))
  {
    return false;
  }
  // activitysubtype
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->activitysubtype), &(rhs->activitysubtype)))
  {
    return false;
  }
  // assisttype
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->assisttype), &(rhs->assisttype)))
  {
    return false;
  }
  // sizing
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sizing), &(rhs->sizing)))
  {
    return false;
  }
  // attachment
  if (lhs->attachment != rhs->attachment) {
    return false;
  }
  // attachmentradius
  if (lhs->attachmentradius != rhs->attachmentradius) {
    return false;
  }
  // animaltype
  if (lhs->animaltype != rhs->animaltype) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__PSM__copy(
  const v2x_msg__msg__PSM * input,
  v2x_msg__msg__PSM * output)
{
  if (!input || !output) {
    return false;
  }
  // basictype
  output->basictype = input->basictype;
  // secmark
  output->secmark = input->secmark;
  // msgcnt
  output->msgcnt = input->msgcnt;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // position
  if (!v2x_msg__msg__Position3D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__copy(
      &(input->accuracy), &(output->accuracy)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // heading
  output->heading = input->heading;
  // accelset
  if (!v2x_msg__msg__AccelerationSet4Way__copy(
      &(input->accelset), &(output->accelset)))
  {
    return false;
  }
  // pathhistory
  if (!v2x_msg__msg__PathHistory__copy(
      &(input->pathhistory), &(output->pathhistory)))
  {
    return false;
  }
  // pathprediction
  if (!v2x_msg__msg__PathPrediction__copy(
      &(input->pathprediction), &(output->pathprediction)))
  {
    return false;
  }
  // propulsion
  if (!v2x_msg__msg__PropelledInformation__copy(
      &(input->propulsion), &(output->propulsion)))
  {
    return false;
  }
  // usestate
  if (!rosidl_runtime_c__String__copy(
      &(input->usestate), &(output->usestate)))
  {
    return false;
  }
  // crossrequest
  output->crossrequest = input->crossrequest;
  // crossstate
  output->crossstate = input->crossstate;
  // clustersize
  output->clustersize = input->clustersize;
  // clusterradius
  output->clusterradius = input->clusterradius;
  // eventrespondertype
  output->eventrespondertype = input->eventrespondertype;
  // activitytype
  if (!rosidl_runtime_c__String__copy(
      &(input->activitytype), &(output->activitytype)))
  {
    return false;
  }
  // activitysubtype
  if (!rosidl_runtime_c__String__copy(
      &(input->activitysubtype), &(output->activitysubtype)))
  {
    return false;
  }
  // assisttype
  if (!rosidl_runtime_c__String__copy(
      &(input->assisttype), &(output->assisttype)))
  {
    return false;
  }
  // sizing
  if (!rosidl_runtime_c__String__copy(
      &(input->sizing), &(output->sizing)))
  {
    return false;
  }
  // attachment
  output->attachment = input->attachment;
  // attachmentradius
  output->attachmentradius = input->attachmentradius;
  // animaltype
  output->animaltype = input->animaltype;
  return true;
}

v2x_msg__msg__PSM *
v2x_msg__msg__PSM__create()
{
  v2x_msg__msg__PSM * msg = (v2x_msg__msg__PSM *)malloc(sizeof(v2x_msg__msg__PSM));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__PSM));
  bool success = v2x_msg__msg__PSM__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__PSM__destroy(v2x_msg__msg__PSM * msg)
{
  if (msg) {
    v2x_msg__msg__PSM__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__PSM__Sequence__init(v2x_msg__msg__PSM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__PSM * data = NULL;
  if (size) {
    data = (v2x_msg__msg__PSM *)calloc(size, sizeof(v2x_msg__msg__PSM));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__PSM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__PSM__fini(&data[i - 1]);
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
v2x_msg__msg__PSM__Sequence__fini(v2x_msg__msg__PSM__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__PSM__fini(&array->data[i]);
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

v2x_msg__msg__PSM__Sequence *
v2x_msg__msg__PSM__Sequence__create(size_t size)
{
  v2x_msg__msg__PSM__Sequence * array = (v2x_msg__msg__PSM__Sequence *)malloc(sizeof(v2x_msg__msg__PSM__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__PSM__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__PSM__Sequence__destroy(v2x_msg__msg__PSM__Sequence * array)
{
  if (array) {
    v2x_msg__msg__PSM__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__PSM__Sequence__are_equal(const v2x_msg__msg__PSM__Sequence * lhs, const v2x_msg__msg__PSM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__PSM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__PSM__Sequence__copy(
  const v2x_msg__msg__PSM__Sequence * input,
  v2x_msg__msg__PSM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__PSM);
    v2x_msg__msg__PSM * data =
      (v2x_msg__msg__PSM *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__PSM__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__PSM__fini(&data[i]);
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
    if (!v2x_msg__msg__PSM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
