// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SSM__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SSM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'status'
#include "v2x_msg/msg/detail/signal_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SSM __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SSM __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SSM_
{
  using Type = SSM_<ContainerAllocator>;

  explicit SSM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->second = 0ll;
      this->sequencenumber = 0ll;
    }
  }

  explicit SSM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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
  using _status_type =
    std::vector<v2x_msg::msg::SignalStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::SignalStatus_<ContainerAllocator>>>;
  _status_type status;

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
  Type & set__status(
    const std::vector<v2x_msg::msg::SignalStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::SignalStatus_<ContainerAllocator>>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SSM_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SSM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SSM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SSM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SSM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SSM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SSM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SSM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SSM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SSM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SSM
    std::shared_ptr<v2x_msg::msg::SSM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SSM
    std::shared_ptr<v2x_msg::msg::SSM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SSM_ & other) const
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
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SSM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SSM_

// alias to use template instance with default allocator
using SSM =
  v2x_msg::msg::SSM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SSM__STRUCT_HPP_
