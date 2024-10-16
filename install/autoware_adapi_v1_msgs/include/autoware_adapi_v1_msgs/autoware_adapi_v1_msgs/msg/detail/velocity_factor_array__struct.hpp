// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__STRUCT_HPP_

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
// Member 'factors'
#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactorArray __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactorArray __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityFactorArray_
{
  using Type = VelocityFactorArray_<ContainerAllocator>;

  explicit VelocityFactorArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit VelocityFactorArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _factors_type =
    std::vector<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>>;
  _factors_type factors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__factors(
    const std::vector<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>> & _arg)
  {
    this->factors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactorArray
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactorArray
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactorArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityFactorArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->factors != other.factors) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityFactorArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityFactorArray_

// alias to use template instance with default allocator
using VelocityFactorArray =
  autoware_adapi_v1_msgs::msg::VelocityFactorArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__STRUCT_HPP_
