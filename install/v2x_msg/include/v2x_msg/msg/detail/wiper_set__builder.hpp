// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/WiperSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WIPER_SET__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__WIPER_SET__BUILDER_HPP_

#include "v2x_msg/msg/detail/wiper_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_WiperSet_raterear
{
public:
  explicit Init_WiperSet_raterear(::v2x_msg::msg::WiperSet & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::WiperSet raterear(::v2x_msg::msg::WiperSet::_raterear_type arg)
  {
    msg_.raterear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::WiperSet msg_;
};

class Init_WiperSet_statusrear
{
public:
  explicit Init_WiperSet_statusrear(::v2x_msg::msg::WiperSet & msg)
  : msg_(msg)
  {}
  Init_WiperSet_raterear statusrear(::v2x_msg::msg::WiperSet::_statusrear_type arg)
  {
    msg_.statusrear = std::move(arg);
    return Init_WiperSet_raterear(msg_);
  }

private:
  ::v2x_msg::msg::WiperSet msg_;
};

class Init_WiperSet_ratefront
{
public:
  explicit Init_WiperSet_ratefront(::v2x_msg::msg::WiperSet & msg)
  : msg_(msg)
  {}
  Init_WiperSet_statusrear ratefront(::v2x_msg::msg::WiperSet::_ratefront_type arg)
  {
    msg_.ratefront = std::move(arg);
    return Init_WiperSet_statusrear(msg_);
  }

private:
  ::v2x_msg::msg::WiperSet msg_;
};

class Init_WiperSet_statusfront
{
public:
  Init_WiperSet_statusfront()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WiperSet_ratefront statusfront(::v2x_msg::msg::WiperSet::_statusfront_type arg)
  {
    msg_.statusfront = std::move(arg);
    return Init_WiperSet_ratefront(msg_);
  }

private:
  ::v2x_msg::msg::WiperSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::WiperSet>()
{
  return v2x_msg::msg::builder::Init_WiperSet_statusfront();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__WIPER_SET__BUILDER_HPP_
