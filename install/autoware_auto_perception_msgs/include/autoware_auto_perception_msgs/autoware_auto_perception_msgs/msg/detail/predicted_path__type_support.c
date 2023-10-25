// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__struct.h"


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/pose.h"
// Member `path`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `time_step`
#include "builtin_interfaces/msg/duration.h"
// Member `time_step`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__PredictedPath__init(message_memory);
}

void autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__PredictedPath__fini(message_memory);
}

size_t autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__size_function__PredictedPath__path(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__get_const_function__PredictedPath__path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__get_function__PredictedPath__path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__fetch_function__PredictedPath__path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__get_const_function__PredictedPath__path(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__assign_function__PredictedPath__path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__get_function__PredictedPath__path(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__resize_function__PredictedPath__path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_member_array[3] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    100,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PredictedPath, path),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__size_function__PredictedPath__path,  // size() function pointer
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__get_const_function__PredictedPath__path,  // get_const(index) function pointer
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__get_function__PredictedPath__path,  // get(index) function pointer
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__fetch_function__PredictedPath__path,  // fetch(index, &value) function pointer
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__assign_function__PredictedPath__path,  // assign(index, value) function pointer
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__resize_function__PredictedPath__path  // resize(index) function pointer
  },
  {
    "time_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PredictedPath, time_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PredictedPath, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "PredictedPath",  // message name
  3,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__PredictedPath),
  autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_member_array,  // message members
  autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_type_support_handle = {
  0,
  &autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, PredictedPath)() {
  autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_type_support_handle.typesupport_identifier) {
    autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_perception_msgs__msg__PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
