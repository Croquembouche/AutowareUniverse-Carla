// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ValidRegion.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VALID_REGION__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VALID_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/valid_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ValidRegion_area
{
public:
  explicit Init_ValidRegion_area(::v2x_msg::msg::ValidRegion & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ValidRegion area(::v2x_msg::msg::ValidRegion::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ValidRegion msg_;
};

class Init_ValidRegion_extent
{
public:
  explicit Init_ValidRegion_extent(::v2x_msg::msg::ValidRegion & msg)
  : msg_(msg)
  {}
  Init_ValidRegion_area extent(::v2x_msg::msg::ValidRegion::_extent_type arg)
  {
    msg_.extent = std::move(arg);
    return Init_ValidRegion_area(msg_);
  }

private:
  ::v2x_msg::msg::ValidRegion msg_;
};

class Init_ValidRegion_direction
{
public:
  Init_ValidRegion_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidRegion_extent direction(::v2x_msg::msg::ValidRegion::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_ValidRegion_extent(msg_);
  }

private:
  ::v2x_msg::msg::ValidRegion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ValidRegion>()
{
  return v2x_msg::msg::builder::Init_ValidRegion_direction();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VALID_REGION__BUILDER_HPP_
