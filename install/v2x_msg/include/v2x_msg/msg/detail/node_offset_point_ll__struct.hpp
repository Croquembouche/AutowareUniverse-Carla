// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'nodell1'
#include "v2x_msg/msg/detail/node_ll24_b__struct.hpp"
// Member 'nodell2'
#include "v2x_msg/msg/detail/node_ll28_b__struct.hpp"
// Member 'nodell3'
#include "v2x_msg/msg/detail/node_ll32_b__struct.hpp"
// Member 'nodell4'
#include "v2x_msg/msg/detail/node_ll36_b__struct.hpp"
// Member 'nodell5'
#include "v2x_msg/msg/detail/node_ll44_b__struct.hpp"
// Member 'nodell6'
#include "v2x_msg/msg/detail/node_ll48_b__struct.hpp"
// Member 'nodelatlon'
#include "v2x_msg/msg/detail/nodellmd64b__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__NodeOffsetPointLL __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__NodeOffsetPointLL __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeOffsetPointLL_
{
  using Type = NodeOffsetPointLL_<ContainerAllocator>;

  explicit NodeOffsetPointLL_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nodell1(_init),
    nodell2(_init),
    nodell3(_init),
    nodell4(_init),
    nodell5(_init),
    nodell6(_init),
    nodelatlon(_init)
  {
    (void)_init;
  }

  explicit NodeOffsetPointLL_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nodell1(_alloc, _init),
    nodell2(_alloc, _init),
    nodell3(_alloc, _init),
    nodell4(_alloc, _init),
    nodell5(_alloc, _init),
    nodell6(_alloc, _init),
    nodelatlon(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _nodell1_type =
    v2x_msg::msg::NodeLL24B_<ContainerAllocator>;
  _nodell1_type nodell1;
  using _nodell2_type =
    v2x_msg::msg::NodeLL28B_<ContainerAllocator>;
  _nodell2_type nodell2;
  using _nodell3_type =
    v2x_msg::msg::NodeLL32B_<ContainerAllocator>;
  _nodell3_type nodell3;
  using _nodell4_type =
    v2x_msg::msg::NodeLL36B_<ContainerAllocator>;
  _nodell4_type nodell4;
  using _nodell5_type =
    v2x_msg::msg::NodeLL44B_<ContainerAllocator>;
  _nodell5_type nodell5;
  using _nodell6_type =
    v2x_msg::msg::NodeLL48B_<ContainerAllocator>;
  _nodell6_type nodell6;
  using _nodelatlon_type =
    v2x_msg::msg::Nodellmd64b_<ContainerAllocator>;
  _nodelatlon_type nodelatlon;

  // setters for named parameter idiom
  Type & set__nodell1(
    const v2x_msg::msg::NodeLL24B_<ContainerAllocator> & _arg)
  {
    this->nodell1 = _arg;
    return *this;
  }
  Type & set__nodell2(
    const v2x_msg::msg::NodeLL28B_<ContainerAllocator> & _arg)
  {
    this->nodell2 = _arg;
    return *this;
  }
  Type & set__nodell3(
    const v2x_msg::msg::NodeLL32B_<ContainerAllocator> & _arg)
  {
    this->nodell3 = _arg;
    return *this;
  }
  Type & set__nodell4(
    const v2x_msg::msg::NodeLL36B_<ContainerAllocator> & _arg)
  {
    this->nodell4 = _arg;
    return *this;
  }
  Type & set__nodell5(
    const v2x_msg::msg::NodeLL44B_<ContainerAllocator> & _arg)
  {
    this->nodell5 = _arg;
    return *this;
  }
  Type & set__nodell6(
    const v2x_msg::msg::NodeLL48B_<ContainerAllocator> & _arg)
  {
    this->nodell6 = _arg;
    return *this;
  }
  Type & set__nodelatlon(
    const v2x_msg::msg::Nodellmd64b_<ContainerAllocator> & _arg)
  {
    this->nodelatlon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__NodeOffsetPointLL
    std::shared_ptr<v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__NodeOffsetPointLL
    std::shared_ptr<v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeOffsetPointLL_ & other) const
  {
    if (this->nodell1 != other.nodell1) {
      return false;
    }
    if (this->nodell2 != other.nodell2) {
      return false;
    }
    if (this->nodell3 != other.nodell3) {
      return false;
    }
    if (this->nodell4 != other.nodell4) {
      return false;
    }
    if (this->nodell5 != other.nodell5) {
      return false;
    }
    if (this->nodell6 != other.nodell6) {
      return false;
    }
    if (this->nodelatlon != other.nodelatlon) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeOffsetPointLL_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeOffsetPointLL_

// alias to use template instance with default allocator
using NodeOffsetPointLL =
  v2x_msg::msg::NodeOffsetPointLL_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__STRUCT_HPP_
