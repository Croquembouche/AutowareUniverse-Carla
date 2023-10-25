// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjects.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECTS__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECTS__STRUCT_H_

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
// Member 'objects'
#include "autoware_auto_perception_msgs/msg/detail/predicted_object__struct.h"

/// Struct defined in msg/PredictedObjects in the package autoware_auto_perception_msgs.
/**
  *  This is the output of object prediction.
 */
typedef struct autoware_auto_perception_msgs__msg__PredictedObjects
{
  std_msgs__msg__Header header;
  autoware_auto_perception_msgs__msg__PredictedObject__Sequence objects;
} autoware_auto_perception_msgs__msg__PredictedObjects;

// Struct for a sequence of autoware_auto_perception_msgs__msg__PredictedObjects.
typedef struct autoware_auto_perception_msgs__msg__PredictedObjects__Sequence
{
  autoware_auto_perception_msgs__msg__PredictedObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__PredictedObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECTS__STRUCT_H_
