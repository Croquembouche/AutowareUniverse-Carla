// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ShapePointSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/shape_point_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ShapePointSet_nodelist
{
public:
  explicit Init_ShapePointSet_nodelist(::v2x_msg::msg::ShapePointSet & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ShapePointSet nodelist(::v2x_msg::msg::ShapePointSet::_nodelist_type arg)
  {
    msg_.nodelist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ShapePointSet msg_;
};

class Init_ShapePointSet_directionality
{
public:
  explicit Init_ShapePointSet_directionality(::v2x_msg::msg::ShapePointSet & msg)
  : msg_(msg)
  {}
  Init_ShapePointSet_nodelist directionality(::v2x_msg::msg::ShapePointSet::_directionality_type arg)
  {
    msg_.directionality = std::move(arg);
    return Init_ShapePointSet_nodelist(msg_);
  }

private:
  ::v2x_msg::msg::ShapePointSet msg_;
};

class Init_ShapePointSet_lanewidth
{
public:
  explicit Init_ShapePointSet_lanewidth(::v2x_msg::msg::ShapePointSet & msg)
  : msg_(msg)
  {}
  Init_ShapePointSet_directionality lanewidth(::v2x_msg::msg::ShapePointSet::_lanewidth_type arg)
  {
    msg_.lanewidth = std::move(arg);
    return Init_ShapePointSet_directionality(msg_);
  }

private:
  ::v2x_msg::msg::ShapePointSet msg_;
};

class Init_ShapePointSet_anchor
{
public:
  Init_ShapePointSet_anchor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShapePointSet_lanewidth anchor(::v2x_msg::msg::ShapePointSet::_anchor_type arg)
  {
    msg_.anchor = std::move(arg);
    return Init_ShapePointSet_lanewidth(msg_);
  }

private:
  ::v2x_msg::msg::ShapePointSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ShapePointSet>()
{
  return v2x_msg::msg::builder::Init_ShapePointSet_anchor();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__BUILDER_HPP_
