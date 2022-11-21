// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RequestorPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/position3_d__struct.hpp"
// Member 'speed'
#include "v2x_msg/msg/detail/transmission_and_speed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RequestorPositionVector __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RequestorPositionVector __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RequestorPositionVector_
{
  using Type = RequestorPositionVector_<ContainerAllocator>;

  explicit RequestorPositionVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    speed(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0ll;
    }
  }

  explicit RequestorPositionVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    speed(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0ll;
    }
  }

  // field types and members
  using _position_type =
    v2x_msg::msg::Position3D_<ContainerAllocator>;
  _position_type position;
  using _heading_type =
    int64_t;
  _heading_type heading;
  using _speed_type =
    v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator>;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__position(
    const v2x_msg::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__heading(
    const int64_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RequestorPositionVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RequestorPositionVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RequestorPositionVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RequestorPositionVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RequestorPositionVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RequestorPositionVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RequestorPositionVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RequestorPositionVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RequestorPositionVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RequestorPositionVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RequestorPositionVector
    std::shared_ptr<v2x_msg::msg::RequestorPositionVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RequestorPositionVector
    std::shared_ptr<v2x_msg::msg::RequestorPositionVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestorPositionVector_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestorPositionVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestorPositionVector_

// alias to use template instance with default allocator
using RequestorPositionVector =
  v2x_msg::msg::RequestorPositionVector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__STRUCT_HPP_
