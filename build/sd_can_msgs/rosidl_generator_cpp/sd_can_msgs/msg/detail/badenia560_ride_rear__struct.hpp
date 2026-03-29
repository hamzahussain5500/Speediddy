// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560RideRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560RideRear __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560RideRear __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560RideRear_
{
  using Type = Badenia560RideRear_<ContainerAllocator>;

  explicit Badenia560RideRear_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ride_height_rear = 0.0;
      this->damper_stroke_r3rd = 0.0;
      this->damper_stroke_rl = 0.0;
      this->damper_stroke_rr = 0.0;
    }
  }

  explicit Badenia560RideRear_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ride_height_rear = 0.0;
      this->damper_stroke_r3rd = 0.0;
      this->damper_stroke_rl = 0.0;
      this->damper_stroke_rr = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ride_height_rear_type =
    double;
  _ride_height_rear_type ride_height_rear;
  using _damper_stroke_r3rd_type =
    double;
  _damper_stroke_r3rd_type damper_stroke_r3rd;
  using _damper_stroke_rl_type =
    double;
  _damper_stroke_rl_type damper_stroke_rl;
  using _damper_stroke_rr_type =
    double;
  _damper_stroke_rr_type damper_stroke_rr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ride_height_rear(
    const double & _arg)
  {
    this->ride_height_rear = _arg;
    return *this;
  }
  Type & set__damper_stroke_r3rd(
    const double & _arg)
  {
    this->damper_stroke_r3rd = _arg;
    return *this;
  }
  Type & set__damper_stroke_rl(
    const double & _arg)
  {
    this->damper_stroke_rl = _arg;
    return *this;
  }
  Type & set__damper_stroke_rr(
    const double & _arg)
  {
    this->damper_stroke_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560RideRear
    std::shared_ptr<sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560RideRear
    std::shared_ptr<sd_can_msgs::msg::Badenia560RideRear_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560RideRear_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ride_height_rear != other.ride_height_rear) {
      return false;
    }
    if (this->damper_stroke_r3rd != other.damper_stroke_r3rd) {
      return false;
    }
    if (this->damper_stroke_rl != other.damper_stroke_rl) {
      return false;
    }
    if (this->damper_stroke_rr != other.damper_stroke_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560RideRear_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560RideRear_

// alias to use template instance with default allocator
using Badenia560RideRear =
  sd_can_msgs::msg::Badenia560RideRear_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__STRUCT_HPP_
