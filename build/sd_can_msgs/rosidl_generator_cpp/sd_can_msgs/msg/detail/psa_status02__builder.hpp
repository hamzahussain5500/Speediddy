// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/PSAStatus02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/psa_status02__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_PSAStatus02_psa_actual_torque
{
public:
  explicit Init_PSAStatus02_psa_actual_torque(::sd_can_msgs::msg::PSAStatus02 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::PSAStatus02 psa_actual_torque(::sd_can_msgs::msg::PSAStatus02::_psa_actual_torque_type arg)
  {
    msg_.psa_actual_torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus02 msg_;
};

class Init_PSAStatus02_psa_actual_speed
{
public:
  explicit Init_PSAStatus02_psa_actual_speed(::sd_can_msgs::msg::PSAStatus02 & msg)
  : msg_(msg)
  {}
  Init_PSAStatus02_psa_actual_torque psa_actual_speed(::sd_can_msgs::msg::PSAStatus02::_psa_actual_speed_type arg)
  {
    msg_.psa_actual_speed = std::move(arg);
    return Init_PSAStatus02_psa_actual_torque(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus02 msg_;
};

class Init_PSAStatus02_psa_actual_pos
{
public:
  explicit Init_PSAStatus02_psa_actual_pos(::sd_can_msgs::msg::PSAStatus02 & msg)
  : msg_(msg)
  {}
  Init_PSAStatus02_psa_actual_speed psa_actual_pos(::sd_can_msgs::msg::PSAStatus02::_psa_actual_pos_type arg)
  {
    msg_.psa_actual_pos = std::move(arg);
    return Init_PSAStatus02_psa_actual_speed(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus02 msg_;
};

class Init_PSAStatus02_psa_target_psa_control_ack
{
public:
  explicit Init_PSAStatus02_psa_target_psa_control_ack(::sd_can_msgs::msg::PSAStatus02 & msg)
  : msg_(msg)
  {}
  Init_PSAStatus02_psa_actual_pos psa_target_psa_control_ack(::sd_can_msgs::msg::PSAStatus02::_psa_target_psa_control_ack_type arg)
  {
    msg_.psa_target_psa_control_ack = std::move(arg);
    return Init_PSAStatus02_psa_actual_pos(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus02 msg_;
};

class Init_PSAStatus02_header
{
public:
  Init_PSAStatus02_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PSAStatus02_psa_target_psa_control_ack header(::sd_can_msgs::msg::PSAStatus02::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PSAStatus02_psa_target_psa_control_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus02 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::PSAStatus02>()
{
  return sd_can_msgs::msg::builder::Init_PSAStatus02_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__BUILDER_HPP_
