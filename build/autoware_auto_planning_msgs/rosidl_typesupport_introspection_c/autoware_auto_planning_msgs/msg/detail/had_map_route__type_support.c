// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_planning_msgs:msg/HADMapRoute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__functions.h"
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `start_pose`
// Member `goal_pose`
#include "geometry_msgs/msg/pose.h"
// Member `start_pose`
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "autoware_auto_mapping_msgs/msg/had_map_segment.h"
// Member `segments`
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__msg__HADMapRoute__init(message_memory);
}

void autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__msg__HADMapRoute__fini(message_memory);
}

size_t autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__size_function__HADMapRoute__segments(
  const void * untyped_member)
{
  const autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * member =
    (const autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__get_const_function__HADMapRoute__segments(
  const void * untyped_member, size_t index)
{
  const autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * member =
    (const autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__get_function__HADMapRoute__segments(
  void * untyped_member, size_t index)
{
  autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * member =
    (autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__fetch_function__HADMapRoute__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_auto_mapping_msgs__msg__HADMapSegment * item =
    ((const autoware_auto_mapping_msgs__msg__HADMapSegment *)
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__get_const_function__HADMapRoute__segments(untyped_member, index));
  autoware_auto_mapping_msgs__msg__HADMapSegment * value =
    (autoware_auto_mapping_msgs__msg__HADMapSegment *)(untyped_value);
  *value = *item;
}

void autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__assign_function__HADMapRoute__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_auto_mapping_msgs__msg__HADMapSegment * item =
    ((autoware_auto_mapping_msgs__msg__HADMapSegment *)
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__get_function__HADMapRoute__segments(untyped_member, index));
  const autoware_auto_mapping_msgs__msg__HADMapSegment * value =
    (const autoware_auto_mapping_msgs__msg__HADMapSegment *)(untyped_value);
  *item = *value;
}

bool autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__resize_function__HADMapRoute__segments(
  void * untyped_member, size_t size)
{
  autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence * member =
    (autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence *)(untyped_member);
  autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__fini(member);
  return autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__HADMapRoute, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__HADMapRoute, start_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__HADMapRoute, goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__HADMapRoute, segments),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__size_function__HADMapRoute__segments,  // size() function pointer
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__get_const_function__HADMapRoute__segments,  // get_const(index) function pointer
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__get_function__HADMapRoute__segments,  // get(index) function pointer
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__fetch_function__HADMapRoute__segments,  // fetch(index, &value) function pointer
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__assign_function__HADMapRoute__segments,  // assign(index, value) function pointer
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__resize_function__HADMapRoute__segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_members = {
  "autoware_auto_planning_msgs__msg",  // message namespace
  "HADMapRoute",  // message name
  4,  // number of fields
  sizeof(autoware_auto_planning_msgs__msg__HADMapRoute),
  autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_member_array,  // message members
  autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, HADMapRoute)() {
  autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, msg, HADMapSegment)();
  if (!autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__msg__HADMapRoute__rosidl_typesupport_introspection_c__HADMapRoute_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
