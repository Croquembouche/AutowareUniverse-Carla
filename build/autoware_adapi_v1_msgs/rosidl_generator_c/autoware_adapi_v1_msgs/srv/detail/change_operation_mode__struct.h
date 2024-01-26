// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:srv/ChangeOperationMode.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChangeOperationMode in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__ChangeOperationMode_Request
{
  uint8_t structure_needs_at_least_one_member;
} autoware_adapi_v1_msgs__srv__ChangeOperationMode_Request;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__ChangeOperationMode_Request.
typedef struct autoware_adapi_v1_msgs__srv__ChangeOperationMode_Request__Sequence
{
  autoware_adapi_v1_msgs__srv__ChangeOperationMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__ChangeOperationMode_Request__Sequence;


// Constants defined in the message

/// Constant 'ERROR_NOT_AVAILABLE'.
enum
{
  autoware_adapi_v1_msgs__srv__ChangeOperationMode_Response__ERROR_NOT_AVAILABLE = 1
};

/// Constant 'ERROR_IN_TRANSITION'.
enum
{
  autoware_adapi_v1_msgs__srv__ChangeOperationMode_Response__ERROR_IN_TRANSITION = 2
};

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/ChangeOperationMode in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__ChangeOperationMode_Response
{
  autoware_adapi_v1_msgs__msg__ResponseStatus status;
} autoware_adapi_v1_msgs__srv__ChangeOperationMode_Response;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__ChangeOperationMode_Response.
typedef struct autoware_adapi_v1_msgs__srv__ChangeOperationMode_Response__Sequence
{
  autoware_adapi_v1_msgs__srv__ChangeOperationMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__ChangeOperationMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__STRUCT_H_
