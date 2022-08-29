// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONTENT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__CONTENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'advisory'
#include "v2x_msg/msg/detail/iti_scodesandtext__struct.hpp"
// Member 'workzone'
#include "v2x_msg/msg/detail/work_zone__struct.hpp"
// Member 'genericsign'
#include "v2x_msg/msg/detail/generic_signage__struct.hpp"
// Member 'speedlimit'
#include "v2x_msg/msg/detail/itis_speed_limit__struct.hpp"
// Member 'exitservice'
#include "v2x_msg/msg/detail/exit_service__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Content __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Content __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Content_
{
  using Type = Content_<ContainerAllocator>;

  explicit Content_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Content_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _advisory_type =
    std::vector<v2x_msg::msg::ITIScodesandtext_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ITIScodesandtext_<ContainerAllocator>>>;
  _advisory_type advisory;
  using _workzone_type =
    std::vector<v2x_msg::msg::WorkZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::WorkZone_<ContainerAllocator>>>;
  _workzone_type workzone;
  using _genericsign_type =
    std::vector<v2x_msg::msg::GenericSignage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GenericSignage_<ContainerAllocator>>>;
  _genericsign_type genericsign;
  using _speedlimit_type =
    std::vector<v2x_msg::msg::ITISSpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ITISSpeedLimit_<ContainerAllocator>>>;
  _speedlimit_type speedlimit;
  using _exitservice_type =
    std::vector<v2x_msg::msg::ExitService_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ExitService_<ContainerAllocator>>>;
  _exitservice_type exitservice;

  // setters for named parameter idiom
  Type & set__advisory(
    const std::vector<v2x_msg::msg::ITIScodesandtext_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ITIScodesandtext_<ContainerAllocator>>> & _arg)
  {
    this->advisory = _arg;
    return *this;
  }
  Type & set__workzone(
    const std::vector<v2x_msg::msg::WorkZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::WorkZone_<ContainerAllocator>>> & _arg)
  {
    this->workzone = _arg;
    return *this;
  }
  Type & set__genericsign(
    const std::vector<v2x_msg::msg::GenericSignage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GenericSignage_<ContainerAllocator>>> & _arg)
  {
    this->genericsign = _arg;
    return *this;
  }
  Type & set__speedlimit(
    const std::vector<v2x_msg::msg::ITISSpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ITISSpeedLimit_<ContainerAllocator>>> & _arg)
  {
    this->speedlimit = _arg;
    return *this;
  }
  Type & set__exitservice(
    const std::vector<v2x_msg::msg::ExitService_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ExitService_<ContainerAllocator>>> & _arg)
  {
    this->exitservice = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Content_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Content_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Content_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Content_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Content_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Content_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Content_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Content_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Content_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Content_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Content
    std::shared_ptr<v2x_msg::msg::Content_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Content
    std::shared_ptr<v2x_msg::msg::Content_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Content_ & other) const
  {
    if (this->advisory != other.advisory) {
      return false;
    }
    if (this->workzone != other.workzone) {
      return false;
    }
    if (this->genericsign != other.genericsign) {
      return false;
    }
    if (this->speedlimit != other.speedlimit) {
      return false;
    }
    if (this->exitservice != other.exitservice) {
      return false;
    }
    return true;
  }
  bool operator!=(const Content_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Content_

// alias to use template instance with default allocator
using Content =
  v2x_msg::msg::Content_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONTENT__STRUCT_HPP_
