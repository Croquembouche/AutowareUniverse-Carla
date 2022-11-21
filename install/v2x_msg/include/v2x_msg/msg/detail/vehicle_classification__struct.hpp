// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__VehicleClassification __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__VehicleClassification __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleClassification_
{
  using Type = VehicleClassification_<ContainerAllocator>;

  explicit VehicleClassification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keytype = 0ll;
      this->role = 0ll;
      this->iso3883 = 0ll;
      this->hpmstype = 0ll;
      this->vehicletype = 0ll;
      this->responseequip = 0ll;
      this->respondertype = 0ll;
      this->fueltype = 0ll;
    }
  }

  explicit VehicleClassification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keytype = 0ll;
      this->role = 0ll;
      this->iso3883 = 0ll;
      this->hpmstype = 0ll;
      this->vehicletype = 0ll;
      this->responseequip = 0ll;
      this->respondertype = 0ll;
      this->fueltype = 0ll;
    }
  }

  // field types and members
  using _keytype_type =
    int64_t;
  _keytype_type keytype;
  using _role_type =
    int64_t;
  _role_type role;
  using _iso3883_type =
    int64_t;
  _iso3883_type iso3883;
  using _hpmstype_type =
    int64_t;
  _hpmstype_type hpmstype;
  using _vehicletype_type =
    int64_t;
  _vehicletype_type vehicletype;
  using _responseequip_type =
    int64_t;
  _responseequip_type responseequip;
  using _respondertype_type =
    int64_t;
  _respondertype_type respondertype;
  using _fueltype_type =
    int64_t;
  _fueltype_type fueltype;

  // setters for named parameter idiom
  Type & set__keytype(
    const int64_t & _arg)
  {
    this->keytype = _arg;
    return *this;
  }
  Type & set__role(
    const int64_t & _arg)
  {
    this->role = _arg;
    return *this;
  }
  Type & set__iso3883(
    const int64_t & _arg)
  {
    this->iso3883 = _arg;
    return *this;
  }
  Type & set__hpmstype(
    const int64_t & _arg)
  {
    this->hpmstype = _arg;
    return *this;
  }
  Type & set__vehicletype(
    const int64_t & _arg)
  {
    this->vehicletype = _arg;
    return *this;
  }
  Type & set__responseequip(
    const int64_t & _arg)
  {
    this->responseequip = _arg;
    return *this;
  }
  Type & set__respondertype(
    const int64_t & _arg)
  {
    this->respondertype = _arg;
    return *this;
  }
  Type & set__fueltype(
    const int64_t & _arg)
  {
    this->fueltype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::VehicleClassification_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::VehicleClassification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleClassification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleClassification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleClassification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleClassification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleClassification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleClassification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleClassification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleClassification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__VehicleClassification
    std::shared_ptr<v2x_msg::msg::VehicleClassification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__VehicleClassification
    std::shared_ptr<v2x_msg::msg::VehicleClassification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleClassification_ & other) const
  {
    if (this->keytype != other.keytype) {
      return false;
    }
    if (this->role != other.role) {
      return false;
    }
    if (this->iso3883 != other.iso3883) {
      return false;
    }
    if (this->hpmstype != other.hpmstype) {
      return false;
    }
    if (this->vehicletype != other.vehicletype) {
      return false;
    }
    if (this->responseequip != other.responseequip) {
      return false;
    }
    if (this->respondertype != other.respondertype) {
      return false;
    }
    if (this->fueltype != other.fueltype) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleClassification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleClassification_

// alias to use template instance with default allocator
using VehicleClassification =
  v2x_msg::msg::VehicleClassification_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_HPP_
