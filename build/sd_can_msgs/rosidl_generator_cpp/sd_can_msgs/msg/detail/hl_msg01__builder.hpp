// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/HLMsg01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/hl_msg01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_HLMsg01_hl_target_throttle
{
public:
  explicit Init_HLMsg01_hl_target_throttle(::sd_can_msgs::msg::HLMsg01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::HLMsg01 hl_target_throttle(::sd_can_msgs::msg::HLMsg01::_hl_target_throttle_type arg)
  {
    msg_.hl_target_throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg01 msg_;
};

class Init_HLMsg01_hl_target_gear
{
public:
  explicit Init_HLMsg01_hl_target_gear(::sd_can_msgs::msg::HLMsg01 & msg)
  : msg_(msg)
  {}
  Init_HLMsg01_hl_target_throttle hl_target_gear(::sd_can_msgs::msg::HLMsg01::_hl_target_gear_type arg)
  {
    msg_.hl_target_gear = std::move(arg);
    return Init_HLMsg01_hl_target_throttle(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg01 msg_;
};

class Init_HLMsg01_hl_target_pressure_fl
{
public:
  explicit Init_HLMsg01_hl_target_pressure_fl(::sd_can_msgs::msg::HLMsg01 & msg)
  : msg_(msg)
  {}
  Init_HLMsg01_hl_target_gear hl_target_pressure_fl(::sd_can_msgs::msg::HLMsg01::_hl_target_pressure_fl_type arg)
  {
    msg_.hl_target_pressure_fl = std::move(arg);
    return Init_HLMsg01_hl_target_gear(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg01 msg_;
};

class Init_HLMsg01_hl_target_pressure_fr
{
public:
  explicit Init_HLMsg01_hl_target_pressure_fr(::sd_can_msgs::msg::HLMsg01 & msg)
  : msg_(msg)
  {}
  Init_HLMsg01_hl_target_pressure_fl hl_target_pressure_fr(::sd_can_msgs::msg::HLMsg01::_hl_target_pressure_fr_type arg)
  {
    msg_.hl_target_pressure_fr = std::move(arg);
    return Init_HLMsg01_hl_target_pressure_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg01 msg_;
};

class Init_HLMsg01_hl_target_pressure_rl
{
public:
  explicit Init_HLMsg01_hl_target_pressure_rl(::sd_can_msgs::msg::HLMsg01 & msg)
  : msg_(msg)
  {}
  Init_HLMsg01_hl_target_pressure_fr hl_target_pressure_rl(::sd_can_msgs::msg::HLMsg01::_hl_target_pressure_rl_type arg)
  {
    msg_.hl_target_pressure_rl = std::move(arg);
    return Init_HLMsg01_hl_target_pressure_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg01 msg_;
};

class Init_HLMsg01_hl_target_pressure_rr
{
public:
  explicit Init_HLMsg01_hl_target_pressure_rr(::sd_can_msgs::msg::HLMsg01 & msg)
  : msg_(msg)
  {}
  Init_HLMsg01_hl_target_pressure_rl hl_target_pressure_rr(::sd_can_msgs::msg::HLMsg01::_hl_target_pressure_rr_type arg)
  {
    msg_.hl_target_pressure_rr = std::move(arg);
    return Init_HLMsg01_hl_target_pressure_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg01 msg_;
};

class Init_HLMsg01_hl_alive_01
{
public:
  explicit Init_HLMsg01_hl_alive_01(::sd_can_msgs::msg::HLMsg01 & msg)
  : msg_(msg)
  {}
  Init_HLMsg01_hl_target_pressure_rr hl_alive_01(::sd_can_msgs::msg::HLMsg01::_hl_alive_01_type arg)
  {
    msg_.hl_alive_01 = std::move(arg);
    return Init_HLMsg01_hl_target_pressure_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg01 msg_;
};

class Init_HLMsg01_header
{
public:
  Init_HLMsg01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLMsg01_hl_alive_01 header(::sd_can_msgs::msg::HLMsg01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HLMsg01_hl_alive_01(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::HLMsg01>()
{
  return sd_can_msgs::msg::builder::Init_HLMsg01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__BUILDER_HPP_
