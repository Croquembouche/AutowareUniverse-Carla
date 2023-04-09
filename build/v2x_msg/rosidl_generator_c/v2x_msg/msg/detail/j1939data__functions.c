// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/J1939data.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/j1939data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tires`
#include "v2x_msg/msg/detail/tire_data__functions.h"
// Member `axles`
#include "v2x_msg/msg/detail/axle_weight__functions.h"

bool
v2x_msg__msg__J1939data__init(v2x_msg__msg__J1939data * msg)
{
  if (!msg) {
    return false;
  }
  // tires
  if (!v2x_msg__msg__TireData__Sequence__init(&msg->tires, 0)) {
    v2x_msg__msg__J1939data__fini(msg);
    return false;
  }
  // axles
  if (!v2x_msg__msg__AxleWeight__Sequence__init(&msg->axles, 0)) {
    v2x_msg__msg__J1939data__fini(msg);
    return false;
  }
  // trailerweight
  // cargoweight
  // steeringaxletemperture
  // driveaxlelocation
  // driveaxleliftairpressure
  // driveaxletemperature
  // driveaxlelubpressure
  // steeringaxlelubepressure
  return true;
}

void
v2x_msg__msg__J1939data__fini(v2x_msg__msg__J1939data * msg)
{
  if (!msg) {
    return;
  }
  // tires
  v2x_msg__msg__TireData__Sequence__fini(&msg->tires);
  // axles
  v2x_msg__msg__AxleWeight__Sequence__fini(&msg->axles);
  // trailerweight
  // cargoweight
  // steeringaxletemperture
  // driveaxlelocation
  // driveaxleliftairpressure
  // driveaxletemperature
  // driveaxlelubpressure
  // steeringaxlelubepressure
}

bool
v2x_msg__msg__J1939data__are_equal(const v2x_msg__msg__J1939data * lhs, const v2x_msg__msg__J1939data * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tires
  if (!v2x_msg__msg__TireData__Sequence__are_equal(
      &(lhs->tires), &(rhs->tires)))
  {
    return false;
  }
  // axles
  if (!v2x_msg__msg__AxleWeight__Sequence__are_equal(
      &(lhs->axles), &(rhs->axles)))
  {
    return false;
  }
  // trailerweight
  if (lhs->trailerweight != rhs->trailerweight) {
    return false;
  }
  // cargoweight
  if (lhs->cargoweight != rhs->cargoweight) {
    return false;
  }
  // steeringaxletemperture
  if (lhs->steeringaxletemperture != rhs->steeringaxletemperture) {
    return false;
  }
  // driveaxlelocation
  if (lhs->driveaxlelocation != rhs->driveaxlelocation) {
    return false;
  }
  // driveaxleliftairpressure
  if (lhs->driveaxleliftairpressure != rhs->driveaxleliftairpressure) {
    return false;
  }
  // driveaxletemperature
  if (lhs->driveaxletemperature != rhs->driveaxletemperature) {
    return false;
  }
  // driveaxlelubpressure
  if (lhs->driveaxlelubpressure != rhs->driveaxlelubpressure) {
    return false;
  }
  // steeringaxlelubepressure
  if (lhs->steeringaxlelubepressure != rhs->steeringaxlelubepressure) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__J1939data__copy(
  const v2x_msg__msg__J1939data * input,
  v2x_msg__msg__J1939data * output)
{
  if (!input || !output) {
    return false;
  }
  // tires
  if (!v2x_msg__msg__TireData__Sequence__copy(
      &(input->tires), &(output->tires)))
  {
    return false;
  }
  // axles
  if (!v2x_msg__msg__AxleWeight__Sequence__copy(
      &(input->axles), &(output->axles)))
  {
    return false;
  }
  // trailerweight
  output->trailerweight = input->trailerweight;
  // cargoweight
  output->cargoweight = input->cargoweight;
  // steeringaxletemperture
  output->steeringaxletemperture = input->steeringaxletemperture;
  // driveaxlelocation
  output->driveaxlelocation = input->driveaxlelocation;
  // driveaxleliftairpressure
  output->driveaxleliftairpressure = input->driveaxleliftairpressure;
  // driveaxletemperature
  output->driveaxletemperature = input->driveaxletemperature;
  // driveaxlelubpressure
  output->driveaxlelubpressure = input->driveaxlelubpressure;
  // steeringaxlelubepressure
  output->steeringaxlelubepressure = input->steeringaxlelubepressure;
  return true;
}

v2x_msg__msg__J1939data *
v2x_msg__msg__J1939data__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__J1939data * msg = (v2x_msg__msg__J1939data *)allocator.allocate(sizeof(v2x_msg__msg__J1939data), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__J1939data));
  bool success = v2x_msg__msg__J1939data__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__J1939data__destroy(v2x_msg__msg__J1939data * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__J1939data__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__J1939data__Sequence__init(v2x_msg__msg__J1939data__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__J1939data * data = NULL;

  if (size) {
    data = (v2x_msg__msg__J1939data *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__J1939data), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__J1939data__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__J1939data__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_msg__msg__J1939data__Sequence__fini(v2x_msg__msg__J1939data__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__J1939data__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_msg__msg__J1939data__Sequence *
v2x_msg__msg__J1939data__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__J1939data__Sequence * array = (v2x_msg__msg__J1939data__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__J1939data__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__J1939data__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__J1939data__Sequence__destroy(v2x_msg__msg__J1939data__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__J1939data__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__J1939data__Sequence__are_equal(const v2x_msg__msg__J1939data__Sequence * lhs, const v2x_msg__msg__J1939data__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__J1939data__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__J1939data__Sequence__copy(
  const v2x_msg__msg__J1939data__Sequence * input,
  v2x_msg__msg__J1939data__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__J1939data);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__J1939data * data =
      (v2x_msg__msg__J1939data *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__J1939data__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__J1939data__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__J1939data__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
