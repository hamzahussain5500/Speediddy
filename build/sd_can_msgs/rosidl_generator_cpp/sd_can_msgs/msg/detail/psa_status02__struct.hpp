// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/PSAStatus02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__PSAStatus02 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__PSAStatus02 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PSAStatus02_
{
  using Type = PSAStatus02_<ContainerAllocator>;

  explicit PSAStatus02_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->psa_target_psa_control_ack = 0.0;
      this->psa_actual_pos = 0.0;
      this->psa_actual_speed = 0.0;
      this->psa_actual_torque = 0.0;
    }
  }

  explicit PSAStatus02_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->psa_target_psa_control_ack = 0.0;
      this->psa_actual_pos = 0.0;
      this->psa_actual_speed = 0.0;
      this->psa_actual_torque = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _psa_target_psa_control_ack_type =
    double;
  _psa_target_psa_control_ack_type psa_target_psa_control_ack;
  using _psa_actual_pos_type =
    double;
  _psa_actual_pos_type psa_actual_pos;
  using _psa_actual_speed_type =
    double;
  _psa_actual_speed_type psa_actual_speed;
  using _psa_actual_torque_type =
    double;
  _psa_actual_torque_type psa_actual_torque;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__psa_target_psa_control_ack(
    const double & _arg)
  {
    this->psa_target_psa_control_ack = _arg;
    return *this;
  }
  Type & set__psa_actual_pos(
    const double & _arg)
  {
    this->psa_actual_pos = _arg;
    return *this;
  }
  Type & set__psa_actual_speed(
    const double & _arg)
  {
    this->psa_actual_speed = _arg;
    return *this;
  }
  Type & set__psa_actual_torque(
    const double & _arg)
  {
    this->psa_actual_torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::PSAStatus02_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::PSAStatus02_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::PSAStatus02_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::PSAStatus02_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::PSAStatus02_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::PSAStatus02_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::PSAStatus02_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::PSAStatus02_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::PSAStatus02_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::PSAStatus02_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__PSAStatus02
    std::shared_ptr<sd_can_msgs::msg::PSAStatus02_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__PSAStatus02
    std::shared_ptr<sd_can_msgs::msg::PSAStatus02_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PSAStatus02_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->psa_target_psa_control_ack != other.psa_target_psa_control_ack) {
      return false;
    }
    if (this->psa_actual_pos != other.psa_actual_pos) {
      return false;
    }
    if (this->psa_actual_speed != other.psa_actual_speed) {
      return false;
    }
    if (this->psa_actual_torque != other.psa_actual_torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const PSAStatus02_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PSAStatus02_

// alias to use template instance with default allocator
using PSAStatus02 =
  sd_can_msgs::msg::PSAStatus02_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__STRUCT_HPP_
