// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/Description.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/description__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/description__struct.hpp"

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
  const v2x_msg::msg::OffsetSystem &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::OffsetSystem &);
size_t get_serialized_size(
  const v2x_msg::msg::OffsetSystem &,
  size_t current_alignment);
size_t
max_serialized_size_OffsetSystem(
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
  const v2x_msg::msg::GeometricProjection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::GeometricProjection &);
size_t get_serialized_size(
  const v2x_msg::msg::GeometricProjection &,
  size_t current_alignment);
size_t
max_serialized_size_GeometricProjection(
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
  const v2x_msg::msg::ValidRegion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::ValidRegion &);
size_t get_serialized_size(
  const v2x_msg::msg::ValidRegion &,
  size_t current_alignment);
size_t
max_serialized_size_ValidRegion(
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
  const v2x_msg::msg::Description & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: path
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.path,
    cdr);
  // Member: geometry
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.geometry,
    cdr);
  // Member: oldregion
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.oldregion,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::Description & ros_message)
{
  // Member: path
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.path);

  // Member: geometry
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.geometry);

  // Member: oldregion
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.oldregion);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::Description & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: path

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.path, current_alignment);
  // Member: geometry

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.geometry, current_alignment);
  // Member: oldregion

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.oldregion, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_Description(
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


  // Member: path
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_OffsetSystem(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: geometry
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_GeometricProjection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: oldregion
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_ValidRegion(
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
    using DataType = v2x_msg::msg::Description;
    is_plain =
      (
      offsetof(DataType, oldregion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Description__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::Description *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Description__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::Description *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Description__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::Description *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Description__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Description(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Description__callbacks = {
  "v2x_msg::msg",
  "Description",
  _Description__cdr_serialize,
  _Description__cdr_deserialize,
  _Description__get_serialized_size,
  _Description__max_serialized_size
};

static rosidl_message_type_support_t _Description__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Description__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::Description>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_Description__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, Description)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_Description__handle;
}

#ifdef __cplusplus
}
#endif
