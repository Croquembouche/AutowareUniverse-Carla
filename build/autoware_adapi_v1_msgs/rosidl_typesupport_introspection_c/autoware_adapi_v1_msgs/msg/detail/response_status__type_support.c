// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/response_status__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/response_status__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/response_status__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__ResponseStatus__init(message_memory);
}

void autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__ResponseStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__ResponseStatus, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__ResponseStatus, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__ResponseStatus, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "ResponseStatus",  // message name
  3,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__ResponseStatus),
  autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_message_member_array,  // message members
  autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_message_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, ResponseStatus)() {
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_message_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_adapi_v1_msgs__msg__ResponseStatus__rosidl_typesupport_introspection_c__ResponseStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
