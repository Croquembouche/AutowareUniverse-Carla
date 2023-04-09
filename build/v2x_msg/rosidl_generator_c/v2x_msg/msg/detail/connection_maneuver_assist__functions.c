// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/connection_maneuver_assist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
v2x_msg__msg__ConnectionManeuverAssist__init(v2x_msg__msg__ConnectionManeuverAssist * msg)
{
  if (!msg) {
    return false;
  }
  // connectionid
  // queuelength
  // availablestoragelength
  // waitonstop
  // pedbicycledetect
  return true;
}

void
v2x_msg__msg__ConnectionManeuverAssist__fini(v2x_msg__msg__ConnectionManeuverAssist * msg)
{
  if (!msg) {
    return;
  }
  // connectionid
  // queuelength
  // availablestoragelength
  // waitonstop
  // pedbicycledetect
}

bool
v2x_msg__msg__ConnectionManeuverAssist__are_equal(const v2x_msg__msg__ConnectionManeuverAssist * lhs, const v2x_msg__msg__ConnectionManeuverAssist * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connectionid
  if (lhs->connectionid != rhs->connectionid) {
    return false;
  }
  // queuelength
  if (lhs->queuelength != rhs->queuelength) {
    return false;
  }
  // availablestoragelength
  if (lhs->availablestoragelength != rhs->availablestoragelength) {
    return false;
  }
  // waitonstop
  if (lhs->waitonstop != rhs->waitonstop) {
    return false;
  }
  // pedbicycledetect
  if (lhs->pedbicycledetect != rhs->pedbicycledetect) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__ConnectionManeuverAssist__copy(
  const v2x_msg__msg__ConnectionManeuverAssist * input,
  v2x_msg__msg__ConnectionManeuverAssist * output)
{
  if (!input || !output) {
    return false;
  }
  // connectionid
  output->connectionid = input->connectionid;
  // queuelength
  output->queuelength = input->queuelength;
  // availablestoragelength
  output->availablestoragelength = input->availablestoragelength;
  // waitonstop
  output->waitonstop = input->waitonstop;
  // pedbicycledetect
  output->pedbicycledetect = input->pedbicycledetect;
  return true;
}

v2x_msg__msg__ConnectionManeuverAssist *
v2x_msg__msg__ConnectionManeuverAssist__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ConnectionManeuverAssist * msg = (v2x_msg__msg__ConnectionManeuverAssist *)allocator.allocate(sizeof(v2x_msg__msg__ConnectionManeuverAssist), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__ConnectionManeuverAssist));
  bool success = v2x_msg__msg__ConnectionManeuverAssist__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__ConnectionManeuverAssist__destroy(v2x_msg__msg__ConnectionManeuverAssist * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__ConnectionManeuverAssist__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__ConnectionManeuverAssist__Sequence__init(v2x_msg__msg__ConnectionManeuverAssist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ConnectionManeuverAssist * data = NULL;

  if (size) {
    data = (v2x_msg__msg__ConnectionManeuverAssist *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__ConnectionManeuverAssist), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__ConnectionManeuverAssist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__ConnectionManeuverAssist__fini(&data[i - 1]);
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
v2x_msg__msg__ConnectionManeuverAssist__Sequence__fini(v2x_msg__msg__ConnectionManeuverAssist__Sequence * array)
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
      v2x_msg__msg__ConnectionManeuverAssist__fini(&array->data[i]);
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

v2x_msg__msg__ConnectionManeuverAssist__Sequence *
v2x_msg__msg__ConnectionManeuverAssist__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__ConnectionManeuverAssist__Sequence * array = (v2x_msg__msg__ConnectionManeuverAssist__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__ConnectionManeuverAssist__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__ConnectionManeuverAssist__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__ConnectionManeuverAssist__Sequence__destroy(v2x_msg__msg__ConnectionManeuverAssist__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__ConnectionManeuverAssist__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__ConnectionManeuverAssist__Sequence__are_equal(const v2x_msg__msg__ConnectionManeuverAssist__Sequence * lhs, const v2x_msg__msg__ConnectionManeuverAssist__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__ConnectionManeuverAssist__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__ConnectionManeuverAssist__Sequence__copy(
  const v2x_msg__msg__ConnectionManeuverAssist__Sequence * input,
  v2x_msg__msg__ConnectionManeuverAssist__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__ConnectionManeuverAssist);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__ConnectionManeuverAssist * data =
      (v2x_msg__msg__ConnectionManeuverAssist *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__ConnectionManeuverAssist__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__ConnectionManeuverAssist__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__ConnectionManeuverAssist__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
