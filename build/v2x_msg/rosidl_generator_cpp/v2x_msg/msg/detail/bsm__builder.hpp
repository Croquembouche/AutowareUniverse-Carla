// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__BSM__BUILDER_HPP_

#include "v2x_msg/msg/detail/bsm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_BSM_coredata
{
public:
  Init_BSM_coredata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_msg::msg::BSM coredata(::v2x_msg::msg::BSM::_coredata_type arg)
  {
    msg_.coredata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::BSM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::BSM>()
{
  return v2x_msg::msg::builder::Init_BSM_coredata();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__BSM__BUILDER_HPP_
