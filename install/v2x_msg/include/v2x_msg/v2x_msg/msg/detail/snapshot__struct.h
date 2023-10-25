// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Snapshot.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'theposition'
#include "v2x_msg/msg/detail/full_position_vector__struct.h"
// Member 'safetyext'
#include "v2x_msg/msg/detail/vehicle_safety_extensions__struct.h"
// Member 'dataset'
#include "v2x_msg/msg/detail/vehicle_status__struct.h"

/// Struct defined in msg/Snapshot in the package v2x_msg.
typedef struct v2x_msg__msg__Snapshot
{
  v2x_msg__msg__FullPositionVector theposition;
  v2x_msg__msg__VehicleSafetyExtensions safetyext;
  v2x_msg__msg__VehicleStatus dataset;
} v2x_msg__msg__Snapshot;

// Struct for a sequence of v2x_msg__msg__Snapshot.
typedef struct v2x_msg__msg__Snapshot__Sequence
{
  v2x_msg__msg__Snapshot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Snapshot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT__STRUCT_H_
