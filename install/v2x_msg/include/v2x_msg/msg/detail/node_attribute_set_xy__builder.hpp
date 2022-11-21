// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_

#include "v2x_msg/msg/detail/node_attribute_set_xy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeAttributeSetXY_delevation
{
public:
  explicit Init_NodeAttributeSetXY_delevation(::v2x_msg::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeAttributeSetXY delevation(::v2x_msg::msg::NodeAttributeSetXY::_delevation_type arg)
  {
    msg_.delevation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_dwidth
{
public:
  explicit Init_NodeAttributeSetXY_dwidth(::v2x_msg::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_delevation dwidth(::v2x_msg::msg::NodeAttributeSetXY::_dwidth_type arg)
  {
    msg_.dwidth = std::move(arg);
    return Init_NodeAttributeSetXY_delevation(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_data
{
public:
  explicit Init_NodeAttributeSetXY_data(::v2x_msg::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_dwidth data(::v2x_msg::msg::NodeAttributeSetXY::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_NodeAttributeSetXY_dwidth(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_enabled
{
public:
  explicit Init_NodeAttributeSetXY_enabled(::v2x_msg::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_data enabled(::v2x_msg::msg::NodeAttributeSetXY::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_NodeAttributeSetXY_data(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_disabled
{
public:
  explicit Init_NodeAttributeSetXY_disabled(::v2x_msg::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_enabled disabled(::v2x_msg::msg::NodeAttributeSetXY::_disabled_type arg)
  {
    msg_.disabled = std::move(arg);
    return Init_NodeAttributeSetXY_enabled(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_localnode
{
public:
  Init_NodeAttributeSetXY_localnode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeAttributeSetXY_disabled localnode(::v2x_msg::msg::NodeAttributeSetXY::_localnode_type arg)
  {
    msg_.localnode = std::move(arg);
    return Init_NodeAttributeSetXY_disabled(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeAttributeSetXY>()
{
  return v2x_msg::msg::builder::Init_NodeAttributeSetXY_localnode();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_
