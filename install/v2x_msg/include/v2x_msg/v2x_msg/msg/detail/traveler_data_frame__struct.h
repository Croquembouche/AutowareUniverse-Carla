// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msgid'
#include "v2x_msg/msg/detail/msg_id__struct.h"
// Member 'regions'
#include "v2x_msg/msg/detail/geographical_path__struct.h"
// Member 'content'
#include "v2x_msg/msg/detail/content__struct.h"
// Member 'url'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TravelerDataFrame in the package v2x_msg.
typedef struct v2x_msg__msg__TravelerDataFrame
{
  int64_t notused;
  int64_t frametype;
  v2x_msg__msg__MsgID msgid;
  int64_t startyear;
  int64_t starttime;
  int64_t durationtime;
  int64_t priority;
  int64_t notused1;
  v2x_msg__msg__GeographicalPath__Sequence regions;
  int64_t notused2;
  int64_t notused3;
  v2x_msg__msg__Content content;
  rosidl_runtime_c__String url;
} v2x_msg__msg__TravelerDataFrame;

// Struct for a sequence of v2x_msg__msg__TravelerDataFrame.
typedef struct v2x_msg__msg__TravelerDataFrame__Sequence
{
  v2x_msg__msg__TravelerDataFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__TravelerDataFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__STRUCT_H_
