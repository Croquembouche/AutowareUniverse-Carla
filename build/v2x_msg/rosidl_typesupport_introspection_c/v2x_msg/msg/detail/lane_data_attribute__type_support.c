// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/lane_data_attribute__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/lane_data_attribute__functions.h"
#include "v2x_msg/msg/detail/lane_data_attribute__struct.h"


// Include directives for member types
// Member `speedlimits`
#include "v2x_msg/msg/speed_limit.h"
// Member `speedlimits`
#include "v2x_msg/msg/detail/speed_limit__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__LaneDataAttribute__init(message_memory);
}

void LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_fini_function(void * message_memory)
{
  v2x_msg__msg__LaneDataAttribute__fini(message_memory);
}

size_t LaneDataAttribute__rosidl_typesupport_introspection_c__size_function__SpeedLimit__speedlimits(
  const void * untyped_member)
{
  const v2x_msg__msg__SpeedLimit__Sequence * member =
    (const v2x_msg__msg__SpeedLimit__Sequence *)(untyped_member);
  return member->size;
}

const void * LaneDataAttribute__rosidl_typesupport_introspection_c__get_const_function__SpeedLimit__speedlimits(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__SpeedLimit__Sequence * member =
    (const v2x_msg__msg__SpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LaneDataAttribute__rosidl_typesupport_introspection_c__get_function__SpeedLimit__speedlimits(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__SpeedLimit__Sequence * member =
    (v2x_msg__msg__SpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LaneDataAttribute__rosidl_typesupport_introspection_c__resize_function__SpeedLimit__speedlimits(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__SpeedLimit__Sequence * member =
    (v2x_msg__msg__SpeedLimit__Sequence *)(untyped_member);
  v2x_msg__msg__SpeedLimit__Sequence__fini(member);
  return v2x_msg__msg__SpeedLimit__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[6] = {
  {
    "pathendpointangle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneDataAttribute, pathendpointangle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanecrownpointcenter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneDataAttribute, lanecrownpointcenter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lancrownpointleft",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneDataAttribute, lancrownpointleft),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanecrownpointright",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneDataAttribute, lanecrownpointright),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laneangle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneDataAttribute, laneangle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speedlimits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneDataAttribute, speedlimits),  // bytes offset in struct
    NULL,  // default value
    LaneDataAttribute__rosidl_typesupport_introspection_c__size_function__SpeedLimit__speedlimits,  // size() function pointer
    LaneDataAttribute__rosidl_typesupport_introspection_c__get_const_function__SpeedLimit__speedlimits,  // get_const(index) function pointer
    LaneDataAttribute__rosidl_typesupport_introspection_c__get_function__SpeedLimit__speedlimits,  // get(index) function pointer
    LaneDataAttribute__rosidl_typesupport_introspection_c__resize_function__SpeedLimit__speedlimits  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_members = {
  "v2x_msg__msg",  // message namespace
  "LaneDataAttribute",  // message name
  6,  // number of fields
  sizeof(v2x_msg__msg__LaneDataAttribute),
  LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array,  // message members
  LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle = {
  0,
  &LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, LaneDataAttribute)() {
  LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SpeedLimit)();
  if (!LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle.typesupport_identifier) {
    LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
