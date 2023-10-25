// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'utctime'
#include "v2x_msg/msg/detail/d_date_time__struct.h"
// Member 'speed'
#include "v2x_msg/msg/detail/transmission_and_speed__struct.h"
// Member 'posaccuracy'
#include "v2x_msg/msg/detail/positional_accuracy__struct.h"
// Member 'posconfidence'
#include "v2x_msg/msg/detail/position_confidence_set__struct.h"
// Member 'speedconfidence'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__struct.h"

/// Struct defined in msg/FullPositionVector in the package v2x_msg.
typedef struct v2x_msg__msg__FullPositionVector
{
  v2x_msg__msg__DDateTime utctime;
  int64_t longitude;
  int64_t lat;
  int64_t elevation;
  int64_t heading;
  v2x_msg__msg__TransmissionAndSpeed speed;
  v2x_msg__msg__PositionalAccuracy posaccuracy;
  int64_t timeconfidence;
  v2x_msg__msg__PositionConfidenceSet posconfidence;
  v2x_msg__msg__SpeedandHeadingandThrottleConfidence speedconfidence;
} v2x_msg__msg__FullPositionVector;

// Struct for a sequence of v2x_msg__msg__FullPositionVector.
typedef struct v2x_msg__msg__FullPositionVector__Sequence
{
  v2x_msg__msg__FullPositionVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__FullPositionVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_
