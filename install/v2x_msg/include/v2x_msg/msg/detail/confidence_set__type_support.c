// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/ConfidenceSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/confidence_set__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/confidence_set__functions.h"
#include "v2x_msg/msg/detail/confidence_set__struct.h"


// Include directives for member types
// Member `accelconfidence`
#include "v2x_msg/msg/accel_steer_yaw_rate_confidence.h"
// Member `accelconfidence`
#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__rosidl_typesupport_introspection_c.h"
// Member `speedconfidence`
#include "v2x_msg/msg/speedand_headingand_throttle_confidence.h"
// Member `speedconfidence`
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__rosidl_typesupport_introspection_c.h"
// Member `posconfidence`
#include "v2x_msg/msg/position_confidence_set.h"
// Member `posconfidence`
#include "v2x_msg/msg/detail/position_confidence_set__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__ConfidenceSet__init(message_memory);
}

void ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_fini_function(void * message_memory)
{
  v2x_msg__msg__ConfidenceSet__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_member_array[7] = {
  {
    "accelconfidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ConfidenceSet, accelconfidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speedconfidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ConfidenceSet, speedconfidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeconfidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ConfidenceSet, timeconfidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posconfidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ConfidenceSet, posconfidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steerconfidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ConfidenceSet, steerconfidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "headingconfidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ConfidenceSet, headingconfidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttleconfidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ConfidenceSet, throttleconfidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_members = {
  "v2x_msg__msg",  // message namespace
  "ConfidenceSet",  // message name
  7,  // number of fields
  sizeof(v2x_msg__msg__ConfidenceSet),
  ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_member_array,  // message members
  ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_type_support_handle = {
  0,
  &ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ConfidenceSet)() {
  ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, AccelSteerYawRateConfidence)();
  ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence)();
  ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, PositionConfidenceSet)();
  if (!ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_type_support_handle.typesupport_identifier) {
    ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfidenceSet__rosidl_typesupport_introspection_c__ConfidenceSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
