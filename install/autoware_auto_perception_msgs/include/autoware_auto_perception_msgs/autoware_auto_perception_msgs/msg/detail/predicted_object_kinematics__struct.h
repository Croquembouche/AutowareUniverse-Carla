// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'initial_pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'initial_twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'initial_acceleration_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.h"
// Member 'predicted_paths'
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__struct.h"

// constants for array fields with an upper bound
// predicted_paths
enum
{
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics__predicted_paths__MAX_SIZE = 100
};

/// Struct defined in msg/PredictedObjectKinematics in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__PredictedObjectKinematics
{
  geometry_msgs__msg__PoseWithCovariance initial_pose_with_covariance;
  geometry_msgs__msg__TwistWithCovariance initial_twist_with_covariance;
  geometry_msgs__msg__AccelWithCovariance initial_acceleration_with_covariance;
  autoware_auto_perception_msgs__msg__PredictedPath__Sequence predicted_paths;
} autoware_auto_perception_msgs__msg__PredictedObjectKinematics;

// Struct for a sequence of autoware_auto_perception_msgs__msg__PredictedObjectKinematics.
typedef struct autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence
{
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__PredictedObjectKinematics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__STRUCT_H_
