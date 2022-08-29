// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RegionPointSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_POINT_SET__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__REGION_POINT_SET__BUILDER_HPP_

#include "v2x_msg/msg/detail/region_point_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RegionPointSet_nodelist
{
public:
  explicit Init_RegionPointSet_nodelist(::v2x_msg::msg::RegionPointSet & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RegionPointSet nodelist(::v2x_msg::msg::RegionPointSet::_nodelist_type arg)
  {
    msg_.nodelist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RegionPointSet msg_;
};

class Init_RegionPointSet_scale
{
public:
  explicit Init_RegionPointSet_scale(::v2x_msg::msg::RegionPointSet & msg)
  : msg_(msg)
  {}
  Init_RegionPointSet_nodelist scale(::v2x_msg::msg::RegionPointSet::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_RegionPointSet_nodelist(msg_);
  }

private:
  ::v2x_msg::msg::RegionPointSet msg_;
};

class Init_RegionPointSet_anchor
{
public:
  Init_RegionPointSet_anchor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegionPointSet_scale anchor(::v2x_msg::msg::RegionPointSet::_anchor_type arg)
  {
    msg_.anchor = std::move(arg);
    return Init_RegionPointSet_scale(msg_);
  }

private:
  ::v2x_msg::msg::RegionPointSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RegionPointSet>()
{
  return v2x_msg::msg::builder::Init_RegionPointSet_anchor();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REGION_POINT_SET__BUILDER_HPP_
