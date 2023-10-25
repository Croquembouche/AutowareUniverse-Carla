// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice
#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `requested_primitives`
// Member `geom_upper_bound`
// Member `geom_lower_bound`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autoware_auto_mapping_msgs__srv__HADMapService_Request__init(autoware_auto_mapping_msgs__srv__HADMapService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // requested_primitives
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->requested_primitives, 0)) {
    autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(msg);
    return false;
  }
  // geom_upper_bound
  if (!rosidl_runtime_c__double__Sequence__init(&msg->geom_upper_bound, 0)) {
    autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(msg);
    return false;
  }
  // geom_lower_bound
  if (!rosidl_runtime_c__double__Sequence__init(&msg->geom_lower_bound, 0)) {
    autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(autoware_auto_mapping_msgs__srv__HADMapService_Request * msg)
{
  if (!msg) {
    return;
  }
  // requested_primitives
  rosidl_runtime_c__uint8__Sequence__fini(&msg->requested_primitives);
  // geom_upper_bound
  rosidl_runtime_c__double__Sequence__fini(&msg->geom_upper_bound);
  // geom_lower_bound
  rosidl_runtime_c__double__Sequence__fini(&msg->geom_lower_bound);
}

bool
autoware_auto_mapping_msgs__srv__HADMapService_Request__are_equal(const autoware_auto_mapping_msgs__srv__HADMapService_Request * lhs, const autoware_auto_mapping_msgs__srv__HADMapService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // requested_primitives
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->requested_primitives), &(rhs->requested_primitives)))
  {
    return false;
  }
  // geom_upper_bound
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->geom_upper_bound), &(rhs->geom_upper_bound)))
  {
    return false;
  }
  // geom_lower_bound
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->geom_lower_bound), &(rhs->geom_lower_bound)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_mapping_msgs__srv__HADMapService_Request__copy(
  const autoware_auto_mapping_msgs__srv__HADMapService_Request * input,
  autoware_auto_mapping_msgs__srv__HADMapService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // requested_primitives
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->requested_primitives), &(output->requested_primitives)))
  {
    return false;
  }
  // geom_upper_bound
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->geom_upper_bound), &(output->geom_upper_bound)))
  {
    return false;
  }
  // geom_lower_bound
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->geom_lower_bound), &(output->geom_lower_bound)))
  {
    return false;
  }
  return true;
}

autoware_auto_mapping_msgs__srv__HADMapService_Request *
autoware_auto_mapping_msgs__srv__HADMapService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__srv__HADMapService_Request * msg = (autoware_auto_mapping_msgs__srv__HADMapService_Request *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Request));
  bool success = autoware_auto_mapping_msgs__srv__HADMapService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_mapping_msgs__srv__HADMapService_Request__destroy(autoware_auto_mapping_msgs__srv__HADMapService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence__init(autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__srv__HADMapService_Request * data = NULL;

  if (size) {
    data = (autoware_auto_mapping_msgs__srv__HADMapService_Request *)allocator.zero_allocate(size, sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_mapping_msgs__srv__HADMapService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(&data[i - 1]);
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
autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence__fini(autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence * array)
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
      autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(&array->data[i]);
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

autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence *
autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence * array = (autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence__destroy(autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence__are_equal(const autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence * lhs, const autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_mapping_msgs__srv__HADMapService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence__copy(
  const autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence * input,
  autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_mapping_msgs__srv__HADMapService_Request * data =
      (autoware_auto_mapping_msgs__srv__HADMapService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_mapping_msgs__srv__HADMapService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_mapping_msgs__srv__HADMapService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `map`
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__functions.h"

bool
autoware_auto_mapping_msgs__srv__HADMapService_Response__init(autoware_auto_mapping_msgs__srv__HADMapService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!autoware_auto_mapping_msgs__msg__HADMapBin__init(&msg->map)) {
    autoware_auto_mapping_msgs__srv__HADMapService_Response__fini(msg);
    return false;
  }
  // answer
  return true;
}

void
autoware_auto_mapping_msgs__srv__HADMapService_Response__fini(autoware_auto_mapping_msgs__srv__HADMapService_Response * msg)
{
  if (!msg) {
    return;
  }
  // map
  autoware_auto_mapping_msgs__msg__HADMapBin__fini(&msg->map);
  // answer
}

bool
autoware_auto_mapping_msgs__srv__HADMapService_Response__are_equal(const autoware_auto_mapping_msgs__srv__HADMapService_Response * lhs, const autoware_auto_mapping_msgs__srv__HADMapService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map
  if (!autoware_auto_mapping_msgs__msg__HADMapBin__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  // answer
  if (lhs->answer != rhs->answer) {
    return false;
  }
  return true;
}

bool
autoware_auto_mapping_msgs__srv__HADMapService_Response__copy(
  const autoware_auto_mapping_msgs__srv__HADMapService_Response * input,
  autoware_auto_mapping_msgs__srv__HADMapService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // map
  if (!autoware_auto_mapping_msgs__msg__HADMapBin__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  // answer
  output->answer = input->answer;
  return true;
}

autoware_auto_mapping_msgs__srv__HADMapService_Response *
autoware_auto_mapping_msgs__srv__HADMapService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__srv__HADMapService_Response * msg = (autoware_auto_mapping_msgs__srv__HADMapService_Response *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Response));
  bool success = autoware_auto_mapping_msgs__srv__HADMapService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_mapping_msgs__srv__HADMapService_Response__destroy(autoware_auto_mapping_msgs__srv__HADMapService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_mapping_msgs__srv__HADMapService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence__init(autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__srv__HADMapService_Response * data = NULL;

  if (size) {
    data = (autoware_auto_mapping_msgs__srv__HADMapService_Response *)allocator.zero_allocate(size, sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_mapping_msgs__srv__HADMapService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_mapping_msgs__srv__HADMapService_Response__fini(&data[i - 1]);
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
autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence__fini(autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence * array)
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
      autoware_auto_mapping_msgs__srv__HADMapService_Response__fini(&array->data[i]);
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

autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence *
autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence * array = (autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence__destroy(autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence__are_equal(const autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence * lhs, const autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_mapping_msgs__srv__HADMapService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence__copy(
  const autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence * input,
  autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_mapping_msgs__srv__HADMapService_Response * data =
      (autoware_auto_mapping_msgs__srv__HADMapService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_mapping_msgs__srv__HADMapService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_mapping_msgs__srv__HADMapService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_mapping_msgs__srv__HADMapService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
