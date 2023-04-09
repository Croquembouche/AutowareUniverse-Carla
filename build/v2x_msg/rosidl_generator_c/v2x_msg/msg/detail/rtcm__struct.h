// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RTCM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RTCM__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__RTCM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'anchorpoint'
#include "v2x_msg/msg/detail/full_position_vector__struct.h"
// Member 'rtcmheader'
#include "v2x_msg/msg/detail/rtc_mheader__struct.h"
// Member 'msgs'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RTCM in the package v2x_msg.
typedef struct v2x_msg__msg__RTCM
{
  int64_t msgcnt;
  int64_t rev;
  int64_t timestamp;
  v2x_msg__msg__FullPositionVector anchorpoint;
  v2x_msg__msg__RTCMheader rtcmheader;
  rosidl_runtime_c__String__Sequence msgs;
} v2x_msg__msg__RTCM;

// Struct for a sequence of v2x_msg__msg__RTCM.
typedef struct v2x_msg__msg__RTCM__Sequence
{
  v2x_msg__msg__RTCM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RTCM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__RTCM__STRUCT_H_
