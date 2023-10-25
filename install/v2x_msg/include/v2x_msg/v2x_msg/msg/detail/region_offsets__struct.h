// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RegionOffsets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_OFFSETS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__REGION_OFFSETS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RegionOffsets in the package v2x_msg.
typedef struct v2x_msg__msg__RegionOffsets
{
  int64_t xoffset;
  int64_t yoffset;
  int64_t zoffset;
} v2x_msg__msg__RegionOffsets;

// Struct for a sequence of v2x_msg__msg__RegionOffsets.
typedef struct v2x_msg__msg__RegionOffsets__Sequence
{
  v2x_msg__msg__RegionOffsets * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RegionOffsets__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__REGION_OFFSETS__STRUCT_H_
