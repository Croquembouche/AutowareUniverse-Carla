// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_geometry_msgs:msg/RelativePositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_geometry_msgs/msg/detail/relative_position_with_covariance_stamped__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_geometry_msgs/msg/detail/relative_position_with_covariance_stamped__functions.h"
#include "autoware_auto_geometry_msgs/msg/detail/relative_position_with_covariance_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__init(message_memory);
}

void autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_fini_function(void * message_memory)
{
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(message_memory);
}

size_t autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__size_function__RelativePositionWithCovarianceStamped__covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__get_const_function__RelativePositionWithCovarianceStamped__covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__get_function__RelativePositionWithCovarianceStamped__covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__fetch_function__RelativePositionWithCovarianceStamped__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__get_const_function__RelativePositionWithCovarianceStamped__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__assign_function__RelativePositionWithCovarianceStamped__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__get_function__RelativePositionWithCovarianceStamped__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped, child_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped, covariance),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__size_function__RelativePositionWithCovarianceStamped__covariance,  // size() function pointer
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__get_const_function__RelativePositionWithCovarianceStamped__covariance,  // get_const(index) function pointer
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__get_function__RelativePositionWithCovarianceStamped__covariance,  // get(index) function pointer
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__fetch_function__RelativePositionWithCovarianceStamped__covariance,  // fetch(index, &value) function pointer
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__assign_function__RelativePositionWithCovarianceStamped__covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_members = {
  "autoware_auto_geometry_msgs__msg",  // message namespace
  "RelativePositionWithCovarianceStamped",  // message name
  4,  // number of fields
  sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped),
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_member_array,  // message members
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_type_support_handle = {
  0,
  &autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_geometry_msgs, msg, RelativePositionWithCovarianceStamped)() {
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_type_support_handle.typesupport_identifier) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__rosidl_typesupport_introspection_c__RelativePositionWithCovarianceStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
