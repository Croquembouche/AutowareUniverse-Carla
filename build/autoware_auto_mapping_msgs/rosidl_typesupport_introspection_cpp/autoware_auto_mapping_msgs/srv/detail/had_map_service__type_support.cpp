// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_mapping_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void HADMapService_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_mapping_msgs::srv::HADMapService_Request(_init);
}

void HADMapService_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_mapping_msgs::srv::HADMapService_Request *>(message_memory);
  typed_message->~HADMapService_Request();
}

size_t size_function__HADMapService_Request__requested_primitives(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HADMapService_Request__requested_primitives(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__HADMapService_Request__requested_primitives(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__HADMapService_Request__requested_primitives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__HADMapService_Request__requested_primitives(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__HADMapService_Request__requested_primitives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__HADMapService_Request__requested_primitives(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__HADMapService_Request__requested_primitives(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__HADMapService_Request__geom_upper_bound(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HADMapService_Request__geom_upper_bound(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__HADMapService_Request__geom_upper_bound(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__HADMapService_Request__geom_upper_bound(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__HADMapService_Request__geom_upper_bound(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__HADMapService_Request__geom_upper_bound(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__HADMapService_Request__geom_upper_bound(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__HADMapService_Request__geom_upper_bound(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__HADMapService_Request__geom_lower_bound(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HADMapService_Request__geom_lower_bound(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__HADMapService_Request__geom_lower_bound(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__HADMapService_Request__geom_lower_bound(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__HADMapService_Request__geom_lower_bound(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__HADMapService_Request__geom_lower_bound(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__HADMapService_Request__geom_lower_bound(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__HADMapService_Request__geom_lower_bound(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HADMapService_Request_message_member_array[3] = {
  {
    "requested_primitives",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs::srv::HADMapService_Request, requested_primitives),  // bytes offset in struct
    nullptr,  // default value
    size_function__HADMapService_Request__requested_primitives,  // size() function pointer
    get_const_function__HADMapService_Request__requested_primitives,  // get_const(index) function pointer
    get_function__HADMapService_Request__requested_primitives,  // get(index) function pointer
    fetch_function__HADMapService_Request__requested_primitives,  // fetch(index, &value) function pointer
    assign_function__HADMapService_Request__requested_primitives,  // assign(index, value) function pointer
    resize_function__HADMapService_Request__requested_primitives  // resize(index) function pointer
  },
  {
    "geom_upper_bound",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_mapping_msgs::srv::HADMapService_Request, geom_upper_bound),  // bytes offset in struct
    nullptr,  // default value
    size_function__HADMapService_Request__geom_upper_bound,  // size() function pointer
    get_const_function__HADMapService_Request__geom_upper_bound,  // get_const(index) function pointer
    get_function__HADMapService_Request__geom_upper_bound,  // get(index) function pointer
    fetch_function__HADMapService_Request__geom_upper_bound,  // fetch(index, &value) function pointer
    assign_function__HADMapService_Request__geom_upper_bound,  // assign(index, value) function pointer
    resize_function__HADMapService_Request__geom_upper_bound  // resize(index) function pointer
  },
  {
    "geom_lower_bound",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_mapping_msgs::srv::HADMapService_Request, geom_lower_bound),  // bytes offset in struct
    nullptr,  // default value
    size_function__HADMapService_Request__geom_lower_bound,  // size() function pointer
    get_const_function__HADMapService_Request__geom_lower_bound,  // get_const(index) function pointer
    get_function__HADMapService_Request__geom_lower_bound,  // get(index) function pointer
    fetch_function__HADMapService_Request__geom_lower_bound,  // fetch(index, &value) function pointer
    assign_function__HADMapService_Request__geom_lower_bound,  // assign(index, value) function pointer
    resize_function__HADMapService_Request__geom_lower_bound  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HADMapService_Request_message_members = {
  "autoware_auto_mapping_msgs::srv",  // message namespace
  "HADMapService_Request",  // message name
  3,  // number of fields
  sizeof(autoware_auto_mapping_msgs::srv::HADMapService_Request),
  HADMapService_Request_message_member_array,  // message members
  HADMapService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  HADMapService_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HADMapService_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HADMapService_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autoware_auto_mapping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_mapping_msgs::srv::HADMapService_Request>()
{
  return &::autoware_auto_mapping_msgs::srv::rosidl_typesupport_introspection_cpp::HADMapService_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_mapping_msgs, srv, HADMapService_Request)() {
  return &::autoware_auto_mapping_msgs::srv::rosidl_typesupport_introspection_cpp::HADMapService_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_mapping_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void HADMapService_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_mapping_msgs::srv::HADMapService_Response(_init);
}

void HADMapService_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_mapping_msgs::srv::HADMapService_Response *>(message_memory);
  typed_message->~HADMapService_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HADMapService_Response_message_member_array[2] = {
  {
    "map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_auto_mapping_msgs::msg::HADMapBin>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs::srv::HADMapService_Response, map),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "answer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs::srv::HADMapService_Response, answer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HADMapService_Response_message_members = {
  "autoware_auto_mapping_msgs::srv",  // message namespace
  "HADMapService_Response",  // message name
  2,  // number of fields
  sizeof(autoware_auto_mapping_msgs::srv::HADMapService_Response),
  HADMapService_Response_message_member_array,  // message members
  HADMapService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  HADMapService_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HADMapService_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HADMapService_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autoware_auto_mapping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_mapping_msgs::srv::HADMapService_Response>()
{
  return &::autoware_auto_mapping_msgs::srv::rosidl_typesupport_introspection_cpp::HADMapService_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_mapping_msgs, srv, HADMapService_Response)() {
  return &::autoware_auto_mapping_msgs::srv::rosidl_typesupport_introspection_cpp::HADMapService_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace autoware_auto_mapping_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers HADMapService_service_members = {
  "autoware_auto_mapping_msgs::srv",  // service namespace
  "HADMapService",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<autoware_auto_mapping_msgs::srv::HADMapService>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t HADMapService_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HADMapService_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autoware_auto_mapping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<autoware_auto_mapping_msgs::srv::HADMapService>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::autoware_auto_mapping_msgs::srv::rosidl_typesupport_introspection_cpp::HADMapService_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::autoware_auto_mapping_msgs::srv::HADMapService_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::autoware_auto_mapping_msgs::srv::HADMapService_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_mapping_msgs, srv, HADMapService)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<autoware_auto_mapping_msgs::srv::HADMapService>();
}

#ifdef __cplusplus
}
#endif
