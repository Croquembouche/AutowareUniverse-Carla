// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SpeedandHeadingandThrottleConfidence in the package v2x_msg.
typedef struct v2x_msg__msg__SpeedandHeadingandThrottleConfidence
{
  int64_t heading;
  int64_t speed;
  int64_t throttle;
} v2x_msg__msg__SpeedandHeadingandThrottleConfidence;

// Struct for a sequence of v2x_msg__msg__SpeedandHeadingandThrottleConfidence.
typedef struct v2x_msg__msg__SpeedandHeadingandThrottleConfidence__Sequence
{
  v2x_msg__msg__SpeedandHeadingandThrottleConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SpeedandHeadingandThrottleConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_
