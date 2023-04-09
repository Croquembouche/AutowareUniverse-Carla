// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/VehicleClassification.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/vehicle_classification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
v2x_msg__msg__VehicleClassification__init(v2x_msg__msg__VehicleClassification * msg)
{
  if (!msg) {
    return false;
  }
  // keytype
  // role
  // iso3883
  // hpmstype
  // vehicletype
  // responseequip
  // respondertype
  // fueltype
  return true;
}

void
v2x_msg__msg__VehicleClassification__fini(v2x_msg__msg__VehicleClassification * msg)
{
  if (!msg) {
    return;
  }
  // keytype
  // role
  // iso3883
  // hpmstype
  // vehicletype
  // responseequip
  // respondertype
  // fueltype
}

bool
v2x_msg__msg__VehicleClassification__are_equal(const v2x_msg__msg__VehicleClassification * lhs, const v2x_msg__msg__VehicleClassification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // keytype
  if (lhs->keytype != rhs->keytype) {
    return false;
  }
  // role
  if (lhs->role != rhs->role) {
    return false;
  }
  // iso3883
  if (lhs->iso3883 != rhs->iso3883) {
    return false;
  }
  // hpmstype
  if (lhs->hpmstype != rhs->hpmstype) {
    return false;
  }
  // vehicletype
  if (lhs->vehicletype != rhs->vehicletype) {
    return false;
  }
  // responseequip
  if (lhs->responseequip != rhs->responseequip) {
    return false;
  }
  // respondertype
  if (lhs->respondertype != rhs->respondertype) {
    return false;
  }
  // fueltype
  if (lhs->fueltype != rhs->fueltype) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__VehicleClassification__copy(
  const v2x_msg__msg__VehicleClassification * input,
  v2x_msg__msg__VehicleClassification * output)
{
  if (!input || !output) {
    return false;
  }
  // keytype
  output->keytype = input->keytype;
  // role
  output->role = input->role;
  // iso3883
  output->iso3883 = input->iso3883;
  // hpmstype
  output->hpmstype = input->hpmstype;
  // vehicletype
  output->vehicletype = input->vehicletype;
  // responseequip
  output->responseequip = input->responseequip;
  // respondertype
  output->respondertype = input->respondertype;
  // fueltype
  output->fueltype = input->fueltype;
  return true;
}

v2x_msg__msg__VehicleClassification *
v2x_msg__msg__VehicleClassification__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__VehicleClassification * msg = (v2x_msg__msg__VehicleClassification *)allocator.allocate(sizeof(v2x_msg__msg__VehicleClassification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__VehicleClassification));
  bool success = v2x_msg__msg__VehicleClassification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__VehicleClassification__destroy(v2x_msg__msg__VehicleClassification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__VehicleClassification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__VehicleClassification__Sequence__init(v2x_msg__msg__VehicleClassification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__VehicleClassification * data = NULL;

  if (size) {
    data = (v2x_msg__msg__VehicleClassification *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__VehicleClassification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__VehicleClassification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__VehicleClassification__fini(&data[i - 1]);
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
v2x_msg__msg__VehicleClassification__Sequence__fini(v2x_msg__msg__VehicleClassification__Sequence * array)
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
      v2x_msg__msg__VehicleClassification__fini(&array->data[i]);
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

v2x_msg__msg__VehicleClassification__Sequence *
v2x_msg__msg__VehicleClassification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__VehicleClassification__Sequence * array = (v2x_msg__msg__VehicleClassification__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__VehicleClassification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__VehicleClassification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__VehicleClassification__Sequence__destroy(v2x_msg__msg__VehicleClassification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__VehicleClassification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__VehicleClassification__Sequence__are_equal(const v2x_msg__msg__VehicleClassification__Sequence * lhs, const v2x_msg__msg__VehicleClassification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__VehicleClassification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__VehicleClassification__Sequence__copy(
  const v2x_msg__msg__VehicleClassification__Sequence * input,
  v2x_msg__msg__VehicleClassification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__VehicleClassification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__VehicleClassification * data =
      (v2x_msg__msg__VehicleClassification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__VehicleClassification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__VehicleClassification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__VehicleClassification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
