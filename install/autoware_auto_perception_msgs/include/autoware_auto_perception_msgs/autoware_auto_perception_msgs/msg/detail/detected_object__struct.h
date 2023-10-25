// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.h"
// Member 'kinematics'
#include "autoware_auto_perception_msgs/msg/detail/detected_object_kinematics__struct.h"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__struct.h"

/// Struct defined in msg/DetectedObject in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__DetectedObject
{
  float existence_probability;
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence classification;
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics kinematics;
  autoware_auto_perception_msgs__msg__Shape shape;
} autoware_auto_perception_msgs__msg__DetectedObject;

// Struct for a sequence of autoware_auto_perception_msgs__msg__DetectedObject.
typedef struct autoware_auto_perception_msgs__msg__DetectedObject__Sequence
{
  autoware_auto_perception_msgs__msg__DetectedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__DetectedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
