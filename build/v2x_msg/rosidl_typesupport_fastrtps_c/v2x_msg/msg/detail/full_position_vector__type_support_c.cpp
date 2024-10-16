// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/FullPositionVector.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/full_position_vector__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/full_position_vector__struct.h"
#include "v2x_msg/msg/detail/full_position_vector__functions.h"
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

#include "v2x_msg/msg/detail/d_date_time__functions.h"  // utctime
#include "v2x_msg/msg/detail/position_confidence_set__functions.h"  // posconfidence
#include "v2x_msg/msg/detail/positional_accuracy__functions.h"  // posaccuracy
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__functions.h"  // speedconfidence
#include "v2x_msg/msg/detail/transmission_and_speed__functions.h"  // speed

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__DDateTime(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__DDateTime(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, DDateTime)();
size_t get_serialized_size_v2x_msg__msg__PositionConfidenceSet(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PositionConfidenceSet(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionConfidenceSet)();
size_t get_serialized_size_v2x_msg__msg__PositionalAccuracy(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PositionalAccuracy(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy)();
size_t get_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence)();
size_t get_serialized_size_v2x_msg__msg__TransmissionAndSpeed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__TransmissionAndSpeed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, TransmissionAndSpeed)();


using _FullPositionVector__ros_msg_type = v2x_msg__msg__FullPositionVector;

static bool _FullPositionVector__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FullPositionVector__ros_msg_type * ros_message = static_cast<const _FullPositionVector__ros_msg_type *>(untyped_ros_message);
  // Field name: utctime
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, DDateTime
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->utctime, cdr))
    {
      return false;
    }
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: elevation
  {
    cdr << ros_message->elevation;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, TransmissionAndSpeed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed, cdr))
    {
      return false;
    }
  }

  // Field name: posaccuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->posaccuracy, cdr))
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

  return true;
}

static bool _FullPositionVector__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FullPositionVector__ros_msg_type * ros_message = static_cast<_FullPositionVector__ros_msg_type *>(untyped_ros_message);
  // Field name: utctime
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, DDateTime
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->utctime))
    {
      return false;
    }
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: elevation
  {
    cdr >> ros_message->elevation;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, TransmissionAndSpeed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed))
    {
      return false;
    }
  }

  // Field name: posaccuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->posaccuracy))
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

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__FullPositionVector(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FullPositionVector__ros_msg_type * ros_message = static_cast<const _FullPositionVector__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name utctime

  current_alignment += get_serialized_size_v2x_msg__msg__DDateTime(
    &(ros_message->utctime), current_alignment);
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elevation
  {
    size_t item_size = sizeof(ros_message->elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed

  current_alignment += get_serialized_size_v2x_msg__msg__TransmissionAndSpeed(
    &(ros_message->speed), current_alignment);
  // field.name posaccuracy

  current_alignment += get_serialized_size_v2x_msg__msg__PositionalAccuracy(
    &(ros_message->posaccuracy), current_alignment);
  // field.name timeconfidence
  {
    size_t item_size = sizeof(ros_message->timeconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posconfidence

  current_alignment += get_serialized_size_v2x_msg__msg__PositionConfidenceSet(
    &(ros_message->posconfidence), current_alignment);
  // field.name speedconfidence

  current_alignment += get_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
    &(ros_message->speedconfidence), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FullPositionVector__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__FullPositionVector(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__FullPositionVector(
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

  // member: utctime
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__DDateTime(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: elevation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__TransmissionAndSpeed(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: posaccuracy
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__PositionalAccuracy(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: timeconfidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: posconfidence
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__PositionConfidenceSet(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: speedconfidence
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
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
    using DataType = v2x_msg__msg__FullPositionVector;
    is_plain =
      (
      offsetof(DataType, speedconfidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FullPositionVector__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__FullPositionVector(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FullPositionVector = {
  "v2x_msg::msg",
  "FullPositionVector",
  _FullPositionVector__cdr_serialize,
  _FullPositionVector__cdr_deserialize,
  _FullPositionVector__get_serialized_size,
  _FullPositionVector__max_serialized_size
};

static rosidl_message_type_support_t _FullPositionVector__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FullPositionVector,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector)() {
  return &_FullPositionVector__type_support;
}

#if defined(__cplusplus)
}
#endif
