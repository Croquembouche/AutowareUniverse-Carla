// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/AccelSets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_SETS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ACCEL_SETS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'angle'
#include "v2x_msg/msg/detail/acceleration_set4_way__struct.hpp"
// Member 'confidenceset'
#include "v2x_msg/msg/detail/confidence_set__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__AccelSets __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__AccelSets __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelSets_
{
  using Type = AccelSets_<ContainerAllocator>;

  explicit AccelSets_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angle(_init),
    confidenceset(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->certaccelthres = 0ll;
      this->yawratecon = 0ll;
      this->hozaccelcon = 0ll;
    }
  }

  explicit AccelSets_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angle(_alloc, _init),
    confidenceset(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->certaccelthres = 0ll;
      this->yawratecon = 0ll;
      this->hozaccelcon = 0ll;
    }
  }

  // field types and members
  using _angle_type =
    v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>;
  _angle_type angle;
  using _certaccelthres_type =
    int64_t;
  _certaccelthres_type certaccelthres;
  using _yawratecon_type =
    int64_t;
  _yawratecon_type yawratecon;
  using _hozaccelcon_type =
    int64_t;
  _hozaccelcon_type hozaccelcon;
  using _confidenceset_type =
    v2x_msg::msg::ConfidenceSet_<ContainerAllocator>;
  _confidenceset_type confidenceset;

  // setters for named parameter idiom
  Type & set__angle(
    const v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__certaccelthres(
    const int64_t & _arg)
  {
    this->certaccelthres = _arg;
    return *this;
  }
  Type & set__yawratecon(
    const int64_t & _arg)
  {
    this->yawratecon = _arg;
    return *this;
  }
  Type & set__hozaccelcon(
    const int64_t & _arg)
  {
    this->hozaccelcon = _arg;
    return *this;
  }
  Type & set__confidenceset(
    const v2x_msg::msg::ConfidenceSet_<ContainerAllocator> & _arg)
  {
    this->confidenceset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::AccelSets_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::AccelSets_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::AccelSets_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::AccelSets_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AccelSets_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AccelSets_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AccelSets_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AccelSets_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::AccelSets_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::AccelSets_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__AccelSets
    std::shared_ptr<v2x_msg::msg::AccelSets_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__AccelSets
    std::shared_ptr<v2x_msg::msg::AccelSets_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelSets_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    if (this->certaccelthres != other.certaccelthres) {
      return false;
    }
    if (this->yawratecon != other.yawratecon) {
      return false;
    }
    if (this->hozaccelcon != other.hozaccelcon) {
      return false;
    }
    if (this->confidenceset != other.confidenceset) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelSets_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelSets_

// alias to use template instance with default allocator
using AccelSets =
  v2x_msg::msg::AccelSets_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_SETS__STRUCT_HPP_
