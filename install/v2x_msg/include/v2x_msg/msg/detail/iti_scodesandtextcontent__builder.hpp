// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ITIScodesandtextcontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__BUILDER_HPP_

#include "v2x_msg/msg/detail/iti_scodesandtextcontent__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ITIScodesandtextcontent_text
{
public:
  explicit Init_ITIScodesandtextcontent_text(::v2x_msg::msg::ITIScodesandtextcontent & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ITIScodesandtextcontent text(::v2x_msg::msg::ITIScodesandtextcontent::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ITIScodesandtextcontent msg_;
};

class Init_ITIScodesandtextcontent_itis
{
public:
  Init_ITIScodesandtextcontent_itis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ITIScodesandtextcontent_text itis(::v2x_msg::msg::ITIScodesandtextcontent::_itis_type arg)
  {
    msg_.itis = std::move(arg);
    return Init_ITIScodesandtextcontent_text(msg_);
  }

private:
  ::v2x_msg::msg::ITIScodesandtextcontent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ITIScodesandtextcontent>()
{
  return v2x_msg::msg::builder::Init_ITIScodesandtextcontent_itis();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__BUILDER_HPP_
