// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/intersection_state__struct.hpp"
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

void IntersectionState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::IntersectionState(_init);
}

void IntersectionState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::IntersectionState *>(message_memory);
  typed_message->~IntersectionState();
}

size_t size_function__IntersectionState__enabledlanes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::LaneID> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionState__enabledlanes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::LaneID> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionState__enabledlanes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::LaneID> *>(untyped_member);
  return &member[index];
}

void fetch_function__IntersectionState__enabledlanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::LaneID *>(
    get_const_function__IntersectionState__enabledlanes(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::LaneID *>(untyped_value);
  value = item;
}

void assign_function__IntersectionState__enabledlanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::LaneID *>(
    get_function__IntersectionState__enabledlanes(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::LaneID *>(untyped_value);
  item = value;
}

void resize_function__IntersectionState__enabledlanes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::LaneID> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IntersectionState__states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::MovementState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionState__states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::MovementState> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionState__states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::MovementState> *>(untyped_member);
  return &member[index];
}

void fetch_function__IntersectionState__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::MovementState *>(
    get_const_function__IntersectionState__states(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::MovementState *>(untyped_value);
  value = item;
}

void assign_function__IntersectionState__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::MovementState *>(
    get_function__IntersectionState__states(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::MovementState *>(untyped_value);
  item = value;
}

void resize_function__IntersectionState__states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::MovementState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IntersectionState__maneuverassistlist(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::ConnectionManeuverAssist> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionState__maneuverassistlist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::ConnectionManeuverAssist> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionState__maneuverassistlist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::ConnectionManeuverAssist> *>(untyped_member);
  return &member[index];
}

void fetch_function__IntersectionState__maneuverassistlist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::ConnectionManeuverAssist *>(
    get_const_function__IntersectionState__maneuverassistlist(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::ConnectionManeuverAssist *>(untyped_value);
  value = item;
}

void assign_function__IntersectionState__maneuverassistlist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::ConnectionManeuverAssist *>(
    get_function__IntersectionState__maneuverassistlist(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::ConnectionManeuverAssist *>(untyped_value);
  item = value;
}

void resize_function__IntersectionState__maneuverassistlist(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::ConnectionManeuverAssist> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IntersectionState_message_member_array[9] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionState, name),  // bytes offset in struct
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
    offsetof(v2x_msg::msg::IntersectionState, id),  // bytes offset in struct
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
    offsetof(v2x_msg::msg::IntersectionState, revision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::IntersectionStatusObject>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionState, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "moy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionState, moy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionState, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enabledlanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::LaneID>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionState, enabledlanes),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionState__enabledlanes,  // size() function pointer
    get_const_function__IntersectionState__enabledlanes,  // get_const(index) function pointer
    get_function__IntersectionState__enabledlanes,  // get(index) function pointer
    fetch_function__IntersectionState__enabledlanes,  // fetch(index, &value) function pointer
    assign_function__IntersectionState__enabledlanes,  // assign(index, value) function pointer
    resize_function__IntersectionState__enabledlanes  // resize(index) function pointer
  },
  {
    "states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::MovementState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionState, states),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionState__states,  // size() function pointer
    get_const_function__IntersectionState__states,  // get_const(index) function pointer
    get_function__IntersectionState__states,  // get(index) function pointer
    fetch_function__IntersectionState__states,  // fetch(index, &value) function pointer
    assign_function__IntersectionState__states,  // assign(index, value) function pointer
    resize_function__IntersectionState__states  // resize(index) function pointer
  },
  {
    "maneuverassistlist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::ConnectionManeuverAssist>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::IntersectionState, maneuverassistlist),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionState__maneuverassistlist,  // size() function pointer
    get_const_function__IntersectionState__maneuverassistlist,  // get_const(index) function pointer
    get_function__IntersectionState__maneuverassistlist,  // get(index) function pointer
    fetch_function__IntersectionState__maneuverassistlist,  // fetch(index, &value) function pointer
    assign_function__IntersectionState__maneuverassistlist,  // assign(index, value) function pointer
    resize_function__IntersectionState__maneuverassistlist  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IntersectionState_message_members = {
  "v2x_msg::msg",  // message namespace
  "IntersectionState",  // message name
  9,  // number of fields
  sizeof(v2x_msg::msg::IntersectionState),
  IntersectionState_message_member_array,  // message members
  IntersectionState_init_function,  // function to initialize message memory (memory has to be allocated)
  IntersectionState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IntersectionState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IntersectionState_message_members,
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
get_message_type_support_handle<v2x_msg::msg::IntersectionState>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::IntersectionState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, IntersectionState)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::IntersectionState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
