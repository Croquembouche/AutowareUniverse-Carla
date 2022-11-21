// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/MsgID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MSG_ID__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__MSG_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'roadsignid'
#include "v2x_msg/msg/detail/road_sign_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__MsgID __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__MsgID __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgID_
{
  using Type = MsgID_<ContainerAllocator>;

  explicit MsgID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roadsignid(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->furtherinfoid = "";
    }
  }

  explicit MsgID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : furtherinfoid(_alloc),
    roadsignid(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->furtherinfoid = "";
    }
  }

  // field types and members
  using _furtherinfoid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _furtherinfoid_type furtherinfoid;
  using _roadsignid_type =
    v2x_msg::msg::RoadSignID_<ContainerAllocator>;
  _roadsignid_type roadsignid;

  // setters for named parameter idiom
  Type & set__furtherinfoid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->furtherinfoid = _arg;
    return *this;
  }
  Type & set__roadsignid(
    const v2x_msg::msg::RoadSignID_<ContainerAllocator> & _arg)
  {
    this->roadsignid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::MsgID_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::MsgID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::MsgID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::MsgID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::MsgID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::MsgID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::MsgID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::MsgID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::MsgID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::MsgID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__MsgID
    std::shared_ptr<v2x_msg::msg::MsgID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__MsgID
    std::shared_ptr<v2x_msg::msg::MsgID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgID_ & other) const
  {
    if (this->furtherinfoid != other.furtherinfoid) {
      return false;
    }
    if (this->roadsignid != other.roadsignid) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgID_

// alias to use template instance with default allocator
using MsgID =
  v2x_msg::msg::MsgID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__MSG_ID__STRUCT_HPP_
