// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/VehicleData.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/vehicle_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `bumpers`
#include "v2x_msg/msg/detail/bumper_heights__functions.h"

bool
v2x_msg__msg__VehicleData__init(v2x_msg__msg__VehicleData * msg)
{
  if (!msg) {
    return false;
  }
  // height
  // bumpers
  if (!v2x_msg__msg__BumperHeights__init(&msg->bumpers)) {
    v2x_msg__msg__VehicleData__fini(msg);
    return false;
  }
  // mass
  // trailerweight
  // type
  return true;
}

void
v2x_msg__msg__VehicleData__fini(v2x_msg__msg__VehicleData * msg)
{
  if (!msg) {
    return;
  }
  // height
  // bumpers
  v2x_msg__msg__BumperHeights__fini(&msg->bumpers);
  // mass
  // trailerweight
  // type
}

bool
v2x_msg__msg__VehicleData__are_equal(const v2x_msg__msg__VehicleData * lhs, const v2x_msg__msg__VehicleData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // bumpers
  if (!v2x_msg__msg__BumperHeights__are_equal(
      &(lhs->bumpers), &(rhs->bumpers)))
  {
    return false;
  }
  // mass
  if (lhs->mass != rhs->mass) {
    return false;
  }
  // trailerweight
  if (lhs->trailerweight != rhs->trailerweight) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__VehicleData__copy(
  const v2x_msg__msg__VehicleData * input,
  v2x_msg__msg__VehicleData * output)
{
  if (!input || !output) {
    return false;
  }
  // height
  output->height = input->height;
  // bumpers
  if (!v2x_msg__msg__BumperHeights__copy(
      &(input->bumpers), &(output->bumpers)))
  {
    return false;
  }
  // mass
  output->mass = input->mass;
  // trailerweight
  output->trailerweight = input->trailerweight;
  // type
  output->type = input->type;
  return true;
}

v2x_msg__msg__VehicleData *
v2x_msg__msg__VehicleData__create()
{
  v2x_msg__msg__VehicleData * msg = (v2x_msg__msg__VehicleData *)malloc(sizeof(v2x_msg__msg__VehicleData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__VehicleData));
  bool success = v2x_msg__msg__VehicleData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__VehicleData__destroy(v2x_msg__msg__VehicleData * msg)
{
  if (msg) {
    v2x_msg__msg__VehicleData__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__VehicleData__Sequence__init(v2x_msg__msg__VehicleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__VehicleData * data = NULL;
  if (size) {
    data = (v2x_msg__msg__VehicleData *)calloc(size, sizeof(v2x_msg__msg__VehicleData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__VehicleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__VehicleData__fini(&data[i - 1]);
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
v2x_msg__msg__VehicleData__Sequence__fini(v2x_msg__msg__VehicleData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__VehicleData__fini(&array->data[i]);
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

v2x_msg__msg__VehicleData__Sequence *
v2x_msg__msg__VehicleData__Sequence__create(size_t size)
{
  v2x_msg__msg__VehicleData__Sequence * array = (v2x_msg__msg__VehicleData__Sequence *)malloc(sizeof(v2x_msg__msg__VehicleData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__VehicleData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__VehicleData__Sequence__destroy(v2x_msg__msg__VehicleData__Sequence * array)
{
  if (array) {
    v2x_msg__msg__VehicleData__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__VehicleData__Sequence__are_equal(const v2x_msg__msg__VehicleData__Sequence * lhs, const v2x_msg__msg__VehicleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__VehicleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__VehicleData__Sequence__copy(
  const v2x_msg__msg__VehicleData__Sequence * input,
  v2x_msg__msg__VehicleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__VehicleData);
    v2x_msg__msg__VehicleData * data =
      (v2x_msg__msg__VehicleData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__VehicleData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__VehicleData__fini(&data[i]);
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
    if (!v2x_msg__msg__VehicleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}