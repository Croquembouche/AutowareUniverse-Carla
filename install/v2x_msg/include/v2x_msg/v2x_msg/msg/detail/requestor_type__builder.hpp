// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RequestorType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/requestor_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RequestorType_hpmstype
{
public:
  explicit Init_RequestorType_hpmstype(::v2x_msg::msg::RequestorType & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RequestorType hpmstype(::v2x_msg::msg::RequestorType::_hpmstype_type arg)
  {
    msg_.hpmstype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RequestorType msg_;
};

class Init_RequestorType_iso3833vehicletype
{
public:
  explicit Init_RequestorType_iso3833vehicletype(::v2x_msg::msg::RequestorType & msg)
  : msg_(msg)
  {}
  Init_RequestorType_hpmstype iso3833vehicletype(::v2x_msg::msg::RequestorType::_iso3833vehicletype_type arg)
  {
    msg_.iso3833vehicletype = std::move(arg);
    return Init_RequestorType_hpmstype(msg_);
  }

private:
  ::v2x_msg::msg::RequestorType msg_;
};

class Init_RequestorType_request
{
public:
  explicit Init_RequestorType_request(::v2x_msg::msg::RequestorType & msg)
  : msg_(msg)
  {}
  Init_RequestorType_iso3833vehicletype request(::v2x_msg::msg::RequestorType::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RequestorType_iso3833vehicletype(msg_);
  }

private:
  ::v2x_msg::msg::RequestorType msg_;
};

class Init_RequestorType_subrole
{
public:
  explicit Init_RequestorType_subrole(::v2x_msg::msg::RequestorType & msg)
  : msg_(msg)
  {}
  Init_RequestorType_request subrole(::v2x_msg::msg::RequestorType::_subrole_type arg)
  {
    msg_.subrole = std::move(arg);
    return Init_RequestorType_request(msg_);
  }

private:
  ::v2x_msg::msg::RequestorType msg_;
};

class Init_RequestorType_role
{
public:
  Init_RequestorType_role()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestorType_subrole role(::v2x_msg::msg::RequestorType::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_RequestorType_subrole(msg_);
  }

private:
  ::v2x_msg::msg::RequestorType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RequestorType>()
{
  return v2x_msg::msg::builder::Init_RequestorType_role();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__BUILDER_HPP_
