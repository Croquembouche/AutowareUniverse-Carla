// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/WorkZonecontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WORK_ZONECONTENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__WORK_ZONECONTENT__BUILDER_HPP_

#include "v2x_msg/msg/detail/work_zonecontent__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_WorkZonecontent_text
{
public:
  explicit Init_WorkZonecontent_text(::v2x_msg::msg::WorkZonecontent & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::WorkZonecontent text(::v2x_msg::msg::WorkZonecontent::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::WorkZonecontent msg_;
};

class Init_WorkZonecontent_itis
{
public:
  Init_WorkZonecontent_itis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorkZonecontent_text itis(::v2x_msg::msg::WorkZonecontent::_itis_type arg)
  {
    msg_.itis = std::move(arg);
    return Init_WorkZonecontent_text(msg_);
  }

private:
  ::v2x_msg::msg::WorkZonecontent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::WorkZonecontent>()
{
  return v2x_msg::msg::builder::Init_WorkZonecontent_itis();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__WORK_ZONECONTENT__BUILDER_HPP_
