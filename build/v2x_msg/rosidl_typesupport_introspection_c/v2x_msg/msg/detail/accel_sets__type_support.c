// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/AccelSets.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/accel_sets__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/accel_sets__functions.h"
#include "v2x_msg/msg/detail/accel_sets__struct.h"


// Include directives for member types
// Member `angle`
#include "v2x_msg/msg/acceleration_set4_way.h"
// Member `angle`
#include "v2x_msg/msg/detail/acceleration_set4_way__rosidl_typesupport_introspection_c.h"
// Member `confidenceset`
#include "v2x_msg/msg/confidence_set.h"
// Member `confidenceset`
#include "v2x_msg/msg/detail/confidence_set__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AccelSets__rosidl_typesupport_introspection_c__AccelSets_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__AccelSets__init(message_memory);
}

void AccelSets__rosidl_typesupport_introspection_c__AccelSets_fini_function(void * message_memory)
{
  v2x_msg__msg__AccelSets__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_member_array[5] = {
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__AccelSets, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "certaccelthres",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__AccelSets, certaccelthres),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yawratecon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__AccelSets, yawratecon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hozaccelcon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__AccelSets, hozaccelcon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidenceset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__AccelSets, confidenceset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_members = {
  "v2x_msg__msg",  // message namespace
  "AccelSets",  // message name
  5,  // number of fields
  sizeof(v2x_msg__msg__AccelSets),
  AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_member_array,  // message members
  AccelSets__rosidl_typesupport_introspection_c__AccelSets_init_function,  // function to initialize message memory (memory has to be allocated)
  AccelSets__rosidl_typesupport_introspection_c__AccelSets_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_type_support_handle = {
  0,
  &AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, AccelSets)() {
  AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, AccelerationSet4Way)();
  AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ConfidenceSet)();
  if (!AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_type_support_handle.typesupport_identifier) {
    AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AccelSets__rosidl_typesupport_introspection_c__AccelSets_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
