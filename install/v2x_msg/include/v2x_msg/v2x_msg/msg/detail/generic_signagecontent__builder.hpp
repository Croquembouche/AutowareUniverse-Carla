// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/GenericSignagecontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGECONTENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGECONTENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/generic_signagecontent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_GenericSignagecontent_text
{
public:
  explicit Init_GenericSignagecontent_text(::v2x_msg::msg::GenericSignagecontent & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::GenericSignagecontent text(::v2x_msg::msg::GenericSignagecontent::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::GenericSignagecontent msg_;
};

class Init_GenericSignagecontent_itis
{
public:
  Init_GenericSignagecontent_itis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenericSignagecontent_text itis(::v2x_msg::msg::GenericSignagecontent::_itis_type arg)
  {
    msg_.itis = std::move(arg);
    return Init_GenericSignagecontent_text(msg_);
  }

private:
  ::v2x_msg::msg::GenericSignagecontent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::GenericSignagecontent>()
{
  return v2x_msg::msg::builder::Init_GenericSignagecontent_itis();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGECONTENT__BUILDER_HPP_
