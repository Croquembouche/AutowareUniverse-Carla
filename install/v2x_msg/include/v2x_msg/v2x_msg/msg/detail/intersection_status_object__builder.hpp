// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/intersection_status_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_IntersectionStatusObject_reserve15
{
public:
  explicit Init_IntersectionStatusObject_reserve15(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::IntersectionStatusObject reserve15(::v2x_msg::msg::IntersectionStatusObject::_reserve15_type arg)
  {
    msg_.reserve15 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_reserve14
{
public:
  explicit Init_IntersectionStatusObject_reserve14(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_reserve15 reserve14(::v2x_msg::msg::IntersectionStatusObject::_reserve14_type arg)
  {
    msg_.reserve14 = std::move(arg);
    return Init_IntersectionStatusObject_reserve15(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_nobalidspatisabilableatthistime
{
public:
  explicit Init_IntersectionStatusObject_nobalidspatisabilableatthistime(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_reserve14 nobalidspatisabilableatthistime(::v2x_msg::msg::IntersectionStatusObject::_nobalidspatisabilableatthistime_type arg)
  {
    msg_.nobalidspatisabilableatthistime = std::move(arg);
    return Init_IntersectionStatusObject_reserve14(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_novalidmapisabilableatthistime
{
public:
  explicit Init_IntersectionStatusObject_novalidmapisabilableatthistime(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_nobalidspatisabilableatthistime novalidmapisabilableatthistime(::v2x_msg::msg::IntersectionStatusObject::_novalidmapisabilableatthistime_type arg)
  {
    msg_.novalidmapisabilableatthistime = std::move(arg);
    return Init_IntersectionStatusObject_nobalidspatisabilableatthistime(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_recentchangeinmapassignedlanesidsused
{
public:
  explicit Init_IntersectionStatusObject_recentchangeinmapassignedlanesidsused(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_novalidmapisabilableatthistime recentchangeinmapassignedlanesidsused(::v2x_msg::msg::IntersectionStatusObject::_recentchangeinmapassignedlanesidsused_type arg)
  {
    msg_.recentchangeinmapassignedlanesidsused = std::move(arg);
    return Init_IntersectionStatusObject_novalidmapisabilableatthistime(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_recentmapmessageupdate
{
public:
  explicit Init_IntersectionStatusObject_recentmapmessageupdate(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_recentchangeinmapassignedlanesidsused recentmapmessageupdate(::v2x_msg::msg::IntersectionStatusObject::_recentmapmessageupdate_type arg)
  {
    msg_.recentmapmessageupdate = std::move(arg);
    return Init_IntersectionStatusObject_recentchangeinmapassignedlanesidsused(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_off
{
public:
  explicit Init_IntersectionStatusObject_off(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_recentmapmessageupdate off(::v2x_msg::msg::IntersectionStatusObject::_off_type arg)
  {
    msg_.off = std::move(arg);
    return Init_IntersectionStatusObject_recentmapmessageupdate(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_failuremode
{
public:
  explicit Init_IntersectionStatusObject_failuremode(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_off failuremode(::v2x_msg::msg::IntersectionStatusObject::_failuremode_type arg)
  {
    msg_.failuremode = std::move(arg);
    return Init_IntersectionStatusObject_off(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_standbyoperation
{
public:
  explicit Init_IntersectionStatusObject_standbyoperation(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_failuremode standbyoperation(::v2x_msg::msg::IntersectionStatusObject::_standbyoperation_type arg)
  {
    msg_.standbyoperation = std::move(arg);
    return Init_IntersectionStatusObject_failuremode(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_trafficdependentoperation
{
public:
  explicit Init_IntersectionStatusObject_trafficdependentoperation(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_standbyoperation trafficdependentoperation(::v2x_msg::msg::IntersectionStatusObject::_trafficdependentoperation_type arg)
  {
    msg_.trafficdependentoperation = std::move(arg);
    return Init_IntersectionStatusObject_standbyoperation(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_fixedtimeoperation
{
public:
  explicit Init_IntersectionStatusObject_fixedtimeoperation(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_trafficdependentoperation fixedtimeoperation(::v2x_msg::msg::IntersectionStatusObject::_fixedtimeoperation_type arg)
  {
    msg_.fixedtimeoperation = std::move(arg);
    return Init_IntersectionStatusObject_trafficdependentoperation(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_signalpriorityisactive
{
public:
  explicit Init_IntersectionStatusObject_signalpriorityisactive(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_fixedtimeoperation signalpriorityisactive(::v2x_msg::msg::IntersectionStatusObject::_signalpriorityisactive_type arg)
  {
    msg_.signalpriorityisactive = std::move(arg);
    return Init_IntersectionStatusObject_fixedtimeoperation(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_preemptisactive
{
public:
  explicit Init_IntersectionStatusObject_preemptisactive(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_signalpriorityisactive preemptisactive(::v2x_msg::msg::IntersectionStatusObject::_preemptisactive_type arg)
  {
    msg_.preemptisactive = std::move(arg);
    return Init_IntersectionStatusObject_signalpriorityisactive(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_failureflash
{
public:
  explicit Init_IntersectionStatusObject_failureflash(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_preemptisactive failureflash(::v2x_msg::msg::IntersectionStatusObject::_failureflash_type arg)
  {
    msg_.failureflash = std::move(arg);
    return Init_IntersectionStatusObject_preemptisactive(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_stoptimeisactivated
{
public:
  explicit Init_IntersectionStatusObject_stoptimeisactivated(::v2x_msg::msg::IntersectionStatusObject & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatusObject_failureflash stoptimeisactivated(::v2x_msg::msg::IntersectionStatusObject::_stoptimeisactivated_type arg)
  {
    msg_.stoptimeisactivated = std::move(arg);
    return Init_IntersectionStatusObject_failureflash(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

class Init_IntersectionStatusObject_manualcontrolisenabled
{
public:
  Init_IntersectionStatusObject_manualcontrolisenabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionStatusObject_stoptimeisactivated manualcontrolisenabled(::v2x_msg::msg::IntersectionStatusObject::_manualcontrolisenabled_type arg)
  {
    msg_.manualcontrolisenabled = std::move(arg);
    return Init_IntersectionStatusObject_stoptimeisactivated(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionStatusObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::IntersectionStatusObject>()
{
  return v2x_msg::msg::builder::Init_IntersectionStatusObject_manualcontrolisenabled();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__BUILDER_HPP_
