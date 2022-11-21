// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SRM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SRM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SRM__BUILDER_HPP_

#include "v2x_msg/msg/detail/srm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SRM_requestor
{
public:
  explicit Init_SRM_requestor(::v2x_msg::msg::SRM & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SRM requestor(::v2x_msg::msg::SRM::_requestor_type arg)
  {
    msg_.requestor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SRM msg_;
};

class Init_SRM_requests
{
public:
  explicit Init_SRM_requests(::v2x_msg::msg::SRM & msg)
  : msg_(msg)
  {}
  Init_SRM_requestor requests(::v2x_msg::msg::SRM::_requests_type arg)
  {
    msg_.requests = std::move(arg);
    return Init_SRM_requestor(msg_);
  }

private:
  ::v2x_msg::msg::SRM msg_;
};

class Init_SRM_sequencenumber
{
public:
  explicit Init_SRM_sequencenumber(::v2x_msg::msg::SRM & msg)
  : msg_(msg)
  {}
  Init_SRM_requests sequencenumber(::v2x_msg::msg::SRM::_sequencenumber_type arg)
  {
    msg_.sequencenumber = std::move(arg);
    return Init_SRM_requests(msg_);
  }

private:
  ::v2x_msg::msg::SRM msg_;
};

class Init_SRM_second
{
public:
  explicit Init_SRM_second(::v2x_msg::msg::SRM & msg)
  : msg_(msg)
  {}
  Init_SRM_sequencenumber second(::v2x_msg::msg::SRM::_second_type arg)
  {
    msg_.second = std::move(arg);
    return Init_SRM_sequencenumber(msg_);
  }

private:
  ::v2x_msg::msg::SRM msg_;
};

class Init_SRM_timestamp
{
public:
  Init_SRM_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SRM_second timestamp(::v2x_msg::msg::SRM::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SRM_second(msg_);
  }

private:
  ::v2x_msg::msg::SRM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SRM>()
{
  return v2x_msg::msg::builder::Init_SRM_timestamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SRM__BUILDER_HPP_
