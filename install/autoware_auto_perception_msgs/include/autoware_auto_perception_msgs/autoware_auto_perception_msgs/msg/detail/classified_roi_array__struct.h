// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoiArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'rois'
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__struct.h"

/// Struct defined in msg/ClassifiedRoiArray in the package autoware_auto_perception_msgs.
/**
  *  Message for a full set of classified ROIs
 */
typedef struct autoware_auto_perception_msgs__msg__ClassifiedRoiArray
{
  std_msgs__msg__Header header;
  autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence rois;
} autoware_auto_perception_msgs__msg__ClassifiedRoiArray;

// Struct for a sequence of autoware_auto_perception_msgs__msg__ClassifiedRoiArray.
typedef struct autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence
{
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__ClassifiedRoiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__STRUCT_H_
