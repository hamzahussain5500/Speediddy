// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/CbaStatusRl.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RL__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/cba_status_rl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_CbaStatusRl_cba_voltage_rl_v
{
public:
  explicit Init_CbaStatusRl_cba_voltage_rl_v(::sd_can_msgs::msg::CbaStatusRl & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::CbaStatusRl cba_voltage_rl_v(::sd_can_msgs::msg::CbaStatusRl::_cba_voltage_rl_v_type arg)
  {
    msg_.cba_voltage_rl_v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRl msg_;
};

class Init_CbaStatusRl_cba_actual_current_rl_a
{
public:
  explicit Init_CbaStatusRl_cba_actual_current_rl_a(::sd_can_msgs::msg::CbaStatusRl & msg)
  : msg_(msg)
  {}
  Init_CbaStatusRl_cba_voltage_rl_v cba_actual_current_rl_a(::sd_can_msgs::msg::CbaStatusRl::_cba_actual_current_rl_a_type arg)
  {
    msg_.cba_actual_current_rl_a = std::move(arg);
    return Init_CbaStatusRl_cba_voltage_rl_v(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRl msg_;
};

class Init_CbaStatusRl_cba_target_pressure_rl_ack
{
public:
  explicit Init_CbaStatusRl_cba_target_pressure_rl_ack(::sd_can_msgs::msg::CbaStatusRl & msg)
  : msg_(msg)
  {}
  Init_CbaStatusRl_cba_actual_current_rl_a cba_target_pressure_rl_ack(::sd_can_msgs::msg::CbaStatusRl::_cba_target_pressure_rl_ack_type arg)
  {
    msg_.cba_target_pressure_rl_ack = std::move(arg);
    return Init_CbaStatusRl_cba_actual_current_rl_a(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRl msg_;
};

class Init_CbaStatusRl_cba_actual_pressure_rl
{
public:
  explicit Init_CbaStatusRl_cba_actual_pressure_rl(::sd_can_msgs::msg::CbaStatusRl & msg)
  : msg_(msg)
  {}
  Init_CbaStatusRl_cba_target_pressure_rl_ack cba_actual_pressure_rl(::sd_can_msgs::msg::CbaStatusRl::_cba_actual_pressure_rl_type arg)
  {
    msg_.cba_actual_pressure_rl = std::move(arg);
    return Init_CbaStatusRl_cba_target_pressure_rl_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRl msg_;
};

class Init_CbaStatusRl_cba_actual_pressure_rl_pa
{
public:
  explicit Init_CbaStatusRl_cba_actual_pressure_rl_pa(::sd_can_msgs::msg::CbaStatusRl & msg)
  : msg_(msg)
  {}
  Init_CbaStatusRl_cba_actual_pressure_rl cba_actual_pressure_rl_pa(::sd_can_msgs::msg::CbaStatusRl::_cba_actual_pressure_rl_pa_type arg)
  {
    msg_.cba_actual_pressure_rl_pa = std::move(arg);
    return Init_CbaStatusRl_cba_actual_pressure_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRl msg_;
};

class Init_CbaStatusRl_header
{
public:
  Init_CbaStatusRl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CbaStatusRl_cba_actual_pressure_rl_pa header(::sd_can_msgs::msg::CbaStatusRl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CbaStatusRl_cba_actual_pressure_rl_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::CbaStatusRl>()
{
  return sd_can_msgs::msg::builder::Init_CbaStatusRl_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RL__BUILDER_HPP_
