// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/FlagInfoOutput.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__FlagInfoOutput __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__FlagInfoOutput __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FlagInfoOutput_
{
  using Type = FlagInfoOutput_<ContainerAllocator>;

  explicit FlagInfoOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_status = 0;
      this->free_running_counter = 0;
      this->spare1_0x7_c = 0;
      this->spare2_0x7_c = 0;
      this->sm_session_type = 0;
      this->sm_track_flag = 0;
      this->sm_car_flag = 0;
      this->crc_sm = 0;
    }
  }

  explicit FlagInfoOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_status = 0;
      this->free_running_counter = 0;
      this->spare1_0x7_c = 0;
      this->spare2_0x7_c = 0;
      this->sm_session_type = 0;
      this->sm_track_flag = 0;
      this->sm_car_flag = 0;
      this->crc_sm = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _led_status_type =
    uint8_t;
  _led_status_type led_status;
  using _free_running_counter_type =
    uint8_t;
  _free_running_counter_type free_running_counter;
  using _spare1_0x7_c_type =
    uint8_t;
  _spare1_0x7_c_type spare1_0x7_c;
  using _spare2_0x7_c_type =
    uint8_t;
  _spare2_0x7_c_type spare2_0x7_c;
  using _sm_session_type_type =
    uint8_t;
  _sm_session_type_type sm_session_type;
  using _sm_track_flag_type =
    uint8_t;
  _sm_track_flag_type sm_track_flag;
  using _sm_car_flag_type =
    uint8_t;
  _sm_car_flag_type sm_car_flag;
  using _crc_sm_type =
    uint8_t;
  _crc_sm_type crc_sm;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__led_status(
    const uint8_t & _arg)
  {
    this->led_status = _arg;
    return *this;
  }
  Type & set__free_running_counter(
    const uint8_t & _arg)
  {
    this->free_running_counter = _arg;
    return *this;
  }
  Type & set__spare1_0x7_c(
    const uint8_t & _arg)
  {
    this->spare1_0x7_c = _arg;
    return *this;
  }
  Type & set__spare2_0x7_c(
    const uint8_t & _arg)
  {
    this->spare2_0x7_c = _arg;
    return *this;
  }
  Type & set__sm_session_type(
    const uint8_t & _arg)
  {
    this->sm_session_type = _arg;
    return *this;
  }
  Type & set__sm_track_flag(
    const uint8_t & _arg)
  {
    this->sm_track_flag = _arg;
    return *this;
  }
  Type & set__sm_car_flag(
    const uint8_t & _arg)
  {
    this->sm_car_flag = _arg;
    return *this;
  }
  Type & set__crc_sm(
    const uint8_t & _arg)
  {
    this->crc_sm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__FlagInfoOutput
    std::shared_ptr<sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__FlagInfoOutput
    std::shared_ptr<sd_can_msgs::msg::FlagInfoOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlagInfoOutput_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->led_status != other.led_status) {
      return false;
    }
    if (this->free_running_counter != other.free_running_counter) {
      return false;
    }
    if (this->spare1_0x7_c != other.spare1_0x7_c) {
      return false;
    }
    if (this->spare2_0x7_c != other.spare2_0x7_c) {
      return false;
    }
    if (this->sm_session_type != other.sm_session_type) {
      return false;
    }
    if (this->sm_track_flag != other.sm_track_flag) {
      return false;
    }
    if (this->sm_car_flag != other.sm_car_flag) {
      return false;
    }
    if (this->crc_sm != other.crc_sm) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlagInfoOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlagInfoOutput_

// alias to use template instance with default allocator
using FlagInfoOutput =
  sd_can_msgs::msg::FlagInfoOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__STRUCT_HPP_
