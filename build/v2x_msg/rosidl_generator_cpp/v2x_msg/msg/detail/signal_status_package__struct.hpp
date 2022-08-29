// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'requester'
#include "v2x_msg/msg/detail/signal_requester_info__struct.hpp"
// Member 'inboundon'
// Member 'outboundon'
#include "v2x_msg/msg/detail/intersection_access_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SignalStatusPackage __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SignalStatusPackage __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalStatusPackage_
{
  using Type = SignalStatusPackage_<ContainerAllocator>;

  explicit SignalStatusPackage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requester(_init),
    inboundon(_init),
    outboundon(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->minute = 0ll;
      this->second = 0ll;
      this->duration = 0ll;
      this->status = 0ll;
    }
  }

  explicit SignalStatusPackage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requester(_alloc, _init),
    inboundon(_alloc, _init),
    outboundon(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->minute = 0ll;
      this->second = 0ll;
      this->duration = 0ll;
      this->status = 0ll;
    }
  }

  // field types and members
  using _requester_type =
    v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator>;
  _requester_type requester;
  using _inboundon_type =
    v2x_msg::msg::IntersectionAccessPoint_<ContainerAllocator>;
  _inboundon_type inboundon;
  using _outboundon_type =
    v2x_msg::msg::IntersectionAccessPoint_<ContainerAllocator>;
  _outboundon_type outboundon;
  using _minute_type =
    int64_t;
  _minute_type minute;
  using _second_type =
    int64_t;
  _second_type second;
  using _duration_type =
    int64_t;
  _duration_type duration;
  using _status_type =
    int64_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__requester(
    const v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator> & _arg)
  {
    this->requester = _arg;
    return *this;
  }
  Type & set__inboundon(
    const v2x_msg::msg::IntersectionAccessPoint_<ContainerAllocator> & _arg)
  {
    this->inboundon = _arg;
    return *this;
  }
  Type & set__outboundon(
    const v2x_msg::msg::IntersectionAccessPoint_<ContainerAllocator> & _arg)
  {
    this->outboundon = _arg;
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
  Type & set__status(
    const int64_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SignalStatusPackage_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SignalStatusPackage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SignalStatusPackage
    std::shared_ptr<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SignalStatusPackage
    std::shared_ptr<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalStatusPackage_ & other) const
  {
    if (this->requester != other.requester) {
      return false;
    }
    if (this->inboundon != other.inboundon) {
      return false;
    }
    if (this->outboundon != other.outboundon) {
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
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalStatusPackage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalStatusPackage_

// alias to use template instance with default allocator
using SignalStatusPackage =
  v2x_msg::msg::SignalStatusPackage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_HPP_
