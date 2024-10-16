// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:srv/InitializeLocalization.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__srv__InitializeLocalization_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__srv__InitializeLocalization_Request __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InitializeLocalization_Request_
{
  using Type = InitializeLocalization_Request_<ContainerAllocator>;

  explicit InitializeLocalization_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit InitializeLocalization_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pose_type =
    rosidl_runtime_cpp::BoundedVector<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>>>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const rosidl_runtime_cpp::BoundedVector<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>>> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__srv__InitializeLocalization_Request
    std::shared_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__srv__InitializeLocalization_Request
    std::shared_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitializeLocalization_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitializeLocalization_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitializeLocalization_Request_

// alias to use template instance with default allocator
using InitializeLocalization_Request =
  autoware_adapi_v1_msgs::srv::InitializeLocalization_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs


// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__srv__InitializeLocalization_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__srv__InitializeLocalization_Response __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InitializeLocalization_Response_
{
  using Type = InitializeLocalization_Response_<ContainerAllocator>;

  explicit InitializeLocalization_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit InitializeLocalization_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    autoware_adapi_v1_msgs::msg::ResponseStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const autoware_adapi_v1_msgs::msg::ResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ERROR_UNSAFE =
    1u;
  static constexpr uint16_t ERROR_GNSS_SUPPORT =
    2u;
  static constexpr uint16_t ERROR_GNSS =
    3u;
  static constexpr uint16_t ERROR_ESTIMATION =
    4u;

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__srv__InitializeLocalization_Response
    std::shared_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__srv__InitializeLocalization_Response
    std::shared_ptr<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitializeLocalization_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitializeLocalization_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitializeLocalization_Response_

// alias to use template instance with default allocator
using InitializeLocalization_Response =
  autoware_adapi_v1_msgs::srv::InitializeLocalization_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InitializeLocalization_Response_<ContainerAllocator>::ERROR_UNSAFE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InitializeLocalization_Response_<ContainerAllocator>::ERROR_GNSS_SUPPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InitializeLocalization_Response_<ContainerAllocator>::ERROR_GNSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InitializeLocalization_Response_<ContainerAllocator>::ERROR_ESTIMATION;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs

namespace autoware_adapi_v1_msgs
{

namespace srv
{

struct InitializeLocalization
{
  using Request = autoware_adapi_v1_msgs::srv::InitializeLocalization_Request;
  using Response = autoware_adapi_v1_msgs::srv::InitializeLocalization_Response;
};

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__STRUCT_HPP_
