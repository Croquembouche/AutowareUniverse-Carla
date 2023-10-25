// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__struct.h"


// Include directives for member types
// Member `centroid`
// Member `size`
// Member `corners`
#include "geometry_msgs/msg/point32.h"
// Member `centroid`
// Member `size`
// Member `corners`
#include "geometry_msgs/msg/detail/point32__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "autoware_auto_geometry_msgs/msg/quaternion32.h"
// Member `orientation`
#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__BoundingBox__init(message_memory);
}

void autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__BoundingBox__fini(message_memory);
}

size_t autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__size_function__BoundingBox__corners(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__corners(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32 * member =
    (const geometry_msgs__msg__Point32 *)(untyped_member);
  return &member[index];
}

void * autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_function__BoundingBox__corners(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32 * member =
    (geometry_msgs__msg__Point32 *)(untyped_member);
  return &member[index];
}

void autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__fetch_function__BoundingBox__corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point32 * item =
    ((const geometry_msgs__msg__Point32 *)
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__corners(untyped_member, index));
  geometry_msgs__msg__Point32 * value =
    (geometry_msgs__msg__Point32 *)(untyped_value);
  *value = *item;
}

void autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__assign_function__BoundingBox__corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point32 * item =
    ((geometry_msgs__msg__Point32 *)
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_function__BoundingBox__corners(untyped_member, index));
  const geometry_msgs__msg__Point32 * value =
    (const geometry_msgs__msg__Point32 *)(untyped_value);
  *item = *value;
}

size_t autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__size_function__BoundingBox__variance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__variance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_function__BoundingBox__variance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__fetch_function__BoundingBox__variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__variance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__assign_function__BoundingBox__variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_function__BoundingBox__variance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_member_array[12] = {
  {
    "centroid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, centroid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, heading_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, corners),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__size_function__BoundingBox__corners,  // size() function pointer
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__corners,  // get_const(index) function pointer
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_function__BoundingBox__corners,  // get(index) function pointer
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__fetch_function__BoundingBox__corners,  // fetch(index, &value) function pointer
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__assign_function__BoundingBox__corners,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, variance),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__size_function__BoundingBox__variance,  // size() function pointer
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__variance,  // get_const(index) function pointer
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__get_function__BoundingBox__variance,  // get(index) function pointer
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__fetch_function__BoundingBox__variance,  // fetch(index, &value) function pointer
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__assign_function__BoundingBox__variance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, vehicle_label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, signal_label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_likelihood",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__BoundingBox, class_likelihood),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "BoundingBox",  // message name
  12,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__BoundingBox),
  autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_member_array,  // message members
  autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_type_support_handle = {
  0,
  &autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, BoundingBox)() {
  autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_geometry_msgs, msg, Quaternion32)();
  autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_type_support_handle.typesupport_identifier) {
    autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_perception_msgs__msg__BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
