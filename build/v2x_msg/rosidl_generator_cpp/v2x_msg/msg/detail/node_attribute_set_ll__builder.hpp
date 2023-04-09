// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeAttributeSetLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/node_attribute_set_ll__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeAttributeSetLL_delevation
{
public:
  explicit Init_NodeAttributeSetLL_delevation(::v2x_msg::msg::NodeAttributeSetLL & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeAttributeSetLL delevation(::v2x_msg::msg::NodeAttributeSetLL::_delevation_type arg)
  {
    msg_.delevation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetLL msg_;
};

class Init_NodeAttributeSetLL_dwidth
{
public:
  explicit Init_NodeAttributeSetLL_dwidth(::v2x_msg::msg::NodeAttributeSetLL & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetLL_delevation dwidth(::v2x_msg::msg::NodeAttributeSetLL::_dwidth_type arg)
  {
    msg_.dwidth = std::move(arg);
    return Init_NodeAttributeSetLL_delevation(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetLL msg_;
};

class Init_NodeAttributeSetLL_data
{
public:
  explicit Init_NodeAttributeSetLL_data(::v2x_msg::msg::NodeAttributeSetLL & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetLL_dwidth data(::v2x_msg::msg::NodeAttributeSetLL::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_NodeAttributeSetLL_dwidth(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetLL msg_;
};

class Init_NodeAttributeSetLL_enabled
{
public:
  explicit Init_NodeAttributeSetLL_enabled(::v2x_msg::msg::NodeAttributeSetLL & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetLL_data enabled(::v2x_msg::msg::NodeAttributeSetLL::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_NodeAttributeSetLL_data(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetLL msg_;
};

class Init_NodeAttributeSetLL_disabled
{
public:
  explicit Init_NodeAttributeSetLL_disabled(::v2x_msg::msg::NodeAttributeSetLL & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetLL_enabled disabled(::v2x_msg::msg::NodeAttributeSetLL::_disabled_type arg)
  {
    msg_.disabled = std::move(arg);
    return Init_NodeAttributeSetLL_enabled(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetLL msg_;
};

class Init_NodeAttributeSetLL_localnode
{
public:
  Init_NodeAttributeSetLL_localnode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeAttributeSetLL_disabled localnode(::v2x_msg::msg::NodeAttributeSetLL::_localnode_type arg)
  {
    msg_.localnode = std::move(arg);
    return Init_NodeAttributeSetLL_disabled(msg_);
  }

private:
  ::v2x_msg::msg::NodeAttributeSetLL msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeAttributeSetLL>()
{
  return v2x_msg::msg::builder::Init_NodeAttributeSetLL_localnode();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__BUILDER_HPP_
