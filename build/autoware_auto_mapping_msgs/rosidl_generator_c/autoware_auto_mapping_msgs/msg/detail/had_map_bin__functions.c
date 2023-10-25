// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_mapping_msgs:msg/HADMapBin.idl
// generated code does not contain a copyright notice
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `format_version`
// Member `map_version`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autoware_auto_mapping_msgs__msg__HADMapBin__init(autoware_auto_mapping_msgs__msg__HADMapBin * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_mapping_msgs__msg__HADMapBin__fini(msg);
    return false;
  }
  // map_format
  // format_version
  if (!rosidl_runtime_c__String__init(&msg->format_version)) {
    autoware_auto_mapping_msgs__msg__HADMapBin__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->format_version, "");
    if (!success) {
      goto abort_init_0;
    }
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    autoware_auto_mapping_msgs__msg__HADMapBin__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->map_version, "");
    if (!success) {
      goto abort_init_1;
    }
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    autoware_auto_mapping_msgs__msg__HADMapBin__fini(msg);
    return false;
  }
  return true;
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->format_version);
abort_init_0:
  return false;
}

void
autoware_auto_mapping_msgs__msg__HADMapBin__fini(autoware_auto_mapping_msgs__msg__HADMapBin * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // map_format
  // format_version
  rosidl_runtime_c__String__fini(&msg->format_version);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
autoware_auto_mapping_msgs__msg__HADMapBin__are_equal(const autoware_auto_mapping_msgs__msg__HADMapBin * lhs, const autoware_auto_mapping_msgs__msg__HADMapBin * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // map_format
  if (lhs->map_format != rhs->map_format) {
    return false;
  }
  // format_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->format_version), &(rhs->format_version)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_version), &(rhs->map_version)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_mapping_msgs__msg__HADMapBin__copy(
  const autoware_auto_mapping_msgs__msg__HADMapBin * input,
  autoware_auto_mapping_msgs__msg__HADMapBin * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // map_format
  output->map_format = input->map_format;
  // format_version
  if (!rosidl_runtime_c__String__copy(
      &(input->format_version), &(output->format_version)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__copy(
      &(input->map_version), &(output->map_version)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

autoware_auto_mapping_msgs__msg__HADMapBin *
autoware_auto_mapping_msgs__msg__HADMapBin__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__HADMapBin * msg = (autoware_auto_mapping_msgs__msg__HADMapBin *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__msg__HADMapBin), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_mapping_msgs__msg__HADMapBin));
  bool success = autoware_auto_mapping_msgs__msg__HADMapBin__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_mapping_msgs__msg__HADMapBin__destroy(autoware_auto_mapping_msgs__msg__HADMapBin * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_mapping_msgs__msg__HADMapBin__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_mapping_msgs__msg__HADMapBin__Sequence__init(autoware_auto_mapping_msgs__msg__HADMapBin__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__HADMapBin * data = NULL;

  if (size) {
    data = (autoware_auto_mapping_msgs__msg__HADMapBin *)allocator.zero_allocate(size, sizeof(autoware_auto_mapping_msgs__msg__HADMapBin), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_mapping_msgs__msg__HADMapBin__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_mapping_msgs__msg__HADMapBin__fini(&data[i - 1]);
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
autoware_auto_mapping_msgs__msg__HADMapBin__Sequence__fini(autoware_auto_mapping_msgs__msg__HADMapBin__Sequence * array)
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
      autoware_auto_mapping_msgs__msg__HADMapBin__fini(&array->data[i]);
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

autoware_auto_mapping_msgs__msg__HADMapBin__Sequence *
autoware_auto_mapping_msgs__msg__HADMapBin__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__HADMapBin__Sequence * array = (autoware_auto_mapping_msgs__msg__HADMapBin__Sequence *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__msg__HADMapBin__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_mapping_msgs__msg__HADMapBin__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_mapping_msgs__msg__HADMapBin__Sequence__destroy(autoware_auto_mapping_msgs__msg__HADMapBin__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_mapping_msgs__msg__HADMapBin__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_mapping_msgs__msg__HADMapBin__Sequence__are_equal(const autoware_auto_mapping_msgs__msg__HADMapBin__Sequence * lhs, const autoware_auto_mapping_msgs__msg__HADMapBin__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_mapping_msgs__msg__HADMapBin__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_mapping_msgs__msg__HADMapBin__Sequence__copy(
  const autoware_auto_mapping_msgs__msg__HADMapBin__Sequence * input,
  autoware_auto_mapping_msgs__msg__HADMapBin__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_mapping_msgs__msg__HADMapBin);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_mapping_msgs__msg__HADMapBin * data =
      (autoware_auto_mapping_msgs__msg__HADMapBin *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_mapping_msgs__msg__HADMapBin__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_mapping_msgs__msg__HADMapBin__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_mapping_msgs__msg__HADMapBin__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
