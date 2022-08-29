// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RequestorDescription.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__BUILDER_HPP_

#include "v2x_msg/msg/detail/requestor_description__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RequestorDescription_transitschedule
{
public:
  explicit Init_RequestorDescription_transitschedule(::v2x_msg::msg::RequestorDescription & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RequestorDescription transitschedule(::v2x_msg::msg::RequestorDescription::_transitschedule_type arg)
  {
    msg_.transitschedule = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RequestorDescription msg_;
};

class Init_RequestorDescription_transitoccupancy
{
public:
  explicit Init_RequestorDescription_transitoccupancy(::v2x_msg::msg::RequestorDescription & msg)
  : msg_(msg)
  {}
  Init_RequestorDescription_transitschedule transitoccupancy(::v2x_msg::msg::RequestorDescription::_transitoccupancy_type arg)
  {
    msg_.transitoccupancy = std::move(arg);
    return Init_RequestorDescription_transitschedule(msg_);
  }

private:
  ::v2x_msg::msg::RequestorDescription msg_;
};

class Init_RequestorDescription_transitstatus
{
public:
  explicit Init_RequestorDescription_transitstatus(::v2x_msg::msg::RequestorDescription & msg)
  : msg_(msg)
  {}
  Init_RequestorDescription_transitoccupancy transitstatus(::v2x_msg::msg::RequestorDescription::_transitstatus_type arg)
  {
    msg_.transitstatus = std::move(arg);
    return Init_RequestorDescription_transitoccupancy(msg_);
  }

private:
  ::v2x_msg::msg::RequestorDescription msg_;
};

class Init_RequestorDescription_routename
{
public:
  explicit Init_RequestorDescription_routename(::v2x_msg::msg::RequestorDescription & msg)
  : msg_(msg)
  {}
  Init_RequestorDescription_transitstatus routename(::v2x_msg::msg::RequestorDescription::_routename_type arg)
  {
    msg_.routename = std::move(arg);
    return Init_RequestorDescription_transitstatus(msg_);
  }

private:
  ::v2x_msg::msg::RequestorDescription msg_;
};

class Init_RequestorDescription_name
{
public:
  explicit Init_RequestorDescription_name(::v2x_msg::msg::RequestorDescription & msg)
  : msg_(msg)
  {}
  Init_RequestorDescription_routename name(::v2x_msg::msg::RequestorDescription::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RequestorDescription_routename(msg_);
  }

private:
  ::v2x_msg::msg::RequestorDescription msg_;
};

class Init_RequestorDescription_position
{
public:
  explicit Init_RequestorDescription_position(::v2x_msg::msg::RequestorDescription & msg)
  : msg_(msg)
  {}
  Init_RequestorDescription_name position(::v2x_msg::msg::RequestorDescription::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RequestorDescription_name(msg_);
  }

private:
  ::v2x_msg::msg::RequestorDescription msg_;
};

class Init_RequestorDescription_type
{
public:
  explicit Init_RequestorDescription_type(::v2x_msg::msg::RequestorDescription & msg)
  : msg_(msg)
  {}
  Init_RequestorDescription_position type(::v2x_msg::msg::RequestorDescription::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RequestorDescription_position(msg_);
  }

private:
  ::v2x_msg::msg::RequestorDescription msg_;
};

class Init_RequestorDescription_id
{
public:
  Init_RequestorDescription_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestorDescription_type id(::v2x_msg::msg::RequestorDescription::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RequestorDescription_type(msg_);
  }

private:
  ::v2x_msg::msg::RequestorDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RequestorDescription>()
{
  return v2x_msg::msg::builder::Init_RequestorDescription_id();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__BUILDER_HPP_
