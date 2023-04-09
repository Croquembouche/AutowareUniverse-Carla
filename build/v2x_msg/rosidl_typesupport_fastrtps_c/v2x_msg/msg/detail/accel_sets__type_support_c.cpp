// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/AccelSets.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/accel_sets__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/accel_sets__struct.h"
#include "v2x_msg/msg/detail/accel_sets__functions.h"
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

#include "v2x_msg/msg/detail/acceleration_set4_way__functions.h"  // angle
#include "v2x_msg/msg/detail/confidence_set__functions.h"  // confidenceset

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__AccelerationSet4Way(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__AccelerationSet4Way(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way)();
size_t get_serialized_size_v2x_msg__msg__ConfidenceSet(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ConfidenceSet(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConfidenceSet)();


using _AccelSets__ros_msg_type = v2x_msg__msg__AccelSets;

static bool _AccelSets__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AccelSets__ros_msg_type * ros_message = static_cast<const _AccelSets__ros_msg_type *>(untyped_ros_message);
  // Field name: angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->angle, cdr))
    {
      return false;
    }
  }

  // Field name: certaccelthres
  {
    cdr << ros_message->certaccelthres;
  }

  // Field name: yawratecon
  {
    cdr << ros_message->yawratecon;
  }

  // Field name: hozaccelcon
  {
    cdr << ros_message->hozaccelcon;
  }

  // Field name: confidenceset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConfidenceSet
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->confidenceset, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AccelSets__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AccelSets__ros_msg_type * ros_message = static_cast<_AccelSets__ros_msg_type *>(untyped_ros_message);
  // Field name: angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->angle))
    {
      return false;
    }
  }

  // Field name: certaccelthres
  {
    cdr >> ros_message->certaccelthres;
  }

  // Field name: yawratecon
  {
    cdr >> ros_message->yawratecon;
  }

  // Field name: hozaccelcon
  {
    cdr >> ros_message->hozaccelcon;
  }

  // Field name: confidenceset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConfidenceSet
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->confidenceset))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__AccelSets(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AccelSets__ros_msg_type * ros_message = static_cast<const _AccelSets__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name angle

  current_alignment += get_serialized_size_v2x_msg__msg__AccelerationSet4Way(
    &(ros_message->angle), current_alignment);
  // field.name certaccelthres
  {
    size_t item_size = sizeof(ros_message->certaccelthres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yawratecon
  {
    size_t item_size = sizeof(ros_message->yawratecon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hozaccelcon
  {
    size_t item_size = sizeof(ros_message->hozaccelcon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidenceset

  current_alignment += get_serialized_size_v2x_msg__msg__ConfidenceSet(
    &(ros_message->confidenceset), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AccelSets__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__AccelSets(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__AccelSets(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: angle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__AccelerationSet4Way(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: certaccelthres
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yawratecon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hozaccelcon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: confidenceset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__ConfidenceSet(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AccelSets__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__AccelSets(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AccelSets = {
  "v2x_msg::msg",
  "AccelSets",
  _AccelSets__cdr_serialize,
  _AccelSets__cdr_deserialize,
  _AccelSets__get_serialized_size,
  _AccelSets__max_serialized_size
};

static rosidl_message_type_support_t _AccelSets__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AccelSets,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelSets)() {
  return &_AccelSets__type_support;
}

#if defined(__cplusplus)
}
#endif
