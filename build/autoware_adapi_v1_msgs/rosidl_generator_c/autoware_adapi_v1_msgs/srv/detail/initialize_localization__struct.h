// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:srv/InitializeLocalization.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"

// constants for array fields with an upper bound
// pose
enum
{
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__pose__MAX_SIZE = 1
};

/// Struct defined in srv/InitializeLocalization in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__InitializeLocalization_Request
{
  geometry_msgs__msg__PoseWithCovarianceStamped__Sequence pose;
} autoware_adapi_v1_msgs__srv__InitializeLocalization_Request;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__InitializeLocalization_Request.
typedef struct autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence
{
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__InitializeLocalization_Request__Sequence;


// Constants defined in the message

/// Constant 'ERROR_UNSAFE'.
enum
{
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__ERROR_UNSAFE = 1
};

/// Constant 'ERROR_GNSS_SUPPORT'.
enum
{
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__ERROR_GNSS_SUPPORT = 2
};

/// Constant 'ERROR_GNSS'.
enum
{
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__ERROR_GNSS = 3
};

/// Constant 'ERROR_ESTIMATION'.
enum
{
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__ERROR_ESTIMATION = 4
};

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/InitializeLocalization in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__InitializeLocalization_Response
{
  autoware_adapi_v1_msgs__msg__ResponseStatus status;
} autoware_adapi_v1_msgs__srv__InitializeLocalization_Response;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__InitializeLocalization_Response.
typedef struct autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence
{
  autoware_adapi_v1_msgs__srv__InitializeLocalization_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__InitializeLocalization_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__STRUCT_H_
