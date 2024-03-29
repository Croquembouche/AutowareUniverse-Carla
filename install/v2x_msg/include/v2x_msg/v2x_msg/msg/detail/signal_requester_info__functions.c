// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/SignalRequesterInfo.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/signal_requester_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "v2x_msg/msg/detail/vehicle_id__functions.h"
// Member `typedata`
#include "v2x_msg/msg/detail/requestor_type__functions.h"

bool
v2x_msg__msg__SignalRequesterInfo__init(v2x_msg__msg__SignalRequesterInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!v2x_msg__msg__VehicleID__init(&msg->id)) {
    v2x_msg__msg__SignalRequesterInfo__fini(msg);
    return false;
  }
  // request
  // sequencenumber
  // basicvehiclerole
  // typedata
  if (!v2x_msg__msg__RequestorType__init(&msg->typedata)) {
    v2x_msg__msg__SignalRequesterInfo__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__SignalRequesterInfo__fini(v2x_msg__msg__SignalRequesterInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  v2x_msg__msg__VehicleID__fini(&msg->id);
  // request
  // sequencenumber
  // basicvehiclerole
  // typedata
  v2x_msg__msg__RequestorType__fini(&msg->typedata);
}

bool
v2x_msg__msg__SignalRequesterInfo__are_equal(const v2x_msg__msg__SignalRequesterInfo * lhs, const v2x_msg__msg__SignalRequesterInfo * rhs)
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
  // request
  if (lhs->request != rhs->request) {
    return false;
  }
  // sequencenumber
  if (lhs->sequencenumber != rhs->sequencenumber) {
    return false;
  }
  // basicvehiclerole
  if (lhs->basicvehiclerole != rhs->basicvehiclerole) {
    return false;
  }
  // typedata
  if (!v2x_msg__msg__RequestorType__are_equal(
      &(lhs->typedata), &(rhs->typedata)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__SignalRequesterInfo__copy(
  const v2x_msg__msg__SignalRequesterInfo * input,
  v2x_msg__msg__SignalRequesterInfo * output)
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
  // request
  output->request = input->request;
  // sequencenumber
  output->sequencenumber = input->sequencenumber;
  // basicvehiclerole
  output->basicvehiclerole = input->basicvehiclerole;
  // typedata
  if (!v2x_msg__msg__RequestorType__copy(
      &(input->typedata), &(output->typedata)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__SignalRequesterInfo *
v2x_msg__msg__SignalRequesterInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__SignalRequesterInfo * msg = (v2x_msg__msg__SignalRequesterInfo *)allocator.allocate(sizeof(v2x_msg__msg__SignalRequesterInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__SignalRequesterInfo));
  bool success = v2x_msg__msg__SignalRequesterInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__SignalRequesterInfo__destroy(v2x_msg__msg__SignalRequesterInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__SignalRequesterInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__SignalRequesterInfo__Sequence__init(v2x_msg__msg__SignalRequesterInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__SignalRequesterInfo * data = NULL;

  if (size) {
    data = (v2x_msg__msg__SignalRequesterInfo *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__SignalRequesterInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__SignalRequesterInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__SignalRequesterInfo__fini(&data[i - 1]);
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
v2x_msg__msg__SignalRequesterInfo__Sequence__fini(v2x_msg__msg__SignalRequesterInfo__Sequence * array)
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
      v2x_msg__msg__SignalRequesterInfo__fini(&array->data[i]);
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

v2x_msg__msg__SignalRequesterInfo__Sequence *
v2x_msg__msg__SignalRequesterInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__SignalRequesterInfo__Sequence * array = (v2x_msg__msg__SignalRequesterInfo__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__SignalRequesterInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__SignalRequesterInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__SignalRequesterInfo__Sequence__destroy(v2x_msg__msg__SignalRequesterInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__SignalRequesterInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__SignalRequesterInfo__Sequence__are_equal(const v2x_msg__msg__SignalRequesterInfo__Sequence * lhs, const v2x_msg__msg__SignalRequesterInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__SignalRequesterInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__SignalRequesterInfo__Sequence__copy(
  const v2x_msg__msg__SignalRequesterInfo__Sequence * input,
  v2x_msg__msg__SignalRequesterInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__SignalRequesterInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__SignalRequesterInfo * data =
      (v2x_msg__msg__SignalRequesterInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__SignalRequesterInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__SignalRequesterInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__SignalRequesterInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
