// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/Description.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/description__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/description__struct.h"
#include "v2x_msg/msg/detail/description__functions.h"
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

#include "v2x_msg/msg/detail/geometric_projection__functions.h"  // geometry
#include "v2x_msg/msg/detail/offset_system__functions.h"  // path
#include "v2x_msg/msg/detail/valid_region__functions.h"  // oldregion

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__GeometricProjection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__GeometricProjection(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, GeometricProjection)();
size_t get_serialized_size_v2x_msg__msg__OffsetSystem(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__OffsetSystem(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetSystem)();
size_t get_serialized_size_v2x_msg__msg__ValidRegion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ValidRegion(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ValidRegion)();


using _Description__ros_msg_type = v2x_msg__msg__Description;

static bool _Description__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Description__ros_msg_type * ros_message = static_cast<const _Description__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetSystem
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path, cdr))
    {
      return false;
    }
  }

  // Field name: geometry
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, GeometricProjection
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->geometry, cdr))
    {
      return false;
    }
  }

  // Field name: oldregion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ValidRegion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->oldregion, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Description__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Description__ros_msg_type * ros_message = static_cast<_Description__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetSystem
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path))
    {
      return false;
    }
  }

  // Field name: geometry
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, GeometricProjection
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->geometry))
    {
      return false;
    }
  }

  // Field name: oldregion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ValidRegion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->oldregion))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__Description(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Description__ros_msg_type * ros_message = static_cast<const _Description__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name path

  current_alignment += get_serialized_size_v2x_msg__msg__OffsetSystem(
    &(ros_message->path), current_alignment);
  // field.name geometry

  current_alignment += get_serialized_size_v2x_msg__msg__GeometricProjection(
    &(ros_message->geometry), current_alignment);
  // field.name oldregion

  current_alignment += get_serialized_size_v2x_msg__msg__ValidRegion(
    &(ros_message->oldregion), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Description__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__Description(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__Description(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: path
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__OffsetSystem(
        full_bounded, current_alignment);
    }
  }
  // member: geometry
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__GeometricProjection(
        full_bounded, current_alignment);
    }
  }
  // member: oldregion
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__ValidRegion(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Description__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__Description(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Description = {
  "v2x_msg::msg",
  "Description",
  _Description__cdr_serialize,
  _Description__cdr_deserialize,
  _Description__get_serialized_size,
  _Description__max_serialized_size
};

static rosidl_message_type_support_t _Description__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Description,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Description)() {
  return &_Description__type_support;
}

#if defined(__cplusplus)
}
#endif
