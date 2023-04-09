// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/NodeLL36B.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LL36_B__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LL36_B__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__NodeLL36B __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__NodeLL36B __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeLL36B_
{
  using Type = NodeLL36B_<ContainerAllocator>;

  explicit NodeLL36B_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lon = 0ll;
      this->lat = 0ll;
    }
  }

  explicit NodeLL36B_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lon = 0ll;
      this->lat = 0ll;
    }
  }

  // field types and members
  using _lon_type =
    int64_t;
  _lon_type lon;
  using _lat_type =
    int64_t;
  _lat_type lat;

  // setters for named parameter idiom
  Type & set__lon(
    const int64_t & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__lat(
    const int64_t & _arg)
  {
    this->lat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::NodeLL36B_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::NodeLL36B_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeLL36B_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeLL36B_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeLL36B_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeLL36B_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeLL36B_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeLL36B_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeLL36B_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeLL36B_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__NodeLL36B
    std::shared_ptr<v2x_msg::msg::NodeLL36B_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__NodeLL36B
    std::shared_ptr<v2x_msg::msg::NodeLL36B_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeLL36B_ & other) const
  {
    if (this->lon != other.lon) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeLL36B_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeLL36B_

// alias to use template instance with default allocator
using NodeLL36B =
  v2x_msg::msg::NodeLL36B_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_LL36_B__STRUCT_HPP_
