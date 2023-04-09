// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ExitServicecontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EXIT_SERVICECONTENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__EXIT_SERVICECONTENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/exit_servicecontent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ExitServicecontent_text
{
public:
  explicit Init_ExitServicecontent_text(::v2x_msg::msg::ExitServicecontent & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ExitServicecontent text(::v2x_msg::msg::ExitServicecontent::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ExitServicecontent msg_;
};

class Init_ExitServicecontent_itis
{
public:
  Init_ExitServicecontent_itis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExitServicecontent_text itis(::v2x_msg::msg::ExitServicecontent::_itis_type arg)
  {
    msg_.itis = std::move(arg);
    return Init_ExitServicecontent_text(msg_);
  }

private:
  ::v2x_msg::msg::ExitServicecontent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ExitServicecontent>()
{
  return v2x_msg::msg::builder::Init_ExitServicecontent_itis();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__EXIT_SERVICECONTENT__BUILDER_HPP_
