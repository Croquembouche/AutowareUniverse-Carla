// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:srv/SetRoutePoints.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE_POINTS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE_POINTS__STRUCT_H_

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
// Member 'option'
#include "autoware_adapi_v1_msgs/msg/detail/route_option__struct.h"
// Member 'goal'
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SetRoutePoints in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__SetRoutePoints_Request
{
  std_msgs__msg__Header header;
  autoware_adapi_v1_msgs__msg__RouteOption option;
  geometry_msgs__msg__Pose goal;
  geometry_msgs__msg__Pose__Sequence waypoints;
} autoware_adapi_v1_msgs__srv__SetRoutePoints_Request;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__SetRoutePoints_Request.
typedef struct autoware_adapi_v1_msgs__srv__SetRoutePoints_Request__Sequence
{
  autoware_adapi_v1_msgs__srv__SetRoutePoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__SetRoutePoints_Request__Sequence;


// Constants defined in the message

/// Constant 'ERROR_ROUTE_EXISTS'.
/**
  * Deprecated. Use ERROR_INVALID_STATE.
 */
enum
{
  autoware_adapi_v1_msgs__srv__SetRoutePoints_Response__ERROR_ROUTE_EXISTS = 1
};

/// Constant 'ERROR_INVALID_STATE'.
enum
{
  autoware_adapi_v1_msgs__srv__SetRoutePoints_Response__ERROR_INVALID_STATE = 1
};

/// Constant 'ERROR_PLANNER_UNREADY'.
enum
{
  autoware_adapi_v1_msgs__srv__SetRoutePoints_Response__ERROR_PLANNER_UNREADY = 2
};

/// Constant 'ERROR_PLANNER_FAILED'.
enum
{
  autoware_adapi_v1_msgs__srv__SetRoutePoints_Response__ERROR_PLANNER_FAILED = 3
};

/// Constant 'ERROR_REROUTE_FAILED'.
enum
{
  autoware_adapi_v1_msgs__srv__SetRoutePoints_Response__ERROR_REROUTE_FAILED = 4
};

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/SetRoutePoints in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__SetRoutePoints_Response
{
  autoware_adapi_v1_msgs__msg__ResponseStatus status;
} autoware_adapi_v1_msgs__srv__SetRoutePoints_Response;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__SetRoutePoints_Response.
typedef struct autoware_adapi_v1_msgs__srv__SetRoutePoints_Response__Sequence
{
  autoware_adapi_v1_msgs__srv__SetRoutePoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__SetRoutePoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE_POINTS__STRUCT_H_
