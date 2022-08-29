// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'statetimespeed'
#include "v2x_msg/msg/detail/movement_event__struct.hpp"
// Member 'maneuverassistlist'
#include "v2x_msg/msg/detail/connection_maneuver_assist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__MovementState __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__MovementState __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementState_
{
  using Type = MovementState_<ContainerAllocator>;

  explicit MovementState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuverassistlist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movementname = "";
      this->signalgroupid = 0ll;
    }
  }

  explicit MovementState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : movementname(_alloc),
    maneuverassistlist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movementname = "";
      this->signalgroupid = 0ll;
    }
  }

  // field types and members
  using _movementname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _movementname_type movementname;
  using _signalgroupid_type =
    int64_t;
  _signalgroupid_type signalgroupid;
  using _statetimespeed_type =
    std::vector<v2x_msg::msg::MovementEvent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::MovementEvent_<ContainerAllocator>>>;
  _statetimespeed_type statetimespeed;
  using _maneuverassistlist_type =
    v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>;
  _maneuverassistlist_type maneuverassistlist;

  // setters for named parameter idiom
  Type & set__movementname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->movementname = _arg;
    return *this;
  }
  Type & set__signalgroupid(
    const int64_t & _arg)
  {
    this->signalgroupid = _arg;
    return *this;
  }
  Type & set__statetimespeed(
    const std::vector<v2x_msg::msg::MovementEvent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::MovementEvent_<ContainerAllocator>>> & _arg)
  {
    this->statetimespeed = _arg;
    return *this;
  }
  Type & set__maneuverassistlist(
    const v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator> & _arg)
  {
    this->maneuverassistlist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::MovementState_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::MovementState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::MovementState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::MovementState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::MovementState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::MovementState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::MovementState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::MovementState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::MovementState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::MovementState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__MovementState
    std::shared_ptr<v2x_msg::msg::MovementState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__MovementState
    std::shared_ptr<v2x_msg::msg::MovementState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementState_ & other) const
  {
    if (this->movementname != other.movementname) {
      return false;
    }
    if (this->signalgroupid != other.signalgroupid) {
      return false;
    }
    if (this->statetimespeed != other.statetimespeed) {
      return false;
    }
    if (this->maneuverassistlist != other.maneuverassistlist) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementState_

// alias to use template instance with default allocator
using MovementState =
  v2x_msg::msg::MovementState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_
