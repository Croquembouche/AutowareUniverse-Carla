// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/PSM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/psm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/psm__struct.hpp"

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
  const v2x_msg::msg::Position3D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::Position3D &);
size_t get_serialized_size(
  const v2x_msg::msg::Position3D &,
  size_t current_alignment);
size_t
max_serialized_size_Position3D(
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
  const v2x_msg::msg::PositionalAccuracy &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::PositionalAccuracy &);
size_t get_serialized_size(
  const v2x_msg::msg::PositionalAccuracy &,
  size_t current_alignment);
size_t
max_serialized_size_PositionalAccuracy(
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
  const v2x_msg::msg::AccelerationSet4Way &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::AccelerationSet4Way &);
size_t get_serialized_size(
  const v2x_msg::msg::AccelerationSet4Way &,
  size_t current_alignment);
size_t
max_serialized_size_AccelerationSet4Way(
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
  const v2x_msg::msg::PathHistory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::PathHistory &);
size_t get_serialized_size(
  const v2x_msg::msg::PathHistory &,
  size_t current_alignment);
size_t
max_serialized_size_PathHistory(
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
  const v2x_msg::msg::PathPrediction &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::PathPrediction &);
size_t get_serialized_size(
  const v2x_msg::msg::PathPrediction &,
  size_t current_alignment);
size_t
max_serialized_size_PathPrediction(
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
  const v2x_msg::msg::PropelledInformation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::PropelledInformation &);
size_t get_serialized_size(
  const v2x_msg::msg::PropelledInformation &,
  size_t current_alignment);
