// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WEATHER_REPORT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__WEATHER_REPORT__BUILDER_HPP_

#include "v2x_msg/msg/detail/weather_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_WeatherReport_friction
{
public:
  explicit Init_WeatherReport_friction(::v2x_msg::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::WeatherReport friction(::v2x_msg::msg::WeatherReport::_friction_type arg)
  {
    msg_.friction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::WeatherReport msg_;
};

class Init_WeatherReport_solarradiation
{
public:
  explicit Init_WeatherReport_solarradiation(::v2x_msg::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  Init_WeatherReport_friction solarradiation(::v2x_msg::msg::WeatherReport::_solarradiation_type arg)
  {
    msg_.solarradiation = std::move(arg);
    return Init_WeatherReport_friction(msg_);
  }

private:
  ::v2x_msg::msg::WeatherReport msg_;
};

class Init_WeatherReport_precipsituation
{
public:
  explicit Init_WeatherReport_precipsituation(::v2x_msg::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  Init_WeatherReport_solarradiation precipsituation(::v2x_msg::msg::WeatherReport::_precipsituation_type arg)
  {
    msg_.precipsituation = std::move(arg);
    return Init_WeatherReport_solarradiation(msg_);
  }

private:
  ::v2x_msg::msg::WeatherReport msg_;
};

class Init_WeatherReport_rainrate
{
public:
  explicit Init_WeatherReport_rainrate(::v2x_msg::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  Init_WeatherReport_precipsituation rainrate(::v2x_msg::msg::WeatherReport::_rainrate_type arg)
  {
    msg_.rainrate = std::move(arg);
    return Init_WeatherReport_precipsituation(msg_);
  }

private:
  ::v2x_msg::msg::WeatherReport msg_;
};

class Init_WeatherReport_israining
{
public:
  Init_WeatherReport_israining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WeatherReport_rainrate israining(::v2x_msg::msg::WeatherReport::_israining_type arg)
  {
    msg_.israining = std::move(arg);
    return Init_WeatherReport_rainrate(msg_);
  }

private:
  ::v2x_msg::msg::WeatherReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::WeatherReport>()
{
  return v2x_msg::msg::builder::Init_WeatherReport_israining();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__WEATHER_REPORT__BUILDER_HPP_
