// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/intersection_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `preemptprioritydata`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "v2x_msg/msg/detail/intersection_reference_id__functions.h"
// Member `refpoint`
#include "v2x_msg/msg/detail/position3_d__functions.h"
// Member `speedlimits`
#include "v2x_msg/msg/detail/speed_limit__functions.h"
// Member `laneset`
#include "v2x_msg/msg/detail/generic_lane__functions.h"

bool
v2x_msg__msg__IntersectionGeometry__init(v2x_msg__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    v2x_msg__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // id
  if (!v2x_msg__msg__IntersectionReferenceID__init(&msg->id)) {
    v2x_msg__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // revision
  // refpoint
  if (!v2x_msg__msg__Position3D__init(&msg->refpoint)) {
    v2x_msg__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // lanewidth
  // speedlimits
  if (!v2x_msg__msg__SpeedLimit__Sequence__init(&msg->speedlimits, 0)) {
    v2x_msg__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // laneset
  if (!v2x_msg__msg__GenericLane__Sequence__init(&msg->laneset, 0)) {
    v2x_msg__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // preemptprioritydata
  if (!rosidl_runtime_c__String__init(&msg->preemptprioritydata)) {
    v2x_msg__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__IntersectionGeometry__fini(v2x_msg__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // id
  v2x_msg__msg__IntersectionReferenceID__fini(&msg->id);
  // revision
  // refpoint
  v2x_msg__msg__Position3D__fini(&msg->refpoint);
  // lanewidth
  // speedlimits
  v2x_msg__msg__SpeedLimit__Sequence__fini(&msg->speedlimits);
  // laneset
  v2x_msg__msg__GenericLane__Sequence__fini(&msg->laneset);
  // preemptprioritydata
  rosidl_runtime_c__String__fini(&msg->preemptprioritydata);
}

bool
v2x_msg__msg__IntersectionGeometry__are_equal(const v2x_msg__msg__IntersectionGeometry * lhs, const v2x_msg__msg__IntersectionGeometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // id
  if (!v2x_msg__msg__IntersectionReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  // refpoint
  if (!v2x_msg__msg__Position3D__are_equal(
      &(lhs->refpoint), &(rhs->refpoint)))
  {
    return false;
  }
  // lanewidth
  if (lhs->lanewidth != rhs->lanewidth) {
    return false;
  }
  // speedlimits
  if (!v2x_msg__msg__SpeedLimit__Sequence__are_equal(
      &(lhs->speedlimits), &(rhs->speedlimits)))
  {
    return false;
  }
  // laneset
  if (!v2x_msg__msg__GenericLane__Sequence__are_equal(
      &(lhs->laneset), &(rhs->laneset)))
  {
    return false;
  }
  // preemptprioritydata
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->preemptprioritydata), &(rhs->preemptprioritydata)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__IntersectionGeometry__copy(
  const v2x_msg__msg__IntersectionGeometry * input,
  v2x_msg__msg__IntersectionGeometry * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // id
  if (!v2x_msg__msg__IntersectionReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // revision
  output->revision = input->revision;
  // refpoint
  if (!v2x_msg__msg__Position3D__copy(
      &(input->refpoint), &(output->refpoint)))
  {
    return false;
  }
  // lanewidth
  output->lanewidth = input->lanewidth;
  // speedlimits
  if (!v2x_msg__msg__SpeedLimit__Sequence__copy(
      &(input->speedlimits), &(output->speedlimits)))
  {
    return false;
  }
  // laneset
  if (!v2x_msg__msg__GenericLane__Sequence__copy(
      &(input->laneset), &(output->laneset)))
  {
    return false;
  }
  // preemptprioritydata
  if (!rosidl_runtime_c__String__copy(
      &(input->preemptprioritydata), &(output->preemptprioritydata)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__IntersectionGeometry *
v2x_msg__msg__IntersectionGeometry__create()
{
  v2x_msg__msg__IntersectionGeometry * msg = (v2x_msg__msg__IntersectionGeometry *)malloc(sizeof(v2x_msg__msg__IntersectionGeometry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__IntersectionGeometry));
  bool success = v2x_msg__msg__IntersectionGeometry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__IntersectionGeometry__destroy(v2x_msg__msg__IntersectionGeometry * msg)
{
  if (msg) {
    v2x_msg__msg__IntersectionGeometry__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__IntersectionGeometry__Sequence__init(v2x_msg__msg__IntersectionGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__IntersectionGeometry * data = NULL;
  if (size) {
    data = (v2x_msg__msg__IntersectionGeometry *)calloc(size, sizeof(v2x_msg__msg__IntersectionGeometry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__IntersectionGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__IntersectionGeometry__fini(&data[i - 1]);
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
v2x_msg__msg__IntersectionGeometry__Sequence__fini(v2x_msg__msg__IntersectionGeometry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__IntersectionGeometry__fini(&array->data[i]);
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

v2x_msg__msg__IntersectionGeometry__Sequence *
v2x_msg__msg__IntersectionGeometry__Sequence__create(size_t size)
{
  v2x_msg__msg__IntersectionGeometry__Sequence * array = (v2x_msg__msg__IntersectionGeometry__Sequence *)malloc(sizeof(v2x_msg__msg__IntersectionGeometry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__IntersectionGeometry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__IntersectionGeometry__Sequence__destroy(v2x_msg__msg__IntersectionGeometry__Sequence * array)
{
  if (array) {
    v2x_msg__msg__IntersectionGeometry__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__IntersectionGeometry__Sequence__are_equal(const v2x_msg__msg__IntersectionGeometry__Sequence * lhs, const v2x_msg__msg__IntersectionGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__IntersectionGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__IntersectionGeometry__Sequence__copy(
  const v2x_msg__msg__IntersectionGeometry__Sequence * input,
  v2x_msg__msg__IntersectionGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__IntersectionGeometry);
    v2x_msg__msg__IntersectionGeometry * data =
      (v2x_msg__msg__IntersectionGeometry *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__IntersectionGeometry__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__IntersectionGeometry__fini(&data[i]);
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
    if (!v2x_msg__msg__IntersectionGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
