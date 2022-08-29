// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/lane_data_attribute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `speedlimits`
#include "v2x_msg/msg/detail/speed_limit__functions.h"

bool
v2x_msg__msg__LaneDataAttribute__init(v2x_msg__msg__LaneDataAttribute * msg)
{
  if (!msg) {
    return false;
  }
  // pathendpointangle
  // lanecrownpointcenter
  // lancrownpointleft
  // lanecrownpointright
  // laneangle
  // speedlimits
  if (!v2x_msg__msg__SpeedLimit__Sequence__init(&msg->speedlimits, 0)) {
    v2x_msg__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__LaneDataAttribute__fini(v2x_msg__msg__LaneDataAttribute * msg)
{
  if (!msg) {
    return;
  }
  // pathendpointangle
  // lanecrownpointcenter
  // lancrownpointleft
  // lanecrownpointright
  // laneangle
  // speedlimits
  v2x_msg__msg__SpeedLimit__Sequence__fini(&msg->speedlimits);
}

bool
v2x_msg__msg__LaneDataAttribute__are_equal(const v2x_msg__msg__LaneDataAttribute * lhs, const v2x_msg__msg__LaneDataAttribute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pathendpointangle
  if (lhs->pathendpointangle != rhs->pathendpointangle) {
    return false;
  }
  // lanecrownpointcenter
  if (lhs->lanecrownpointcenter != rhs->lanecrownpointcenter) {
    return false;
  }
  // lancrownpointleft
  if (lhs->lancrownpointleft != rhs->lancrownpointleft) {
    return false;
  }
  // lanecrownpointright
  if (lhs->lanecrownpointright != rhs->lanecrownpointright) {
    return false;
  }
  // laneangle
  if (lhs->laneangle != rhs->laneangle) {
    return false;
  }
  // speedlimits
  if (!v2x_msg__msg__SpeedLimit__Sequence__are_equal(
      &(lhs->speedlimits), &(rhs->speedlimits)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__LaneDataAttribute__copy(
  const v2x_msg__msg__LaneDataAttribute * input,
  v2x_msg__msg__LaneDataAttribute * output)
{
  if (!input || !output) {
    return false;
  }
  // pathendpointangle
  output->pathendpointangle = input->pathendpointangle;
  // lanecrownpointcenter
  output->lanecrownpointcenter = input->lanecrownpointcenter;
  // lancrownpointleft
  output->lancrownpointleft = input->lancrownpointleft;
  // lanecrownpointright
  output->lanecrownpointright = input->lanecrownpointright;
  // laneangle
  output->laneangle = input->laneangle;
  // speedlimits
  if (!v2x_msg__msg__SpeedLimit__Sequence__copy(
      &(input->speedlimits), &(output->speedlimits)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__LaneDataAttribute *
v2x_msg__msg__LaneDataAttribute__create()
{
  v2x_msg__msg__LaneDataAttribute * msg = (v2x_msg__msg__LaneDataAttribute *)malloc(sizeof(v2x_msg__msg__LaneDataAttribute));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__LaneDataAttribute));
  bool success = v2x_msg__msg__LaneDataAttribute__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__LaneDataAttribute__destroy(v2x_msg__msg__LaneDataAttribute * msg)
{
  if (msg) {
    v2x_msg__msg__LaneDataAttribute__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__LaneDataAttribute__Sequence__init(v2x_msg__msg__LaneDataAttribute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__LaneDataAttribute * data = NULL;
  if (size) {
    data = (v2x_msg__msg__LaneDataAttribute *)calloc(size, sizeof(v2x_msg__msg__LaneDataAttribute));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__LaneDataAttribute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__LaneDataAttribute__fini(&data[i - 1]);
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
v2x_msg__msg__LaneDataAttribute__Sequence__fini(v2x_msg__msg__LaneDataAttribute__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__LaneDataAttribute__fini(&array->data[i]);
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

v2x_msg__msg__LaneDataAttribute__Sequence *
v2x_msg__msg__LaneDataAttribute__Sequence__create(size_t size)
{
  v2x_msg__msg__LaneDataAttribute__Sequence * array = (v2x_msg__msg__LaneDataAttribute__Sequence *)malloc(sizeof(v2x_msg__msg__LaneDataAttribute__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__LaneDataAttribute__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__LaneDataAttribute__Sequence__destroy(v2x_msg__msg__LaneDataAttribute__Sequence * array)
{
  if (array) {
    v2x_msg__msg__LaneDataAttribute__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__LaneDataAttribute__Sequence__are_equal(const v2x_msg__msg__LaneDataAttribute__Sequence * lhs, const v2x_msg__msg__LaneDataAttribute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__LaneDataAttribute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__LaneDataAttribute__Sequence__copy(
  const v2x_msg__msg__LaneDataAttribute__Sequence * input,
  v2x_msg__msg__LaneDataAttribute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__LaneDataAttribute);
    v2x_msg__msg__LaneDataAttribute * data =
      (v2x_msg__msg__LaneDataAttribute *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__LaneDataAttribute__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__LaneDataAttribute__fini(&data[i]);
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
    if (!v2x_msg__msg__LaneDataAttribute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
