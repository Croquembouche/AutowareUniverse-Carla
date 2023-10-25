// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lights`
// Member `gnssstatus`
#include "rosidl_runtime_c/string_functions.h"
// Member `wipers`
#include "v2x_msg/msg/detail/wiper_set__functions.h"
// Member `brakestatus`
#include "v2x_msg/msg/detail/brake_system_status__functions.h"
// Member `steering`
#include "v2x_msg/msg/detail/steering__functions.h"
// Member `accelsets`
#include "v2x_msg/msg/detail/accel_sets__functions.h"
// Member `object`
#include "v2x_msg/msg/detail/object__functions.h"
// Member `fullpos`
#include "v2x_msg/msg/detail/full_position_vector__functions.h"
// Member `speedheadc`
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__functions.h"
// Member `vehicledata`
#include "v2x_msg/msg/detail/vehicle_data__functions.h"
// Member `vehicleident`
#include "v2x_msg/msg/detail/vehicle_ident__functions.h"
// Member `j1939data`
#include "v2x_msg/msg/detail/j1939data__functions.h"
// Member `weatherreport`
#include "v2x_msg/msg/detail/weather_report__functions.h"

bool
v2x_msg__msg__VehicleStatus__init(v2x_msg__msg__VehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // lights
  if (!rosidl_runtime_c__String__init(&msg->lights)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // lightbar
  // wipers
  if (!v2x_msg__msg__WiperSet__init(&msg->wipers)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // brakestatus
  if (!v2x_msg__msg__BrakeSystemStatus__init(&msg->brakestatus)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // roadfriction
  // sundata
  // raindata
  // airtemp
  // airpres
  // steering
  if (!v2x_msg__msg__Steering__init(&msg->steering)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // accelsets
  if (!v2x_msg__msg__AccelSets__init(&msg->accelsets)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // object
  if (!v2x_msg__msg__Object__init(&msg->object)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // fullpos
  if (!v2x_msg__msg__FullPositionVector__init(&msg->fullpos)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // throttlepos
  // speedheadc
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__init(&msg->speedheadc)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // speedc
  // vehicledata
  if (!v2x_msg__msg__VehicleData__init(&msg->vehicledata)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // vehicleident
  if (!v2x_msg__msg__VehicleIdent__init(&msg->vehicleident)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // j1939data
  if (!v2x_msg__msg__J1939data__init(&msg->j1939data)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // weatherreport
  if (!v2x_msg__msg__WeatherReport__init(&msg->weatherreport)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  // gnssstatus
  if (!rosidl_runtime_c__String__init(&msg->gnssstatus)) {
    v2x_msg__msg__VehicleStatus__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__VehicleStatus__fini(v2x_msg__msg__VehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // lights
  rosidl_runtime_c__String__fini(&msg->lights);
  // lightbar
  // wipers
  v2x_msg__msg__WiperSet__fini(&msg->wipers);
  // brakestatus
  v2x_msg__msg__BrakeSystemStatus__fini(&msg->brakestatus);
  // roadfriction
  // sundata
  // raindata
  // airtemp
  // airpres
  // steering
  v2x_msg__msg__Steering__fini(&msg->steering);
  // accelsets
  v2x_msg__msg__AccelSets__fini(&msg->accelsets);
  // object
  v2x_msg__msg__Object__fini(&msg->object);
  // fullpos
  v2x_msg__msg__FullPositionVector__fini(&msg->fullpos);
  // throttlepos
  // speedheadc
  v2x_msg__msg__SpeedandHeadingandThrottleConfidence__fini(&msg->speedheadc);
  // speedc
  // vehicledata
  v2x_msg__msg__VehicleData__fini(&msg->vehicledata);
  // vehicleident
  v2x_msg__msg__VehicleIdent__fini(&msg->vehicleident);
  // j1939data
  v2x_msg__msg__J1939data__fini(&msg->j1939data);
  // weatherreport
  v2x_msg__msg__WeatherReport__fini(&msg->weatherreport);
  // gnssstatus
  rosidl_runtime_c__String__fini(&msg->gnssstatus);
}

bool
v2x_msg__msg__VehicleStatus__are_equal(const v2x_msg__msg__VehicleStatus * lhs, const v2x_msg__msg__VehicleStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lights
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lights), &(rhs->lights)))
  {
    return false;
  }
  // lightbar
  if (lhs->lightbar != rhs->lightbar) {
    return false;
  }
  // wipers
  if (!v2x_msg__msg__WiperSet__are_equal(
      &(lhs->wipers), &(rhs->wipers)))
  {
    return false;
  }
  // brakestatus
  if (!v2x_msg__msg__BrakeSystemStatus__are_equal(
      &(lhs->brakestatus), &(rhs->brakestatus)))
  {
    return false;
  }
  // roadfriction
  if (lhs->roadfriction != rhs->roadfriction) {
    return false;
  }
  // sundata
  if (lhs->sundata != rhs->sundata) {
    return false;
  }
  // raindata
  if (lhs->raindata != rhs->raindata) {
    return false;
  }
  // airtemp
  if (lhs->airtemp != rhs->airtemp) {
    return false;
  }
  // airpres
  if (lhs->airpres != rhs->airpres) {
    return false;
  }
  // steering
  if (!v2x_msg__msg__Steering__are_equal(
      &(lhs->steering), &(rhs->steering)))
  {
    return false;
  }
  // accelsets
  if (!v2x_msg__msg__AccelSets__are_equal(
      &(lhs->accelsets), &(rhs->accelsets)))
  {
    return false;
  }
  // object
  if (!v2x_msg__msg__Object__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // fullpos
  if (!v2x_msg__msg__FullPositionVector__are_equal(
      &(lhs->fullpos), &(rhs->fullpos)))
  {
    return false;
  }
  // throttlepos
  if (lhs->throttlepos != rhs->throttlepos) {
    return false;
  }
  // speedheadc
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__are_equal(
      &(lhs->speedheadc), &(rhs->speedheadc)))
  {
    return false;
  }
  // speedc
  if (lhs->speedc != rhs->speedc) {
    return false;
  }
  // vehicledata
  if (!v2x_msg__msg__VehicleData__are_equal(
      &(lhs->vehicledata), &(rhs->vehicledata)))
  {
    return false;
  }
  // vehicleident
  if (!v2x_msg__msg__VehicleIdent__are_equal(
      &(lhs->vehicleident), &(rhs->vehicleident)))
  {
    return false;
  }
  // j1939data
  if (!v2x_msg__msg__J1939data__are_equal(
      &(lhs->j1939data), &(rhs->j1939data)))
  {
    return false;
  }
  // weatherreport
  if (!v2x_msg__msg__WeatherReport__are_equal(
      &(lhs->weatherreport), &(rhs->weatherreport)))
  {
    return false;
  }
  // gnssstatus
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gnssstatus), &(rhs->gnssstatus)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__VehicleStatus__copy(
  const v2x_msg__msg__VehicleStatus * input,
  v2x_msg__msg__VehicleStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // lights
  if (!rosidl_runtime_c__String__copy(
      &(input->lights), &(output->lights)))
  {
    return false;
  }
  // lightbar
  output->lightbar = input->lightbar;
  // wipers
  if (!v2x_msg__msg__WiperSet__copy(
      &(input->wipers), &(output->wipers)))
  {
    return false;
  }
  // brakestatus
  if (!v2x_msg__msg__BrakeSystemStatus__copy(
      &(input->brakestatus), &(output->brakestatus)))
  {
    return false;
  }
  // roadfriction
  output->roadfriction = input->roadfriction;
  // sundata
  output->sundata = input->sundata;
  // raindata
  output->raindata = input->raindata;
  // airtemp
  output->airtemp = input->airtemp;
  // airpres
  output->airpres = input->airpres;
  // steering
  if (!v2x_msg__msg__Steering__copy(
      &(input->steering), &(output->steering)))
  {
    return false;
  }
  // accelsets
  if (!v2x_msg__msg__AccelSets__copy(
      &(input->accelsets), &(output->accelsets)))
  {
    return false;
  }
  // object
  if (!v2x_msg__msg__Object__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // fullpos
  if (!v2x_msg__msg__FullPositionVector__copy(
      &(input->fullpos), &(output->fullpos)))
  {
    return false;
  }
  // throttlepos
  output->throttlepos = input->throttlepos;
  // speedheadc
  if (!v2x_msg__msg__SpeedandHeadingandThrottleConfidence__copy(
      &(input->speedheadc), &(output->speedheadc)))
  {
    return false;
  }
  // speedc
  output->speedc = input->speedc;
  // vehicledata
  if (!v2x_msg__msg__VehicleData__copy(
      &(input->vehicledata), &(output->vehicledata)))
  {
    return false;
  }
  // vehicleident
  if (!v2x_msg__msg__VehicleIdent__copy(
      &(input->vehicleident), &(output->vehicleident)))
  {
    return false;
  }
  // j1939data
  if (!v2x_msg__msg__J1939data__copy(
      &(input->j1939data), &(output->j1939data)))
  {
    return false;
  }
  // weatherreport
  if (!v2x_msg__msg__WeatherReport__copy(
      &(input->weatherreport), &(output->weatherreport)))
  {
    return false;
  }
  // gnssstatus
  if (!rosidl_runtime_c__String__copy(
      &(input->gnssstatus), &(output->gnssstatus)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__VehicleStatus *
v2x_msg__msg__VehicleStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__VehicleStatus * msg = (v2x_msg__msg__VehicleStatus *)allocator.allocate(sizeof(v2x_msg__msg__VehicleStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__VehicleStatus));
  bool success = v2x_msg__msg__VehicleStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__VehicleStatus__destroy(v2x_msg__msg__VehicleStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__VehicleStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__VehicleStatus__Sequence__init(v2x_msg__msg__VehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__VehicleStatus * data = NULL;

  if (size) {
    data = (v2x_msg__msg__VehicleStatus *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__VehicleStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__VehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__VehicleStatus__fini(&data[i - 1]);
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
v2x_msg__msg__VehicleStatus__Sequence__fini(v2x_msg__msg__VehicleStatus__Sequence * array)
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
      v2x_msg__msg__VehicleStatus__fini(&array->data[i]);
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

v2x_msg__msg__VehicleStatus__Sequence *
v2x_msg__msg__VehicleStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__VehicleStatus__Sequence * array = (v2x_msg__msg__VehicleStatus__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__VehicleStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__VehicleStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__VehicleStatus__Sequence__destroy(v2x_msg__msg__VehicleStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__VehicleStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__VehicleStatus__Sequence__are_equal(const v2x_msg__msg__VehicleStatus__Sequence * lhs, const v2x_msg__msg__VehicleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__VehicleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__VehicleStatus__Sequence__copy(
  const v2x_msg__msg__VehicleStatus__Sequence * input,
  v2x_msg__msg__VehicleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__VehicleStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__VehicleStatus * data =
      (v2x_msg__msg__VehicleStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__VehicleStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__VehicleStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__VehicleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
