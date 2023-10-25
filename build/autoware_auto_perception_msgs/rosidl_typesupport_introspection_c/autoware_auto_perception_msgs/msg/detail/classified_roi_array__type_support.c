// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoiArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/classified_roi_array__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/classified_roi_array__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/classified_roi_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rois`
#include "autoware_auto_perception_msgs/msg/classified_roi.h"
// Member `rois`
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__init(message_memory);
}

void autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__fini(message_memory);
}

size_t autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__size_function__ClassifiedRoiArray__rois(
  const void * untyped_member)
{
  const autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * member =
    (const autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__get_const_function__ClassifiedRoiArray__rois(
  const void * untyped_member, size_t index)
{
  const autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * member =
    (const autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__get_function__ClassifiedRoiArray__rois(
  void * untyped_member, size_t index)
{
  autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * member =
    (autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__fetch_function__ClassifiedRoiArray__rois(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_auto_perception_msgs__msg__ClassifiedRoi * item =
    ((const autoware_auto_perception_msgs__msg__ClassifiedRoi *)
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__get_const_function__ClassifiedRoiArray__rois(untyped_member, index));
  autoware_auto_perception_msgs__msg__ClassifiedRoi * value =
    (autoware_auto_perception_msgs__msg__ClassifiedRoi *)(untyped_value);
  *value = *item;
}

void autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__assign_function__ClassifiedRoiArray__rois(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_auto_perception_msgs__msg__ClassifiedRoi * item =
    ((autoware_auto_perception_msgs__msg__ClassifiedRoi *)
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__get_function__ClassifiedRoiArray__rois(untyped_member, index));
  const autoware_auto_perception_msgs__msg__ClassifiedRoi * value =
    (const autoware_auto_perception_msgs__msg__ClassifiedRoi *)(untyped_value);
  *item = *value;
}

bool autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__resize_function__ClassifiedRoiArray__rois(
  void * untyped_member, size_t size)
{
  autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence * member =
    (autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence *)(untyped_member);
  autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__fini(member);
  return autoware_auto_perception_msgs__msg__ClassifiedRoi__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__ClassifiedRoiArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rois",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__ClassifiedRoiArray, rois),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__size_function__ClassifiedRoiArray__rois,  // size() function pointer
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__get_const_function__ClassifiedRoiArray__rois,  // get_const(index) function pointer
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__get_function__ClassifiedRoiArray__rois,  // get(index) function pointer
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__fetch_function__ClassifiedRoiArray__rois,  // fetch(index, &value) function pointer
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__assign_function__ClassifiedRoiArray__rois,  // assign(index, value) function pointer
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__resize_function__ClassifiedRoiArray__rois  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "ClassifiedRoiArray",  // message name
  2,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoiArray),
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_member_array,  // message members
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_type_support_handle = {
  0,
  &autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, ClassifiedRoiArray)() {
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, ClassifiedRoi)();
  if (!autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_type_support_handle.typesupport_identifier) {
    autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_perception_msgs__msg__ClassifiedRoiArray__rosidl_typesupport_introspection_c__ClassifiedRoiArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
