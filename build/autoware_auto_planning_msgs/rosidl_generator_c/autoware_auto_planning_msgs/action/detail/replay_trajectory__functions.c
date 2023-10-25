// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:action/ReplayTrajectory.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/action/detail/replay_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `replay_path`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__init(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // replay_path
  if (!rosidl_runtime_c__String__init(&msg->replay_path)) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // replay_path
  rosidl_runtime_c__String__fini(&msg->replay_path);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // replay_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->replay_path), &(rhs->replay_path)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // replay_path
  if (!rosidl_runtime_c__String__copy(
      &(input->replay_path), &(output->replay_path)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__ReplayTrajectory_Goal *
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * msg = (autoware_auto_planning_msgs__action__ReplayTrajectory_Goal *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal));
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence__init(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__ReplayTrajectory_Goal *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence * array)
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
      autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence *
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence * array = (autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__ReplayTrajectory_Goal * data =
      (autoware_auto_planning_msgs__action__ReplayTrajectory_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__init(autoware_auto_planning_msgs__action__ReplayTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // unused_flag
  return true;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // unused_flag
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_Result * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unused_flag
  if (lhs->unused_flag != rhs->unused_flag) {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_Result * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // unused_flag
  output->unused_flag = input->unused_flag;
  return true;
}

autoware_auto_planning_msgs__action__ReplayTrajectory_Result *
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Result * msg = (autoware_auto_planning_msgs__action__ReplayTrajectory_Result *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Result));
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence__init(autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Result * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__ReplayTrajectory_Result *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__ReplayTrajectory_Result__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence * array)
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
      autoware_auto_planning_msgs__action__ReplayTrajectory_Result__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence *
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence * array = (autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__ReplayTrajectory_Result * data =
      (autoware_auto_planning_msgs__action__ReplayTrajectory_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__ReplayTrajectory_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__init(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remaining_length
  return true;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remaining_length
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remaining_length
  if (lhs->remaining_length != rhs->remaining_length) {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // remaining_length
  output->remaining_length = input->remaining_length;
  return true;
}

autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback *
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * msg = (autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback));
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence__init(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence * array)
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
      autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence *
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence * array = (autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback * data =
      (autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__copy(
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
// #include "autoware_auto_planning_msgs/action/detail/replay_trajectory__functions.h"

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__init(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__init(&msg->goal)) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__fini(&msg->goal);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * rhs)
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
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * output)
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
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request *
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * msg = (autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request));
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence__init(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence * array)
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
      autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence *
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence * array = (autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request * data =
      (autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Request__copy(
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
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__init(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * rhs)
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
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * output)
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

autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response *
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * msg = (autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response));
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence__init(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence * array)
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
      autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence *
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence * array = (autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response * data =
      (autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_SendGoal_Response__copy(
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
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__init(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * rhs)
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
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * output)
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

autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request *
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * msg = (autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request));
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence__init(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence * array)
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
      autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence *
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence * array = (autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request * data =
      (autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Request__copy(
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
// #include "autoware_auto_planning_msgs/action/detail/replay_trajectory__functions.h"

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__init(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Result__init(&msg->result)) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  autoware_auto_planning_msgs__action__ReplayTrajectory_Result__fini(&msg->result);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response *
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * msg = (autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response));
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence__init(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence * array)
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
      autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence *
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence * array = (autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response * data =
      (autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_GetResult_Response__copy(
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
// #include "autoware_auto_planning_msgs/action/detail/replay_trajectory__functions.h"

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__init(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__init(&msg->feedback)) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__fini(&msg->feedback);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * rhs)
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
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * output)
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
  if (!autoware_auto_planning_msgs__action__ReplayTrajectory_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage *
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * msg = (autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage));
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence__init(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * data = NULL;

  if (size) {
    data = (autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage *)allocator.zero_allocate(size, sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__fini(&data[i - 1]);
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
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence__fini(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence * array)
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
      autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__fini(&array->data[i]);
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

autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence *
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence * array = (autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence *)allocator.allocate(sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence__destroy(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence__are_equal(const autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence * lhs, const autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence__copy(
  const autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence * input,
  autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage * data =
      (autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_planning_msgs__action__ReplayTrajectory_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
