// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/SwVersions03.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_can_msgs__msg__SwVersions03 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__SwVersions03 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SwVersions03_
{
  using Type = SwVersions03_<ContainerAllocator>;

  explicit SwVersions03_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cba_rl_sw_minor_version = 0;
      this->cba_rl_sw_major_version = 0;
      this->cba_rl_sw_build_version = 0;
      this->cba_rr_sw_minor_version = 0;
      this->cba_rr_sw_major_version = 0;
      this->cba_rr_sw_build_version = 0;
    }
  }

  explicit SwVersions03_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cba_rl_sw_minor_version = 0;
      this->cba_rl_sw_major_version = 0;
      this->cba_rl_sw_build_version = 0;
      this->cba_rr_sw_minor_version = 0;
      this->cba_rr_sw_major_version = 0;
      this->cba_rr_sw_build_version = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cba_rl_sw_minor_version_type =
    uint8_t;
  _cba_rl_sw_minor_version_type cba_rl_sw_minor_version;
  using _cba_rl_sw_major_version_type =
    uint8_t;
  _cba_rl_sw_major_version_type cba_rl_sw_major_version;
  using _cba_rl_sw_build_version_type =
    uint16_t;
  _cba_rl_sw_build_version_type cba_rl_sw_build_version;
  using _cba_rr_sw_minor_version_type =
    uint8_t;
  _cba_rr_sw_minor_version_type cba_rr_sw_minor_version;
  using _cba_rr_sw_major_version_type =
    uint8_t;
  _cba_rr_sw_major_version_type cba_rr_sw_major_version;
  using _cba_rr_sw_build_version_type =
    uint16_t;
  _cba_rr_sw_build_version_type cba_rr_sw_build_version;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cba_rl_sw_minor_version(
    const uint8_t & _arg)
  {
    this->cba_rl_sw_minor_version = _arg;
    return *this;
  }
  Type & set__cba_rl_sw_major_version(
    const uint8_t & _arg)
  {
    this->cba_rl_sw_major_version = _arg;
    return *this;
  }
  Type & set__cba_rl_sw_build_version(
    const uint16_t & _arg)
  {
    this->cba_rl_sw_build_version = _arg;
    return *this;
  }
  Type & set__cba_rr_sw_minor_version(
    const uint8_t & _arg)
  {
    this->cba_rr_sw_minor_version = _arg;
    return *this;
  }
  Type & set__cba_rr_sw_major_version(
    const uint8_t & _arg)
  {
    this->cba_rr_sw_major_version = _arg;
    return *this;
  }
  Type & set__cba_rr_sw_build_version(
    const uint16_t & _arg)
  {
    this->cba_rr_sw_build_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::SwVersions03_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::SwVersions03_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::SwVersions03_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::SwVersions03_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::SwVersions03_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::SwVersions03_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::SwVersions03_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::SwVersions03_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::SwVersions03_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::SwVersions03_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__SwVersions03
    std::shared_ptr<sd_can_msgs::msg::SwVersions03_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__SwVersions03
    std::shared_ptr<sd_can_msgs::msg::SwVersions03_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwVersions03_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cba_rl_sw_minor_version != other.cba_rl_sw_minor_version) {
      return false;
    }
    if (this->cba_rl_sw_major_version != other.cba_rl_sw_major_version) {
      return false;
    }
    if (this->cba_rl_sw_build_version != other.cba_rl_sw_build_version) {
      return false;
    }
    if (this->cba_rr_sw_minor_version != other.cba_rr_sw_minor_version) {
      return false;
    }
    if (this->cba_rr_sw_major_version != other.cba_rr_sw_major_version) {
      return false;
    }
    if (this->cba_rr_sw_build_version != other.cba_rr_sw_build_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwVersions03_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwVersions03_

// alias to use template instance with default allocator
using SwVersions03 =
  sd_can_msgs::msg::SwVersions03_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__STRUCT_HPP_
