// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Latency.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LATENCY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__LATENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/latency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Latency_msgtime
{
public:
  Init_Latency_msgtime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_msg::msg::Latency msgtime(::v2x_msg::msg::Latency::_msgtime_type arg)
  {
    msg_.msgtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Latency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Latency>()
{
  return v2x_msg::msg::builder::Init_Latency_msgtime();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__LATENCY__BUILDER_HPP_
