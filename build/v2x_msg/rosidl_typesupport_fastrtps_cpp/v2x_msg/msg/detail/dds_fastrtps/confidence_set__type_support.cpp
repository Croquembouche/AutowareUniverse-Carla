// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/ConfidenceSet.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/confidence_set__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/confidence_set__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace v2x_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x_msg::msg::AccelSteerYawRateConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::AccelSteerYawRateConfidence &);
size_t get_serialized_size(
  const v2x_msg::msg::AccelSteerYawRateConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_AccelSteerYawRateConfidence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x_msg

namespace v2x_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x_msg::msg::SpeedandHeadingandThrottleConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::SpeedandHeadingandThrottleConfidence &);
size_t get_serialized_size(
  const v2x_msg::msg::SpeedandHeadingandThrottleConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_SpeedandHeadingandThrottleConfidence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x_msg

namespace v2x_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x_msg::msg::PositionConfidenceSet &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::PositionConfidenceSet &);
size_t get_serialized_size(
  const v2x_msg::msg::PositionConfidenceSet &,
  size_t current_alignment);
size_t
max_serialized_size_PositionConfidenceSet(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x_msg


namespace v2x_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_serialize(
  const v2x_msg::msg::ConfidenceSet & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accelconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.accelconfidence,
    cdr);
  // Member: speedconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.speedconfidence,
    cdr);
  // Member: timeconfidence
  cdr << ros_message.timeconfidence;
  // Member: posconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.posconfidence,
    cdr);
  // Member: steerconfidence
  cdr << ros_message.steerconfidence;
  // Member: headingconfidence
  cdr << ros_message.headingconfidence;
  // Member: throttleconfidence
  cdr << ros_message.throttleconfidence;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::ConfidenceSet & ros_message)
{
  // Member: accelconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.accelconfidence);

  // Member: speedconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.speedconfidence);

  // Member: timeconfidence
  cdr >> ros_message.timeconfidence;

  // Member: posconfidence
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.posconfidence);

  // Member: steerconfidence
  cdr >> ros_message.steerconfidence;

  // Member: headingconfidence
  cdr >> ros_message.headingconfidence;

  // Member: throttleconfidence
  cdr >> ros_message.throttleconfidence;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::ConfidenceSet & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accelconfidence

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.accelconfidence, current_alignment);
  // Member: speedconfidence

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.speedconfidence, current_alignment);
  // Member: timeconfidence
  {
    size_t item_size = sizeof(ros_message.timeconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: posconfidence

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.posconfidence, current_alignment);
  // Member: steerconfidence
  {
    size_t item_size = sizeof(ros_message.steerconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: headingconfidence
  {
    size_t item_size = sizeof(ros_message.headingconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttleconfidence
  {
    size_t item_size = sizeof(ros_message.throttleconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_ConfidenceSet(
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


  // Member: accelconfidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_AccelSteerYawRateConfidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: speedconfidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_SpeedandHeadingandThrottleConfidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: timeconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: posconfidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PositionConfidenceSet(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: steerconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: headingconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: throttleconfidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ConfidenceSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::ConfidenceSet *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConfidenceSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::ConfidenceSet *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConfidenceSet__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::ConfidenceSet *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConfidenceSet__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ConfidenceSet(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ConfidenceSet__callbacks = {
  "v2x_msg::msg",
  "ConfidenceSet",
  _ConfidenceSet__cdr_serialize,
  _ConfidenceSet__cdr_deserialize,
  _ConfidenceSet__get_serialized_size,
  _ConfidenceSet__max_serialized_size
};

static rosidl_message_type_support_t _ConfidenceSet__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConfidenceSet__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2x_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2x_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_msg::msg::ConfidenceSet>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_ConfidenceSet__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, ConfidenceSet)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_ConfidenceSet__handle;
}

#ifdef __cplusplus
}
#endif
