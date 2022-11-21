// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SRM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SRM__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SRM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'requests'
#include "v2x_msg/msg/detail/signal_request_package__struct.hpp"
// Member 'requestor'
#include "v2x_msg/msg/detail/requestor_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SRM __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SRM __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SRM_
{
  using Type = SRM_<ContainerAllocator>;

  explicit SRM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requests(_init),
    requestor(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->second = 0ll;
      this->sequencenumber = 0ll;
    }
  }

  explicit SRM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requests(_alloc, _init),
    requestor(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->second = 0ll;
      this->sequencenumber = 0ll;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _second_type =
    int64_t;
  _second_type second;
  using _sequencenumber_type =
    int64_t;
  _sequencenumber_type sequencenumber;
  using _requests_type =
    v2x_msg::msg::SignalRequestPackage_<ContainerAllocator>;
  _requests_type requests;
  using _requestor_type =
    v2x_msg::msg::RequestorDescription_<ContainerAllocator>;
  _requestor_type requestor;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__second(
    const int64_t & _arg)
  {
    this->second = _arg;
    return *this;
  }
  Type & set__sequencenumber(
    const int64_t & _arg)
  {
    this->sequencenumber = _arg;
    return *this;
  }
  Type & set__requests(
    const v2x_msg::msg::SignalRequestPackage_<ContainerAllocator> & _arg)
  {
    this->requests = _arg;
    return *this;
  }
  Type & set__requestor(
    const v2x_msg::msg::RequestorDescription_<ContainerAllocator> & _arg)
  {
    this->requestor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SRM_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SRM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SRM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SRM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SRM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SRM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SRM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SRM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SRM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SRM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SRM
    std::shared_ptr<v2x_msg::msg::SRM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SRM
    std::shared_ptr<v2x_msg::msg::SRM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SRM_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    if (this->sequencenumber != other.sequencenumber) {
      return false;
    }
    if (this->requests != other.requests) {
      return false;
    }
    if (this->requestor != other.requestor) {
      return false;
    }
    return true;
  }
  bool operator!=(const SRM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SRM_

// alias to use template instance with default allocator
using SRM =
  v2x_msg::msg::SRM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SRM__STRUCT_HPP_
