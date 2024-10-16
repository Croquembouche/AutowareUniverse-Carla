// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__SteeringFactor__init(message_memory);
}

void autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__fini(message_memory);
}

size_t autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__size_function__SteeringFactor__pose(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_const_function__SteeringFactor__pose(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose * member =
    (const geometry_msgs__msg__Pose *)(untyped_member);
  return &member[index];
}

void * autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_function__SteeringFactor__pose(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose * member =
    (geometry_msgs__msg__Pose *)(untyped_member);
  return &member[index];
}

void autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__fetch_function__SteeringFactor__pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_const_function__SteeringFactor__pose(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__assign_function__SteeringFactor__pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_function__SteeringFactor__pose(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

size_t autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__size_function__SteeringFactor__distance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_const_function__SteeringFactor__distance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_function__SteeringFactor__distance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__fetch_function__SteeringFactor__distance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_const_function__SteeringFactor__distance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__assign_function__SteeringFactor__distance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_function__SteeringFactor__distance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_member_array[6] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__SteeringFactor, pose),  // bytes offset in struct
    NULL,  // default value
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__size_function__SteeringFactor__pose,  // size() function pointer
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_const_function__SteeringFactor__pose,  // get_const(index) function pointer
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_function__SteeringFactor__pose,  // get(index) function pointer
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__fetch_function__SteeringFactor__pose,  // fetch(index, &value) function pointer
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__assign_function__SteeringFactor__pose,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__SteeringFactor, distance),  // bytes offset in struct
    NULL,  // default value
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__size_function__SteeringFactor__distance,  // size() function pointer
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_const_function__SteeringFactor__distance,  // get_const(index) function pointer
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__get_function__SteeringFactor__distance,  // get(index) function pointer
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__fetch_function__SteeringFactor__distance,  // fetch(index, &value) function pointer
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__assign_function__SteeringFactor__distance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__SteeringFactor, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__SteeringFactor, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__SteeringFactor, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__SteeringFactor, detail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "SteeringFactor",  // message name
  6,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__SteeringFactor),
  autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_member_array,  // message members
  autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, SteeringFactor)() {
  autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_adapi_v1_msgs__msg__SteeringFactor__rosidl_typesupport_introspection_c__SteeringFactor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
