// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'events'
#include "v2x_msg/msg/detail/privileged_events__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__EmergencyDetails __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__EmergencyDetails __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyDetails_
{
  using Type = EmergencyDetails_<ContainerAllocator>;

  explicit EmergencyDetails_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : events(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->notused = 0ll;
      this->sirenuse = 0ll;
      this->lightsuse = 0ll;
      this->multi = 0ll;
      this->responsetype = 0ll;
    }
  }

  explicit EmergencyDetails_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : events(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->notused = 0ll;
      this->sirenuse = 0ll;
      this->lightsuse = 0ll;
      this->multi = 0ll;
      this->responsetype = 0ll;
    }
  }

  // field types and members
  using _notused_type =
    int64_t;
  _notused_type notused;
  using _sirenuse_type =
    int64_t;
  _sirenuse_type sirenuse;
  using _lightsuse_type =
    int64_t;
  _lightsuse_type lightsuse;
  using _multi_type =
    int64_t;
  _multi_type multi;
  using _events_type =
    v2x_msg::msg::PrivilegedEvents_<ContainerAllocator>;
  _events_type events;
  using _responsetype_type =
    int64_t;
  _responsetype_type responsetype;

  // setters for named parameter idiom
  Type & set__notused(
    const int64_t & _arg)
  {
    this->notused = _arg;
    return *this;
  }
  Type & set__sirenuse(
    const int64_t & _arg)
  {
    this->sirenuse = _arg;
    return *this;
  }
  Type & set__lightsuse(
    const int64_t & _arg)
  {
    this->lightsuse = _arg;
    return *this;
  }
  Type & set__multi(
    const int64_t & _arg)
  {
    this->multi = _arg;
    return *this;
  }
  Type & set__events(
    const v2x_msg::msg::PrivilegedEvents_<ContainerAllocator> & _arg)
  {
    this->events = _arg;
    return *this;
  }
  Type & set__responsetype(
    const int64_t & _arg)
  {
    this->responsetype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::EmergencyDetails_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::EmergencyDetails_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::EmergencyDetails_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::EmergencyDetails_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::EmergencyDetails_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::EmergencyDetails_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::EmergencyDetails_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::EmergencyDetails_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::EmergencyDetails_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::EmergencyDetails_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__EmergencyDetails
    std::shared_ptr<v2x_msg::msg::EmergencyDetails_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__EmergencyDetails
    std::shared_ptr<v2x_msg::msg::EmergencyDetails_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyDetails_ & other) const
  {
    if (this->notused != other.notused) {
      return false;
    }
    if (this->sirenuse != other.sirenuse) {
      return false;
    }
    if (this->lightsuse != other.lightsuse) {
      return false;
    }
    if (this->multi != other.multi) {
      return false;
    }
    if (this->events != other.events) {
      return false;
    }
    if (this->responsetype != other.responsetype) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyDetails_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyDetails_

// alias to use template instance with default allocator
using EmergencyDetails =
  v2x_msg::msg::EmergencyDetails_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_HPP_
