// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/road_segment__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RoadSegment_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::RoadSegment(_init);
}

void RoadSegment_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::RoadSegment *>(message_memory);
  typed_message->~RoadSegment();
}

size_t size_function__RoadSegment__speedlimits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::SpeedLimit> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoadSegment__speedlimits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::SpeedLimit> *>(untyped_member);
  return &member[index];
}

void * get_function__RoadSegment__speedlimits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::SpeedLimit> *>(untyped_member);
  return &member[index];
}

void fetch_function__RoadSegment__speedlimits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::SpeedLimit *>(
    get_const_function__RoadSegment__speedlimits(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::SpeedLimit *>(untyped_value);
  value = item;
}

void assign_function__RoadSegment__speedlimits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::SpeedLimit *>(
    get_function__RoadSegment__speedlimits(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::SpeedLimit *>(untyped_value);
  item = value;
}

void resize_function__RoadSegment__speedlimits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::SpeedLimit> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RoadSegment__roadlaneset(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::GenericLane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoadSegment__roadlaneset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::GenericLane> *>(untyped_member);
  return &member[index];
}

void * get_function__RoadSegment__roadlaneset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::GenericLane> *>(untyped_member);
  return &member[index];
}

void fetch_function__RoadSegment__roadlaneset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::GenericLane *>(
    get_const_function__RoadSegment__roadlaneset(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::GenericLane *>(untyped_value);
  value = item;
}

void assign_function__RoadSegment__roadlaneset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::GenericLane *>(
    get_function__RoadSegment__roadlaneset(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::GenericLane *>(untyped_value);
  item = value;
}

void resize_function__RoadSegment__roadlaneset(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::GenericLane> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RoadSegment_message_member_array[7] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RoadSegment, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::RoadSegmentReferenceID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RoadSegment, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "revision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RoadSegment, revision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "refpoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::Position3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RoadSegment, refpoint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lanewidth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RoadSegment, lanewidth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speedlimits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::SpeedLimit>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RoadSegment, speedlimits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoadSegment__speedlimits,  // size() function pointer
    get_const_function__RoadSegment__speedlimits,  // get_const(index) function pointer
    get_function__RoadSegment__speedlimits,  // get(index) function pointer
    fetch_function__RoadSegment__speedlimits,  // fetch(index, &value) function pointer
    assign_function__RoadSegment__speedlimits,  // assign(index, value) function pointer
    resize_function__RoadSegment__speedlimits  // resize(index) function pointer
  },
  {
    "roadlaneset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::GenericLane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RoadSegment, roadlaneset),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoadSegment__roadlaneset,  // size() function pointer
    get_const_function__RoadSegment__roadlaneset,  // get_const(index) function pointer
    get_function__RoadSegment__roadlaneset,  // get(index) function pointer
    fetch_function__RoadSegment__roadlaneset,  // fetch(index, &value) function pointer
    assign_function__RoadSegment__roadlaneset,  // assign(index, value) function pointer
    resize_function__RoadSegment__roadlaneset  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RoadSegment_message_members = {
  "v2x_msg::msg",  // message namespace
  "RoadSegment",  // message name
  7,  // number of fields
  sizeof(v2x_msg::msg::RoadSegment),
  RoadSegment_message_member_array,  // message members
  RoadSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  RoadSegment_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RoadSegment_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RoadSegment_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2x_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_msg::msg::RoadSegment>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::RoadSegment_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, RoadSegment)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::RoadSegment_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
