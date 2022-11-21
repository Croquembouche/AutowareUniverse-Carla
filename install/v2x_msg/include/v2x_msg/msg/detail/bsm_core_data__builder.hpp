// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_

#include "v2x_msg/msg/detail/bsm_core_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_BSMCoreData_size
{
public:
  explicit Init_BSMCoreData_size(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::BSMCoreData size(::v2x_msg::msg::BSMCoreData::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_brakes
{
public:
  explicit Init_BSMCoreData_brakes(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_size brakes(::v2x_msg::msg::BSMCoreData::_brakes_type arg)
  {
    msg_.brakes = std::move(arg);
    return Init_BSMCoreData_size(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_accelset
{
public:
  explicit Init_BSMCoreData_accelset(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_brakes accelset(::v2x_msg::msg::BSMCoreData::_accelset_type arg)
  {
    msg_.accelset = std::move(arg);
    return Init_BSMCoreData_brakes(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_angle
{
public:
  explicit Init_BSMCoreData_angle(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_accelset angle(::v2x_msg::msg::BSMCoreData::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_BSMCoreData_accelset(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_heading
{
public:
  explicit Init_BSMCoreData_heading(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_angle heading(::v2x_msg::msg::BSMCoreData::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_BSMCoreData_angle(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_speed
{
public:
  explicit Init_BSMCoreData_speed(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_heading speed(::v2x_msg::msg::BSMCoreData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_BSMCoreData_heading(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_transmission
{
public:
  explicit Init_BSMCoreData_transmission(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_speed transmission(::v2x_msg::msg::BSMCoreData::_transmission_type arg)
  {
    msg_.transmission = std::move(arg);
    return Init_BSMCoreData_speed(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_accuracy
{
public:
  explicit Init_BSMCoreData_accuracy(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_transmission accuracy(::v2x_msg::msg::BSMCoreData::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_BSMCoreData_transmission(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_elev
{
public:
  explicit Init_BSMCoreData_elev(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_accuracy elev(::v2x_msg::msg::BSMCoreData::_elev_type arg)
  {
    msg_.elev = std::move(arg);
    return Init_BSMCoreData_accuracy(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_longitude
{
public:
  explicit Init_BSMCoreData_longitude(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_elev longitude(::v2x_msg::msg::BSMCoreData::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_BSMCoreData_elev(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_lat
{
public:
  explicit Init_BSMCoreData_lat(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_longitude lat(::v2x_msg::msg::BSMCoreData::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_BSMCoreData_longitude(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_secmark
{
public:
  explicit Init_BSMCoreData_secmark(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_lat secmark(::v2x_msg::msg::BSMCoreData::_secmark_type arg)
  {
    msg_.secmark = std::move(arg);
    return Init_BSMCoreData_lat(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_id
{
public:
  explicit Init_BSMCoreData_id(::v2x_msg::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_secmark id(::v2x_msg::msg::BSMCoreData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BSMCoreData_secmark(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_msgcnt
{
public:
  Init_BSMCoreData_msgcnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSMCoreData_id msgcnt(::v2x_msg::msg::BSMCoreData::_msgcnt_type arg)
  {
    msg_.msgcnt = std::move(arg);
    return Init_BSMCoreData_id(msg_);
  }

private:
  ::v2x_msg::msg::BSMCoreData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::BSMCoreData>()
{
  return v2x_msg::msg::builder::Init_BSMCoreData_msgcnt();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_
