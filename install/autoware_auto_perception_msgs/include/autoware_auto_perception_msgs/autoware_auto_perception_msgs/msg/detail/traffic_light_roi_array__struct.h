// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/TrafficLightRoiArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_

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
#include "autoware_auto_perception_msgs/msg/detail/traffic_light_roi__struct.h"

/// Struct defined in msg/TrafficLightRoiArray in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__TrafficLightRoiArray
{
  std_msgs__msg__Header header;
  autoware_auto_perception_msgs__msg__TrafficLightRoi__Sequence rois;
} autoware_auto_perception_msgs__msg__TrafficLightRoiArray;

// Struct for a sequence of autoware_auto_perception_msgs__msg__TrafficLightRoiArray.
typedef struct autoware_auto_perception_msgs__msg__TrafficLightRoiArray__Sequence
{
  autoware_auto_perception_msgs__msg__TrafficLightRoiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__TrafficLightRoiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_
