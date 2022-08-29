// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/ConnectingLane.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/connecting_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/connecting_lane__struct.h"
#include "v2x_msg/msg/detail/connecting_lane__functions.h"
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

#include "v2x_msg/msg/detail/allowed_maneuvers__functions.h"  // maneuver

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__AllowedManeuvers(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__AllowedManeuvers(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AllowedManeuvers)();


using _ConnectingLane__ros_msg_type = v2x_msg__msg__ConnectingLane;

static bool _ConnectingLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConnectingLane__ros_msg_type * ros_message = static_cast<const _ConnectingLane__ros_msg_type *>(untyped_ros_message);
  // Field name: laneid
  {
    cdr << ros_message->laneid;
  }

  // Field name: maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AllowedManeuvers
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->maneuver, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ConnectingLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConnectingLane__ros_msg_type * ros_message = static_cast<_ConnectingLane__ros_msg_type *>(untyped_ros_message);
  // Field name: laneid
  {
    cdr >> ros_message->laneid;
  }

  // Field name: maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AllowedManeuvers
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->maneuver))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__ConnectingLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConnectingLane__ros_msg_type * ros_message = static_cast<const _ConnectingLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name laneid
  {
    size_t item_size = sizeof(ros_message->laneid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuver

  current_alignment += get_serialized_size_v2x_msg__msg__AllowedManeuvers(
    &(ros_message->maneuver), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ConnectingLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__ConnectingLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__ConnectingLane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: laneid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__AllowedManeuvers(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ConnectingLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__ConnectingLane(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConnectingLane = {
  "v2x_msg::msg",
  "ConnectingLane",
  _ConnectingLane__cdr_serialize,
  _ConnectingLane__cdr_deserialize,
  _ConnectingLane__get_serialized_size,
  _ConnectingLane__max_serialized_size
};

static rosidl_message_type_support_t _ConnectingLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConnectingLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConnectingLane)() {
  return &_ConnectingLane__type_support;
}

#if defined(__cplusplus)
}
#endif