size_t
max_serialized_size_PropelledInformation(
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
  const v2x_msg::msg::PSM & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: basictype
  cdr << ros_message.basictype;
  // Member: secmark
  cdr << ros_message.secmark;
  // Member: msgcnt
  cdr << ros_message.msgcnt;
  // Member: id
  cdr << ros_message.id;
  // Member: position
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.position,
    cdr);
  // Member: accuracy
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.accuracy,
    cdr);
  // Member: speed
  cdr << ros_message.speed;
  // Member: heading
  cdr << ros_message.heading;
  // Member: accelset
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.accelset,
    cdr);
  // Member: pathhistory
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pathhistory,
    cdr);
  // Member: pathprediction
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pathprediction,
    cdr);
  // Member: propulsion
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.propulsion,
    cdr);
  // Member: usestate
  cdr << ros_message.usestate;
  // Member: crossrequest
  cdr << (ros_message.crossrequest ? true : false);
  // Member: crossstate
  cdr << (ros_message.crossstate ? true : false);
  // Member: clustersize
  cdr << ros_message.clustersize;
  // Member: clusterradius
  cdr << ros_message.clusterradius;
  // Member: eventrespondertype
  cdr << ros_message.eventrespondertype;
  // Member: activitytype
  cdr << ros_message.activitytype;
  // Member: activitysubtype
  cdr << ros_message.activitysubtype;
  // Member: assisttype
  cdr << ros_message.assisttype;
  // Member: sizing
  cdr << ros_message.sizing;
  // Member: attachment
  cdr << ros_message.attachment;
  // Member: attachmentradius
  cdr << ros_message.attachmentradius;
  // Member: animaltype
  cdr << ros_message.animaltype;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::PSM & ros_message)
{
  // Member: basictype
  cdr >> ros_message.basictype;

  // Member: secmark
  cdr >> ros_message.secmark;

  // Member: msgcnt
  cdr >> ros_message.msgcnt;

  // Member: id
  cdr >> ros_message.id;

  // Member: position
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.position);

  // Member: accuracy
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.accuracy);

  // Member: speed
  cdr >> ros_message.speed;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: accelset
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.accelset);

  // Member: pathhistory
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pathhistory);

  // Member: pathprediction
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pathprediction);

  // Member: propulsion
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.propulsion);

  // Member: usestate
  cdr >> ros_message.usestate;

  // Member: crossrequest
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.crossrequest = tmp ? true : false;
  }

  // Member: crossstate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.crossstate = tmp ? true : false;
  }

  // Member: clustersize
  cdr >> ros_message.clustersize;

  // Member: clusterradius
  cdr >> ros_message.clusterradius;

  // Member: eventrespondertype
  cdr >> ros_message.eventrespondertype;

  // Member: activitytype
  cdr >> ros_message.activitytype;

  // Member: activitysubtype
  cdr >> ros_message.activitysubtype;

  // Member: assisttype
  cdr >> ros_message.assisttype;

  // Member: sizing
  cdr >> ros_message.sizing;

  // Member: attachment
  cdr >> ros_message.attachment;

  // Member: attachmentradius
  cdr >> ros_message.attachmentradius;

  // Member: animaltype
  cdr >> ros_message.animaltype;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::PSM & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: basictype
  {
    size_t item_size = sizeof(ros_message.basictype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: secmark
  {
    size_t item_size = sizeof(ros_message.secmark);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msgcnt
  {
    size_t item_size = sizeof(ros_message.msgcnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);
  // Member: position

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.position, current_alignment);
  // Member: accuracy

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.accuracy, current_alignment);
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accelset

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.accelset, current_alignment);
  // Member: pathhistory

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pathhistory, current_alignment);
  // Member: pathprediction

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pathprediction, current_alignment);
  // Member: propulsion

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.propulsion, current_alignment);
  // Member: usestate
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.usestate.size() + 1);
  // Member: crossrequest
  {
    size_t item_size = sizeof(ros_message.crossrequest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crossstate
  {
    size_t item_size = sizeof(ros_message.crossstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clustersize
  {
    size_t item_size = sizeof(ros_message.clustersize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clusterradius
  {
    size_t item_size = sizeof(ros_message.clusterradius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eventrespondertype
  {
    size_t item_size = sizeof(ros_message.eventrespondertype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: activitytype
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.activitytype.size() + 1);
  // Member: activitysubtype
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.activitysubtype.size() + 1);
  // Member: assisttype
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.assisttype.size() + 1);
  // Member: sizing
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sizing.size() + 1);
  // Member: attachment
  {
    size_t item_size = sizeof(ros_message.attachment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attachmentradius
  {
    size_t item_size = sizeof(ros_message.attachmentradius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: animaltype
  {
    size_t item_size = sizeof(ros_message.animaltype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_PSM(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: basictype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: secmark
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: msgcnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_Position3D(
        full_bounded, current_alignment);
    }
  }

  // Member: accuracy
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PositionalAccuracy(
        full_bounded, current_alignment);
    }
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: accelset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_AccelerationSet4Way(
        full_bounded, current_alignment);
    }
  }

  // Member: pathhistory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PathHistory(
        full_bounded, current_alignment);
    }
  }

  // Member: pathprediction
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PathPrediction(
        full_bounded, current_alignment);
    }
  }

  // Member: propulsion
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PropelledInformation(
        full_bounded, current_alignment);
    }
  }

  // Member: usestate
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: crossrequest
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: crossstate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: clustersize
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: clusterradius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: eventrespondertype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: activitytype
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: activitysubtype
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: assisttype
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sizing
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: attachment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: attachmentradius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: animaltype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PSM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::PSM *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PSM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::PSM *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PSM__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::PSM *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PSM__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PSM(full_bounded, 0);
}

static message_type_support_callbacks_t _PSM__callbacks = {
  "v2x_msg::msg",
  "PSM",
  _PSM__cdr_serialize,
  _PSM__cdr_deserialize,
  _PSM__get_serialized_size,
  _PSM__max_serialized_size
};

static rosidl_message_type_support_t _PSM__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PSM__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::PSM>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_PSM__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, PSM)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_PSM__handle;
}

#ifdef __cplusplus
}
#endif
