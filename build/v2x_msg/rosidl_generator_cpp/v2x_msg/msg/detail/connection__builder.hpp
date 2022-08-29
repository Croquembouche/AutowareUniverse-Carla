// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTION__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTION__BUILDER_HPP_

#include "v2x_msg/msg/detail/connection__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Connection_laneconnectonid
{
public:
  explicit Init_Connection_laneconnectonid(::v2x_msg::msg::Connection & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Connection laneconnectonid(::v2x_msg::msg::Connection::_laneconnectonid_type arg)
  {
    msg_.laneconnectonid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Connection msg_;
};

class Init_Connection_userclass
{
public:
  explicit Init_Connection_userclass(::v2x_msg::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_laneconnectonid userclass(::v2x_msg::msg::Connection::_userclass_type arg)
  {
    msg_.userclass = std::move(arg);
    return Init_Connection_laneconnectonid(msg_);
  }

private:
  ::v2x_msg::msg::Connection msg_;
};

class Init_Connection_signalgroup
{
public:
  explicit Init_Connection_signalgroup(::v2x_msg::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_userclass signalgroup(::v2x_msg::msg::Connection::_signalgroup_type arg)
  {
    msg_.signalgroup = std::move(arg);
    return Init_Connection_userclass(msg_);
  }

private:
  ::v2x_msg::msg::Connection msg_;
};

class Init_Connection_remoteintersection
{
public:
  explicit Init_Connection_remoteintersection(::v2x_msg::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_signalgroup remoteintersection(::v2x_msg::msg::Connection::_remoteintersection_type arg)
  {
    msg_.remoteintersection = std::move(arg);
    return Init_Connection_signalgroup(msg_);
  }

private:
  ::v2x_msg::msg::Connection msg_;
};

class Init_Connection_connectinglane
{
public:
  Init_Connection_connectinglane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connection_remoteintersection connectinglane(::v2x_msg::msg::Connection::_connectinglane_type arg)
  {
    msg_.connectinglane = std::move(arg);
    return Init_Connection_remoteintersection(msg_);
  }

private:
  ::v2x_msg::msg::Connection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Connection>()
{
  return v2x_msg::msg::builder::Init_Connection_connectinglane();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONNECTION__BUILDER_HPP_
