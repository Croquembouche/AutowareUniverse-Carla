// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/Connection.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/connection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `connectinglane`
#include "v2x_msg/msg/detail/connecting_lane__functions.h"
// Member `remoteintersection`
#include "v2x_msg/msg/detail/intersection_reference_id__functions.h"

bool
v2x_msg__msg__Connection__init(v2x_msg__msg__Connection * msg)
{
  if (!msg) {
    return false;
  }
  // connectinglane
  if (!v2x_msg__msg__ConnectingLane__init(&msg->connectinglane)) {
    v2x_msg__msg__Connection__fini(msg);
    return false;
  }
  // remoteintersection
  if (!v2x_msg__msg__IntersectionReferenceID__init(&msg->remoteintersection)) {
    v2x_msg__msg__Connection__fini(msg);
    return false;
  }
  // signalgroup
  // userclass
  // laneconnectonid
  return true;
}

void
v2x_msg__msg__Connection__fini(v2x_msg__msg__Connection * msg)
{
  if (!msg) {
    return;
  }
  // connectinglane
  v2x_msg__msg__ConnectingLane__fini(&msg->connectinglane);
  // remoteintersection
  v2x_msg__msg__IntersectionReferenceID__fini(&msg->remoteintersection);
  // signalgroup
  // userclass
  // laneconnectonid
}

bool
v2x_msg__msg__Connection__are_equal(const v2x_msg__msg__Connection * lhs, const v2x_msg__msg__Connection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connectinglane
  if (!v2x_msg__msg__ConnectingLane__are_equal(
      &(lhs->connectinglane), &(rhs->connectinglane)))
  {
    return false;
  }
  // remoteintersection
  if (!v2x_msg__msg__IntersectionReferenceID__are_equal(
      &(lhs->remoteintersection), &(rhs->remoteintersection)))
  {
    return false;
  }
  // signalgroup
  if (lhs->signalgroup != rhs->signalgroup) {
    return false;
  }
  // userclass
  if (lhs->userclass != rhs->userclass) {
    return false;
  }
  // laneconnectonid
  if (lhs->laneconnectonid != rhs->laneconnectonid) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__Connection__copy(
  const v2x_msg__msg__Connection * input,
  v2x_msg__msg__Connection * output)
{
  if (!input || !output) {
    return false;
  }
  // connectinglane
  if (!v2x_msg__msg__ConnectingLane__copy(
      &(input->connectinglane), &(output->connectinglane)))
  {
    return false;
  }
  // remoteintersection
  if (!v2x_msg__msg__IntersectionReferenceID__copy(
      &(input->remoteintersection), &(output->remoteintersection)))
  {
    return false;
  }
  // signalgroup
  output->signalgroup = input->signalgroup;
  // userclass
  output->userclass = input->userclass;
  // laneconnectonid
  output->laneconnectonid = input->laneconnectonid;
  return true;
}

v2x_msg__msg__Connection *
v2x_msg__msg__Connection__create()
{
  v2x_msg__msg__Connection * msg = (v2x_msg__msg__Connection *)malloc(sizeof(v2x_msg__msg__Connection));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__Connection));
  bool success = v2x_msg__msg__Connection__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__Connection__destroy(v2x_msg__msg__Connection * msg)
{
  if (msg) {
    v2x_msg__msg__Connection__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__Connection__Sequence__init(v2x_msg__msg__Connection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__Connection * data = NULL;
  if (size) {
    data = (v2x_msg__msg__Connection *)calloc(size, sizeof(v2x_msg__msg__Connection));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__Connection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__Connection__fini(&data[i - 1]);
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
v2x_msg__msg__Connection__Sequence__fini(v2x_msg__msg__Connection__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__Connection__fini(&array->data[i]);
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

v2x_msg__msg__Connection__Sequence *
v2x_msg__msg__Connection__Sequence__create(size_t size)
{
  v2x_msg__msg__Connection__Sequence * array = (v2x_msg__msg__Connection__Sequence *)malloc(sizeof(v2x_msg__msg__Connection__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__Connection__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__Connection__Sequence__destroy(v2x_msg__msg__Connection__Sequence * array)
{
  if (array) {
    v2x_msg__msg__Connection__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__Connection__Sequence__are_equal(const v2x_msg__msg__Connection__Sequence * lhs, const v2x_msg__msg__Connection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__Connection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__Connection__Sequence__copy(
  const v2x_msg__msg__Connection__Sequence * input,
  v2x_msg__msg__Connection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__Connection);
    v2x_msg__msg__Connection * data =
      (v2x_msg__msg__Connection *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__Connection__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__Connection__fini(&data[i]);
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
    if (!v2x_msg__msg__Connection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
