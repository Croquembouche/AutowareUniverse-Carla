// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LL__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LL__BUILDER_HPP_

#include "v2x_msg/msg/detail/node_ll__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeLL_attributes
{
public:
  explicit Init_NodeLL_attributes(::v2x_msg::msg::NodeLL & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeLL attributes(::v2x_msg::msg::NodeLL::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeLL msg_;
};

class Init_NodeLL_delta
{
public:
  Init_NodeLL_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeLL_attributes delta(::v2x_msg::msg::NodeLL::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_NodeLL_attributes(msg_);
  }

private:
  ::v2x_msg::msg::NodeLL msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeLL>()
{
  return v2x_msg::msg::builder::Init_NodeLL_delta();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_LL__BUILDER_HPP_
