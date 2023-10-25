// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'time_step'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// constants for array fields with an upper bound
// path
enum
{
  autoware_auto_perception_msgs__msg__PredictedPath__path__MAX_SIZE = 100
};

/// Struct defined in msg/PredictedPath in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__PredictedPath
{
  geometry_msgs__msg__Pose__Sequence path;
  ///  The time_step field defines the interval between consecutive pose predictions in the path array.
  builtin_interfaces__msg__Duration time_step;
  float confidence;
} autoware_auto_perception_msgs__msg__PredictedPath;

// Struct for a sequence of autoware_auto_perception_msgs__msg__PredictedPath.
typedef struct autoware_auto_perception_msgs__msg__PredictedPath__Sequence
{
  autoware_auto_perception_msgs__msg__PredictedPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__PredictedPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_
