// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/AccelSets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_SETS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ACCEL_SETS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'angle'
#include "v2x_msg/msg/detail/acceleration_set4_way__struct.h"
// Member 'confidenceset'
#include "v2x_msg/msg/detail/confidence_set__struct.h"

/// Struct defined in msg/AccelSets in the package v2x_msg.
typedef struct v2x_msg__msg__AccelSets
{
  v2x_msg__msg__AccelerationSet4Way angle;
  int64_t certaccelthres;
  int64_t yawratecon;
  int64_t hozaccelcon;
  v2x_msg__msg__ConfidenceSet confidenceset;
} v2x_msg__msg__AccelSets;

// Struct for a sequence of v2x_msg__msg__AccelSets.
typedef struct v2x_msg__msg__AccelSets__Sequence
{
  v2x_msg__msg__AccelSets * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__AccelSets__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_SETS__STRUCT_H_
