// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/PDM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/pdm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `sample`
#include "v2x_msg/msg/detail/sample__functions.h"
// Member `directions`
#include "rosidl_runtime_c/string_functions.h"
// Member `snapshottime`
#include "v2x_msg/msg/detail/snapshot_time__functions.h"
// Member `snapshotdistance`
#include "v2x_msg/msg/detail/snapshot_distance__functions.h"
// Member `dataelements`
#include "v2x_msg/msg/detail/vehicle_status_request__functions.h"

bool
v2x_msg__msg__PDM__init(v2x_msg__msg__PDM * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // sample
  if (!v2x_msg__msg__Sample__init(&msg->sample)) {
    v2x_msg__msg__PDM__fini(msg);
    return false;
  }
  // directions
  if (!rosidl_runtime_c__String__init(&msg->directions)) {
    v2x_msg__msg__PDM__fini(msg);
    return false;
  }
  // termtime
  // termdistance
  // snapshottime
  if (!v2x_msg__msg__SnapshotTime__init(&msg->snapshottime)) {
    v2x_msg__msg__PDM__fini(msg);
    return false;
  }
  // snapshotdistance
  if (!v2x_msg__msg__SnapshotDistance__init(&msg->snapshotdistance)) {
    v2x_msg__msg__PDM__fini(msg);
    return false;
  }
  // txinterval
  // dataelements
  if (!v2x_msg__msg__VehicleStatusRequest__Sequence__init(&msg->dataelements, 0)) {
    v2x_msg__msg__PDM__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__PDM__fini(v2x_msg__msg__PDM * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // sample
  v2x_msg__msg__Sample__fini(&msg->sample);
  // directions
  rosidl_runtime_c__String__fini(&msg->directions);
  // termtime
  // termdistance
  // snapshottime
  v2x_msg__msg__SnapshotTime__fini(&msg->snapshottime);
  // snapshotdistance
  v2x_msg__msg__SnapshotDistance__fini(&msg->snapshotdistance);
  // txinterval
  // dataelements
  v2x_msg__msg__VehicleStatusRequest__Sequence__fini(&msg->dataelements);
}

bool
v2x_msg__msg__PDM__are_equal(const v2x_msg__msg__PDM * lhs, const v2x_msg__msg__PDM * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // sample
  if (!v2x_msg__msg__Sample__are_equal(
      &(lhs->sample), &(rhs->sample)))
  {
    return false;
  }
  // directions
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->directions), &(rhs->directions)))
  {
    return false;
  }
  // termtime
  if (lhs->termtime != rhs->termtime) {
    return false;
  }
  // termdistance
  if (lhs->termdistance != rhs->termdistance) {
    return false;
  }
  // snapshottime
  if (!v2x_msg__msg__SnapshotTime__are_equal(
      &(lhs->snapshottime), &(rhs->snapshottime)))
  {
    return false;
  }
  // snapshotdistance
  if (!v2x_msg__msg__SnapshotDistance__are_equal(
      &(lhs->snapshotdistance), &(rhs->snapshotdistance)))
  {
    return false;
  }
  // txinterval
  if (lhs->txinterval != rhs->txinterval) {
    return false;
  }
  // dataelements
  if (!v2x_msg__msg__VehicleStatusRequest__Sequence__are_equal(
      &(lhs->dataelements), &(rhs->dataelements)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__PDM__copy(
  const v2x_msg__msg__PDM * input,
  v2x_msg__msg__PDM * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // sample
  if (!v2x_msg__msg__Sample__copy(
      &(input->sample), &(output->sample)))
  {
    return false;
  }
  // directions
  if (!rosidl_runtime_c__String__copy(
      &(input->directions), &(output->directions)))
  {
    return false;
  }
  // termtime
  output->termtime = input->termtime;
  // termdistance
  output->termdistance = input->termdistance;
  // snapshottime
  if (!v2x_msg__msg__SnapshotTime__copy(
      &(input->snapshottime), &(output->snapshottime)))
  {
    return false;
  }
  // snapshotdistance
  if (!v2x_msg__msg__SnapshotDistance__copy(
      &(input->snapshotdistance), &(output->snapshotdistance)))
  {
    return false;
  }
  // txinterval
  output->txinterval = input->txinterval;
  // dataelements
  if (!v2x_msg__msg__VehicleStatusRequest__Sequence__copy(
      &(input->dataelements), &(output->dataelements)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__PDM *
v2x_msg__msg__PDM__create()
{
  v2x_msg__msg__PDM * msg = (v2x_msg__msg__PDM *)malloc(sizeof(v2x_msg__msg__PDM));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__PDM));
  bool success = v2x_msg__msg__PDM__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__PDM__destroy(v2x_msg__msg__PDM * msg)
{
  if (msg) {
    v2x_msg__msg__PDM__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__PDM__Sequence__init(v2x_msg__msg__PDM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__PDM * data = NULL;
  if (size) {
    data = (v2x_msg__msg__PDM *)calloc(size, sizeof(v2x_msg__msg__PDM));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__PDM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__PDM__fini(&data[i - 1]);
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
v2x_msg__msg__PDM__Sequence__fini(v2x_msg__msg__PDM__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__PDM__fini(&array->data[i]);
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

v2x_msg__msg__PDM__Sequence *
v2x_msg__msg__PDM__Sequence__create(size_t size)
{
  v2x_msg__msg__PDM__Sequence * array = (v2x_msg__msg__PDM__Sequence *)malloc(sizeof(v2x_msg__msg__PDM__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__PDM__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__PDM__Sequence__destroy(v2x_msg__msg__PDM__Sequence * array)
{
  if (array) {
    v2x_msg__msg__PDM__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__PDM__Sequence__are_equal(const v2x_msg__msg__PDM__Sequence * lhs, const v2x_msg__msg__PDM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__PDM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__PDM__Sequence__copy(
  const v2x_msg__msg__PDM__Sequence * input,
  v2x_msg__msg__PDM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__PDM);
    v2x_msg__msg__PDM * data =
      (v2x_msg__msg__PDM *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__PDM__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__PDM__fini(&data[i]);
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
    if (!v2x_msg__msg__PDM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
