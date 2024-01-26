// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:srv/InitializeLocalization.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/srv/detail/initialize_localization__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__init(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__init(&msg->pose, 0)) {
    autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__fini(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__fini(&msg->pose);
}

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__are_equal(const autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * lhs, const autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__copy(
  const autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * input,
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__srv__InitializeLocalization_Request *
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * msg = (autoware_adapi_v1_msgs__srv__InitializeLocalization_Request *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request));
  bool success = autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__destroy(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence__init(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__srv__InitializeLocalization_Request *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence__fini(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence * array)
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
      autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence *
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence * array = (autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence__destroy(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence * lhs, const autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence * input,
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * data =
      (autoware_adapi_v1_msgs__srv__InitializeLocalization_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "autoware_adapi_v1_msgs/msg/detail/response_status__functions.h"

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__init(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__init(&msg->status)) {
    autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__fini(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  autoware_adapi_v1_msgs__msg__ResponseStatus__fini(&msg->status);
}

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__are_equal(const autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * lhs, const autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__copy(
  const autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * input,
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__srv__InitializeLocalization_Response *
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * msg = (autoware_adapi_v1_msgs__srv__InitializeLocalization_Response *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response));
  bool success = autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__destroy(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence__init(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__srv__InitializeLocalization_Response *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence__fini(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence * array)
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
      autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence *
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence * array = (autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence__destroy(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence * lhs, const autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence * input,
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__srv__InitializeLocalization_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * data =
      (autoware_adapi_v1_msgs__srv__InitializeLocalization_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
