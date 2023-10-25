// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:action/PlanTrajectory.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/action/detail/plan_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sub_route`
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__functions.h"

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__init(autoware_auto_planning_msgs__action__PlanTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // sub_route
  if (!autoware_auto_planning_msgs__msg__HADMapRoute__init(&msg->sub_route)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_Goal__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__fini(autoware_auto_planning_msgs__action__PlanTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // sub_route
  autoware_auto_planning_msgs__msg__HADMapRoute__fini(&msg->sub_route);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_Goal * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sub_route
  if (!autoware_auto_planning_msgs__msg__HADMapRoute__are_equal(
      &(lhs->sub_route), &(rhs->sub_route)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_Goal * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // sub_route
  if (!autoware_auto_planning_msgs__msg__HADMapRoute__copy(
      &(input->sub_route), &(output->sub_route)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__PlanTrajectory_Goal *
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Goal * msg = (autoware_auto_planning_msgs__action__PlanTrajectory_Goal *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Goal));
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__PlanTrajectory_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence__init(autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Goal * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__PlanTrajectory_Goal *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__PlanTrajectory_Goal__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence__fini(autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence * array)
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
      autoware_auto_planning_msgs__action__PlanTrajectory_Goal__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence *
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence * array = (autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__PlanTrajectory_Goal * data =
      (autoware_auto_planning_msgs__action__PlanTrajectory_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__PlanTrajectory_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__PlanTrajectory_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `trajectory`
#include "autoware_auto_planning_msgs/msg/detail/trajectory__functions.h"

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Result__init(autoware_auto_planning_msgs__action__PlanTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // trajectory
  if (!autoware_auto_planning_msgs__msg__Trajectory__init(&msg->trajectory)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_Result__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Result__fini(autoware_auto_planning_msgs__action__PlanTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  // trajectory
  autoware_auto_planning_msgs__msg__Trajectory__fini(&msg->trajectory);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Result__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_Result * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // trajectory
  if (!autoware_auto_planning_msgs__msg__Trajectory__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Result__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_Result * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // trajectory
  if (!autoware_auto_planning_msgs__msg__Trajectory__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__PlanTrajectory_Result *
autoware_auto_planning_msgs__action__PlanTrajectory_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Result * msg = (autoware_auto_planning_msgs__action__PlanTrajectory_Result *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Result));
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Result__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__PlanTrajectory_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence__init(autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Result * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__PlanTrajectory_Result *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__PlanTrajectory_Result__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence__fini(autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence * array)
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
      autoware_auto_planning_msgs__action__PlanTrajectory_Result__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence *
autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence * array = (autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__PlanTrajectory_Result * data =
      (autoware_auto_planning_msgs__action__PlanTrajectory_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__PlanTrajectory_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__PlanTrajectory_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__init(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // unused_variable
  return true;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__fini(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // unused_variable
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unused_variable
  if (lhs->unused_variable != rhs->unused_variable) {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // unused_variable
  output->unused_variable = input->unused_variable;
  return true;
}

autoware_auto_planning_msgs__action__PlanTrajectory_Feedback *
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * msg = (autoware_auto_planning_msgs__action__PlanTrajectory_Feedback *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback));
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence__init(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__PlanTrajectory_Feedback *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence__fini(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence * array)
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
      autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence *
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence * array = (autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * data =
      (autoware_auto_planning_msgs__action__PlanTrajectory_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__functions.h"

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__init(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Goal__init(&msg->goal)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__fini(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  autoware_auto_planning_msgs__action__PlanTrajectory_Goal__fini(&msg->goal);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request *
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * msg = (autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request));
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__init(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__fini(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array)
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
      autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence *
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array = (autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * data =
      (autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__init(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__fini(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response *
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * msg = (autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response));
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__init(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__fini(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array)
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
      autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence *
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array = (autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * data =
      (autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__init(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__fini(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request *
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * msg = (autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request));
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence__init(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence__fini(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array)
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
      autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence *
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array = (autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * data =
      (autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__functions.h"

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__init(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Result__init(&msg->result)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__fini(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  autoware_auto_planning_msgs__action__PlanTrajectory_Result__fini(&msg->result);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response *
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * msg = (autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response));
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence__init(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence__fini(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array)
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
      autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence *
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array = (autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * data =
      (autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__functions.h"

bool
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__init(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__init(&msg->feedback)) {
    autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__fini(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__fini(&msg->feedback);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage *
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * msg = (autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage));
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__init(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__fini(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array)
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
      autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence *
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array = (autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__destroy(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__are_equal(const autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * lhs, const autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__copy(
  const autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * input,
  autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * data =
      (autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
