// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/brake_system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `wheelbrakes`
#include "rosidl_runtime_c/string_functions.h"

bool
v2x_msg__msg__BrakeSystemStatus__init(v2x_msg__msg__BrakeSystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // wheelbrakes
  if (!rosidl_runtime_c__String__init(&msg->wheelbrakes)) {
    v2x_msg__msg__BrakeSystemStatus__fini(msg);
    return false;
  }
  // traction
  // abs
  // scs
  // brakeboost
  // auxbrakes
  return true;
}

void
v2x_msg__msg__BrakeSystemStatus__fini(v2x_msg__msg__BrakeSystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // wheelbrakes
  rosidl_runtime_c__String__fini(&msg->wheelbrakes);
  // traction
  // abs
  // scs
  // brakeboost
  // auxbrakes
}

bool
v2x_msg__msg__BrakeSystemStatus__are_equal(const v2x_msg__msg__BrakeSystemStatus * lhs, const v2x_msg__msg__BrakeSystemStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wheelbrakes
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->wheelbrakes), &(rhs->wheelbrakes)))
  {
    return false;
  }
  // traction
  if (lhs->traction != rhs->traction) {
    return false;
  }
  // abs
  if (lhs->abs != rhs->abs) {
    return false;
  }
  // scs
  if (lhs->scs != rhs->scs) {
    return false;
  }
  // brakeboost
  if (lhs->brakeboost != rhs->brakeboost) {
    return false;
  }
  // auxbrakes
  if (lhs->auxbrakes != rhs->auxbrakes) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__BrakeSystemStatus__copy(
  const v2x_msg__msg__BrakeSystemStatus * input,
  v2x_msg__msg__BrakeSystemStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // wheelbrakes
  if (!rosidl_runtime_c__String__copy(
      &(input->wheelbrakes), &(output->wheelbrakes)))
  {
    return false;
  }
  // traction
  output->traction = input->traction;
  // abs
  output->abs = input->abs;
  // scs
  output->scs = input->scs;
  // brakeboost
  output->brakeboost = input->brakeboost;
  // auxbrakes
  output->auxbrakes = input->auxbrakes;
  return true;
}

v2x_msg__msg__BrakeSystemStatus *
v2x_msg__msg__BrakeSystemStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__BrakeSystemStatus * msg = (v2x_msg__msg__BrakeSystemStatus *)allocator.allocate(sizeof(v2x_msg__msg__BrakeSystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__BrakeSystemStatus));
  bool success = v2x_msg__msg__BrakeSystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__BrakeSystemStatus__destroy(v2x_msg__msg__BrakeSystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__BrakeSystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__BrakeSystemStatus__Sequence__init(v2x_msg__msg__BrakeSystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__BrakeSystemStatus * data = NULL;

  if (size) {
    data = (v2x_msg__msg__BrakeSystemStatus *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__BrakeSystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__BrakeSystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__BrakeSystemStatus__fini(&data[i - 1]);
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
v2x_msg__msg__BrakeSystemStatus__Sequence__fini(v2x_msg__msg__BrakeSystemStatus__Sequence * array)
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
      v2x_msg__msg__BrakeSystemStatus__fini(&array->data[i]);
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

v2x_msg__msg__BrakeSystemStatus__Sequence *
v2x_msg__msg__BrakeSystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__BrakeSystemStatus__Sequence * array = (v2x_msg__msg__BrakeSystemStatus__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__BrakeSystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__BrakeSystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__BrakeSystemStatus__Sequence__destroy(v2x_msg__msg__BrakeSystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__BrakeSystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__BrakeSystemStatus__Sequence__are_equal(const v2x_msg__msg__BrakeSystemStatus__Sequence * lhs, const v2x_msg__msg__BrakeSystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__BrakeSystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__BrakeSystemStatus__Sequence__copy(
  const v2x_msg__msg__BrakeSystemStatus__Sequence * input,
  v2x_msg__msg__BrakeSystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__BrakeSystemStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__BrakeSystemStatus * data =
      (v2x_msg__msg__BrakeSystemStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__BrakeSystemStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__BrakeSystemStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__BrakeSystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
