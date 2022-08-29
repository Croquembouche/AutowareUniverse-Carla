// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/TIM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__TIM__BUILDER_HPP_

#include "v2x_msg/msg/detail/tim__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_TIM_dataframes
{
public:
  explicit Init_TIM_dataframes(::v2x_msg::msg::TIM & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::TIM dataframes(::v2x_msg::msg::TIM::_dataframes_type arg)
  {
    msg_.dataframes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::TIM msg_;
};

class Init_TIM_urlb
{
public:
  explicit Init_TIM_urlb(::v2x_msg::msg::TIM & msg)
  : msg_(msg)
  {}
  Init_TIM_dataframes urlb(::v2x_msg::msg::TIM::_urlb_type arg)
  {
    msg_.urlb = std::move(arg);
    return Init_TIM_dataframes(msg_);
  }

private:
  ::v2x_msg::msg::TIM msg_;
};

class Init_TIM_packetid
{
public:
  explicit Init_TIM_packetid(::v2x_msg::msg::TIM & msg)
  : msg_(msg)
  {}
  Init_TIM_urlb packetid(::v2x_msg::msg::TIM::_packetid_type arg)
  {
    msg_.packetid = std::move(arg);
    return Init_TIM_urlb(msg_);
  }

private:
  ::v2x_msg::msg::TIM msg_;
};

class Init_TIM_timestamp
{
public:
  explicit Init_TIM_timestamp(::v2x_msg::msg::TIM & msg)
  : msg_(msg)
  {}
  Init_TIM_packetid timestamp(::v2x_msg::msg::TIM::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TIM_packetid(msg_);
  }

private:
  ::v2x_msg::msg::TIM msg_;
};

class Init_TIM_msgcnt
{
public:
  Init_TIM_msgcnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TIM_timestamp msgcnt(::v2x_msg::msg::TIM::_msgcnt_type arg)
  {
    msg_.msgcnt = std::move(arg);
    return Init_TIM_timestamp(msg_);
  }

private:
  ::v2x_msg::msg::TIM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::TIM>()
{
  return v2x_msg::msg::builder::Init_TIM_msgcnt();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TIM__BUILDER_HPP_
