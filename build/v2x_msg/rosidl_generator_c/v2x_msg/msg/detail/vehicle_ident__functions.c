// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/VehicleIdent.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/vehicle_ident__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `vin`
// Member `ownercode`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "v2x_msg/msg/detail/vehicle_id__functions.h"
// Member `vehicleclass`
#include "v2x_msg/msg/detail/vehicle_class__functions.h"

bool
v2x_msg__msg__VehicleIdent__init(v2x_msg__msg__VehicleIdent * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    v2x_msg__msg__VehicleIdent__fini(msg);
    return false;
  }
  // vin
  if (!rosidl_runtime_c__String__init(&msg->vin)) {
    v2x_msg__msg__VehicleIdent__fini(msg);
    return false;
  }
  // ownercode
  if (!rosidl_runtime_c__String__init(&msg->ownercode)) {
    v2x_msg__msg__VehicleIdent__fini(msg);
    return false;
  }
  // id
  if (!v2x_msg__msg__VehicleID__init(&msg->id)) {
    v2x_msg__msg__VehicleIdent__fini(msg);
    return false;
  }
  // vehicletype
  // vehicleclass
  if (!v2x_msg__msg__VehicleClass__init(&msg->vehicleclass)) {
    v2x_msg__msg__VehicleIdent__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__VehicleIdent__fini(v2x_msg__msg__VehicleIdent * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // vin
  rosidl_runtime_c__String__fini(&msg->vin);
  // ownercode
  rosidl_runtime_c__String__fini(&msg->ownercode);
  // id
  v2x_msg__msg__VehicleID__fini(&msg->id);
  // vehicletype
  // vehicleclass
  v2x_msg__msg__VehicleClass__fini(&msg->vehicleclass);
}

bool
v2x_msg__msg__VehicleIdent__are_equal(const v2x_msg__msg__VehicleIdent * lhs, const v2x_msg__msg__VehicleIdent * rhs)
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
  // vin
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vin), &(rhs->vin)))
  {
    return false;
  }
  // ownercode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ownercode), &(rhs->ownercode)))
  {
    return false;
  }
  // id
  if (!v2x_msg__msg__VehicleID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // vehicletype
  if (lhs->vehicletype != rhs->vehicletype) {
    return false;
  }
  // vehicleclass
  if (!v2x_msg__msg__VehicleClass__are_equal(
      &(lhs->vehicleclass), &(rhs->vehicleclass)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__VehicleIdent__copy(
  const v2x_msg__msg__VehicleIdent * input,
  v2x_msg__msg__VehicleIdent * output)
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
  // vin
  if (!rosidl_runtime_c__String__copy(
      &(input->vin), &(output->vin)))
  {
    return false;
  }
  // ownercode
  if (!rosidl_runtime_c__String__copy(
      &(input->ownercode), &(output->ownercode)))
  {
    return false;
  }
  // id
  if (!v2x_msg__msg__VehicleID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // vehicletype
  output->vehicletype = input->vehicletype;
  // vehicleclass
  if (!v2x_msg__msg__VehicleClass__copy(
      &(input->vehicleclass), &(output->vehicleclass)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__VehicleIdent *
v2x_msg__msg__VehicleIdent__create()
{
  v2x_msg__msg__VehicleIdent * msg = (v2x_msg__msg__VehicleIdent *)malloc(sizeof(v2x_msg__msg__VehicleIdent));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__VehicleIdent));
  bool success = v2x_msg__msg__VehicleIdent__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__VehicleIdent__destroy(v2x_msg__msg__VehicleIdent * msg)
{
  if (msg) {
    v2x_msg__msg__VehicleIdent__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__VehicleIdent__Sequence__init(v2x_msg__msg__VehicleIdent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__VehicleIdent * data = NULL;
  if (size) {
    data = (v2x_msg__msg__VehicleIdent *)calloc(size, sizeof(v2x_msg__msg__VehicleIdent));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__VehicleIdent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__VehicleIdent__fini(&data[i - 1]);
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
v2x_msg__msg__VehicleIdent__Sequence__fini(v2x_msg__msg__VehicleIdent__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__VehicleIdent__fini(&array->data[i]);
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

v2x_msg__msg__VehicleIdent__Sequence *
v2x_msg__msg__VehicleIdent__Sequence__create(size_t size)
{
  v2x_msg__msg__VehicleIdent__Sequence * array = (v2x_msg__msg__VehicleIdent__Sequence *)malloc(sizeof(v2x_msg__msg__VehicleIdent__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__VehicleIdent__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__VehicleIdent__Sequence__destroy(v2x_msg__msg__VehicleIdent__Sequence * array)
{
  if (array) {
    v2x_msg__msg__VehicleIdent__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__VehicleIdent__Sequence__are_equal(const v2x_msg__msg__VehicleIdent__Sequence * lhs, const v2x_msg__msg__VehicleIdent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__VehicleIdent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__VehicleIdent__Sequence__copy(
  const v2x_msg__msg__VehicleIdent__Sequence * input,
  v2x_msg__msg__VehicleIdent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__VehicleIdent);
    v2x_msg__msg__VehicleIdent * data =
      (v2x_msg__msg__VehicleIdent *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__VehicleIdent__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__VehicleIdent__fini(&data[i]);
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
    if (!v2x_msg__msg__VehicleIdent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
