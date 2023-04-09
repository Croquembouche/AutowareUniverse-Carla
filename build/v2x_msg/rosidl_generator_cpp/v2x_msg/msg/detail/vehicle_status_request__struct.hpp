// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/VehicleStatusRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__VehicleStatusRequest __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__VehicleStatusRequest __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatusRequest_
{
  using Type = VehicleStatusRequest_<ContainerAllocator>;

  explicit VehicleStatusRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->datatype = 0ll;
      this->subtype = 0ll;
      this->sendonlessthenvalue = 0ll;
      this->sendonmorethenvalue = 0ll;
      this->sendall = false;
    }
  }

  explicit VehicleStatusRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->datatype = 0ll;
      this->subtype = 0ll;
      this->sendonlessthenvalue = 0ll;
      this->sendonmorethenvalue = 0ll;
      this->sendall = false;
    }
  }

  // field types and members
  using _datatype_type =
    int64_t;
  _datatype_type datatype;
  using _subtype_type =
    int64_t;
  _subtype_type subtype;
  using _sendonlessthenvalue_type =
    int64_t;
  _sendonlessthenvalue_type sendonlessthenvalue;
  using _sendonmorethenvalue_type =
    int64_t;
  _sendonmorethenvalue_type sendonmorethenvalue;
  using _sendall_type =
    bool;
  _sendall_type sendall;

  // setters for named parameter idiom
  Type & set__datatype(
    const int64_t & _arg)
  {
    this->datatype = _arg;
    return *this;
  }
  Type & set__subtype(
    const int64_t & _arg)
  {
    this->subtype = _arg;
    return *this;
  }
  Type & set__sendonlessthenvalue(
    const int64_t & _arg)
  {
    this->sendonlessthenvalue = _arg;
    return *this;
  }
  Type & set__sendonmorethenvalue(
    const int64_t & _arg)
  {
    this->sendonmorethenvalue = _arg;
    return *this;
  }
  Type & set__sendall(
    const bool & _arg)
  {
    this->sendall = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__VehicleStatusRequest
    std::shared_ptr<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__VehicleStatusRequest
    std::shared_ptr<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatusRequest_ & other) const
  {
    if (this->datatype != other.datatype) {
      return false;
    }
    if (this->subtype != other.subtype) {
      return false;
    }
    if (this->sendonlessthenvalue != other.sendonlessthenvalue) {
      return false;
    }
    if (this->sendonmorethenvalue != other.sendonmorethenvalue) {
      return false;
    }
    if (this->sendall != other.sendall) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatusRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatusRequest_

// alias to use template instance with default allocator
using VehicleStatusRequest =
  v2x_msg::msg::VehicleStatusRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__STRUCT_HPP_
