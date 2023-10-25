// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/intersection_geometry__struct.hpp"
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

void IntersectionGeometry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::IntersectionGeometry(_init);
}

void IntersectionGeometry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::IntersectionGeometry *>(message_memory);
  typed_message->~IntersectionGeometry();
}

size_t size_function__IntersectionGeometry__speedlimits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::SpeedLimit> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionGeometry__speedlimits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::SpeedLimit> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionGeometry__speedlimits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::SpeedLimit> *>(untyped_member);
  return &member[index];
}

void fetch_function__IntersectionGeometry__speedlimits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::SpeedLimit *>(
    get_const_function__IntersectionGeometry__speedlimits(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::SpeedLimit *>(untyped_value);
  value = item;
}

void assign_function__IntersectionGeometry__speedlimits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::SpeedLimit *>(
    get_function__IntersectionGeometry__speedlimits(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::SpeedLimit *>(untyped_value);
  item = value;
}

void resize_function__IntersectionGeometry__speedlimits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::SpeedLimit> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IntersectionGeometry__laneset(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::GenericLane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionGeometry__laneset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::GenericLane> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionGeometry__laneset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::GenericLane> *>(untyped_member);
  return &member[index];
}

void fetch_function__IntersectionGeometry__laneset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::GenericLane *>(
    get_const_function__IntersectionGeometry__laneset(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::GenericLane *>(untyped_value);
  value = item;
}

void assign_function__IntersectionGeometry__laneset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::GenericLane *>(
    get_function__IntersectionGeometry__laneset(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::GenericLane *>(untyped_value);
  item = value;
}

void resize_function__IntersectionGeometry__laneset(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::GenericLane> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IntersectionGeometry_message_member_array[8] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionGeometry, name),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::IntersectionReferenceID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionGeometry, id),  // bytes offset in struct
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
    offsetof(v2x_msg::msg::IntersectionGeometry, revision),  // bytes offset in struct
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
    offsetof(v2x_msg::msg::IntersectionGeometry, refpoint),  // bytes offset in struct
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
    offsetof(v2x_msg::msg::IntersectionGeometry, lanewidth),  // bytes offset in struct
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
    offsetof(v2x_msg::msg::IntersectionGeometry, speedlimits),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionGeometry__speedlimits,  // size() function pointer
    get_const_function__IntersectionGeometry__speedlimits,  // get_const(index) function pointer
    get_function__IntersectionGeometry__speedlimits,  // get(index) function pointer
    fetch_function__IntersectionGeometry__speedlimits,  // fetch(index, &value) function pointer
    assign_function__IntersectionGeometry__speedlimits,  // assign(index, value) function pointer
    resize_function__IntersectionGeometry__speedlimits  // resize(index) function pointer
  },
  {
    "laneset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::GenericLane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionGeometry, laneset),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionGeometry__laneset,  // size() function pointer
    get_const_function__IntersectionGeometry__laneset,  // get_const(index) function pointer
    get_function__IntersectionGeometry__laneset,  // get(index) function pointer
    fetch_function__IntersectionGeometry__laneset,  // fetch(index, &value) function pointer
    assign_function__IntersectionGeometry__laneset,  // assign(index, value) function pointer
    resize_function__IntersectionGeometry__laneset  // resize(index) function pointer
  },
  {
    "preemptprioritydata",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionGeometry, preemptprioritydata),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IntersectionGeometry_message_members = {
  "v2x_msg::msg",  // message namespace
  "IntersectionGeometry",  // message name
  8,  // number of fields
  sizeof(v2x_msg::msg::IntersectionGeometry),
  IntersectionGeometry_message_member_array,  // message members
  IntersectionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  IntersectionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IntersectionGeometry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IntersectionGeometry_message_members,
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
get_message_type_support_handle<v2x_msg::msg::IntersectionGeometry>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::IntersectionGeometry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, IntersectionGeometry)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::IntersectionGeometry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
