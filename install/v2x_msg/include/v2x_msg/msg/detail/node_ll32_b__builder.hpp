// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeLL32B.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LL32_B__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LL32_B__BUILDER_HPP_

#include "v2x_msg/msg/detail/node_ll32_b__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeLL32B_lat
{
public:
  explicit Init_NodeLL32B_lat(::v2x_msg::msg::NodeLL32B & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeLL32B lat(::v2x_msg::msg::NodeLL32B::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeLL32B msg_;
};

class Init_NodeLL32B_lon
{
public:
  Init_NodeLL32B_lon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeLL32B_lat lon(::v2x_msg::msg::NodeLL32B::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_NodeLL32B_lat(msg_);
  }

private:
  ::v2x_msg::msg::NodeLL32B msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeLL32B>()
{
  return v2x_msg::msg::builder::Init_NodeLL32B_lon();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_LL32_B__BUILDER_HPP_
