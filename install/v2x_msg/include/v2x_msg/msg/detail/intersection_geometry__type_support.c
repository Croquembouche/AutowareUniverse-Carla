// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/intersection_geometry__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/intersection_geometry__functions.h"
#include "v2x_msg/msg/detail/intersection_geometry__struct.h"


// Include directives for member types
// Member `name`
// Member `preemptprioritydata`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "v2x_msg/msg/intersection_reference_id.h"
// Member `id`
#include "v2x_msg/msg/detail/intersection_reference_id__rosidl_typesupport_introspection_c.h"
// Member `refpoint`
#include "v2x_msg/msg/position3_d.h"
// Member `refpoint`
#include "v2x_msg/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
// Member `speedlimits`
#include "v2x_msg/msg/speed_limit.h"
// Member `speedlimits`
#include "v2x_msg/msg/detail/speed_limit__rosidl_typesupport_introspection_c.h"
// Member `laneset`
#include "v2x_msg/msg/generic_lane.h"
// Member `laneset`
#include "v2x_msg/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__IntersectionGeometry__init(message_memory);
}

void IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_fini_function(void * message_memory)
{
  v2x_msg__msg__IntersectionGeometry__fini(message_memory);
}

size_t IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__SpeedLimit__speedlimits(
  const void * untyped_member)
{
  const v2x_msg__msg__SpeedLimit__Sequence * member =
    (const v2x_msg__msg__SpeedLimit__Sequence *)(untyped_member);
  return member->size;
}

const void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__SpeedLimit__speedlimits(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__SpeedLimit__Sequence * member =
    (const v2x_msg__msg__SpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__SpeedLimit__speedlimits(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__SpeedLimit__Sequence * member =
    (v2x_msg__msg__SpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__SpeedLimit__speedlimits(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__SpeedLimit__Sequence * member =
    (v2x_msg__msg__SpeedLimit__Sequence *)(untyped_member);
  v2x_msg__msg__SpeedLimit__Sequence__fini(member);
  return v2x_msg__msg__SpeedLimit__Sequence__init(member, size);
}

size_t IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__GenericLane__laneset(
  const void * untyped_member)
{
  const v2x_msg__msg__GenericLane__Sequence * member =
    (const v2x_msg__msg__GenericLane__Sequence *)(untyped_member);
  return member->size;
}

const void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__GenericLane__laneset(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__GenericLane__Sequence * member =
    (const v2x_msg__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__GenericLane__laneset(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__GenericLane__Sequence * member =
    (v2x_msg__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__GenericLane__laneset(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__GenericLane__Sequence * member =
    (v2x_msg__msg__GenericLane__Sequence *)(untyped_member);
  v2x_msg__msg__GenericLane__Sequence__fini(member);
  return v2x_msg__msg__GenericLane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[8] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionGeometry, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionGeometry, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionGeometry, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "refpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionGeometry, refpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanewidth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionGeometry, lanewidth),  // bytes offset in struct
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
    offsetof(v2x_msg__msg__IntersectionGeometry, speedlimits),  // bytes offset in struct
    NULL,  // default value
    IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__SpeedLimit__speedlimits,  // size() function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__SpeedLimit__speedlimits,  // get_const(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__SpeedLimit__speedlimits,  // get(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__SpeedLimit__speedlimits  // resize(index) function pointer
  },
  {
    "laneset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionGeometry, laneset),  // bytes offset in struct
    NULL,  // default value
    IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__GenericLane__laneset,  // size() function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__GenericLane__laneset,  // get_const(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__GenericLane__laneset,  // get(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__GenericLane__laneset  // resize(index) function pointer
  },
  {
    "preemptprioritydata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionGeometry, preemptprioritydata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_members = {
  "v2x_msg__msg",  // message namespace
  "IntersectionGeometry",  // message name
  8,  // number of fields
  sizeof(v2x_msg__msg__IntersectionGeometry),
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array,  // message members
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle = {
  0,
  &IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, IntersectionGeometry)() {
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, IntersectionReferenceID)();
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Position3D)();
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SpeedLimit)();
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, GenericLane)();
  if (!IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle.typesupport_identifier) {
    IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
