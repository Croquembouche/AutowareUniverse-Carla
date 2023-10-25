// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/J1939data.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__J1939DATA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__J1939DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/j1939data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_J1939data_steeringaxlelubepressure
{
public:
  explicit Init_J1939data_steeringaxlelubepressure(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::J1939data steeringaxlelubepressure(::v2x_msg::msg::J1939data::_steeringaxlelubepressure_type arg)
  {
    msg_.steeringaxlelubepressure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_driveaxlelubpressure
{
public:
  explicit Init_J1939data_driveaxlelubpressure(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  Init_J1939data_steeringaxlelubepressure driveaxlelubpressure(::v2x_msg::msg::J1939data::_driveaxlelubpressure_type arg)
  {
    msg_.driveaxlelubpressure = std::move(arg);
    return Init_J1939data_steeringaxlelubepressure(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_driveaxletemperature
{
public:
  explicit Init_J1939data_driveaxletemperature(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  Init_J1939data_driveaxlelubpressure driveaxletemperature(::v2x_msg::msg::J1939data::_driveaxletemperature_type arg)
  {
    msg_.driveaxletemperature = std::move(arg);
    return Init_J1939data_driveaxlelubpressure(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_driveaxleliftairpressure
{
public:
  explicit Init_J1939data_driveaxleliftairpressure(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  Init_J1939data_driveaxletemperature driveaxleliftairpressure(::v2x_msg::msg::J1939data::_driveaxleliftairpressure_type arg)
  {
    msg_.driveaxleliftairpressure = std::move(arg);
    return Init_J1939data_driveaxletemperature(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_driveaxlelocation
{
public:
  explicit Init_J1939data_driveaxlelocation(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  Init_J1939data_driveaxleliftairpressure driveaxlelocation(::v2x_msg::msg::J1939data::_driveaxlelocation_type arg)
  {
    msg_.driveaxlelocation = std::move(arg);
    return Init_J1939data_driveaxleliftairpressure(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_steeringaxletemperture
{
public:
  explicit Init_J1939data_steeringaxletemperture(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  Init_J1939data_driveaxlelocation steeringaxletemperture(::v2x_msg::msg::J1939data::_steeringaxletemperture_type arg)
  {
    msg_.steeringaxletemperture = std::move(arg);
    return Init_J1939data_driveaxlelocation(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_cargoweight
{
public:
  explicit Init_J1939data_cargoweight(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  Init_J1939data_steeringaxletemperture cargoweight(::v2x_msg::msg::J1939data::_cargoweight_type arg)
  {
    msg_.cargoweight = std::move(arg);
    return Init_J1939data_steeringaxletemperture(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_trailerweight
{
public:
  explicit Init_J1939data_trailerweight(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  Init_J1939data_cargoweight trailerweight(::v2x_msg::msg::J1939data::_trailerweight_type arg)
  {
    msg_.trailerweight = std::move(arg);
    return Init_J1939data_cargoweight(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_axles
{
public:
  explicit Init_J1939data_axles(::v2x_msg::msg::J1939data & msg)
  : msg_(msg)
  {}
  Init_J1939data_trailerweight axles(::v2x_msg::msg::J1939data::_axles_type arg)
  {
    msg_.axles = std::move(arg);
    return Init_J1939data_trailerweight(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

class Init_J1939data_tires
{
public:
  Init_J1939data_tires()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_J1939data_axles tires(::v2x_msg::msg::J1939data::_tires_type arg)
  {
    msg_.tires = std::move(arg);
    return Init_J1939data_axles(msg_);
  }

private:
  ::v2x_msg::msg::J1939data msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::J1939data>()
{
  return v2x_msg::msg::builder::Init_J1939data_tires();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__J1939DATA__BUILDER_HPP_
