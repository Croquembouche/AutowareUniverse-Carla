// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/full_position_vector__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/full_position_vector__functions.h"
#include "v2x_msg/msg/detail/full_position_vector__struct.h"


// Include directives for member types
// Member `utctime`
#include "v2x_msg/msg/d_date_time.h"
// Member `utctime`
#include "v2x_msg/msg/detail/d_date_time__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "v2x_msg/msg/transmission_and_speed.h"
// Member `speed`
#include "v2x_msg/msg/detail/transmission_and_speed__rosidl_typesupport_introspection_c.h"
// Member `posaccuracy`
#include "v2x_msg/msg/positional_accuracy.h"
// Member `posaccuracy`
#include "v2x_msg/msg/detail/positional_accuracy__rosidl_typesupport_introspection_c.h"
// Member `posconfidence`
#include "v2x_msg/msg/position_confidence_set.h"
// Member `posconfidence`
#include "v2x_msg/msg/detail/position_confidence_set__rosidl_typesupport_introspection_c.h"
// Member `speedconfidence`
#include "v2x_msg/msg/speedand_headingand_throttle_confidence.h"
// Member `speedconfidence`
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__FullPositionVector__init(message_memory);
}

void FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_fini_function(void * message_memory)
{
  v2x_msg__msg__FullPositionVector__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[10] = {
  {
    "utctime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__FullPositionVector, utctime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__FullPositionVector, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__FullPositionVector, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__FullPositionVector, elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__FullPositionVector, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__FullPositionVector, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posaccuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__FullPositionVector, posaccuracy),  // bytes offset in struct
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
    offsetof(v2x_msg__msg__FullPositionVector, timeconfidence),  // bytes offset in struct
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
    offsetof(v2x_msg__msg__FullPositionVector, posconfidence),  // bytes offset in struct
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
    offsetof(v2x_msg__msg__FullPositionVector, speedconfidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_members = {
  "v2x_msg__msg",  // message namespace
  "FullPositionVector",  // message name
  10,  // number of fields
  sizeof(v2x_msg__msg__FullPositionVector),
  FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array,  // message members
  FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_init_function,  // function to initialize message memory (memory has to be allocated)
  FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_type_support_handle = {
  0,
  &FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, FullPositionVector)() {
  FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, DDateTime)();
  FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, TransmissionAndSpeed)();
  FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, PositionalAccuracy)();
  FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, PositionConfidenceSet)();
  FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence)();
  if (!FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_type_support_handle.typesupport_identifier) {
    FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
