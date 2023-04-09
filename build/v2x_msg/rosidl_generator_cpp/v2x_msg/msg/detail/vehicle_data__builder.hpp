// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/vehicle_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleData_type
{
public:
  explicit Init_VehicleData_type(::v2x_msg::msg::VehicleData & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleData type(::v2x_msg::msg::VehicleData::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleData msg_;
};

class Init_VehicleData_trailerweight
{
public:
  explicit Init_VehicleData_trailerweight(::v2x_msg::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_type trailerweight(::v2x_msg::msg::VehicleData::_trailerweight_type arg)
  {
    msg_.trailerweight = std::move(arg);
    return Init_VehicleData_type(msg_);
  }

private:
  ::v2x_msg::msg::VehicleData msg_;
};

class Init_VehicleData_mass
{
public:
  explicit Init_VehicleData_mass(::v2x_msg::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_trailerweight mass(::v2x_msg::msg::VehicleData::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_VehicleData_trailerweight(msg_);
  }

private:
  ::v2x_msg::msg::VehicleData msg_;
};

class Init_VehicleData_bumpers
{
public:
  explicit Init_VehicleData_bumpers(::v2x_msg::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_mass bumpers(::v2x_msg::msg::VehicleData::_bumpers_type arg)
  {
    msg_.bumpers = std::move(arg);
    return Init_VehicleData_mass(msg_);
  }

private:
  ::v2x_msg::msg::VehicleData msg_;
};

class Init_VehicleData_height
{
public:
  Init_VehicleData_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleData_bumpers height(::v2x_msg::msg::VehicleData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_VehicleData_bumpers(msg_);
  }

private:
  ::v2x_msg::msg::VehicleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleData>()
{
  return v2x_msg::msg::builder::Init_VehicleData_height();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_
