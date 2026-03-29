// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/HLMsg02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__HLMsg02 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__HLMsg02 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLMsg02_
{
  using Type = HLMsg02_<ContainerAllocator>;

  explicit HLMsg02_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_alive_02 = 0;
      this->hl_psa_mode_of_operation = 0;
      this->hl_target_psa_control = 0.0;
      this->hl_psa_profile_acc_rad_s2 = 0;
      this->hl_psa_profile_dec_rad_s2 = 0;
      this->hl_psa_profile_vel_rad_s = 0;
    }
  }

  explicit HLMsg02_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_alive_02 = 0;
      this->hl_psa_mode_of_operation = 0;
      this->hl_target_psa_control = 0.0;
      this->hl_psa_profile_acc_rad_s2 = 0;
      this->hl_psa_profile_dec_rad_s2 = 0;
      this->hl_psa_profile_vel_rad_s = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hl_alive_02_type =
    uint8_t;
  _hl_alive_02_type hl_alive_02;
  using _hl_psa_mode_of_operation_type =
    uint8_t;
  _hl_psa_mode_of_operation_type hl_psa_mode_of_operation;
  using _hl_target_psa_control_type =
    double;
  _hl_target_psa_control_type hl_target_psa_control;
  using _hl_psa_profile_acc_rad_s2_type =
    uint16_t;
  _hl_psa_profile_acc_rad_s2_type hl_psa_profile_acc_rad_s2;
  using _hl_psa_profile_dec_rad_s2_type =
    uint16_t;
  _hl_psa_profile_dec_rad_s2_type hl_psa_profile_dec_rad_s2;
  using _hl_psa_profile_vel_rad_s_type =
    uint16_t;
  _hl_psa_profile_vel_rad_s_type hl_psa_profile_vel_rad_s;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hl_alive_02(
    const uint8_t & _arg)
  {
    this->hl_alive_02 = _arg;
    return *this;
  }
  Type & set__hl_psa_mode_of_operation(
    const uint8_t & _arg)
  {
    this->hl_psa_mode_of_operation = _arg;
    return *this;
  }
  Type & set__hl_target_psa_control(
    const double & _arg)
  {
    this->hl_target_psa_control = _arg;
    return *this;
  }
  Type & set__hl_psa_profile_acc_rad_s2(
    const uint16_t & _arg)
  {
    this->hl_psa_profile_acc_rad_s2 = _arg;
    return *this;
  }
  Type & set__hl_psa_profile_dec_rad_s2(
    const uint16_t & _arg)
  {
    this->hl_psa_profile_dec_rad_s2 = _arg;
    return *this;
  }
  Type & set__hl_psa_profile_vel_rad_s(
    const uint16_t & _arg)
  {
    this->hl_psa_profile_vel_rad_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::HLMsg02_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::HLMsg02_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg02_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg02_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg02_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg02_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg02_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg02_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg02_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg02_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg02
    std::shared_ptr<sd_can_msgs::msg::HLMsg02_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg02
    std::shared_ptr<sd_can_msgs::msg::HLMsg02_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLMsg02_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hl_alive_02 != other.hl_alive_02) {
      return false;
    }
    if (this->hl_psa_mode_of_operation != other.hl_psa_mode_of_operation) {
      return false;
    }
    if (this->hl_target_psa_control != other.hl_target_psa_control) {
      return false;
    }
    if (this->hl_psa_profile_acc_rad_s2 != other.hl_psa_profile_acc_rad_s2) {
      return false;
    }
    if (this->hl_psa_profile_dec_rad_s2 != other.hl_psa_profile_dec_rad_s2) {
      return false;
    }
    if (this->hl_psa_profile_vel_rad_s != other.hl_psa_profile_vel_rad_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLMsg02_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLMsg02_

// alias to use template instance with default allocator
using HLMsg02 =
  sd_can_msgs::msg::HLMsg02_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__STRUCT_HPP_
