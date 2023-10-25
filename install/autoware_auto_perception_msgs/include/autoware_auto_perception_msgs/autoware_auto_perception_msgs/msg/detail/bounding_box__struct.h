// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_LABEL'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__NO_LABEL = 0
};

/// Constant 'CAR'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__CAR = 1
};

/// Constant 'PEDESTRIAN'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__PEDESTRIAN = 2
};

/// Constant 'CYCLIST'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__CYCLIST = 3
};

/// Constant 'MOTORCYCLE'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__MOTORCYCLE = 4
};

/// Constant 'NO_SIGNAL'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__NO_SIGNAL = 0
};

/// Constant 'LEFT_SIGNAL'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__LEFT_SIGNAL = 1
};

/// Constant 'RIGHT_SIGNAL'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__RIGHT_SIGNAL = 2
};

/// Constant 'BRAKE'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__BRAKE = 3
};

/// Constant 'POSE_X'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__POSE_X = 0ul
};

/// Constant 'POSE_Y'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__POSE_Y = 1ul
};

/// Constant 'VELOCITY'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__VELOCITY = 2ul
};

/// Constant 'HEADING'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__HEADING = 3ul
};

/// Constant 'TURN_RATE'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__TURN_RATE = 4ul
};

/// Constant 'SIZE_X'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__SIZE_X = 5ul
};

/// Constant 'SIZE_Y'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__SIZE_Y = 6ul
};

/// Constant 'ACCELERATION'.
enum
{
  autoware_auto_perception_msgs__msg__BoundingBox__ACCELERATION = 7ul
};

// Include directives for member types
// Member 'centroid'
// Member 'size'
// Member 'corners'
#include "geometry_msgs/msg/detail/point32__struct.h"
// Member 'orientation'
#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__struct.h"

/// Struct defined in msg/BoundingBox in the package autoware_auto_perception_msgs.
/**
  *  Oriented bounding box representation
 */
typedef struct autoware_auto_perception_msgs__msg__BoundingBox
{
  geometry_msgs__msg__Point32 centroid;
  geometry_msgs__msg__Point32 size;
  autoware_auto_geometry_msgs__msg__Quaternion32 orientation;
  float velocity;
  float heading;
  float heading_rate;
  geometry_msgs__msg__Point32 corners[4];
  float variance[8];
  ///  can hold arbitrary value, e.g. likelihood, area, perimeter
  float value;
  ///  can hold one of the vehicle constants defined below
  ///  NO_LABEL as default value
  uint8_t vehicle_label;
  ///  can hold one of the signal constants defined below
  ///  NO_SIGNAL as default value
  uint8_t signal_label;
  ///  Likelihood of vehicle label
  float class_likelihood;
} autoware_auto_perception_msgs__msg__BoundingBox;

// Struct for a sequence of autoware_auto_perception_msgs__msg__BoundingBox.
typedef struct autoware_auto_perception_msgs__msg__BoundingBox__Sequence
{
  autoware_auto_perception_msgs__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
