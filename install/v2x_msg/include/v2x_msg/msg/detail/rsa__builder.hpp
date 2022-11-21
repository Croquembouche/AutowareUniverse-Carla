// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RSA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RSA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__RSA__BUILDER_HPP_

#include "v2x_msg/msg/detail/rsa__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RSA_furtherinfoid
{
public:
  explicit Init_RSA_furtherinfoid(::v2x_msg::msg::RSA & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RSA furtherinfoid(::v2x_msg::msg::RSA::_furtherinfoid_type arg)
  {
    msg_.furtherinfoid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

class Init_RSA_position
{
public:
  explicit Init_RSA_position(::v2x_msg::msg::RSA & msg)
  : msg_(msg)
  {}
  Init_RSA_furtherinfoid position(::v2x_msg::msg::RSA::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RSA_furtherinfoid(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

class Init_RSA_extent
{
public:
  explicit Init_RSA_extent(::v2x_msg::msg::RSA & msg)
  : msg_(msg)
  {}
  Init_RSA_position extent(::v2x_msg::msg::RSA::_extent_type arg)
  {
    msg_.extent = std::move(arg);
    return Init_RSA_position(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

class Init_RSA_heading
{
public:
  explicit Init_RSA_heading(::v2x_msg::msg::RSA & msg)
  : msg_(msg)
  {}
  Init_RSA_extent heading(::v2x_msg::msg::RSA::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_RSA_extent(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

class Init_RSA_priority
{
public:
  explicit Init_RSA_priority(::v2x_msg::msg::RSA & msg)
  : msg_(msg)
  {}
  Init_RSA_heading priority(::v2x_msg::msg::RSA::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_RSA_heading(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

class Init_RSA_desrciption
{
public:
  explicit Init_RSA_desrciption(::v2x_msg::msg::RSA & msg)
  : msg_(msg)
  {}
  Init_RSA_priority desrciption(::v2x_msg::msg::RSA::_desrciption_type arg)
  {
    msg_.desrciption = std::move(arg);
    return Init_RSA_priority(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

class Init_RSA_typeevent
{
public:
  explicit Init_RSA_typeevent(::v2x_msg::msg::RSA & msg)
  : msg_(msg)
  {}
  Init_RSA_desrciption typeevent(::v2x_msg::msg::RSA::_typeevent_type arg)
  {
    msg_.typeevent = std::move(arg);
    return Init_RSA_desrciption(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

class Init_RSA_timestamp
{
public:
  explicit Init_RSA_timestamp(::v2x_msg::msg::RSA & msg)
  : msg_(msg)
  {}
  Init_RSA_typeevent timestamp(::v2x_msg::msg::RSA::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RSA_typeevent(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

class Init_RSA_msgcnt
{
public:
  Init_RSA_msgcnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RSA_timestamp msgcnt(::v2x_msg::msg::RSA::_msgcnt_type arg)
  {
    msg_.msgcnt = std::move(arg);
    return Init_RSA_timestamp(msg_);
  }

private:
  ::v2x_msg::msg::RSA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RSA>()
{
  return v2x_msg::msg::builder::Init_RSA_msgcnt();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RSA__BUILDER_HPP_
