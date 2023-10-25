// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/PointClusters.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_H_

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
// Member 'points'
#include "autoware_auto_perception_msgs/msg/detail/point_xyzif__struct.h"
// Member 'cluster_boundary'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PointClusters in the package autoware_auto_perception_msgs.
/**
  *  Represent the clusters
  *  The cluster 0 is from point 0 to point cluster_boundary[0] - 1.
  *  Cluster i would be from point cluster_boundary[i - 1] to cluster_boundary[i] - 1, and so on
 */
typedef struct autoware_auto_perception_msgs__msg__PointClusters
{
  std_msgs__msg__Header header;
  autoware_auto_perception_msgs__msg__PointXYZIF__Sequence points;
  rosidl_runtime_c__uint32__Sequence cluster_boundary;
} autoware_auto_perception_msgs__msg__PointClusters;

// Struct for a sequence of autoware_auto_perception_msgs__msg__PointClusters.
typedef struct autoware_auto_perception_msgs__msg__PointClusters__Sequence
{
  autoware_auto_perception_msgs__msg__PointClusters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__PointClusters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_H_
