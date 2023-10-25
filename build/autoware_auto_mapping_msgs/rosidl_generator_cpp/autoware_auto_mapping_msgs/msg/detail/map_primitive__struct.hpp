// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_mapping_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__STRUCT_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_auto_mapping_msgs__msg__MapPrimitive __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_mapping_msgs__msg__MapPrimitive __declspec(deprecated)
#endif

namespace autoware_auto_mapping_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapPrimitive_
{
  using Type = MapPrimitive_<ContainerAllocator>;

  explicit MapPrimitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->primitive_type = "";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = 0ll;
      this->primitive_type = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  explicit MapPrimitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : primitive_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->primitive_type = "";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = 0ll;
      this->primitive_type = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _primitive_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _primitive_type_type primitive_type;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__primitive_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->primitive_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_mapping_msgs__msg__MapPrimitive
    std::shared_ptr<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_mapping_msgs__msg__MapPrimitive
    std::shared_ptr<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapPrimitive_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->primitive_type != other.primitive_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapPrimitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapPrimitive_

// alias to use template instance with default allocator
using MapPrimitive =
  autoware_auto_mapping_msgs::msg::MapPrimitive_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_mapping_msgs

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__STRUCT_HPP_
