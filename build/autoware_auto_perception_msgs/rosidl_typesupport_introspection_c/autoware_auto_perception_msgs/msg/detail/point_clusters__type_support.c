// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/PointClusters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/point_clusters__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/point_clusters__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/point_clusters__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "autoware_auto_perception_msgs/msg/point_xyzif.h"
// Member `points`
#include "autoware_auto_perception_msgs/msg/detail/point_xyzif__rosidl_typesupport_introspection_c.h"
// Member `cluster_boundary`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__PointClusters__init(message_memory);
}

void autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__PointClusters__fini(message_memory);
}

size_t autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__size_function__PointClusters__points(
  const void * untyped_member)
{
  const autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * member =
    (const autoware_auto_perception_msgs__msg__PointXYZIF__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_const_function__PointClusters__points(
  const void * untyped_member, size_t index)
{
  const autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * member =
    (const autoware_auto_perception_msgs__msg__PointXYZIF__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_function__PointClusters__points(
  void * untyped_member, size_t index)
{
  autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * member =
    (autoware_auto_perception_msgs__msg__PointXYZIF__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__fetch_function__PointClusters__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_auto_perception_msgs__msg__PointXYZIF * item =
    ((const autoware_auto_perception_msgs__msg__PointXYZIF *)
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_const_function__PointClusters__points(untyped_member, index));
  autoware_auto_perception_msgs__msg__PointXYZIF * value =
    (autoware_auto_perception_msgs__msg__PointXYZIF *)(untyped_value);
  *value = *item;
}

void autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__assign_function__PointClusters__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_auto_perception_msgs__msg__PointXYZIF * item =
    ((autoware_auto_perception_msgs__msg__PointXYZIF *)
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_function__PointClusters__points(untyped_member, index));
  const autoware_auto_perception_msgs__msg__PointXYZIF * value =
    (const autoware_auto_perception_msgs__msg__PointXYZIF *)(untyped_value);
  *item = *value;
}

bool autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__resize_function__PointClusters__points(
  void * untyped_member, size_t size)
{
  autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * member =
    (autoware_auto_perception_msgs__msg__PointXYZIF__Sequence *)(untyped_member);
  autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__fini(member);
  return autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__init(member, size);
}

size_t autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__size_function__PointClusters__cluster_boundary(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_const_function__PointClusters__cluster_boundary(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_function__PointClusters__cluster_boundary(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__fetch_function__PointClusters__cluster_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_const_function__PointClusters__cluster_boundary(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__assign_function__PointClusters__cluster_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_function__PointClusters__cluster_boundary(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__resize_function__PointClusters__cluster_boundary(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PointClusters, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PointClusters, points),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__size_function__PointClusters__points,  // size() function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_const_function__PointClusters__points,  // get_const(index) function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_function__PointClusters__points,  // get(index) function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__fetch_function__PointClusters__points,  // fetch(index, &value) function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__assign_function__PointClusters__points,  // assign(index, value) function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__resize_function__PointClusters__points  // resize(index) function pointer
  },
  {
    "cluster_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PointClusters, cluster_boundary),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__size_function__PointClusters__cluster_boundary,  // size() function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_const_function__PointClusters__cluster_boundary,  // get_const(index) function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__get_function__PointClusters__cluster_boundary,  // get(index) function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__fetch_function__PointClusters__cluster_boundary,  // fetch(index, &value) function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__assign_function__PointClusters__cluster_boundary,  // assign(index, value) function pointer
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__resize_function__PointClusters__cluster_boundary  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "PointClusters",  // message name
  3,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__PointClusters),
  autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_member_array,  // message members
  autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_type_support_handle = {
  0,
  &autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, PointClusters)() {
  autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, PointXYZIF)();
  if (!autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_type_support_handle.typesupport_identifier) {
    autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_perception_msgs__msg__PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
