// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SignalRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.hpp"
// Member 'inboundlane'
// Member 'outboundlane'
#include "v2x_msg/msg/detail/intersection_access_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SignalRequest __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SignalRequest __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalRequest_
{
  using Type = SignalRequest_<ContainerAllocator>;

  explicit SignalRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    inboundlane(_init),
    outboundlane(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requestid = 0ll;
      this->requesttype = 0ll;
    }
  }

  explicit SignalRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    inboundlane(_alloc, _init),
    outboundlane(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requestid = 0ll;
      this->requesttype = 0ll;
    }
  }

  // field types and members
  using _id_type =
    v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator>;
  _id_type id;
  using _requestid_type =
    int64_t;
  _requestid_type requestid;
  using _requesttype_type =
    int64_t;
  _requesttype_type requesttype;
  using _inboundlane_type =
    v2x_msg::msg::IntersectionAccessPoint_<ContainerAllocator>;
  _inboundlane_type inboundlane;
  using _outboundlane_type =
    v2x_msg::msg::IntersectionAccessPoint_<ContainerAllocator>;
  _outboundlane_type outboundlane;

  // setters for named parameter idiom
  Type & set__id(
    const v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__requestid(
    const int64_t & _arg)
  {
    this->requestid = _arg;
    return *this;
  }
  Type & set__requesttype(
    const int64_t & _arg)
  {
    this->requesttype = _arg;
    return *this;
  }
  Type & set__inboundlane(
    const v2x_msg::msg::IntersectionAccessPoint_<ContainerAllocator> & _arg)
  {
    this->inboundlane = _arg;
    return *this;
  }
  Type & set__outboundlane(
    const v2x_msg::msg::IntersectionAccessPoint_<ContainerAllocator> & _arg)
  {
    this->outboundlane = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SignalRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SignalRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SignalRequest
    std::shared_ptr<v2x_msg::msg::SignalRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SignalRequest
    std::shared_ptr<v2x_msg::msg::SignalRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalRequest_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->requestid != other.requestid) {
      return false;
    }
    if (this->requesttype != other.requesttype) {
      return false;
    }
    if (this->inboundlane != other.inboundlane) {
      return false;
    }
    if (this->outboundlane != other.outboundlane) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalRequest_

// alias to use template instance with default allocator
using SignalRequest =
  v2x_msg::msg::SignalRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_HPP_
