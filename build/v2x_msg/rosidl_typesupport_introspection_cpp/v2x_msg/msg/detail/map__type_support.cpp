// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/map__struct.hpp"
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

void MAP_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::MAP(_init);
}

void MAP_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::MAP *>(message_memory);
  typed_message->~MAP();
}

size_t size_function__MAP__intersections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::IntersectionGeometry> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MAP__intersections(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::IntersectionGeometry> *>(untyped_member);
  return &member[index];
}

void * get_function__MAP__intersections(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::IntersectionGeometry> *>(untyped_member);
  return &member[index];
}

void resize_function__MAP__intersections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::IntersectionGeometry> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MAP__roadsegments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::RoadSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MAP__roadsegments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::RoadSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__MAP__roadsegments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::RoadSegment> *>(untyped_member);
  return &member[index];
}

void resize_function__MAP__roadsegments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::RoadSegment> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MAP__restrictionlist(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::RestrictionClassAssignment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MAP__restrictionlist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::RestrictionClassAssignment> *>(untyped_member);
  return &member[index];
}

void * get_function__MAP__restrictionlist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::RestrictionClassAssignment> *>(untyped_member);
  return &member[index];
}

void resize_function__MAP__restrictionlist(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::RestrictionClassAssignment> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MAP_message_member_array[8] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MAP, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msgissuerevision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MAP, msgissuerevision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "layertype",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MAP, layertype),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "layerid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MAP, layerid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "intersections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::IntersectionGeometry>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MAP, intersections),  // bytes offset in struct
    nullptr,  // default value
    size_function__MAP__intersections,  // size() function pointer
    get_const_function__MAP__intersections,  // get_const(index) function pointer
    get_function__MAP__intersections,  // get(index) function pointer
    resize_function__MAP__intersections  // resize(index) function pointer
  },
  {
    "roadsegments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::RoadSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MAP, roadsegments),  // bytes offset in struct
    nullptr,  // default value
    size_function__MAP__roadsegments,  // size() function pointer
    get_const_function__MAP__roadsegments,  // get_const(index) function pointer
    get_function__MAP__roadsegments,  // get(index) function pointer
    resize_function__MAP__roadsegments  // resize(index) function pointer
  },
  {
    "dataparameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::DataParameters>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MAP, dataparameters),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "restrictionlist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::RestrictionClassAssignment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MAP, restrictionlist),  // bytes offset in struct
    nullptr,  // default value
    size_function__MAP__restrictionlist,  // size() function pointer
    get_const_function__MAP__restrictionlist,  // get_const(index) function pointer
    get_function__MAP__restrictionlist,  // get(index) function pointer
    resize_function__MAP__restrictionlist  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MAP_message_members = {
  "v2x_msg::msg",  // message namespace
  "MAP",  // message name
  8,  // number of fields
  sizeof(v2x_msg::msg::MAP),
  MAP_message_member_array,  // message members
  MAP_init_function,  // function to initialize message memory (memory has to be allocated)
  MAP_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MAP_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MAP_message_members,
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
get_message_type_support_handle<v2x_msg::msg::MAP>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::MAP_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, MAP)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::MAP_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
