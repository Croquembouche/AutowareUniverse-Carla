// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/AccelSteerYawRateConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AccelSteerYawRateConfidence in the package v2x_msg.
typedef struct v2x_msg__msg__AccelSteerYawRateConfidence
{
  int64_t yawrate;
  int64_t acceleration;
  int64_t steeringwheelangle;
} v2x_msg__msg__AccelSteerYawRateConfidence;

// Struct for a sequence of v2x_msg__msg__AccelSteerYawRateConfidence.
typedef struct v2x_msg__msg__AccelSteerYawRateConfidence__Sequence
{
  v2x_msg__msg__AccelSteerYawRateConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__AccelSteerYawRateConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__STRUCT_H_
