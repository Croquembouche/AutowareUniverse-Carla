// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'signalrequest'
#include "v2x_msg/msg/detail/signal_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SignalRequestPackage __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SignalRequestPackage __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalRequestPackage_
{
  using Type = SignalRequestPackage_<ContainerAllocator>;

  explicit SignalRequestPackage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : signalrequest(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->minute = 0ll;
      this->second = 0ll;
      this->duration = 0ll;
    }
  }

  explicit SignalRequestPackage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : signalrequest(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->minute = 0ll;
      this->second = 0ll;
      this->duration = 0ll;
    }
  }

  // field types and members
  using _signalrequest_type =
    v2x_msg::msg::SignalRequest_<ContainerAllocator>;
  _signalrequest_type signalrequest;
  using _minute_type =
    int64_t;
  _minute_type minute;
  using _second_type =
    int64_t;
  _second_type second;
  using _duration_type =
    int64_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__signalrequest(
    const v2x_msg::msg::SignalRequest_<ContainerAllocator> & _arg)
  {
    this->signalrequest = _arg;
    return *this;
  }
  Type & set__minute(
    const int64_t & _arg)
  {
    this->minute = _arg;
    return *this;
  }
  Type & set__second(
    const int64_t & _arg)
  {
    this->second = _arg;
    return *this;
  }
  Type & set__duration(
    const int64_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SignalRequestPackage_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SignalRequestPackage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalRequestPackage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalRequestPackage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalRequestPackage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalRequestPackage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalRequestPackage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalRequestPackage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalRequestPackage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalRequestPackage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SignalRequestPackage
    std::shared_ptr<v2x_msg::msg::SignalRequestPackage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SignalRequestPackage
    std::shared_ptr<v2x_msg::msg::SignalRequestPackage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalRequestPackage_ & other) const
  {
    if (this->signalrequest != other.signalrequest) {
      return false;
    }
    if (this->minute != other.minute) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalRequestPackage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalRequestPackage_

// alias to use template instance with default allocator
using SignalRequestPackage =
  v2x_msg::msg::SignalRequestPackage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_HPP_
