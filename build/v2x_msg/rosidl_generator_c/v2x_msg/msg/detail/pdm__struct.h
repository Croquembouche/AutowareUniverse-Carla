// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/PDM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PDM__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__PDM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sample'
#include "v2x_msg/msg/detail/sample__struct.h"
// Member 'directions'
#include "rosidl_runtime_c/string.h"
// Member 'snapshottime'
#include "v2x_msg/msg/detail/snapshot_time__struct.h"
// Member 'snapshotdistance'
#include "v2x_msg/msg/detail/snapshot_distance__struct.h"
// Member 'dataelements'
#include "v2x_msg/msg/detail/vehicle_status_request__struct.h"

/// Struct defined in msg/PDM in the package v2x_msg.
typedef struct v2x_msg__msg__PDM
{
  int64_t timestamp;
  v2x_msg__msg__Sample sample;
  rosidl_runtime_c__String directions;
  int64_t termtime;
  int64_t termdistance;
  v2x_msg__msg__SnapshotTime snapshottime;
  v2x_msg__msg__SnapshotDistance snapshotdistance;
  int64_t txinterval;
  v2x_msg__msg__VehicleStatusRequest__Sequence dataelements;
} v2x_msg__msg__PDM;

// Struct for a sequence of v2x_msg__msg__PDM.
typedef struct v2x_msg__msg__PDM__Sequence
{
  v2x_msg__msg__PDM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__PDM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__PDM__STRUCT_H_
