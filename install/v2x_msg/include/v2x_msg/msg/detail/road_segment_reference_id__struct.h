// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RoadSegmentReferenceID in the package v2x_msg.
typedef struct v2x_msg__msg__RoadSegmentReferenceID
{
  int64_t roadregulatorid;
  int64_t roadsegmentid;
} v2x_msg__msg__RoadSegmentReferenceID;

// Struct for a sequence of v2x_msg__msg__RoadSegmentReferenceID.
typedef struct v2x_msg__msg__RoadSegmentReferenceID__Sequence
{
  v2x_msg__msg__RoadSegmentReferenceID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RoadSegmentReferenceID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_
