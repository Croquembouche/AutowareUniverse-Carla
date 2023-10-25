// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_mapping_msgs:msg/HADMapSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__STRUCT_H_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'primitives'
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__struct.h"

/// Struct defined in msg/HADMapSegment in the package autoware_auto_mapping_msgs.
/**
  *  A segment of an HADMap which contains one or more MapPrimitives.
 */
typedef struct autoware_auto_mapping_msgs__msg__HADMapSegment
{
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence primitives;
  int64_t preferred_primitive_id;
} autoware_auto_mapping_msgs__msg__HADMapSegment;

// Struct for a sequence of autoware_auto_mapping_msgs__msg__HADMapSegment.
typedef struct autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence
{
  autoware_auto_mapping_msgs__msg__HADMapSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__STRUCT_H_
