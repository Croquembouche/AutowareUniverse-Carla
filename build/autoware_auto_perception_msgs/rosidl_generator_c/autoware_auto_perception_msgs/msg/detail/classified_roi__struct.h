// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoi.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'classifications'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.h"

/// Struct defined in msg/ClassifiedRoi in the package autoware_auto_perception_msgs.
/**
  * A region of interest in an image with class information.
 */
typedef struct autoware_auto_perception_msgs__msg__ClassifiedRoi
{
  /// A vector of possible classifications of this object.
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence classifications;
  /// A 2D polygon describing the outline of an object in image coordinates.
  geometry_msgs__msg__Polygon polygon;
} autoware_auto_perception_msgs__msg__ClassifiedRoi;

// Struct for a sequence of autoware_auto_perception_msgs__msg__ClassifiedRoi.
typedef struct autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence
{
  autoware_auto_perception_msgs__msg__ClassifiedRoi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__STRUCT_H_
