// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/Area.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/area__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/area__struct.h"
#include "v2x_msg/msg/detail/area__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "v2x_msg/msg/detail/circle__functions.h"  // cirle
#include "v2x_msg/msg/detail/region_point_set__functions.h"  // regionpointset
#include "v2x_msg/msg/detail/shape_point_set__functions.h"  // shapepointset

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__Circle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Circle(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Circle)();
size_t get_serialized_size_v2x_msg__msg__RegionPointSet(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__RegionPointSet(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RegionPointSet)();
size_t get_serialized_size_v2x_msg__msg__ShapePointSet(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ShapePointSet(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ShapePointSet)();


using _Area__ros_msg_type = v2x_msg__msg__Area;

static bool _Area__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Area__ros_msg_type * ros_message = static_cast<const _Area__ros_msg_type *>(untyped_ros_message);
  // Field name: shapepointset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ShapePointSet
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->shapepointset, cdr))
    {
      return false;
    }
  }

  // Field name: cirle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Circle
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cirle, cdr))
    {
      return false;
    }
  }

  // Field name: regionpointset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RegionPointSet
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->regionpointset, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Area__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Area__ros_msg_type * ros_message = static_cast<_Area__ros_msg_type *>(untyped_ros_message);
  // Field name: shapepointset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ShapePointSet
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->shapepointset))
    {
      return false;
    }
  }

  // Field name: cirle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Circle
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cirle))
    {
      return false;
    }
  }

  // Field name: regionpointset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RegionPointSet
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->regionpointset))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__Area(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Area__ros_msg_type * ros_message = static_cast<const _Area__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name shapepointset

  current_alignment += get_serialized_size_v2x_msg__msg__ShapePointSet(
    &(ros_message->shapepointset), current_alignment);
  // field.name cirle

  current_alignment += get_serialized_size_v2x_msg__msg__Circle(
    &(ros_message->cirle), current_alignment);
  // field.name regionpointset

  current_alignment += get_serialized_size_v2x_msg__msg__RegionPointSet(
    &(ros_message->regionpointset), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Area__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__Area(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__Area(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: shapepointset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__ShapePointSet(
        full_bounded, current_alignment);
    }
  }
  // member: cirle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__Circle(
        full_bounded, current_alignment);
    }
  }
  // member: regionpointset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__RegionPointSet(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Area__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__Area(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Area = {
  "v2x_msg::msg",
  "Area",
  _Area__cdr_serialize,
  _Area__cdr_deserialize,
  _Area__get_serialized_size,
  _Area__max_serialized_size
};

static rosidl_message_type_support_t _Area__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Area,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Area)() {
  return &_Area__type_support;
}

#if defined(__cplusplus)
}
#endif
