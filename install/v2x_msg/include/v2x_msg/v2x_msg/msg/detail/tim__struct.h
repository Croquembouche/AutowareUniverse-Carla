// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/TIM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIM__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__TIM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'urlb'
#include "rosidl_runtime_c/string.h"
// Member 'dataframes'
#include "v2x_msg/msg/detail/traveler_data_frame__struct.h"

/// Struct defined in msg/TIM in the package v2x_msg.
typedef struct v2x_msg__msg__TIM
{
  int64_t msgcnt;
  int64_t timestamp;
  int64_t packetid;
  rosidl_runtime_c__String urlb;
  v2x_msg__msg__TravelerDataFrame__Sequence dataframes;
} v2x_msg__msg__TIM;

// Struct for a sequence of v2x_msg__msg__TIM.
typedef struct v2x_msg__msg__TIM__Sequence
{
  v2x_msg__msg__TIM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__TIM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__TIM__STRUCT_H_
