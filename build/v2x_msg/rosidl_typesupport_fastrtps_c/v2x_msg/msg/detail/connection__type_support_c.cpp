// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/Connection.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/connection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/connection__struct.h"
#include "v2x_msg/msg/detail/connection__functions.h"
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

#include "v2x_msg/msg/detail/connecting_lane__functions.h"  // connectinglane
#include "v2x_msg/msg/detail/intersection_reference_id__functions.h"  // remoteintersection

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__ConnectingLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ConnectingLane(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConnectingLane)();
size_t get_serialized_size_v2x_msg__msg__IntersectionReferenceID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__IntersectionReferenceID(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID)();


using _Connection__ros_msg_type = v2x_msg__msg__Connection;

static bool _Connection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Connection__ros_msg_type * ros_message = static_cast<const _Connection__ros_msg_type *>(untyped_ros_message);
  // Field name: connectinglane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConnectingLane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->connectinglane, cdr))
    {
      return false;
    }
  }

  // Field name: remoteintersection
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->remoteintersection, cdr))
    {
      return false;
    }
  }

  // Field name: signalgroup
  {
    cdr << ros_message->signalgroup;
  }

  // Field name: userclass
  {
    cdr << ros_message->userclass;
  }

  // Field name: laneconnectonid
  {
    cdr << ros_message->laneconnectonid;
  }

  return true;
}

static bool _Connection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Connection__ros_msg_type * ros_message = static_cast<_Connection__ros_msg_type *>(untyped_ros_message);
  // Field name: connectinglane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConnectingLane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->connectinglane))
    {
      return false;
    }
  }

  // Field name: remoteintersection
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->remoteintersection))
    {
      return false;
    }
  }

  // Field name: signalgroup
  {
    cdr >> ros_message->signalgroup;
  }

  // Field name: userclass
  {
    cdr >> ros_message->userclass;
  }

  // Field name: laneconnectonid
  {
    cdr >> ros_message->laneconnectonid;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Connection__ros_msg_type * ros_message = static_cast<const _Connection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name connectinglane

  current_alignment += get_serialized_size_v2x_msg__msg__ConnectingLane(
    &(ros_message->connectinglane), current_alignment);
  // field.name remoteintersection

  current_alignment += get_serialized_size_v2x_msg__msg__IntersectionReferenceID(
    &(ros_message->remoteintersection), current_alignment);
  // field.name signalgroup
  {
    size_t item_size = sizeof(ros_message->signalgroup);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name userclass
  {
    size_t item_size = sizeof(ros_message->userclass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laneconnectonid
  {
    size_t item_size = sizeof(ros_message->laneconnectonid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Connection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__Connection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__Connection(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: connectinglane
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__ConnectingLane(
        full_bounded, current_alignment);
    }
  }
  // member: remoteintersection
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__IntersectionReferenceID(
        full_bounded, current_alignment);
    }
  }
  // member: signalgroup
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: userclass
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: laneconnectonid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Connection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__Connection(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Connection = {
  "v2x_msg::msg",
  "Connection",
  _Connection__cdr_serialize,
  _Connection__cdr_deserialize,
  _Connection__get_serialized_size,
  _Connection__max_serialized_size
};

static rosidl_message_type_support_t _Connection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Connection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Connection)() {
  return &_Connection__type_support;
}

#if defined(__cplusplus)
}
#endif
