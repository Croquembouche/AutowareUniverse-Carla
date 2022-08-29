// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/PathHistory.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_HISTORY__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__PATH_HISTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'initialposition'
#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"
// Member 'crumbdata'
#include "v2x_msg/msg/detail/path_history_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__PathHistory __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__PathHistory __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathHistory_
{
  using Type = PathHistory_<ContainerAllocator>;

  explicit PathHistory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initialposition(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->currgnssstatus = "";
    }
  }

  explicit PathHistory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initialposition(_alloc, _init),
    currgnssstatus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->currgnssstatus = "";
    }
  }

  // field types and members
  using _initialposition_type =
    v2x_msg::msg::FullPositionVector_<ContainerAllocator>;
  _initialposition_type initialposition;
  using _currgnssstatus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _currgnssstatus_type currgnssstatus;
  using _crumbdata_type =
    std::vector<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>>>;
  _crumbdata_type crumbdata;

  // setters for named parameter idiom
  Type & set__initialposition(
    const v2x_msg::msg::FullPositionVector_<ContainerAllocator> & _arg)
  {
    this->initialposition = _arg;
    return *this;
  }
  Type & set__currgnssstatus(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->currgnssstatus = _arg;
    return *this;
  }
  Type & set__crumbdata(
    const std::vector<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->crumbdata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::PathHistory_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::PathHistory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::PathHistory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::PathHistory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PathHistory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PathHistory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PathHistory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PathHistory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::PathHistory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::PathHistory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__PathHistory
    std::shared_ptr<v2x_msg::msg::PathHistory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__PathHistory
    std::shared_ptr<v2x_msg::msg::PathHistory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathHistory_ & other) const
  {
    if (this->initialposition != other.initialposition) {
      return false;
    }
    if (this->currgnssstatus != other.currgnssstatus) {
      return false;
    }
    if (this->crumbdata != other.crumbdata) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathHistory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathHistory_

// alias to use template instance with default allocator
using PathHistory =
  v2x_msg::msg::PathHistory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PATH_HISTORY__STRUCT_HPP_
