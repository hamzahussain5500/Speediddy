// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560WheelLoad.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_wheel_load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560WheelLoad_load_wheel_rl
{
public:
  explicit Init_Badenia560WheelLoad_load_wheel_rl(::sd_can_msgs::msg::Badenia560WheelLoad & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560WheelLoad load_wheel_rl(::sd_can_msgs::msg::Badenia560WheelLoad::_load_wheel_rl_type arg)
  {
    msg_.load_wheel_rl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560WheelLoad msg_;
};

class Init_Badenia560WheelLoad_load_wheel_rr
{
public:
  explicit Init_Badenia560WheelLoad_load_wheel_rr(::sd_can_msgs::msg::Badenia560WheelLoad & msg)
  : msg_(msg)
  {}
  Init_Badenia560WheelLoad_load_wheel_rl load_wheel_rr(::sd_can_msgs::msg::Badenia560WheelLoad::_load_wheel_rr_type arg)
  {
    msg_.load_wheel_rr = std::move(arg);
    return Init_Badenia560WheelLoad_load_wheel_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560WheelLoad msg_;
};

class Init_Badenia560WheelLoad_load_wheel_fr
{
public:
  explicit Init_Badenia560WheelLoad_load_wheel_fr(::sd_can_msgs::msg::Badenia560WheelLoad & msg)
  : msg_(msg)
  {}
  Init_Badenia560WheelLoad_load_wheel_rr load_wheel_fr(::sd_can_msgs::msg::Badenia560WheelLoad::_load_wheel_fr_type arg)
  {
    msg_.load_wheel_fr = std::move(arg);
    return Init_Badenia560WheelLoad_load_wheel_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560WheelLoad msg_;
};

class Init_Badenia560WheelLoad_load_wheel_fl
{
public:
  explicit Init_Badenia560WheelLoad_load_wheel_fl(::sd_can_msgs::msg::Badenia560WheelLoad & msg)
  : msg_(msg)
  {}
  Init_Badenia560WheelLoad_load_wheel_fr load_wheel_fl(::sd_can_msgs::msg::Badenia560WheelLoad::_load_wheel_fl_type arg)
  {
    msg_.load_wheel_fl = std::move(arg);
    return Init_Badenia560WheelLoad_load_wheel_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560WheelLoad msg_;
};

class Init_Badenia560WheelLoad_header
{
public:
  Init_Badenia560WheelLoad_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560WheelLoad_load_wheel_fl header(::sd_can_msgs::msg::Badenia560WheelLoad::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560WheelLoad_load_wheel_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560WheelLoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560WheelLoad>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560WheelLoad_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__BUILDER_HPP_
