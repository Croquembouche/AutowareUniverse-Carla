// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/ConfidenceSet.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/confidence_set__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/confidence_set__struct.h"
#include "v2x_msg/msg/detail/confidence_set__functions.h"
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

#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__functions.h"  // accelconfidence
#include "v2x_msg/msg/detail/position_confidence_set__functions.h"  // posconfidence
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__functions.h"  // speedconfidence

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__AccelSteerYawRateConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__AccelSteerYawRateConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelSteerYawRateConfidence)();
size_t get_serialized_size_v2x_msg__msg__PositionConfidenceSet(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PositionConfidenceSet(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionConfidenceSet)();
size_t get_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence)();


using _ConfidenceSet__ros_msg_type = v2x_msg__msg__ConfidenceSet;

static bool _ConfidenceSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfidenceSet__ros_msg_type * ros_message = static_cast<const _ConfidenceSet__ros_msg_type *>(untyped_ros_message);
  // Field name: accelconfidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelSteerYawRateConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accelconfidence, cdr))
    {
      return false;
    }
  }

  // Field name: speedconfidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speedconfidence, cdr))
    {
      return false;
    }
  }

  // Field name: timeconfidence
  {
    cdr << ros_message->timeconfidence;
  }

  // Field name: posconfidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionConfidenceSet
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->posconfidence, cdr))
    {
      return false;
    }
  }

  // Field name: steerconfidence
  {
    cdr << ros_message->steerconfidence;
  }

  // Field name: headingconfidence
  {
    cdr << ros_message->headingconfidence;
  }

  // Field name: throttleconfidence
  {
    cdr << ros_message->throttleconfidence;
  }

  return true;
}

static bool _ConfidenceSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfidenceSet__ros_msg_type * ros_message = static_cast<_ConfidenceSet__ros_msg_type *>(untyped_ros_message);
  // Field name: accelconfidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelSteerYawRateConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accelconfidence))
    {
      return false;
    }
  }

  // Field name: speedconfidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speedconfidence))
    {
      return false;
    }
  }

  // Field name: timeconfidence
  {
    cdr >> ros_message->timeconfidence;
  }

  // Field name: posconfidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionConfidenceSet
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->posconfidence))
    {
      return false;
    }
  }

  // Field name: steerconfidence
  {
    cdr >> ros_message->steerconfidence;
  }

  // Field name: headingconfidence
  {
    cdr >> ros_message->headingconfidence;
  }

  // Field name: throttleconfidence
  {
    cdr >> ros_message->throttleconfidence;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__ConfidenceSet(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfidenceSet__ros_msg_type * ros_message = static_cast<const _ConfidenceSet__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accelconfidence

  current_alignment += get_serialized_size_v2x_msg__msg__AccelSteerYawRateConfidence(
    &(ros_message->accelconfidence), current_alignment);
  // field.name speedconfidence

  current_alignment += get_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
    &(ros_message->speedconfidence), current_alignment);
  // field.name timeconfidence
  {
    size_t item_size = sizeof(ros_message->timeconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posconfidence

  current_alignment += get_serialized_size_v2x_msg__msg__PositionConfidenceSet(
    &(ros_message->posconfidence), current_alignment);
  // field.name steerconfidence
  {
    size_t item_size = sizeof(ros_message->steerconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name headingconfidence
  {
    size_t item_size = sizeof(ros_message->headingconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttleconfidence
  {
    size_t item_size = sizeof(ros_message->throttleconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfidenceSet__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__ConfidenceSet(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__ConfidenceSet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accelconfidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__AccelSteerYawRateConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: speedconfidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: timeconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: posconfidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__PositionConfidenceSet(
        full_bounded, current_alignment);
    }
  }
  // member: steerconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: headingconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: throttleconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ConfidenceSet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__ConfidenceSet(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConfidenceSet = {
  "v2x_msg::msg",
  "ConfidenceSet",
  _ConfidenceSet__cdr_serialize,
  _ConfidenceSet__cdr_deserialize,
  _ConfidenceSet__get_serialized_size,
  _ConfidenceSet__max_serialized_size
};

static rosidl_message_type_support_t _ConfidenceSet__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfidenceSet,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConfidenceSet)() {
  return &_ConfidenceSet__type_support;
}

#if defined(__cplusplus)
}
#endif
