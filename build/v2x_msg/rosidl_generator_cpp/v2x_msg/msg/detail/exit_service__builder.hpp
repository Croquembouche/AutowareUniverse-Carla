// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ExitService.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EXIT_SERVICE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__EXIT_SERVICE__BUILDER_HPP_

#include "v2x_msg/msg/detail/exit_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ExitService_item
{
public:
  Init_ExitService_item()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_msg::msg::ExitService item(::v2x_msg::msg::ExitService::_item_type arg)
  {
    msg_.item = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ExitService msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ExitService>()
{
  return v2x_msg::msg::builder::Init_ExitService_item();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__EXIT_SERVICE__BUILDER_HPP_
