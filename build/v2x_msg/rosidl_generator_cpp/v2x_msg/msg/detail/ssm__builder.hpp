// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SSM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SSM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/ssm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SSM_status
{
public:
  explicit Init_SSM_status(::v2x_msg::msg::SSM & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SSM status(::v2x_msg::msg::SSM::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SSM msg_;
};

class Init_SSM_sequencenumber
{
public:
  explicit Init_SSM_sequencenumber(::v2x_msg::msg::SSM & msg)
  : msg_(msg)
  {}
  Init_SSM_status sequencenumber(::v2x_msg::msg::SSM::_sequencenumber_type arg)
  {
    msg_.sequencenumber = std::move(arg);
    return Init_SSM_status(msg_);
  }

private:
  ::v2x_msg::msg::SSM msg_;
};

class Init_SSM_second
{
public:
  explicit Init_SSM_second(::v2x_msg::msg::SSM & msg)
  : msg_(msg)
  {}
  Init_SSM_sequencenumber second(::v2x_msg::msg::SSM::_second_type arg)
  {
    msg_.second = std::move(arg);
    return Init_SSM_sequencenumber(msg_);
  }

private:
  ::v2x_msg::msg::SSM msg_;
};

class Init_SSM_timestamp
{
public:
  Init_SSM_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SSM_second timestamp(::v2x_msg::msg::SSM::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SSM_second(msg_);
  }

private:
  ::v2x_msg::msg::SSM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SSM>()
{
  return v2x_msg::msg::builder::Init_SSM_timestamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SSM__BUILDER_HPP_
