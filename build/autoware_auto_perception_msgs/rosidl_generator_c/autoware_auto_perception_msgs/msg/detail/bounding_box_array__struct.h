// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/BoundingBoxArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAPACITY'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBoxArray__CAPACITY = 256ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'boxes'
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__struct.h"

// constants for array fields with an upper bound
// boxes
enum
{
  autoware_auto_perception_msgs__msg__BoundingBoxArray__boxes__MAX_SIZE = 256
};

/// Struct defined in msg/BoundingBoxArray in the package autoware_auto_perception_msgs.
/**
  *  Message for a full set of bounding boxes
 */
typedef struct autoware_auto_perception_msgs__msg__BoundingBoxArray
{
  std_msgs__msg__Header header;
  autoware_auto_perception_msgs__msg__BoundingBox__Sequence boxes;
} autoware_auto_perception_msgs__msg__BoundingBoxArray;

// Struct for a sequence of autoware_auto_perception_msgs__msg__BoundingBoxArray.
typedef struct autoware_auto_perception_msgs__msg__BoundingBoxArray__Sequence
{
  autoware_auto_perception_msgs__msg__BoundingBoxArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__BoundingBoxArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__STRUCT_H_
