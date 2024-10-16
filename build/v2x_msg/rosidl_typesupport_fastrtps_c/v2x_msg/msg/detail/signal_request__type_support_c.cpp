// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/SignalRequest.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/signal_request__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/signal_request__struct.h"
#include "v2x_msg/msg/detail/signal_request__functions.h"
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

#include "v2x_msg/msg/detail/intersection_access_point__functions.h"  // inboundlane, outboundlane
#include "v2x_msg/msg/detail/intersection_reference_id__functions.h"  // id

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint)();
size_t get_serialized_size_v2x_msg__msg__IntersectionReferenceID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__IntersectionReferenceID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID)();


using _SignalRequest__ros_msg_type = v2x_msg__msg__SignalRequest;

static bool _SignalRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SignalRequest__ros_msg_type * ros_message = static_cast<const _SignalRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->id, cdr))
    {
      return false;
    }
  }

  // Field name: requestid
  {
    cdr << ros_message->requestid;
  }

  // Field name: requesttype
  {
    cdr << ros_message->requesttype;
  }

  // Field name: inboundlane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->inboundlane, cdr))
    {
      return false;
    }
  }

  // Field name: outboundlane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->outboundlane, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SignalRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SignalRequest__ros_msg_type * ros_message = static_cast<_SignalRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->id))
    {
      return false;
    }
  }

  // Field name: requestid
  {
    cdr >> ros_message->requestid;
  }

  // Field name: requesttype
  {
    cdr >> ros_message->requesttype;
  }

  // Field name: inboundlane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->inboundlane))
    {
      return false;
    }
  }

  // Field name: outboundlane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->outboundlane))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__SignalRequest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SignalRequest__ros_msg_type * ros_message = static_cast<const _SignalRequest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id

  current_alignment += get_serialized_size_v2x_msg__msg__IntersectionReferenceID(
    &(ros_message->id), current_alignment);
  // field.name requestid
  {
    size_t item_size = sizeof(ros_message->requestid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name requesttype
  {
    size_t item_size = sizeof(ros_message->requesttype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inboundlane

  current_alignment += get_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
    &(ros_message->inboundlane), current_alignment);
  // field.name outboundlane

  current_alignment += get_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
    &(ros_message->outboundlane), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SignalRequest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__SignalRequest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__SignalRequest(
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

  // member: id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__IntersectionReferenceID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: requestid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: requesttype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inboundlane
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: outboundlane
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
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
    using DataType = v2x_msg__msg__SignalRequest;
    is_plain =
      (
      offsetof(DataType, outboundlane) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SignalRequest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__SignalRequest(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SignalRequest = {
  "v2x_msg::msg",
  "SignalRequest",
  _SignalRequest__cdr_serialize,
  _SignalRequest__cdr_deserialize,
  _SignalRequest__get_serialized_size,
  _SignalRequest__max_serialized_size
};

static rosidl_message_type_support_t _SignalRequest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SignalRequest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalRequest)() {
  return &_SignalRequest__type_support;
}

#if defined(__cplusplus)
}
#endif
