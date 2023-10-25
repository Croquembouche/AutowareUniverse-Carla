// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/DDateTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__D_DATE_TIME__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__D_DATE_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/d_date_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_DDateTime_offset
{
public:
  explicit Init_DDateTime_offset(::v2x_msg::msg::DDateTime & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::DDateTime offset(::v2x_msg::msg::DDateTime::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::DDateTime msg_;
};

class Init_DDateTime_second
{
public:
  explicit Init_DDateTime_second(::v2x_msg::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_offset second(::v2x_msg::msg::DDateTime::_second_type arg)
  {
    msg_.second = std::move(arg);
    return Init_DDateTime_offset(msg_);
  }

private:
  ::v2x_msg::msg::DDateTime msg_;
};

class Init_DDateTime_minute
{
public:
  explicit Init_DDateTime_minute(::v2x_msg::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_second minute(::v2x_msg::msg::DDateTime::_minute_type arg)
  {
    msg_.minute = std::move(arg);
    return Init_DDateTime_second(msg_);
  }

private:
  ::v2x_msg::msg::DDateTime msg_;
};

class Init_DDateTime_hour
{
public:
  explicit Init_DDateTime_hour(::v2x_msg::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_minute hour(::v2x_msg::msg::DDateTime::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_DDateTime_minute(msg_);
  }

private:
  ::v2x_msg::msg::DDateTime msg_;
};

class Init_DDateTime_day
{
public:
  explicit Init_DDateTime_day(::v2x_msg::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_hour day(::v2x_msg::msg::DDateTime::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_DDateTime_hour(msg_);
  }

private:
  ::v2x_msg::msg::DDateTime msg_;
};

class Init_DDateTime_month
{
public:
  explicit Init_DDateTime_month(::v2x_msg::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_day month(::v2x_msg::msg::DDateTime::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_DDateTime_day(msg_);
  }

private:
  ::v2x_msg::msg::DDateTime msg_;
};

class Init_DDateTime_year
{
public:
  Init_DDateTime_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DDateTime_month year(::v2x_msg::msg::DDateTime::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_DDateTime_month(msg_);
  }

private:
  ::v2x_msg::msg::DDateTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::DDateTime>()
{
  return v2x_msg::msg::builder::Init_DDateTime_year();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__D_DATE_TIME__BUILDER_HPP_
