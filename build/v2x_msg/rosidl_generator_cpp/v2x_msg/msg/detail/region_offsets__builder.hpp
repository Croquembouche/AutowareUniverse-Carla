// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RegionOffsets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_OFFSETS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__REGION_OFFSETS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/region_offsets__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RegionOffsets_zoffset
{
public:
  explicit Init_RegionOffsets_zoffset(::v2x_msg::msg::RegionOffsets & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RegionOffsets zoffset(::v2x_msg::msg::RegionOffsets::_zoffset_type arg)
  {
    msg_.zoffset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RegionOffsets msg_;
};

class Init_RegionOffsets_yoffset
{
public:
  explicit Init_RegionOffsets_yoffset(::v2x_msg::msg::RegionOffsets & msg)
  : msg_(msg)
  {}
  Init_RegionOffsets_zoffset yoffset(::v2x_msg::msg::RegionOffsets::_yoffset_type arg)
  {
    msg_.yoffset = std::move(arg);
    return Init_RegionOffsets_zoffset(msg_);
  }

private:
  ::v2x_msg::msg::RegionOffsets msg_;
};

class Init_RegionOffsets_xoffset
{
public:
  Init_RegionOffsets_xoffset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegionOffsets_yoffset xoffset(::v2x_msg::msg::RegionOffsets::_xoffset_type arg)
  {
    msg_.xoffset = std::move(arg);
    return Init_RegionOffsets_yoffset(msg_);
  }

private:
  ::v2x_msg::msg::RegionOffsets msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RegionOffsets>()
{
  return v2x_msg::msg::builder::Init_RegionOffsets_xoffset();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REGION_OFFSETS__BUILDER_HPP_
