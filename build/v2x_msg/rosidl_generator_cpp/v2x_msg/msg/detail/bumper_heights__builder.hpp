// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/BumperHeights.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/bumper_heights__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_BumperHeights_rear
{
public:
  explicit Init_BumperHeights_rear(::v2x_msg::msg::BumperHeights & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::BumperHeights rear(::v2x_msg::msg::BumperHeights::_rear_type arg)
  {
    msg_.rear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::BumperHeights msg_;
};

class Init_BumperHeights_front
{
public:
  Init_BumperHeights_front()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BumperHeights_rear front(::v2x_msg::msg::BumperHeights::_front_type arg)
  {
    msg_.front = std::move(arg);
    return Init_BumperHeights_rear(msg_);
  }

private:
  ::v2x_msg::msg::BumperHeights msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::BumperHeights>()
{
  return v2x_msg::msg::builder::Init_BumperHeights_front();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__BUILDER_HPP_
