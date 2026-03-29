// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/SwVersions01Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__SwVersions01Updated __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__SwVersions01Updated __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SwVersions01Updated_
{
  using Type = SwVersions01Updated_<ContainerAllocator>;

  explicit SwVersions01Updated_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bsu_sw_minor_version = 0;
      this->bsu_sw_major_version = 0;
      this->bsu_sw_build_version = 0;
      this->psa_sw_minor_version = 0;
      this->psa_sw_major_version = 0;
      this->psa_sw_build_version = 0;
      this->pdu12_sw_version = 0;
      this->pdu48_sw_version = 0;
    }
  }

  explicit SwVersions01Updated_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bsu_sw_minor_version = 0;
      this->bsu_sw_major_version = 0;
      this->bsu_sw_build_version = 0;
      this->psa_sw_minor_version = 0;
      this->psa_sw_major_version = 0;
      this->psa_sw_build_version = 0;
      this->pdu12_sw_version = 0;
      this->pdu48_sw_version = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bsu_sw_minor_version_type =
    uint8_t;
  _bsu_sw_minor_version_type bsu_sw_minor_version;
  using _bsu_sw_major_version_type =
    uint8_t;
  _bsu_sw_major_version_type bsu_sw_major_version;
  using _bsu_sw_build_version_type =
    uint16_t;
  _bsu_sw_build_version_type bsu_sw_build_version;
  using _psa_sw_minor_version_type =
    uint8_t;
  _psa_sw_minor_version_type psa_sw_minor_version;
  using _psa_sw_major_version_type =
    uint8_t;
  _psa_sw_major_version_type psa_sw_major_version;
  using _psa_sw_build_version_type =
    uint16_t;
  _psa_sw_build_version_type psa_sw_build_version;
  using _pdu12_sw_version_type =
    uint8_t;
  _pdu12_sw_version_type pdu12_sw_version;
  using _pdu48_sw_version_type =
    uint8_t;
  _pdu48_sw_version_type pdu48_sw_version;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bsu_sw_minor_version(
    const uint8_t & _arg)
  {
    this->bsu_sw_minor_version = _arg;
    return *this;
  }
  Type & set__bsu_sw_major_version(
    const uint8_t & _arg)
  {
    this->bsu_sw_major_version = _arg;
    return *this;
  }
  Type & set__bsu_sw_build_version(
    const uint16_t & _arg)
  {
    this->bsu_sw_build_version = _arg;
    return *this;
  }
  Type & set__psa_sw_minor_version(
    const uint8_t & _arg)
  {
    this->psa_sw_minor_version = _arg;
    return *this;
  }
  Type & set__psa_sw_major_version(
    const uint8_t & _arg)
  {
    this->psa_sw_major_version = _arg;
    return *this;
  }
  Type & set__psa_sw_build_version(
    const uint16_t & _arg)
  {
    this->psa_sw_build_version = _arg;
    return *this;
  }
  Type & set__pdu12_sw_version(
    const uint8_t & _arg)
  {
    this->pdu12_sw_version = _arg;
    return *this;
  }
  Type & set__pdu48_sw_version(
    const uint8_t & _arg)
  {
    this->pdu48_sw_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__SwVersions01Updated
    std::shared_ptr<sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__SwVersions01Updated
    std::shared_ptr<sd_can_msgs::msg::SwVersions01Updated_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwVersions01Updated_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bsu_sw_minor_version != other.bsu_sw_minor_version) {
      return false;
    }
    if (this->bsu_sw_major_version != other.bsu_sw_major_version) {
      return false;
    }
    if (this->bsu_sw_build_version != other.bsu_sw_build_version) {
      return false;
    }
    if (this->psa_sw_minor_version != other.psa_sw_minor_version) {
      return false;
    }
    if (this->psa_sw_major_version != other.psa_sw_major_version) {
      return false;
    }
    if (this->psa_sw_build_version != other.psa_sw_build_version) {
      return false;
    }
    if (this->pdu12_sw_version != other.pdu12_sw_version) {
      return false;
    }
    if (this->pdu48_sw_version != other.pdu48_sw_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwVersions01Updated_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwVersions01Updated_

// alias to use template instance with default allocator
using SwVersions01Updated =
  sd_can_msgs::msg::SwVersions01Updated_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__STRUCT_HPP_
