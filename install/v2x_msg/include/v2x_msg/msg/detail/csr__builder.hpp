// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/CSR.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CSR__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__CSR__BUILDER_HPP_

#include "v2x_msg/msg/detail/csr__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_CSR_requests
{
public:
  explicit Init_CSR_requests(::v2x_msg::msg::CSR & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::CSR requests(::v2x_msg::msg::CSR::_requests_type arg)
  {
    msg_.requests = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::CSR msg_;
};

class Init_CSR_id
{
public:
  explicit Init_CSR_id(::v2x_msg::msg::CSR & msg)
  : msg_(msg)
  {}
  Init_CSR_requests id(::v2x_msg::msg::CSR::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CSR_requests(msg_);
  }

private:
  ::v2x_msg::msg::CSR msg_;
};

class Init_CSR_msgcnt
{
public:
  explicit Init_CSR_msgcnt(::v2x_msg::msg::CSR & msg)
  : msg_(msg)
  {}
  Init_CSR_id msgcnt(::v2x_msg::msg::CSR::_msgcnt_type arg)
  {
    msg_.msgcnt = std::move(arg);
    return Init_CSR_id(msg_);
  }

private:
  ::v2x_msg::msg::CSR msg_;
};

class Init_CSR_timestamp
{
public:
  Init_CSR_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CSR_msgcnt timestamp(::v2x_msg::msg::CSR::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CSR_msgcnt(msg_);
  }

private:
  ::v2x_msg::msg::CSR msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::CSR>()
{
  return v2x_msg::msg::builder::Init_CSR_timestamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CSR__BUILDER_HPP_
