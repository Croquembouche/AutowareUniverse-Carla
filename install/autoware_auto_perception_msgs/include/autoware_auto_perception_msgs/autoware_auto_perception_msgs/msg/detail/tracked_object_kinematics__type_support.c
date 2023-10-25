// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.h"


// Include directives for member types
// Member `pose_with_covariance`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose_with_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `twist_with_covariance`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `twist_with_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `acceleration_with_covariance`
#include "geometry_msgs/msg/accel_with_covariance.h"
// Member `acceleration_with_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__init(message_memory);
}

void autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[5] = {
  {
    "pose_with_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, pose_with_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_availability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, orientation_availability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist_with_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, twist_with_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_with_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, acceleration_with_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_stationary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics, is_stationary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "TrackedObjectKinematics",  // message name
  5,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics),
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array,  // message members
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_type_support_handle = {
  0,
  &autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, TrackedObjectKinematics)() {
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, AccelWithCovariance)();
  if (!autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_type_support_handle.typesupport_identifier) {
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_perception_msgs__msg__TrackedObjectKinematics__rosidl_typesupport_introspection_c__TrackedObjectKinematics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
