// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/WorkZone.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WORK_ZONE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__WORK_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/work_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_WorkZone_item
{
public:
  Init_WorkZone_item()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_msg::msg::WorkZone item(::v2x_msg::msg::WorkZone::_item_type arg)
  {
    msg_.item = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::WorkZone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::WorkZone>()
{
  return v2x_msg::msg::builder::Init_WorkZone_item();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__WORK_ZONE__BUILDER_HPP_
