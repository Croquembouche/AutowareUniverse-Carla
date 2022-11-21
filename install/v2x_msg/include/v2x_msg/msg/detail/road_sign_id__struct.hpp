// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RoadSignID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RoadSignID __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RoadSignID __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadSignID_
{
  using Type = RoadSignID_<ContainerAllocator>;

  explicit RoadSignID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->viewangle = "";
      this->mutcdcode = 0ll;
      this->msgcrc = "";
    }
  }

  explicit RoadSignID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    viewangle(_alloc),
    msgcrc(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->viewangle = "";
      this->mutcdcode = 0ll;
      this->msgcrc = "";
    }
  }

  // field types and members
  using _position_type =
    v2x_msg::msg::Position3D_<ContainerAllocator>;
  _position_type position;
  using _viewangle_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _viewangle_type viewangle;
  using _mutcdcode_type =
    int64_t;
  _mutcdcode_type mutcdcode;
  using _msgcrc_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msgcrc_type msgcrc;

  // setters for named parameter idiom
  Type & set__position(
    const v2x_msg::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__viewangle(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->viewangle = _arg;
    return *this;
  }
  Type & set__mutcdcode(
    const int64_t & _arg)
  {
    this->mutcdcode = _arg;
    return *this;
  }
  Type & set__msgcrc(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msgcrc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RoadSignID_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RoadSignID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RoadSignID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RoadSignID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RoadSignID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RoadSignID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RoadSignID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RoadSignID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RoadSignID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RoadSignID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RoadSignID
    std::shared_ptr<v2x_msg::msg::RoadSignID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RoadSignID
    std::shared_ptr<v2x_msg::msg::RoadSignID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadSignID_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->viewangle != other.viewangle) {
      return false;
    }
    if (this->mutcdcode != other.mutcdcode) {
      return false;
    }
    if (this->msgcrc != other.msgcrc) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadSignID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadSignID_

// alias to use template instance with default allocator
using RoadSignID =
  v2x_msg::msg::RoadSignID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__STRUCT_HPP_
