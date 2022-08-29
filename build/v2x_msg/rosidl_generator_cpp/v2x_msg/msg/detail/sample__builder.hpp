// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Sample.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SAMPLE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SAMPLE__BUILDER_HPP_

#include "v2x_msg/msg/detail/sample__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Sample_sampleend
{
public:
  explicit Init_Sample_sampleend(::v2x_msg::msg::Sample & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Sample sampleend(::v2x_msg::msg::Sample::_sampleend_type arg)
  {
    msg_.sampleend = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Sample msg_;
};

class Init_Sample_samplestart
{
public:
  Init_Sample_samplestart()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sample_sampleend samplestart(::v2x_msg::msg::Sample::_samplestart_type arg)
  {
    msg_.samplestart = std::move(arg);
    return Init_Sample_sampleend(msg_);
  }

private:
  ::v2x_msg::msg::Sample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Sample>()
{
  return v2x_msg::msg::builder::Init_Sample_samplestart();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SAMPLE__BUILDER_HPP_
