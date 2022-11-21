// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ITISSpeedLimitcontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMITCONTENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMITCONTENT__BUILDER_HPP_

#include "v2x_msg/msg/detail/itis_speed_limitcontent__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ITISSpeedLimitcontent_text
{
public:
  explicit Init_ITISSpeedLimitcontent_text(::v2x_msg::msg::ITISSpeedLimitcontent & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ITISSpeedLimitcontent text(::v2x_msg::msg::ITISSpeedLimitcontent::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ITISSpeedLimitcontent msg_;
};

class Init_ITISSpeedLimitcontent_itis
{
public:
  Init_ITISSpeedLimitcontent_itis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ITISSpeedLimitcontent_text itis(::v2x_msg::msg::ITISSpeedLimitcontent::_itis_type arg)
  {
    msg_.itis = std::move(arg);
    return Init_ITISSpeedLimitcontent_text(msg_);
  }

private:
  ::v2x_msg::msg::ITISSpeedLimitcontent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ITISSpeedLimitcontent>()
{
  return v2x_msg::msg::builder::Init_ITISSpeedLimitcontent_itis();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMITCONTENT__BUILDER_HPP_
