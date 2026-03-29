// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/EMStatus01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__EMStatus01Legacy __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__EMStatus01Legacy __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EMStatus01Legacy_
{
  using Type = EMStatus01Legacy_<ContainerAllocator>;

  explicit EMStatus01Legacy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emb_line_pressure_bar = 0.0;
      this->emb_tank_pressure_bar = 0.0;
      this->em_status = 0;
      this->hl_stop_deceleration_1 = 0.0;
      this->hl_stop_deceleration_2 = 0.0;
      this->hl_stop_time_to_dec_1 = 0.0;
      this->hl_stop_time_to_dec_2 = 0.0;
    }
  }

  explicit EMStatus01Legacy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emb_line_pressure_bar = 0.0;
      this->emb_tank_pressure_bar = 0.0;
      this->em_status = 0;
      this->hl_stop_deceleration_1 = 0.0;
      this->hl_stop_deceleration_2 = 0.0;
      this->hl_stop_time_to_dec_1 = 0.0;
      this->hl_stop_time_to_dec_2 = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _emb_line_pressure_bar_type =
    double;
  _emb_line_pressure_bar_type emb_line_pressure_bar;
  using _emb_tank_pressure_bar_type =
    double;
  _emb_tank_pressure_bar_type emb_tank_pressure_bar;
  using _em_status_type =
    uint16_t;
  _em_status_type em_status;
  using _hl_stop_deceleration_1_type =
    double;
  _hl_stop_deceleration_1_type hl_stop_deceleration_1;
  using _hl_stop_deceleration_2_type =
    double;
  _hl_stop_deceleration_2_type hl_stop_deceleration_2;
  using _hl_stop_time_to_dec_1_type =
    double;
  _hl_stop_time_to_dec_1_type hl_stop_time_to_dec_1;
  using _hl_stop_time_to_dec_2_type =
    double;
  _hl_stop_time_to_dec_2_type hl_stop_time_to_dec_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__emb_line_pressure_bar(
    const double & _arg)
  {
    this->emb_line_pressure_bar = _arg;
    return *this;
  }
  Type & set__emb_tank_pressure_bar(
    const double & _arg)
  {
    this->emb_tank_pressure_bar = _arg;
    return *this;
  }
  Type & set__em_status(
    const uint16_t & _arg)
  {
    this->em_status = _arg;
    return *this;
  }
  Type & set__hl_stop_deceleration_1(
    const double & _arg)
  {
    this->hl_stop_deceleration_1 = _arg;
    return *this;
  }
  Type & set__hl_stop_deceleration_2(
    const double & _arg)
  {
    this->hl_stop_deceleration_2 = _arg;
    return *this;
  }
  Type & set__hl_stop_time_to_dec_1(
    const double & _arg)
  {
    this->hl_stop_time_to_dec_1 = _arg;
    return *this;
  }
  Type & set__hl_stop_time_to_dec_2(
    const double & _arg)
  {
    this->hl_stop_time_to_dec_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__EMStatus01Legacy
    std::shared_ptr<sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__EMStatus01Legacy
    std::shared_ptr<sd_can_msgs::msg::EMStatus01Legacy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EMStatus01Legacy_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->emb_line_pressure_bar != other.emb_line_pressure_bar) {
      return false;
    }
    if (this->emb_tank_pressure_bar != other.emb_tank_pressure_bar) {
      return false;
    }
    if (this->em_status != other.em_status) {
      return false;
    }
    if (this->hl_stop_deceleration_1 != other.hl_stop_deceleration_1) {
      return false;
    }
    if (this->hl_stop_deceleration_2 != other.hl_stop_deceleration_2) {
      return false;
    }
    if (this->hl_stop_time_to_dec_1 != other.hl_stop_time_to_dec_1) {
      return false;
    }
    if (this->hl_stop_time_to_dec_2 != other.hl_stop_time_to_dec_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const EMStatus01Legacy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EMStatus01Legacy_

// alias to use template instance with default allocator
using EMStatus01Legacy =
  sd_can_msgs::msg::EMStatus01Legacy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__STRUCT_HPP_
