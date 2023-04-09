// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/map__struct.hpp"

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
  const v2x_msg::msg::IntersectionGeometry &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::IntersectionGeometry &);
size_t get_serialized_size(
  const v2x_msg::msg::IntersectionGeometry &,
  size_t current_alignment);
size_t
max_serialized_size_IntersectionGeometry(
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
  const v2x_msg::msg::RoadSegment &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::RoadSegment &);
size_t get_serialized_size(
  const v2x_msg::msg::RoadSegment &,
  size_t current_alignment);
size_t
max_serialized_size_RoadSegment(
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
  const v2x_msg::msg::DataParameters &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::DataParameters &);
size_t get_serialized_size(
  const v2x_msg::msg::DataParameters &,
  size_t current_alignment);
size_t
max_serialized_size_DataParameters(
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
  const v2x_msg::msg::RestrictionClassAssignment &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::RestrictionClassAssignment &);
size_t get_serialized_size(
  const v2x_msg::msg::RestrictionClassAssignment &,
  size_t current_alignment);
size_t
max_serialized_size_RestrictionClassAssignment(
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
  const v2x_msg::msg::MAP & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: msgissuerevision
  cdr << ros_message.msgissuerevision;
  // Member: layertype
  cdr << ros_message.layertype;
  // Member: layerid
  cdr << ros_message.layerid;
  // Member: intersections
  {
    size_t size = ros_message.intersections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.intersections[i],
        cdr);
    }
  }
  // Member: roadsegments
  {
    size_t size = ros_message.roadsegments.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.roadsegments[i],
        cdr);
    }
  }
  // Member: dataparameters
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dataparameters,
    cdr);
  // Member: restrictionlist
  {
    size_t size = ros_message.restrictionlist.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.restrictionlist[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::MAP & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: msgissuerevision
  cdr >> ros_message.msgissuerevision;

  // Member: layertype
  cdr >> ros_message.layertype;

  // Member: layerid
  cdr >> ros_message.layerid;

  // Member: intersections
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.intersections.resize(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.intersections[i]);
    }
  }

  // Member: roadsegments
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.roadsegments.resize(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.roadsegments[i]);
    }
  }

  // Member: dataparameters
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dataparameters);

  // Member: restrictionlist
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.restrictionlist.resize(size);
    for (size_t i = 0; i < size; i++) {
      v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.restrictionlist[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::MAP & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msgissuerevision
  {
    size_t item_size = sizeof(ros_message.msgissuerevision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: layertype
  {
    size_t item_size = sizeof(ros_message.layertype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: layerid
  {
    size_t item_size = sizeof(ros_message.layerid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intersections
  {
    size_t array_size = ros_message.intersections.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.intersections[index], current_alignment);
    }
  }
  // Member: roadsegments
  {
    size_t array_size = ros_message.roadsegments.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.roadsegments[index], current_alignment);
    }
  }
  // Member: dataparameters

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dataparameters, current_alignment);
  // Member: restrictionlist
  {
    size_t array_size = ros_message.restrictionlist.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.restrictionlist[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_MAP(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: msgissuerevision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: layertype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: layerid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: intersections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionGeometry(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: roadsegments
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_RoadSegment(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: dataparameters
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_DataParameters(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: restrictionlist
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_RestrictionClassAssignment(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MAP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::MAP *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MAP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::MAP *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MAP__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::MAP *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MAP__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MAP(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MAP__callbacks = {
  "v2x_msg::msg",
  "MAP",
  _MAP__cdr_serialize,
  _MAP__cdr_deserialize,
  _MAP__get_serialized_size,
  _MAP__max_serialized_size
};

static rosidl_message_type_support_t _MAP__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MAP__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::MAP>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_MAP__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, MAP)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_MAP__handle;
}

#ifdef __cplusplus
}
#endif
