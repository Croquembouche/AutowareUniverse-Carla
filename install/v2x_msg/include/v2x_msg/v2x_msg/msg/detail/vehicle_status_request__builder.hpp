// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleStatusRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/vehicle_status_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleStatusRequest_sendall
{
public:
  explicit Init_VehicleStatusRequest_sendall(::v2x_msg::msg::VehicleStatusRequest & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleStatusRequest sendall(::v2x_msg::msg::VehicleStatusRequest::_sendall_type arg)
  {
    msg_.sendall = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatusRequest msg_;
};

class Init_VehicleStatusRequest_sendonmorethenvalue
{
public:
  explicit Init_VehicleStatusRequest_sendonmorethenvalue(::v2x_msg::msg::VehicleStatusRequest & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusRequest_sendall sendonmorethenvalue(::v2x_msg::msg::VehicleStatusRequest::_sendonmorethenvalue_type arg)
  {
    msg_.sendonmorethenvalue = std::move(arg);
    return Init_VehicleStatusRequest_sendall(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatusRequest msg_;
};

class Init_VehicleStatusRequest_sendonlessthenvalue
{
public:
  explicit Init_VehicleStatusRequest_sendonlessthenvalue(::v2x_msg::msg::VehicleStatusRequest & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusRequest_sendonmorethenvalue sendonlessthenvalue(::v2x_msg::msg::VehicleStatusRequest::_sendonlessthenvalue_type arg)
  {
    msg_.sendonlessthenvalue = std::move(arg);
    return Init_VehicleStatusRequest_sendonmorethenvalue(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatusRequest msg_;
};

class Init_VehicleStatusRequest_subtype
{
public:
  explicit Init_VehicleStatusRequest_subtype(::v2x_msg::msg::VehicleStatusRequest & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusRequest_sendonlessthenvalue subtype(::v2x_msg::msg::VehicleStatusRequest::_subtype_type arg)
  {
    msg_.subtype = std::move(arg);
    return Init_VehicleStatusRequest_sendonlessthenvalue(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatusRequest msg_;
};

class Init_VehicleStatusRequest_datatype
{
public:
  Init_VehicleStatusRequest_datatype()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatusRequest_subtype datatype(::v2x_msg::msg::VehicleStatusRequest::_datatype_type arg)
  {
    msg_.datatype = std::move(arg);
    return Init_VehicleStatusRequest_subtype(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatusRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleStatusRequest>()
{
  return v2x_msg::msg::builder::Init_VehicleStatusRequest_datatype();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__BUILDER_HPP_
