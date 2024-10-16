// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/RTCM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/rtcm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/rtcm__struct.hpp"

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
  const v2x_msg::msg::FullPositionVector &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::FullPositionVector &);
size_t get_serialized_size(
  const v2x_msg::msg::FullPositionVector &,
  size_t current_alignment);
size_t
max_serialized_size_FullPositionVector(
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
  const v2x_msg::msg::RTCMheader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::RTCMheader &);
size_t get_serialized_size(
  const v2x_msg::msg::RTCMheader &,
  size_t current_alignment);
size_t
max_serialized_size_RTCMheader(
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
  const v2x_msg::msg::RTCM & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: msgcnt
  cdr << ros_message.msgcnt;
  // Member: rev
  cdr << ros_message.rev;
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: anchorpoint
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.anchorpoint,
    cdr);
  // Member: rtcmheader
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rtcmheader,
    cdr);
  // Member: msgs
  {
    cdr << ros_message.msgs;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::RTCM & ros_message)
{
  // Member: msgcnt
  cdr >> ros_message.msgcnt;

  // Member: rev
  cdr >> ros_message.rev;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: anchorpoint
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.anchorpoint);

  // Member: rtcmheader
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rtcmheader);

  // Member: msgs
  {
    cdr >> ros_message.msgs;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::RTCM & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: msgcnt
  {
    size_t item_size = sizeof(ros_message.msgcnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rev
  {
    size_t item_size = sizeof(ros_message.rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: anchorpoint

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.anchorpoint, current_alignment);
  // Member: rtcmheader

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rtcmheader, current_alignment);
  // Member: msgs
  {
    size_t array_size = ros_message.msgs.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.msgs[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_RTCM(
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


  // Member: msgcnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: anchorpoint
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_FullPositionVector(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rtcmheader
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_RTCMheader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: msgs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_msg::msg::RTCM;
    is_plain =
      (
      offsetof(DataType, msgs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RTCM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::RTCM *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RTCM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::RTCM *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RTCM__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::RTCM *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RTCM__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RTCM(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RTCM__callbacks = {
  "v2x_msg::msg",
  "RTCM",
  _RTCM__cdr_serialize,
  _RTCM__cdr_deserialize,
  _RTCM__get_serialized_size,
  _RTCM__max_serialized_size
};

static rosidl_message_type_support_t _RTCM__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RTCM__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::RTCM>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_RTCM__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, RTCM)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_RTCM__handle;
}

#ifdef __cplusplus
}
#endif
