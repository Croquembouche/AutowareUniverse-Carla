// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_system_msgs:msg/ControlDiagnostic.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `diag_header`
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__functions.h"
// Member `trajectory_source`
// Member `pose_source`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_auto_system_msgs__msg__ControlDiagnostic__init(autoware_auto_system_msgs__msg__ControlDiagnostic * msg)
{
  if (!msg) {
    return false;
  }
  // diag_header
  if (!autoware_auto_system_msgs__msg__DiagnosticHeader__init(&msg->diag_header)) {
    autoware_auto_system_msgs__msg__ControlDiagnostic__fini(msg);
    return false;
  }
  // new_trajectory
  // trajectory_source
  if (!rosidl_runtime_c__String__init(&msg->trajectory_source)) {
    autoware_auto_system_msgs__msg__ControlDiagnostic__fini(msg);
    return false;
  }
  // pose_source
  if (!rosidl_runtime_c__String__init(&msg->pose_source)) {
    autoware_auto_system_msgs__msg__ControlDiagnostic__fini(msg);
    return false;
  }
  // lateral_error_m
  // longitudinal_error_m
  // velocity_error_mps
  // acceleration_error_mps2
  // yaw_error_rad
  // yaw_rate_error_rps
  return true;
}

void
autoware_auto_system_msgs__msg__ControlDiagnostic__fini(autoware_auto_system_msgs__msg__ControlDiagnostic * msg)
{
  if (!msg) {
    return;
  }
  // diag_header
  autoware_auto_system_msgs__msg__DiagnosticHeader__fini(&msg->diag_header);
  // new_trajectory
  // trajectory_source
  rosidl_runtime_c__String__fini(&msg->trajectory_source);
  // pose_source
  rosidl_runtime_c__String__fini(&msg->pose_source);
  // lateral_error_m
  // longitudinal_error_m
  // velocity_error_mps
  // acceleration_error_mps2
  // yaw_error_rad
  // yaw_rate_error_rps
}

bool
autoware_auto_system_msgs__msg__ControlDiagnostic__are_equal(const autoware_auto_system_msgs__msg__ControlDiagnostic * lhs, const autoware_auto_system_msgs__msg__ControlDiagnostic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // diag_header
  if (!autoware_auto_system_msgs__msg__DiagnosticHeader__are_equal(
      &(lhs->diag_header), &(rhs->diag_header)))
  {
    return false;
  }
  // new_trajectory
  if (lhs->new_trajectory != rhs->new_trajectory) {
    return false;
  }
  // trajectory_source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->trajectory_source), &(rhs->trajectory_source)))
  {
    return false;
  }
  // pose_source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pose_source), &(rhs->pose_source)))
  {
    return false;
  }
  // lateral_error_m
  if (lhs->lateral_error_m != rhs->lateral_error_m) {
    return false;
  }
  // longitudinal_error_m
  if (lhs->longitudinal_error_m != rhs->longitudinal_error_m) {
    return false;
  }
  // velocity_error_mps
  if (lhs->velocity_error_mps != rhs->velocity_error_mps) {
    return false;
  }
  // acceleration_error_mps2
  if (lhs->acceleration_error_mps2 != rhs->acceleration_error_mps2) {
    return false;
  }
  // yaw_error_rad
  if (lhs->yaw_error_rad != rhs->yaw_error_rad) {
    return false;
  }
  // yaw_rate_error_rps
  if (lhs->yaw_rate_error_rps != rhs->yaw_rate_error_rps) {
    return false;
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__ControlDiagnostic__copy(
  const autoware_auto_system_msgs__msg__ControlDiagnostic * input,
  autoware_auto_system_msgs__msg__ControlDiagnostic * output)
{
  if (!input || !output) {
    return false;
  }
  // diag_header
  if (!autoware_auto_system_msgs__msg__DiagnosticHeader__copy(
      &(input->diag_header), &(output->diag_header)))
  {
    return false;
  }
  // new_trajectory
  output->new_trajectory = input->new_trajectory;
  // trajectory_source
  if (!rosidl_runtime_c__String__copy(
      &(input->trajectory_source), &(output->trajectory_source)))
  {
    return false;
  }
  // pose_source
  if (!rosidl_runtime_c__String__copy(
      &(input->pose_source), &(output->pose_source)))
  {
    return false;
  }
  // lateral_error_m
  output->lateral_error_m = input->lateral_error_m;
  // longitudinal_error_m
  output->longitudinal_error_m = input->longitudinal_error_m;
  // velocity_error_mps
  output->velocity_error_mps = input->velocity_error_mps;
  // acceleration_error_mps2
  output->acceleration_error_mps2 = input->acceleration_error_mps2;
  // yaw_error_rad
  output->yaw_error_rad = input->yaw_error_rad;
  // yaw_rate_error_rps
  output->yaw_rate_error_rps = input->yaw_rate_error_rps;
  return true;
}

autoware_auto_system_msgs__msg__ControlDiagnostic *
autoware_auto_system_msgs__msg__ControlDiagnostic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__ControlDiagnostic * msg = (autoware_auto_system_msgs__msg__ControlDiagnostic *)allocator.allocate(sizeof(autoware_auto_system_msgs__msg__ControlDiagnostic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_system_msgs__msg__ControlDiagnostic));
  bool success = autoware_auto_system_msgs__msg__ControlDiagnostic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_system_msgs__msg__ControlDiagnostic__destroy(autoware_auto_system_msgs__msg__ControlDiagnostic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_system_msgs__msg__ControlDiagnostic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence__init(autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__ControlDiagnostic * data = NULL;

  if (size) {
    data = (autoware_auto_system_msgs__msg__ControlDiagnostic *)allocator.zero_allocate(size, sizeof(autoware_auto_system_msgs__msg__ControlDiagnostic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_system_msgs__msg__ControlDiagnostic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_system_msgs__msg__ControlDiagnostic__fini(&data[i - 1]);
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
autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence__fini(autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence * array)
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
      autoware_auto_system_msgs__msg__ControlDiagnostic__fini(&array->data[i]);
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

autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence *
autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence * array = (autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence *)allocator.allocate(sizeof(autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence__destroy(autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence__are_equal(const autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence * lhs, const autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_system_msgs__msg__ControlDiagnostic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence__copy(
  const autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence * input,
  autoware_auto_system_msgs__msg__ControlDiagnostic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_system_msgs__msg__ControlDiagnostic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_system_msgs__msg__ControlDiagnostic * data =
      (autoware_auto_system_msgs__msg__ControlDiagnostic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_system_msgs__msg__ControlDiagnostic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_system_msgs__msg__ControlDiagnostic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_system_msgs__msg__ControlDiagnostic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
