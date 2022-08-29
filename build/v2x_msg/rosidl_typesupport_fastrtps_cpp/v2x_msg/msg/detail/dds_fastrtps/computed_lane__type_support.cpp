// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/computed_lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/computed_lane__struct.hpp"

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
  const v2x_msg::msg::OffsetXaxis &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::OffsetXaxis &);
size_t get_serialized_size(
  const v2x_msg::msg::OffsetXaxis &,
  size_t current_alignment);
size_t
max_serialized_size_OffsetXaxis(
  bool & full_bounded,
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
  const v2x_msg::msg::OffsetYaxis &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::OffsetYaxis &);
size_t get_serialized_size(
  const v2x_msg::msg::OffsetYaxis &,
  size_t current_alignment);
size_t
max_serialized_size_OffsetYaxis(
  bool & full_bounded,
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
  const v2x_msg::msg::ComputedLane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: referencelaneid
  cdr << ros_message.referencelaneid;
  // Member: offsetxaxis
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.offsetxaxis,
    cdr);
  // Member: offsetyaxis
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.offsetyaxis,
    cdr);
  // Member: rotatexy
  cdr << ros_message.rotatexy;
  // Member: scalexaxis
  cdr << ros_message.scalexaxis;
  // Member: scaleyaxis
  cdr << ros_message.scaleyaxis;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::ComputedLane & ros_message)
{
  // Member: referencelaneid
  cdr >> ros_message.referencelaneid;

  // Member: offsetxaxis
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.offsetxaxis);

  // Member: offsetyaxis
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.offsetyaxis);

  // Member: rotatexy
  cdr >> ros_message.rotatexy;

  // Member: scalexaxis
  cdr >> ros_message.scalexaxis;

  // Member: scaleyaxis
  cdr >> ros_message.scaleyaxis;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::ComputedLane & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: referencelaneid
  {
    size_t item_size = sizeof(ros_message.referencelaneid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offsetxaxis

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.offsetxaxis, current_alignment);
  // Member: offsetyaxis

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.offsetyaxis, current_alignment);
  // Member: rotatexy
  {
    size_t item_size = sizeof(ros_message.rotatexy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scalexaxis
  {
    size_t item_size = sizeof(ros_message.scalexaxis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaleyaxis
  {
    size_t item_size = sizeof(ros_message.scaleyaxis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_ComputedLane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: referencelaneid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: offsetxaxis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_OffsetXaxis(
        full_bounded, current_alignment);
    }
  }

  // Member: offsetyaxis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_OffsetYaxis(
        full_bounded, current_alignment);
    }
  }

  // Member: rotatexy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: scalexaxis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: scaleyaxis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ComputedLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::ComputedLane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ComputedLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::ComputedLane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ComputedLane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::ComputedLane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ComputedLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ComputedLane(full_bounded, 0);
}

static message_type_support_callbacks_t _ComputedLane__callbacks = {
  "v2x_msg::msg",
  "ComputedLane",
  _ComputedLane__cdr_serialize,
  _ComputedLane__cdr_deserialize,
  _ComputedLane__get_serialized_size,
  _ComputedLane__max_serialized_size
};

static rosidl_message_type_support_t _ComputedLane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ComputedLane__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::ComputedLane>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_ComputedLane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, ComputedLane)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_ComputedLane__handle;
}

#ifdef __cplusplus
}
#endif
