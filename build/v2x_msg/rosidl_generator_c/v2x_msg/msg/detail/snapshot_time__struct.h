// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SnapshotTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SnapshotTime in the package v2x_msg.
typedef struct v2x_msg__msg__SnapshotTime
{
  int64_t speed1;
  int64_t time1;
  int64_t speed2;
  int64_t time2;
} v2x_msg__msg__SnapshotTime;

// Struct for a sequence of v2x_msg__msg__SnapshotTime.
typedef struct v2x_msg__msg__SnapshotTime__Sequence
{
  v2x_msg__msg__SnapshotTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SnapshotTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__STRUCT_H_
