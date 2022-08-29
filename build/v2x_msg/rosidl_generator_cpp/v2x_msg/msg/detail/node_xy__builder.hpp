// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_XY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_XY__BUILDER_HPP_

#include "v2x_msg/msg/detail/node_xy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeXY_attributes
{
public:
  explicit Init_NodeXY_attributes(::v2x_msg::msg::NodeXY & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeXY attributes(::v2x_msg::msg::NodeXY::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeXY msg_;
};

class Init_NodeXY_delta
{
public:
  Init_NodeXY_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeXY_attributes delta(::v2x_msg::msg::NodeXY::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_NodeXY_attributes(msg_);
  }

private:
  ::v2x_msg::msg::NodeXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeXY>()
{
  return v2x_msg::msg::builder::Init_NodeXY_delta();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_XY__BUILDER_HPP_
