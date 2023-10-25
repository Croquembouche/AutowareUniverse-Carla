// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/PVD.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PVD__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__PVD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'probeid'
#include "v2x_msg/msg/detail/vehicle_ident__struct.h"
// Member 'startvector'
#include "v2x_msg/msg/detail/full_position_vector__struct.h"
// Member 'vehicletype'
#include "v2x_msg/msg/detail/vehicle_classification__struct.h"
// Member 'snapshots'
#include "v2x_msg/msg/detail/snapshot__struct.h"

/// Struct defined in msg/PVD in the package v2x_msg.
typedef struct v2x_msg__msg__PVD
{
  int64_t timstamp;
  int64_t segnum;
  v2x_msg__msg__VehicleIdent probeid;
  v2x_msg__msg__FullPositionVector startvector;
  v2x_msg__msg__VehicleClassification vehicletype;
  v2x_msg__msg__Snapshot__Sequence snapshots;
} v2x_msg__msg__PVD;

// Struct for a sequence of v2x_msg__msg__PVD.
typedef struct v2x_msg__msg__PVD__Sequence
{
  v2x_msg__msg__PVD * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__PVD__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__PVD__STRUCT_H_
