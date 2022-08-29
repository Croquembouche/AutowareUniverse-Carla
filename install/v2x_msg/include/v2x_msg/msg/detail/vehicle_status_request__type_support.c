// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/VehicleStatusRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/vehicle_status_request__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/vehicle_status_request__functions.h"
#include "v2x_msg/msg/detail/vehicle_status_request__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__VehicleStatusRequest__init(message_memory);
}

void VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_fini_function(void * message_memory)
{
  v2x_msg__msg__VehicleStatusRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_message_member_array[5] = {
  {
    "datatype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleStatusRequest, datatype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subtype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleStatusRequest, subtype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sendonlessthenvalue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleStatusRequest, sendonlessthenvalue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sendonmorethenvalue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleStatusRequest, sendonmorethenvalue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sendall",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleStatusRequest, sendall),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_message_members = {
  "v2x_msg__msg",  // message namespace
  "VehicleStatusRequest",  // message name
  5,  // number of fields
  sizeof(v2x_msg__msg__VehicleStatusRequest),
  VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_message_member_array,  // message members
  VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_message_type_support_handle = {
  0,
  &VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleStatusRequest)() {
  if (!VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_message_type_support_handle.typesupport_identifier) {
    VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleStatusRequest__rosidl_typesupport_introspection_c__VehicleStatusRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
