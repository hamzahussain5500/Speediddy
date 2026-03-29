// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/BSUStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__BSUStatus01 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__BSUStatus01 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSUStatus01_
{
  using Type = BSUStatus01_<ContainerAllocator>;

  explicit BSUStatus01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bsu_limp_mode_activated = 0;
      this->bsu_switch_off_req = 0;
      this->abs_external_enable_ack = 0;
      this->bsu_ml_stop_activated = 0;
      this->bsu_em_stop_activated = 0;
      this->bsu_alive_counter = 0;
      this->bsu_hl_warning = 0;
      this->bsu_hl_stop_request = 0;
      this->bsu_status = 0;
    }
  }

  explicit BSUStatus01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bsu_limp_mode_activated = 0;
      this->bsu_switch_off_req = 0;
      this->abs_external_enable_ack = 0;
      this->bsu_ml_stop_activated = 0;
      this->bsu_em_stop_activated = 0;
      this->bsu_alive_counter = 0;
      this->bsu_hl_warning = 0;
      this->bsu_hl_stop_request = 0;
      this->bsu_status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bsu_limp_mode_activated_type =
    uint8_t;
  _bsu_limp_mode_activated_type bsu_limp_mode_activated;
  using _bsu_switch_off_req_type =
    uint8_t;
  _bsu_switch_off_req_type bsu_switch_off_req;
  using _abs_external_enable_ack_type =
    uint8_t;
  _abs_external_enable_ack_type abs_external_enable_ack;
  using _bsu_ml_stop_activated_type =
    uint8_t;
  _bsu_ml_stop_activated_type bsu_ml_stop_activated;
  using _bsu_em_stop_activated_type =
    uint8_t;
  _bsu_em_stop_activated_type bsu_em_stop_activated;
  using _bsu_alive_counter_type =
    uint8_t;
  _bsu_alive_counter_type bsu_alive_counter;
  using _bsu_hl_warning_type =
    uint8_t;
  _bsu_hl_warning_type bsu_hl_warning;
  using _bsu_hl_stop_request_type =
    uint8_t;
  _bsu_hl_stop_request_type bsu_hl_stop_request;
  using _bsu_status_type =
    uint16_t;
  _bsu_status_type bsu_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bsu_limp_mode_activated(
    const uint8_t & _arg)
  {
    this->bsu_limp_mode_activated = _arg;
    return *this;
  }
  Type & set__bsu_switch_off_req(
    const uint8_t & _arg)
  {
    this->bsu_switch_off_req = _arg;
    return *this;
  }
  Type & set__abs_external_enable_ack(
    const uint8_t & _arg)
  {
    this->abs_external_enable_ack = _arg;
    return *this;
  }
  Type & set__bsu_ml_stop_activated(
    const uint8_t & _arg)
  {
    this->bsu_ml_stop_activated = _arg;
    return *this;
  }
  Type & set__bsu_em_stop_activated(
    const uint8_t & _arg)
  {
    this->bsu_em_stop_activated = _arg;
    return *this;
  }
  Type & set__bsu_alive_counter(
    const uint8_t & _arg)
  {
    this->bsu_alive_counter = _arg;
    return *this;
  }
  Type & set__bsu_hl_warning(
    const uint8_t & _arg)
  {
    this->bsu_hl_warning = _arg;
    return *this;
  }
  Type & set__bsu_hl_stop_request(
    const uint8_t & _arg)
  {
    this->bsu_hl_stop_request = _arg;
    return *this;
  }
  Type & set__bsu_status(
    const uint16_t & _arg)
  {
    this->bsu_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BSU_HL_STOP_REQUEST_FALSE =
    0u;
  static constexpr uint8_t BSU_HL_STOP_REQUEST_TRUE =
    1u;
  static constexpr uint8_t BSU_ML_STOP_ACTIVATED_LEVEL0 =
    0u;
  static constexpr uint8_t BSU_ML_STOP_ACTIVATED_LEVEL1 =
    1u;
  static constexpr uint8_t BSU_ML_STOP_ACTIVATED_LEVEL2 =
    2u;
  static constexpr uint8_t BSU_ML_STOP_ACTIVATED_LEVEL3 =
    3u;

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::BSUStatus01_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::BSUStatus01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::BSUStatus01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::BSUStatus01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::BSUStatus01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::BSUStatus01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::BSUStatus01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::BSUStatus01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::BSUStatus01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::BSUStatus01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__BSUStatus01
    std::shared_ptr<sd_can_msgs::msg::BSUStatus01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__BSUStatus01
    std::shared_ptr<sd_can_msgs::msg::BSUStatus01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSUStatus01_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bsu_limp_mode_activated != other.bsu_limp_mode_activated) {
      return false;
    }
    if (this->bsu_switch_off_req != other.bsu_switch_off_req) {
      return false;
    }
    if (this->abs_external_enable_ack != other.abs_external_enable_ack) {
      return false;
    }
    if (this->bsu_ml_stop_activated != other.bsu_ml_stop_activated) {
      return false;
    }
    if (this->bsu_em_stop_activated != other.bsu_em_stop_activated) {
      return false;
    }
    if (this->bsu_alive_counter != other.bsu_alive_counter) {
      return false;
    }
    if (this->bsu_hl_warning != other.bsu_hl_warning) {
      return false;
    }
    if (this->bsu_hl_stop_request != other.bsu_hl_stop_request) {
      return false;
    }
    if (this->bsu_status != other.bsu_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSUStatus01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSUStatus01_

// alias to use template instance with default allocator
using BSUStatus01 =
  sd_can_msgs::msg::BSUStatus01_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSUStatus01_<ContainerAllocator>::BSU_HL_STOP_REQUEST_FALSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSUStatus01_<ContainerAllocator>::BSU_HL_STOP_REQUEST_TRUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSUStatus01_<ContainerAllocator>::BSU_ML_STOP_ACTIVATED_LEVEL0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSUStatus01_<ContainerAllocator>::BSU_ML_STOP_ACTIVATED_LEVEL1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSUStatus01_<ContainerAllocator>::BSU_ML_STOP_ACTIVATED_LEVEL2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSUStatus01_<ContainerAllocator>::BSU_ML_STOP_ACTIVATED_LEVEL3;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01__STRUCT_HPP_
