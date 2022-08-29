// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/BSMCoreData.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/bsm_core_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `accuracy`
#include "v2x_msg/msg/detail/positional_accuracy__functions.h"
// Member `accelset`
#include "v2x_msg/msg/detail/acceleration_set4_way__functions.h"
// Member `brakes`
#include "v2x_msg/msg/detail/brake_system_status__functions.h"
// Member `size`
#include "v2x_msg/msg/detail/vehicle_size__functions.h"

bool
v2x_msg__msg__BSMCoreData__init(v2x_msg__msg__BSMCoreData * msg)
{
  if (!msg) {
    return false;
  }
  // msgcnt
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    v2x_msg__msg__BSMCoreData__fini(msg);
    return false;
  }
  // secmark
  // lat
  // longitude
  // elev
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__init(&msg->accuracy)) {
    v2x_msg__msg__BSMCoreData__fini(msg);
    return false;
  }
  // transmission
  // speed
  // heading
  // angle
  // accelset
  if (!v2x_msg__msg__AccelerationSet4Way__init(&msg->accelset)) {
    v2x_msg__msg__BSMCoreData__fini(msg);
    return false;
  }
  // brakes
  if (!v2x_msg__msg__BrakeSystemStatus__init(&msg->brakes)) {
    v2x_msg__msg__BSMCoreData__fini(msg);
    return false;
  }
  // size
  if (!v2x_msg__msg__VehicleSize__init(&msg->size)) {
    v2x_msg__msg__BSMCoreData__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__BSMCoreData__fini(v2x_msg__msg__BSMCoreData * msg)
{
  if (!msg) {
    return;
  }
  // msgcnt
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // secmark
  // lat
  // longitude
  // elev
  // accuracy
  v2x_msg__msg__PositionalAccuracy__fini(&msg->accuracy);
  // transmission
  // speed
  // heading
  // angle
  // accelset
  v2x_msg__msg__AccelerationSet4Way__fini(&msg->accelset);
  // brakes
  v2x_msg__msg__BrakeSystemStatus__fini(&msg->brakes);
  // size
  v2x_msg__msg__VehicleSize__fini(&msg->size);
}

bool
v2x_msg__msg__BSMCoreData__are_equal(const v2x_msg__msg__BSMCoreData * lhs, const v2x_msg__msg__BSMCoreData * rhs)
{
  if (!lhs || !rhs) {
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
  // secmark
  if (lhs->secmark != rhs->secmark) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // elev
  if (lhs->elev != rhs->elev) {
    return false;
  }
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__are_equal(
      &(lhs->accuracy), &(rhs->accuracy)))
  {
    return false;
  }
  // transmission
  if (lhs->transmission != rhs->transmission) {
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
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // accelset
  if (!v2x_msg__msg__AccelerationSet4Way__are_equal(
      &(lhs->accelset), &(rhs->accelset)))
  {
    return false;
  }
  // brakes
  if (!v2x_msg__msg__BrakeSystemStatus__are_equal(
      &(lhs->brakes), &(rhs->brakes)))
  {
    return false;
  }
  // size
  if (!v2x_msg__msg__VehicleSize__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__BSMCoreData__copy(
  const v2x_msg__msg__BSMCoreData * input,
  v2x_msg__msg__BSMCoreData * output)
{
  if (!input || !output) {
    return false;
  }
  // msgcnt
  output->msgcnt = input->msgcnt;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // secmark
  output->secmark = input->secmark;
  // lat
  output->lat = input->lat;
  // longitude
  output->longitude = input->longitude;
  // elev
  output->elev = input->elev;
  // accuracy
  if (!v2x_msg__msg__PositionalAccuracy__copy(
      &(input->accuracy), &(output->accuracy)))
  {
    return false;
  }
  // transmission
  output->transmission = input->transmission;
  // speed
  output->speed = input->speed;
  // heading
  output->heading = input->heading;
  // angle
  output->angle = input->angle;
  // accelset
  if (!v2x_msg__msg__AccelerationSet4Way__copy(
      &(input->accelset), &(output->accelset)))
  {
    return false;
  }
  // brakes
  if (!v2x_msg__msg__BrakeSystemStatus__copy(
      &(input->brakes), &(output->brakes)))
  {
    return false;
  }
  // size
  if (!v2x_msg__msg__VehicleSize__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__BSMCoreData *
v2x_msg__msg__BSMCoreData__create()
{
  v2x_msg__msg__BSMCoreData * msg = (v2x_msg__msg__BSMCoreData *)malloc(sizeof(v2x_msg__msg__BSMCoreData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__BSMCoreData));
  bool success = v2x_msg__msg__BSMCoreData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__BSMCoreData__destroy(v2x_msg__msg__BSMCoreData * msg)
{
  if (msg) {
    v2x_msg__msg__BSMCoreData__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__BSMCoreData__Sequence__init(v2x_msg__msg__BSMCoreData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__BSMCoreData * data = NULL;
  if (size) {
    data = (v2x_msg__msg__BSMCoreData *)calloc(size, sizeof(v2x_msg__msg__BSMCoreData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__BSMCoreData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__BSMCoreData__fini(&data[i - 1]);
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
v2x_msg__msg__BSMCoreData__Sequence__fini(v2x_msg__msg__BSMCoreData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__BSMCoreData__fini(&array->data[i]);
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

v2x_msg__msg__BSMCoreData__Sequence *
v2x_msg__msg__BSMCoreData__Sequence__create(size_t size)
{
  v2x_msg__msg__BSMCoreData__Sequence * array = (v2x_msg__msg__BSMCoreData__Sequence *)malloc(sizeof(v2x_msg__msg__BSMCoreData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__BSMCoreData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__BSMCoreData__Sequence__destroy(v2x_msg__msg__BSMCoreData__Sequence * array)
{
  if (array) {
    v2x_msg__msg__BSMCoreData__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__BSMCoreData__Sequence__are_equal(const v2x_msg__msg__BSMCoreData__Sequence * lhs, const v2x_msg__msg__BSMCoreData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__BSMCoreData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__BSMCoreData__Sequence__copy(
  const v2x_msg__msg__BSMCoreData__Sequence * input,
  v2x_msg__msg__BSMCoreData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__BSMCoreData);
    v2x_msg__msg__BSMCoreData * data =
      (v2x_msg__msg__BSMCoreData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__BSMCoreData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__BSMCoreData__fini(&data[i]);
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
    if (!v2x_msg__msg__BSMCoreData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
