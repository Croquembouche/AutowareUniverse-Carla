// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__STRUCT_H_
#define AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FULL_MAP'.
enum
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request__FULL_MAP = 0
};

/// Constant 'ALL_PRIMITIVES'.
enum
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request__ALL_PRIMITIVES = 1
};

/// Constant 'DRIVEABLE_GEOMETRY'.
enum
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request__DRIVEABLE_GEOMETRY = 2
};

/// Constant 'REGULATORY_ELEMENTS'.
enum
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request__REGULATORY_ELEMENTS = 3
};

/// Constant 'STATIC_OBJECTS'.
enum
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request__STATIC_OBJECTS = 4
};

// Include directives for member types
// Member 'requested_primitives'
// Member 'geom_upper_bound'
// Member 'geom_lower_bound'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// geom_upper_bound
enum
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request__geom_upper_bound__MAX_SIZE = 3
};
// geom_lower_bound
enum
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request__geom_lower_bound__MAX_SIZE = 3
};

/// Struct defined in srv/HADMapService in the package autoware_auto_mapping_msgs.
typedef struct autoware_auto_mapping_msgs__srv__HADMapService_Request
{
  rosidl_runtime_c__uint8__Sequence requested_primitives;
  /// Geometric upper bound of map data requested
  rosidl_runtime_c__double__Sequence geom_upper_bound;
  /// Geometric upper bound of map data requested
  rosidl_runtime_c__double__Sequence geom_lower_bound;
} autoware_auto_mapping_msgs__srv__HADMapService_Request;

// Struct for a sequence of autoware_auto_mapping_msgs__srv__HADMapService_Request.
typedef struct autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_mapping_msgs__srv__HADMapService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__struct.h"

/// Struct defined in srv/HADMapService in the package autoware_auto_mapping_msgs.
typedef struct autoware_auto_mapping_msgs__srv__HADMapService_Response
{
  autoware_auto_mapping_msgs__msg__HADMapBin map;
  int32_t answer;
} autoware_auto_mapping_msgs__srv__HADMapService_Response;

// Struct for a sequence of autoware_auto_mapping_msgs__srv__HADMapService_Response.
typedef struct autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence
{
  autoware_auto_mapping_msgs__srv__HADMapService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_mapping_msgs__srv__HADMapService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__STRUCT_H_
