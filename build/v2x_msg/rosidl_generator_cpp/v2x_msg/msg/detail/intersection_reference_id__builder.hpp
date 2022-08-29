// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/IntersectionReferenceID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_REFERENCE_ID__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_REFERENCE_ID__BUILDER_HPP_

#include "v2x_msg/msg/detail/intersection_reference_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_IntersectionReferenceID_intersectionid
{
public:
  explicit Init_IntersectionReferenceID_intersectionid(::v2x_msg::msg::IntersectionReferenceID & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::IntersectionReferenceID intersectionid(::v2x_msg::msg::IntersectionReferenceID::_intersectionid_type arg)
  {
    msg_.intersectionid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionReferenceID msg_;
};

class Init_IntersectionReferenceID_roadregulatorid
{
public:
  Init_IntersectionReferenceID_roadregulatorid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionReferenceID_intersectionid roadregulatorid(::v2x_msg::msg::IntersectionReferenceID::_roadregulatorid_type arg)
  {
    msg_.roadregulatorid = std::move(arg);
    return Init_IntersectionReferenceID_intersectionid(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionReferenceID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::IntersectionReferenceID>()
{
  return v2x_msg::msg::builder::Init_IntersectionReferenceID_roadregulatorid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_REFERENCE_ID__BUILDER_HPP_
