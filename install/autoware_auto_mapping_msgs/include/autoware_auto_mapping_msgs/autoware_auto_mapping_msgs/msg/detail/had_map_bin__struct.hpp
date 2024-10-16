// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_mapping_msgs:msg/HADMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_mapping_msgs__msg__HADMapBin __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_mapping_msgs__msg__HADMapBin __declspec(deprecated)
#endif

namespace autoware_auto_mapping_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HADMapBin_
{
  using Type = HADMapBin_<ContainerAllocator>;

  explicit HADMapBin_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->format_version = "";
      this->map_version = "";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->map_format = 0;
      this->format_version = "";
      this->map_version = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_format = 0;
    }
  }

  explicit HADMapBin_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    format_version(_alloc),
    map_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->format_version = "";
      this->map_version = "";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->map_format = 0;
      this->format_version = "";
      this->map_version = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_format = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _map_format_type =
    uint8_t;
  _map_format_type map_format;
  using _format_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _format_version_type format_version;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__map_format(
    const uint8_t & _arg)
  {
    this->map_format = _arg;
    return *this;
  }
  Type & set__format_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->format_version = _arg;
    return *this;
  }
  Type & set__map_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_version = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAP_FORMAT_LANELET2 =
    0u;

  // pointer types
  using RawPtr =
    autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_mapping_msgs__msg__HADMapBin
    std::shared_ptr<autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_mapping_msgs__msg__HADMapBin
    std::shared_ptr<autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HADMapBin_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->map_format != other.map_format) {
      return false;
    }
    if (this->format_version != other.format_version) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const HADMapBin_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HADMapBin_

// alias to use template instance with default allocator
using HADMapBin =
  autoware_auto_mapping_msgs::msg::HADMapBin_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HADMapBin_<ContainerAllocator>::MAP_FORMAT_LANELET2;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_mapping_msgs

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_HPP_
