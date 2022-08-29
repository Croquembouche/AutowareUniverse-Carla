// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/RequestorDescription.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/requestor_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
#include "v2x_msg/msg/detail/vehicle_id__functions.h"
// Member `type`
#include "v2x_msg/msg/detail/requestor_type__functions.h"
// Member `position`
#include "v2x_msg/msg/detail/requestor_position_vector__functions.h"
// Member `name`
// Member `routename`
#include "rosidl_runtime_c/string_functions.h"
// Member `transitstatus`
#include "v2x_msg/msg/detail/transit_vehicle_status__functions.h"

bool
v2x_msg__msg__RequestorDescription__init(v2x_msg__msg__RequestorDescription * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!v2x_msg__msg__VehicleID__init(&msg->id)) {
    v2x_msg__msg__RequestorDescription__fini(msg);
    return false;
  }
  // type
  if (!v2x_msg__msg__RequestorType__init(&msg->type)) {
    v2x_msg__msg__RequestorDescription__fini(msg);
    return false;
  }
  // position
  if (!v2x_msg__msg__RequestorPositionVector__init(&msg->position)) {
    v2x_msg__msg__RequestorDescription__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    v2x_msg__msg__RequestorDescription__fini(msg);
    return false;
  }
  // routename
  if (!rosidl_runtime_c__String__init(&msg->routename)) {
    v2x_msg__msg__RequestorDescription__fini(msg);
    return false;
  }
  // transitstatus
  if (!v2x_msg__msg__TransitVehicleStatus__init(&msg->transitstatus)) {
    v2x_msg__msg__RequestorDescription__fini(msg);
    return false;
  }
  // transitoccupancy
  // transitschedule
  return true;
}

void
v2x_msg__msg__RequestorDescription__fini(v2x_msg__msg__RequestorDescription * msg)
{
  if (!msg) {
    return;
  }
  // id
  v2x_msg__msg__VehicleID__fini(&msg->id);
  // type
  v2x_msg__msg__RequestorType__fini(&msg->type);
  // position
  v2x_msg__msg__RequestorPositionVector__fini(&msg->position);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // routename
  rosidl_runtime_c__String__fini(&msg->routename);
  // transitstatus
  v2x_msg__msg__TransitVehicleStatus__fini(&msg->transitstatus);
  // transitoccupancy
  // transitschedule
}

bool
v2x_msg__msg__RequestorDescription__are_equal(const v2x_msg__msg__RequestorDescription * lhs, const v2x_msg__msg__RequestorDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!v2x_msg__msg__VehicleID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // type
  if (!v2x_msg__msg__RequestorType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // position
  if (!v2x_msg__msg__RequestorPositionVector__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // routename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->routename), &(rhs->routename)))
  {
    return false;
  }
  // transitstatus
  if (!v2x_msg__msg__TransitVehicleStatus__are_equal(
      &(lhs->transitstatus), &(rhs->transitstatus)))
  {
    return false;
  }
  // transitoccupancy
  if (lhs->transitoccupancy != rhs->transitoccupancy) {
    return false;
  }
  // transitschedule
  if (lhs->transitschedule != rhs->transitschedule) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__RequestorDescription__copy(
  const v2x_msg__msg__RequestorDescription * input,
  v2x_msg__msg__RequestorDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!v2x_msg__msg__VehicleID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // type
  if (!v2x_msg__msg__RequestorType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // position
  if (!v2x_msg__msg__RequestorPositionVector__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // routename
  if (!rosidl_runtime_c__String__copy(
      &(input->routename), &(output->routename)))
  {
    return false;
  }
  // transitstatus
  if (!v2x_msg__msg__TransitVehicleStatus__copy(
      &(input->transitstatus), &(output->transitstatus)))
  {
    return false;
  }
  // transitoccupancy
  output->transitoccupancy = input->transitoccupancy;
  // transitschedule
  output->transitschedule = input->transitschedule;
  return true;
}

v2x_msg__msg__RequestorDescription *
v2x_msg__msg__RequestorDescription__create()
{
  v2x_msg__msg__RequestorDescription * msg = (v2x_msg__msg__RequestorDescription *)malloc(sizeof(v2x_msg__msg__RequestorDescription));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__RequestorDescription));
  bool success = v2x_msg__msg__RequestorDescription__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__RequestorDescription__destroy(v2x_msg__msg__RequestorDescription * msg)
{
  if (msg) {
    v2x_msg__msg__RequestorDescription__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__RequestorDescription__Sequence__init(v2x_msg__msg__RequestorDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__RequestorDescription * data = NULL;
  if (size) {
    data = (v2x_msg__msg__RequestorDescription *)calloc(size, sizeof(v2x_msg__msg__RequestorDescription));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__RequestorDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__RequestorDescription__fini(&data[i - 1]);
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
v2x_msg__msg__RequestorDescription__Sequence__fini(v2x_msg__msg__RequestorDescription__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__RequestorDescription__fini(&array->data[i]);
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

v2x_msg__msg__RequestorDescription__Sequence *
v2x_msg__msg__RequestorDescription__Sequence__create(size_t size)
{
  v2x_msg__msg__RequestorDescription__Sequence * array = (v2x_msg__msg__RequestorDescription__Sequence *)malloc(sizeof(v2x_msg__msg__RequestorDescription__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__RequestorDescription__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__RequestorDescription__Sequence__destroy(v2x_msg__msg__RequestorDescription__Sequence * array)
{
  if (array) {
    v2x_msg__msg__RequestorDescription__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__RequestorDescription__Sequence__are_equal(const v2x_msg__msg__RequestorDescription__Sequence * lhs, const v2x_msg__msg__RequestorDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__RequestorDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__RequestorDescription__Sequence__copy(
  const v2x_msg__msg__RequestorDescription__Sequence * input,
  v2x_msg__msg__RequestorDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__RequestorDescription);
    v2x_msg__msg__RequestorDescription * data =
      (v2x_msg__msg__RequestorDescription *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__RequestorDescription__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__RequestorDescription__fini(&data[i]);
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
    if (!v2x_msg__msg__RequestorDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
