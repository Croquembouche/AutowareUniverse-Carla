// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/generic_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `maneuvers`
#include "rosidl_runtime_c/string_functions.h"
// Member `laneattributes`
#include "v2x_msg/msg/detail/lane_attributes__functions.h"
// Member `nodelist`
#include "v2x_msg/msg/detail/node_list_xy__functions.h"
// Member `connectsto`
#include "v2x_msg/msg/detail/connection__functions.h"
// Member `overlays`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
v2x_msg__msg__GenericLane__init(v2x_msg__msg__GenericLane * msg)
{
  if (!msg) {
    return false;
  }
  // laneid
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    v2x_msg__msg__GenericLane__fini(msg);
    return false;
  }
  // ingressapproach
  // egressapproach
  // laneattributes
  if (!v2x_msg__msg__LaneAttributes__init(&msg->laneattributes)) {
    v2x_msg__msg__GenericLane__fini(msg);
    return false;
  }
  // maneuvers
  if (!rosidl_runtime_c__String__init(&msg->maneuvers)) {
    v2x_msg__msg__GenericLane__fini(msg);
    return false;
  }
  // nodelist
  if (!v2x_msg__msg__NodeListXY__Sequence__init(&msg->nodelist, 0)) {
    v2x_msg__msg__GenericLane__fini(msg);
    return false;
  }
  // connectsto
  if (!v2x_msg__msg__Connection__Sequence__init(&msg->connectsto, 0)) {
    v2x_msg__msg__GenericLane__fini(msg);
    return false;
  }
  // overlays
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->overlays, 0)) {
    v2x_msg__msg__GenericLane__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__GenericLane__fini(v2x_msg__msg__GenericLane * msg)
{
  if (!msg) {
    return;
  }
  // laneid
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // ingressapproach
  // egressapproach
  // laneattributes
  v2x_msg__msg__LaneAttributes__fini(&msg->laneattributes);
  // maneuvers
  rosidl_runtime_c__String__fini(&msg->maneuvers);
  // nodelist
  v2x_msg__msg__NodeListXY__Sequence__fini(&msg->nodelist);
  // connectsto
  v2x_msg__msg__Connection__Sequence__fini(&msg->connectsto);
  // overlays
  rosidl_runtime_c__int64__Sequence__fini(&msg->overlays);
}

bool
v2x_msg__msg__GenericLane__are_equal(const v2x_msg__msg__GenericLane * lhs, const v2x_msg__msg__GenericLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // laneid
  if (lhs->laneid != rhs->laneid) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // ingressapproach
  if (lhs->ingressapproach != rhs->ingressapproach) {
    return false;
  }
  // egressapproach
  if (lhs->egressapproach != rhs->egressapproach) {
    return false;
  }
  // laneattributes
  if (!v2x_msg__msg__LaneAttributes__are_equal(
      &(lhs->laneattributes), &(rhs->laneattributes)))
  {
    return false;
  }
  // maneuvers
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->maneuvers), &(rhs->maneuvers)))
  {
    return false;
  }
  // nodelist
  if (!v2x_msg__msg__NodeListXY__Sequence__are_equal(
      &(lhs->nodelist), &(rhs->nodelist)))
  {
    return false;
  }
  // connectsto
  if (!v2x_msg__msg__Connection__Sequence__are_equal(
      &(lhs->connectsto), &(rhs->connectsto)))
  {
    return false;
  }
  // overlays
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->overlays), &(rhs->overlays)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__GenericLane__copy(
  const v2x_msg__msg__GenericLane * input,
  v2x_msg__msg__GenericLane * output)
{
  if (!input || !output) {
    return false;
  }
  // laneid
  output->laneid = input->laneid;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // ingressapproach
  output->ingressapproach = input->ingressapproach;
  // egressapproach
  output->egressapproach = input->egressapproach;
  // laneattributes
  if (!v2x_msg__msg__LaneAttributes__copy(
      &(input->laneattributes), &(output->laneattributes)))
  {
    return false;
  }
  // maneuvers
  if (!rosidl_runtime_c__String__copy(
      &(input->maneuvers), &(output->maneuvers)))
  {
    return false;
  }
  // nodelist
  if (!v2x_msg__msg__NodeListXY__Sequence__copy(
      &(input->nodelist), &(output->nodelist)))
  {
    return false;
  }
  // connectsto
  if (!v2x_msg__msg__Connection__Sequence__copy(
      &(input->connectsto), &(output->connectsto)))
  {
    return false;
  }
  // overlays
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->overlays), &(output->overlays)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__GenericLane *
v2x_msg__msg__GenericLane__create()
{
  v2x_msg__msg__GenericLane * msg = (v2x_msg__msg__GenericLane *)malloc(sizeof(v2x_msg__msg__GenericLane));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__GenericLane));
  bool success = v2x_msg__msg__GenericLane__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__GenericLane__destroy(v2x_msg__msg__GenericLane * msg)
{
  if (msg) {
    v2x_msg__msg__GenericLane__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__GenericLane__Sequence__init(v2x_msg__msg__GenericLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__GenericLane * data = NULL;
  if (size) {
    data = (v2x_msg__msg__GenericLane *)calloc(size, sizeof(v2x_msg__msg__GenericLane));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__GenericLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__GenericLane__fini(&data[i - 1]);
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
v2x_msg__msg__GenericLane__Sequence__fini(v2x_msg__msg__GenericLane__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__GenericLane__fini(&array->data[i]);
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

v2x_msg__msg__GenericLane__Sequence *
v2x_msg__msg__GenericLane__Sequence__create(size_t size)
{
  v2x_msg__msg__GenericLane__Sequence * array = (v2x_msg__msg__GenericLane__Sequence *)malloc(sizeof(v2x_msg__msg__GenericLane__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__GenericLane__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__GenericLane__Sequence__destroy(v2x_msg__msg__GenericLane__Sequence * array)
{
  if (array) {
    v2x_msg__msg__GenericLane__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__GenericLane__Sequence__are_equal(const v2x_msg__msg__GenericLane__Sequence * lhs, const v2x_msg__msg__GenericLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__GenericLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__GenericLane__Sequence__copy(
  const v2x_msg__msg__GenericLane__Sequence * input,
  v2x_msg__msg__GenericLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__GenericLane);
    v2x_msg__msg__GenericLane * data =
      (v2x_msg__msg__GenericLane *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__GenericLane__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__GenericLane__fini(&data[i]);
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
    if (!v2x_msg__msg__GenericLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
