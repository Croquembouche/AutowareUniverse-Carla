// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/Snapshot.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/snapshot__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/snapshot__struct.h"
#include "v2x_msg/msg/detail/snapshot__functions.h"
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

#include "v2x_msg/msg/detail/full_position_vector__functions.h"  // theposition
#include "v2x_msg/msg/detail/vehicle_safety_extensions__functions.h"  // safetyext
#include "v2x_msg/msg/detail/vehicle_status__functions.h"  // dataset

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__FullPositionVector(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__FullPositionVector(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector)();
size_t get_serialized_size_v2x_msg__msg__VehicleSafetyExtensions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__VehicleSafetyExtensions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleSafetyExtensions)();
size_t get_serialized_size_v2x_msg__msg__VehicleStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__VehicleStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleStatus)();


using _Snapshot__ros_msg_type = v2x_msg__msg__Snapshot;

static bool _Snapshot__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Snapshot__ros_msg_type * ros_message = static_cast<const _Snapshot__ros_msg_type *>(untyped_ros_message);
  // Field name: theposition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->theposition, cdr))
    {
      return false;
    }
  }

  // Field name: safetyext
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleSafetyExtensions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->safetyext, cdr))
    {
      return false;
    }
  }

  // Field name: dataset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dataset, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Snapshot__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Snapshot__ros_msg_type * ros_message = static_cast<_Snapshot__ros_msg_type *>(untyped_ros_message);
  // Field name: theposition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->theposition))
    {
      return false;
    }
  }

  // Field name: safetyext
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleSafetyExtensions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->safetyext))
    {
      return false;
    }
  }

  // Field name: dataset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dataset))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__Snapshot(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Snapshot__ros_msg_type * ros_message = static_cast<const _Snapshot__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name theposition

  current_alignment += get_serialized_size_v2x_msg__msg__FullPositionVector(
    &(ros_message->theposition), current_alignment);
  // field.name safetyext

  current_alignment += get_serialized_size_v2x_msg__msg__VehicleSafetyExtensions(
    &(ros_message->safetyext), current_alignment);
  // field.name dataset

  current_alignment += get_serialized_size_v2x_msg__msg__VehicleStatus(
    &(ros_message->dataset), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Snapshot__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__Snapshot(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__Snapshot(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: theposition
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__FullPositionVector(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: safetyext
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__VehicleSafetyExtensions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dataset
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__VehicleStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_msg__msg__Snapshot;
    is_plain =
      (
      offsetof(DataType, dataset) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Snapshot__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__Snapshot(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Snapshot = {
  "v2x_msg::msg",
  "Snapshot",
  _Snapshot__cdr_serialize,
  _Snapshot__cdr_deserialize,
  _Snapshot__get_serialized_size,
  _Snapshot__max_serialized_size
};

static rosidl_message_type_support_t _Snapshot__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Snapshot,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Snapshot)() {
  return &_Snapshot__type_support;
}

#if defined(__cplusplus)
}
#endif
