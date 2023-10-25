// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_vehicle_msgs:srv/AutonomyModeChange.idl
// generated code does not contain a copyright notice
#include "autoware_auto_vehicle_msgs/srv/detail/autonomy_mode_change__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__init(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__fini(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__are_equal(const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * lhs, const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__copy(
  const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * input,
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request *
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * msg = (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request *)allocator.allocate(sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request));
  bool success = autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__destroy(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence__init(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * data = NULL;

  if (size) {
    data = (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request *)allocator.zero_allocate(size, sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__fini(&data[i - 1]);
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
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence__fini(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence * array)
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
      autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__fini(&array->data[i]);
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

autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence *
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence * array = (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence *)allocator.allocate(sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence__destroy(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence__are_equal(const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence * lhs, const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence__copy(
  const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence * input,
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * data =
      (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `empty`
#include "std_msgs/msg/detail/empty__functions.h"

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__init(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * msg)
{
  if (!msg) {
    return false;
  }
  // empty
  if (!std_msgs__msg__Empty__init(&msg->empty)) {
    autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__fini(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * msg)
{
  if (!msg) {
    return;
  }
  // empty
  std_msgs__msg__Empty__fini(&msg->empty);
}

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__are_equal(const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * lhs, const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // empty
  if (!std_msgs__msg__Empty__are_equal(
      &(lhs->empty), &(rhs->empty)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__copy(
  const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * input,
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // empty
  if (!std_msgs__msg__Empty__copy(
      &(input->empty), &(output->empty)))
  {
    return false;
  }
  return true;
}

autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response *
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * msg = (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response *)allocator.allocate(sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response));
  bool success = autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__destroy(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence__init(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * data = NULL;

  if (size) {
    data = (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response *)allocator.zero_allocate(size, sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__fini(&data[i - 1]);
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
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence__fini(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence * array)
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
      autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__fini(&array->data[i]);
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

autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence *
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence * array = (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence *)allocator.allocate(sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence__destroy(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence__are_equal(const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence * lhs, const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence__copy(
  const autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence * input,
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * data =
      (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
