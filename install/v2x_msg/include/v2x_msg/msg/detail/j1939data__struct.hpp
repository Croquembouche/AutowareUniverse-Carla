// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/J1939data.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__J1939DATA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__J1939DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'tires'
#include "v2x_msg/msg/detail/tire_data__struct.hpp"
// Member 'axles'
#include "v2x_msg/msg/detail/axle_weight__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__J1939data __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__J1939data __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct J1939data_
{
  using Type = J1939data_<ContainerAllocator>;

  explicit J1939data_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trailerweight = 0ll;
      this->cargoweight = 0ll;
      this->steeringaxletemperture = 0ll;
      this->driveaxlelocation = 0ll;
      this->driveaxleliftairpressure = 0ll;
      this->driveaxletemperature = 0ll;
      this->driveaxlelubpressure = 0ll;
      this->steeringaxlelubepressure = 0ll;
    }
  }

  explicit J1939data_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trailerweight = 0ll;
      this->cargoweight = 0ll;
      this->steeringaxletemperture = 0ll;
      this->driveaxlelocation = 0ll;
      this->driveaxleliftairpressure = 0ll;
      this->driveaxletemperature = 0ll;
      this->driveaxlelubpressure = 0ll;
      this->steeringaxlelubepressure = 0ll;
    }
  }

  // field types and members
  using _tires_type =
    std::vector<v2x_msg::msg::TireData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::TireData_<ContainerAllocator>>>;
  _tires_type tires;
  using _axles_type =
    std::vector<v2x_msg::msg::AxleWeight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::AxleWeight_<ContainerAllocator>>>;
  _axles_type axles;
  using _trailerweight_type =
    int64_t;
  _trailerweight_type trailerweight;
  using _cargoweight_type =
    int64_t;
  _cargoweight_type cargoweight;
  using _steeringaxletemperture_type =
    int64_t;
  _steeringaxletemperture_type steeringaxletemperture;
  using _driveaxlelocation_type =
    int64_t;
  _driveaxlelocation_type driveaxlelocation;
  using _driveaxleliftairpressure_type =
    int64_t;
  _driveaxleliftairpressure_type driveaxleliftairpressure;
  using _driveaxletemperature_type =
    int64_t;
  _driveaxletemperature_type driveaxletemperature;
  using _driveaxlelubpressure_type =
    int64_t;
  _driveaxlelubpressure_type driveaxlelubpressure;
  using _steeringaxlelubepressure_type =
    int64_t;
  _steeringaxlelubepressure_type steeringaxlelubepressure;

  // setters for named parameter idiom
  Type & set__tires(
    const std::vector<v2x_msg::msg::TireData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::TireData_<ContainerAllocator>>> & _arg)
  {
    this->tires = _arg;
    return *this;
  }
  Type & set__axles(
    const std::vector<v2x_msg::msg::AxleWeight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::AxleWeight_<ContainerAllocator>>> & _arg)
  {
    this->axles = _arg;
    return *this;
  }
  Type & set__trailerweight(
    const int64_t & _arg)
  {
    this->trailerweight = _arg;
    return *this;
  }
  Type & set__cargoweight(
    const int64_t & _arg)
  {
    this->cargoweight = _arg;
    return *this;
  }
  Type & set__steeringaxletemperture(
    const int64_t & _arg)
  {
    this->steeringaxletemperture = _arg;
    return *this;
  }
  Type & set__driveaxlelocation(
    const int64_t & _arg)
  {
    this->driveaxlelocation = _arg;
    return *this;
  }
  Type & set__driveaxleliftairpressure(
    const int64_t & _arg)
  {
    this->driveaxleliftairpressure = _arg;
    return *this;
  }
  Type & set__driveaxletemperature(
    const int64_t & _arg)
  {
    this->driveaxletemperature = _arg;
    return *this;
  }
  Type & set__driveaxlelubpressure(
    const int64_t & _arg)
  {
    this->driveaxlelubpressure = _arg;
    return *this;
  }
  Type & set__steeringaxlelubepressure(
    const int64_t & _arg)
  {
    this->steeringaxlelubepressure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::J1939data_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::J1939data_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::J1939data_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::J1939data_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::J1939data_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::J1939data_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::J1939data_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::J1939data_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::J1939data_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::J1939data_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__J1939data
    std::shared_ptr<v2x_msg::msg::J1939data_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__J1939data
    std::shared_ptr<v2x_msg::msg::J1939data_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const J1939data_ & other) const
  {
    if (this->tires != other.tires) {
      return false;
    }
    if (this->axles != other.axles) {
      return false;
    }
    if (this->trailerweight != other.trailerweight) {
      return false;
    }
    if (this->cargoweight != other.cargoweight) {
      return false;
    }
    if (this->steeringaxletemperture != other.steeringaxletemperture) {
      return false;
    }
    if (this->driveaxlelocation != other.driveaxlelocation) {
      return false;
    }
    if (this->driveaxleliftairpressure != other.driveaxleliftairpressure) {
      return false;
    }
    if (this->driveaxletemperature != other.driveaxletemperature) {
      return false;
    }
    if (this->driveaxlelubpressure != other.driveaxlelubpressure) {
      return false;
    }
    if (this->steeringaxlelubepressure != other.steeringaxlelubepressure) {
      return false;
    }
    return true;
  }
  bool operator!=(const J1939data_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct J1939data_

// alias to use template instance with default allocator
using J1939data =
  v2x_msg::msg::J1939data_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__J1939DATA__STRUCT_HPP_
