// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_planning_msgs:msg/PathPointWithLaneId.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__functions.h"
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__struct.h"


// Include directives for member types
// Member `point`
#include "autoware_auto_planning_msgs/msg/path_point.h"
// Member `point`
#include "autoware_auto_planning_msgs/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `lane_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__init(message_memory);
}

void autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__fini(message_memory);
}

size_t autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__size_function__PathPointWithLaneId__lane_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathPointWithLaneId__lane_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__get_function__PathPointWithLaneId__lane_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__fetch_function__PathPointWithLaneId__lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathPointWithLaneId__lane_ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__assign_function__PathPointWithLaneId__lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__get_function__PathPointWithLaneId__lane_ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__resize_function__PathPointWithLaneId__lane_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_member_array[2] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__PathPointWithLaneId, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__PathPointWithLaneId, lane_ids),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__size_function__PathPointWithLaneId__lane_ids,  // size() function pointer
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathPointWithLaneId__lane_ids,  // get_const(index) function pointer
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__get_function__PathPointWithLaneId__lane_ids,  // get(index) function pointer
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__fetch_function__PathPointWithLaneId__lane_ids,  // fetch(index, &value) function pointer
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__assign_function__PathPointWithLaneId__lane_ids,  // assign(index, value) function pointer
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__resize_function__PathPointWithLaneId__lane_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_members = {
  "autoware_auto_planning_msgs__msg",  // message namespace
  "PathPointWithLaneId",  // message name
  2,  // number of fields
  sizeof(autoware_auto_planning_msgs__msg__PathPointWithLaneId),
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_member_array,  // message members
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, PathPointWithLaneId)() {
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, PathPoint)();
  if (!autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__msg__PathPointWithLaneId__rosidl_typesupport_introspection_c__PathPointWithLaneId_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
