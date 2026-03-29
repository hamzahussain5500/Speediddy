// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560WheelLoad.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560WheelLoad __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560WheelLoad __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560WheelLoad_
{
  using Type = Badenia560WheelLoad_<ContainerAllocator>;

  explicit Badenia560WheelLoad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load_wheel_fl = 0.0;
      this->load_wheel_fr = 0.0;
      this->load_wheel_rr = 0.0;
      this->load_wheel_rl = 0.0;
    }
  }

  explicit Badenia560WheelLoad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load_wheel_fl = 0.0;
      this->load_wheel_fr = 0.0;
      this->load_wheel_rr = 0.0;
      this->load_wheel_rl = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _load_wheel_fl_type =
    double;
  _load_wheel_fl_type load_wheel_fl;
  using _load_wheel_fr_type =
    double;
  _load_wheel_fr_type load_wheel_fr;
  using _load_wheel_rr_type =
    double;
  _load_wheel_rr_type load_wheel_rr;
  using _load_wheel_rl_type =
    double;
  _load_wheel_rl_type load_wheel_rl;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__load_wheel_fl(
    const double & _arg)
  {
    this->load_wheel_fl = _arg;
    return *this;
  }
  Type & set__load_wheel_fr(
    const double & _arg)
  {
    this->load_wheel_fr = _arg;
    return *this;
  }
  Type & set__load_wheel_rr(
    const double & _arg)
  {
    this->load_wheel_rr = _arg;
    return *this;
  }
  Type & set__load_wheel_rl(
    const double & _arg)
  {
    this->load_wheel_rl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560WheelLoad
    std::shared_ptr<sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560WheelLoad
    std::shared_ptr<sd_can_msgs::msg::Badenia560WheelLoad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560WheelLoad_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->load_wheel_fl != other.load_wheel_fl) {
      return false;
    }
    if (this->load_wheel_fr != other.load_wheel_fr) {
      return false;
    }
    if (this->load_wheel_rr != other.load_wheel_rr) {
      return false;
    }
    if (this->load_wheel_rl != other.load_wheel_rl) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560WheelLoad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560WheelLoad_

// alias to use template instance with default allocator
using Badenia560WheelLoad =
  sd_can_msgs::msg::Badenia560WheelLoad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__STRUCT_HPP_
