// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_mapping_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__STRUCT_H_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'primitive_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MapPrimitive in the package autoware_auto_mapping_msgs.
/**
  * Map primitive information
 */
typedef struct autoware_auto_mapping_msgs__msg__MapPrimitive
{
  int64_t id;
  /// Type of primitive, such as lane, polygon, line.
  rosidl_runtime_c__String primitive_type;
} autoware_auto_mapping_msgs__msg__MapPrimitive;

// Struct for a sequence of autoware_auto_mapping_msgs__msg__MapPrimitive.
typedef struct autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence
{
  autoware_auto_mapping_msgs__msg__MapPrimitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__STRUCT_H_
