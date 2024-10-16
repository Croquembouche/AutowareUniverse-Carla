// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/intersection_status_object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/intersection_status_object__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_serialize(
  const v2x_msg::msg::IntersectionStatusObject & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: manualcontrolisenabled
  cdr << ros_message.manualcontrolisenabled;
  // Member: stoptimeisactivated
  cdr << ros_message.stoptimeisactivated;
  // Member: failureflash
  cdr << ros_message.failureflash;
  // Member: preemptisactive
  cdr << ros_message.preemptisactive;
  // Member: signalpriorityisactive
  cdr << ros_message.signalpriorityisactive;
  // Member: fixedtimeoperation
  cdr << ros_message.fixedtimeoperation;
  // Member: trafficdependentoperation
  cdr << ros_message.trafficdependentoperation;
  // Member: standbyoperation
  cdr << ros_message.standbyoperation;
  // Member: failuremode
  cdr << ros_message.failuremode;
  // Member: off
  cdr << ros_message.off;
  // Member: recentmapmessageupdate
  cdr << ros_message.recentmapmessageupdate;
  // Member: recentchangeinmapassignedlanesidsused
  cdr << ros_message.recentchangeinmapassignedlanesidsused;
  // Member: novalidmapisabilableatthistime
  cdr << ros_message.novalidmapisabilableatthistime;
  // Member: nobalidspatisabilableatthistime
  cdr << ros_message.nobalidspatisabilableatthistime;
  // Member: reserve14
  cdr << ros_message.reserve14;
  // Member: reserve15
  cdr << ros_message.reserve15;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::IntersectionStatusObject & ros_message)
{
  // Member: manualcontrolisenabled
  cdr >> ros_message.manualcontrolisenabled;

  // Member: stoptimeisactivated
  cdr >> ros_message.stoptimeisactivated;

  // Member: failureflash
  cdr >> ros_message.failureflash;

  // Member: preemptisactive
  cdr >> ros_message.preemptisactive;

  // Member: signalpriorityisactive
  cdr >> ros_message.signalpriorityisactive;

  // Member: fixedtimeoperation
  cdr >> ros_message.fixedtimeoperation;

  // Member: trafficdependentoperation
  cdr >> ros_message.trafficdependentoperation;

  // Member: standbyoperation
  cdr >> ros_message.standbyoperation;

  // Member: failuremode
  cdr >> ros_message.failuremode;

  // Member: off
  cdr >> ros_message.off;

  // Member: recentmapmessageupdate
  cdr >> ros_message.recentmapmessageupdate;

  // Member: recentchangeinmapassignedlanesidsused
  cdr >> ros_message.recentchangeinmapassignedlanesidsused;

  // Member: novalidmapisabilableatthistime
  cdr >> ros_message.novalidmapisabilableatthistime;

  // Member: nobalidspatisabilableatthistime
  cdr >> ros_message.nobalidspatisabilableatthistime;

  // Member: reserve14
  cdr >> ros_message.reserve14;

  // Member: reserve15
  cdr >> ros_message.reserve15;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::IntersectionStatusObject & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: manualcontrolisenabled
  {
    size_t item_size = sizeof(ros_message.manualcontrolisenabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stoptimeisactivated
  {
    size_t item_size = sizeof(ros_message.stoptimeisactivated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failureflash
  {
    size_t item_size = sizeof(ros_message.failureflash);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preemptisactive
  {
    size_t item_size = sizeof(ros_message.preemptisactive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signalpriorityisactive
  {
    size_t item_size = sizeof(ros_message.signalpriorityisactive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fixedtimeoperation
  {
    size_t item_size = sizeof(ros_message.fixedtimeoperation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trafficdependentoperation
  {
    size_t item_size = sizeof(ros_message.trafficdependentoperation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standbyoperation
  {
    size_t item_size = sizeof(ros_message.standbyoperation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failuremode
  {
    size_t item_size = sizeof(ros_message.failuremode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: off
  {
    size_t item_size = sizeof(ros_message.off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: recentmapmessageupdate
  {
    size_t item_size = sizeof(ros_message.recentmapmessageupdate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: recentchangeinmapassignedlanesidsused
  {
    size_t item_size = sizeof(ros_message.recentchangeinmapassignedlanesidsused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: novalidmapisabilableatthistime
  {
    size_t item_size = sizeof(ros_message.novalidmapisabilableatthistime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nobalidspatisabilableatthistime
  {
    size_t item_size = sizeof(ros_message.nobalidspatisabilableatthistime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve14
  {
    size_t item_size = sizeof(ros_message.reserve14);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve15
  {
    size_t item_size = sizeof(ros_message.reserve15);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_IntersectionStatusObject(
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


  // Member: manualcontrolisenabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: stoptimeisactivated
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: failureflash
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preemptisactive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: signalpriorityisactive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fixedtimeoperation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: trafficdependentoperation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: standbyoperation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: failuremode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: recentmapmessageupdate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: recentchangeinmapassignedlanesidsused
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: novalidmapisabilableatthistime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nobalidspatisabilableatthistime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve14
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve15
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_msg::msg::IntersectionStatusObject;
    is_plain =
      (
      offsetof(DataType, reserve15) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IntersectionStatusObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::IntersectionStatusObject *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IntersectionStatusObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::IntersectionStatusObject *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IntersectionStatusObject__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::IntersectionStatusObject *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IntersectionStatusObject__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IntersectionStatusObject(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IntersectionStatusObject__callbacks = {
  "v2x_msg::msg",
  "IntersectionStatusObject",
  _IntersectionStatusObject__cdr_serialize,
  _IntersectionStatusObject__cdr_deserialize,
  _IntersectionStatusObject__get_serialized_size,
  _IntersectionStatusObject__max_serialized_size
};

static rosidl_message_type_support_t _IntersectionStatusObject__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IntersectionStatusObject__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::IntersectionStatusObject>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_IntersectionStatusObject__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, IntersectionStatusObject)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_IntersectionStatusObject__handle;
}

#ifdef __cplusplus
}
#endif
