// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/emergency_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `events`
#include "v2x_msg/msg/detail/privileged_events__functions.h"

bool
v2x_msg__msg__EmergencyDetails__init(v2x_msg__msg__EmergencyDetails * msg)
{
  if (!msg) {
    return false;
  }
  // notused
  // sirenuse
  // lightsuse
  // multi
  // events
  if (!v2x_msg__msg__PrivilegedEvents__init(&msg->events)) {
    v2x_msg__msg__EmergencyDetails__fini(msg);
    return false;
  }
  // responsetype
  return true;
}

void
v2x_msg__msg__EmergencyDetails__fini(v2x_msg__msg__EmergencyDetails * msg)
{
  if (!msg) {
    return;
  }
  // notused
  // sirenuse
  // lightsuse
  // multi
  // events
  v2x_msg__msg__PrivilegedEvents__fini(&msg->events);
  // responsetype
}

bool
v2x_msg__msg__EmergencyDetails__are_equal(const v2x_msg__msg__EmergencyDetails * lhs, const v2x_msg__msg__EmergencyDetails * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // notused
  if (lhs->notused != rhs->notused) {
    return false;
  }
  // sirenuse
  if (lhs->sirenuse != rhs->sirenuse) {
    return false;
  }
  // lightsuse
  if (lhs->lightsuse != rhs->lightsuse) {
    return false;
  }
  // multi
  if (lhs->multi != rhs->multi) {
    return false;
  }
  // events
  if (!v2x_msg__msg__PrivilegedEvents__are_equal(
      &(lhs->events), &(rhs->events)))
  {
    return false;
  }
  // responsetype
  if (lhs->responsetype != rhs->responsetype) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__EmergencyDetails__copy(
  const v2x_msg__msg__EmergencyDetails * input,
  v2x_msg__msg__EmergencyDetails * output)
{
  if (!input || !output) {
    return false;
  }
  // notused
  output->notused = input->notused;
  // sirenuse
  output->sirenuse = input->sirenuse;
  // lightsuse
  output->lightsuse = input->lightsuse;
  // multi
  output->multi = input->multi;
  // events
  if (!v2x_msg__msg__PrivilegedEvents__copy(
      &(input->events), &(output->events)))
  {
    return false;
  }
  // responsetype
  output->responsetype = input->responsetype;
  return true;
}

v2x_msg__msg__EmergencyDetails *
v2x_msg__msg__EmergencyDetails__create()
{
  v2x_msg__msg__EmergencyDetails * msg = (v2x_msg__msg__EmergencyDetails *)malloc(sizeof(v2x_msg__msg__EmergencyDetails));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__EmergencyDetails));
  bool success = v2x_msg__msg__EmergencyDetails__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__EmergencyDetails__destroy(v2x_msg__msg__EmergencyDetails * msg)
{
  if (msg) {
    v2x_msg__msg__EmergencyDetails__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__EmergencyDetails__Sequence__init(v2x_msg__msg__EmergencyDetails__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__EmergencyDetails * data = NULL;
  if (size) {
    data = (v2x_msg__msg__EmergencyDetails *)calloc(size, sizeof(v2x_msg__msg__EmergencyDetails));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__EmergencyDetails__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__EmergencyDetails__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_msg__msg__EmergencyDetails__Sequence__fini(v2x_msg__msg__EmergencyDetails__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__EmergencyDetails__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_msg__msg__EmergencyDetails__Sequence *
v2x_msg__msg__EmergencyDetails__Sequence__create(size_t size)
{
  v2x_msg__msg__EmergencyDetails__Sequence * array = (v2x_msg__msg__EmergencyDetails__Sequence *)malloc(sizeof(v2x_msg__msg__EmergencyDetails__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__EmergencyDetails__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__EmergencyDetails__Sequence__destroy(v2x_msg__msg__EmergencyDetails__Sequence * array)
{
  if (array) {
    v2x_msg__msg__EmergencyDetails__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__EmergencyDetails__Sequence__are_equal(const v2x_msg__msg__EmergencyDetails__Sequence * lhs, const v2x_msg__msg__EmergencyDetails__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__EmergencyDetails__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__EmergencyDetails__Sequence__copy(
  const v2x_msg__msg__EmergencyDetails__Sequence * input,
  v2x_msg__msg__EmergencyDetails__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__EmergencyDetails);
    v2x_msg__msg__EmergencyDetails * data =
      (v2x_msg__msg__EmergencyDetails *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__EmergencyDetails__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__EmergencyDetails__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__EmergencyDetails__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
