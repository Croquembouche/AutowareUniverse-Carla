// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/TireData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIRE_DATA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__TIRE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/tire_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_TireData_detection
{
public:
  explicit Init_TireData_detection(::v2x_msg::msg::TireData & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::TireData detection(::v2x_msg::msg::TireData::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::TireData msg_;
};

class Init_TireData_leakagerate
{
public:
  explicit Init_TireData_leakagerate(::v2x_msg::msg::TireData & msg)
  : msg_(msg)
  {}
  Init_TireData_detection leakagerate(::v2x_msg::msg::TireData::_leakagerate_type arg)
  {
    msg_.leakagerate = std::move(arg);
    return Init_TireData_detection(msg_);
  }

private:
  ::v2x_msg::msg::TireData msg_;
};

class Init_TireData_wheelendelectfault
{
public:
  explicit Init_TireData_wheelendelectfault(::v2x_msg::msg::TireData & msg)
  : msg_(msg)
  {}
  Init_TireData_leakagerate wheelendelectfault(::v2x_msg::msg::TireData::_wheelendelectfault_type arg)
  {
    msg_.wheelendelectfault = std::move(arg);
    return Init_TireData_leakagerate(msg_);
  }

private:
  ::v2x_msg::msg::TireData msg_;
};

class Init_TireData_wheelsensorstatus
{
public:
  explicit Init_TireData_wheelsensorstatus(::v2x_msg::msg::TireData & msg)
  : msg_(msg)
  {}
  Init_TireData_wheelendelectfault wheelsensorstatus(::v2x_msg::msg::TireData::_wheelsensorstatus_type arg)
  {
    msg_.wheelsensorstatus = std::move(arg);
    return Init_TireData_wheelendelectfault(msg_);
  }

private:
  ::v2x_msg::msg::TireData msg_;
};

class Init_TireData_temp
{
public:
  explicit Init_TireData_temp(::v2x_msg::msg::TireData & msg)
  : msg_(msg)
  {}
  Init_TireData_wheelsensorstatus temp(::v2x_msg::msg::TireData::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_TireData_wheelsensorstatus(msg_);
  }

private:
  ::v2x_msg::msg::TireData msg_;
};

class Init_TireData_pressure
{
public:
  explicit Init_TireData_pressure(::v2x_msg::msg::TireData & msg)
  : msg_(msg)
  {}
  Init_TireData_temp pressure(::v2x_msg::msg::TireData::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_TireData_temp(msg_);
  }

private:
  ::v2x_msg::msg::TireData msg_;
};

class Init_TireData_location
{
public:
  Init_TireData_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TireData_pressure location(::v2x_msg::msg::TireData::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_TireData_pressure(msg_);
  }

private:
  ::v2x_msg::msg::TireData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::TireData>()
{
  return v2x_msg::msg::builder::Init_TireData_location();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TIRE_DATA__BUILDER_HPP_
