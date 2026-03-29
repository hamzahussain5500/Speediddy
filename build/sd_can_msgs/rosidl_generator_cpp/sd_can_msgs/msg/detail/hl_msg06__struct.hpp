// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/HLMsg06.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__HLMsg06 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__HLMsg06 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLMsg06_
{
  using Type = HLMsg06_<ContainerAllocator>;

  explicit HLMsg06_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_pc_temp = 0;
      this->hl_cpu_usage = 0;
      this->hl_gpu_usage = 0;
      this->hl_gpu_temp = 0;
      this->hl_perception_acc = 0;
      this->hl_localization_acc = 0;
      this->hl_watts_consumed = 0;
      this->hl_aggressiveness = 0;
    }
  }

  explicit HLMsg06_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_pc_temp = 0;
      this->hl_cpu_usage = 0;
      this->hl_gpu_usage = 0;
      this->hl_gpu_temp = 0;
      this->hl_perception_acc = 0;
      this->hl_localization_acc = 0;
      this->hl_watts_consumed = 0;
      this->hl_aggressiveness = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hl_pc_temp_type =
    int8_t;
  _hl_pc_temp_type hl_pc_temp;
  using _hl_cpu_usage_type =
    uint8_t;
  _hl_cpu_usage_type hl_cpu_usage;
  using _hl_gpu_usage_type =
    uint8_t;
  _hl_gpu_usage_type hl_gpu_usage;
  using _hl_gpu_temp_type =
    int8_t;
  _hl_gpu_temp_type hl_gpu_temp;
  using _hl_perception_acc_type =
    uint8_t;
  _hl_perception_acc_type hl_perception_acc;
  using _hl_localization_acc_type =
    uint8_t;
  _hl_localization_acc_type hl_localization_acc;
  using _hl_watts_consumed_type =
    uint16_t;
  _hl_watts_consumed_type hl_watts_consumed;
  using _hl_aggressiveness_type =
    uint8_t;
  _hl_aggressiveness_type hl_aggressiveness;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hl_pc_temp(
    const int8_t & _arg)
  {
    this->hl_pc_temp = _arg;
    return *this;
  }
  Type & set__hl_cpu_usage(
    const uint8_t & _arg)
  {
    this->hl_cpu_usage = _arg;
    return *this;
  }
  Type & set__hl_gpu_usage(
    const uint8_t & _arg)
  {
    this->hl_gpu_usage = _arg;
    return *this;
  }
  Type & set__hl_gpu_temp(
    const int8_t & _arg)
  {
    this->hl_gpu_temp = _arg;
    return *this;
  }
  Type & set__hl_perception_acc(
    const uint8_t & _arg)
  {
    this->hl_perception_acc = _arg;
    return *this;
  }
  Type & set__hl_localization_acc(
    const uint8_t & _arg)
  {
    this->hl_localization_acc = _arg;
    return *this;
  }
  Type & set__hl_watts_consumed(
    const uint16_t & _arg)
  {
    this->hl_watts_consumed = _arg;
    return *this;
  }
  Type & set__hl_aggressiveness(
    const uint8_t & _arg)
  {
    this->hl_aggressiveness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::HLMsg06_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::HLMsg06_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg06_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg06_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg06_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg06_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg06_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg06_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg06_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg06_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg06
    std::shared_ptr<sd_can_msgs::msg::HLMsg06_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg06
    std::shared_ptr<sd_can_msgs::msg::HLMsg06_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLMsg06_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hl_pc_temp != other.hl_pc_temp) {
      return false;
    }
    if (this->hl_cpu_usage != other.hl_cpu_usage) {
      return false;
    }
    if (this->hl_gpu_usage != other.hl_gpu_usage) {
      return false;
    }
    if (this->hl_gpu_temp != other.hl_gpu_temp) {
      return false;
    }
    if (this->hl_perception_acc != other.hl_perception_acc) {
      return false;
    }
    if (this->hl_localization_acc != other.hl_localization_acc) {
      return false;
    }
    if (this->hl_watts_consumed != other.hl_watts_consumed) {
      return false;
    }
    if (this->hl_aggressiveness != other.hl_aggressiveness) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLMsg06_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLMsg06_

// alias to use template instance with default allocator
using HLMsg06 =
  sd_can_msgs::msg::HLMsg06_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__STRUCT_HPP_
