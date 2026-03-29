// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/HLMsg02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/hl_msg02__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_HLMsg02_hl_psa_profile_vel_rad_s
{
public:
  explicit Init_HLMsg02_hl_psa_profile_vel_rad_s(::sd_can_msgs::msg::HLMsg02 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::HLMsg02 hl_psa_profile_vel_rad_s(::sd_can_msgs::msg::HLMsg02::_hl_psa_profile_vel_rad_s_type arg)
  {
    msg_.hl_psa_profile_vel_rad_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg02 msg_;
};

class Init_HLMsg02_hl_psa_profile_dec_rad_s2
{
public:
  explicit Init_HLMsg02_hl_psa_profile_dec_rad_s2(::sd_can_msgs::msg::HLMsg02 & msg)
  : msg_(msg)
  {}
  Init_HLMsg02_hl_psa_profile_vel_rad_s hl_psa_profile_dec_rad_s2(::sd_can_msgs::msg::HLMsg02::_hl_psa_profile_dec_rad_s2_type arg)
  {
    msg_.hl_psa_profile_dec_rad_s2 = std::move(arg);
    return Init_HLMsg02_hl_psa_profile_vel_rad_s(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg02 msg_;
};

class Init_HLMsg02_hl_psa_profile_acc_rad_s2
{
public:
  explicit Init_HLMsg02_hl_psa_profile_acc_rad_s2(::sd_can_msgs::msg::HLMsg02 & msg)
  : msg_(msg)
  {}
  Init_HLMsg02_hl_psa_profile_dec_rad_s2 hl_psa_profile_acc_rad_s2(::sd_can_msgs::msg::HLMsg02::_hl_psa_profile_acc_rad_s2_type arg)
  {
    msg_.hl_psa_profile_acc_rad_s2 = std::move(arg);
    return Init_HLMsg02_hl_psa_profile_dec_rad_s2(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg02 msg_;
};

class Init_HLMsg02_hl_target_psa_control
{
public:
  explicit Init_HLMsg02_hl_target_psa_control(::sd_can_msgs::msg::HLMsg02 & msg)
  : msg_(msg)
  {}
  Init_HLMsg02_hl_psa_profile_acc_rad_s2 hl_target_psa_control(::sd_can_msgs::msg::HLMsg02::_hl_target_psa_control_type arg)
  {
    msg_.hl_target_psa_control = std::move(arg);
    return Init_HLMsg02_hl_psa_profile_acc_rad_s2(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg02 msg_;
};

class Init_HLMsg02_hl_psa_mode_of_operation
{
public:
  explicit Init_HLMsg02_hl_psa_mode_of_operation(::sd_can_msgs::msg::HLMsg02 & msg)
  : msg_(msg)
  {}
  Init_HLMsg02_hl_target_psa_control hl_psa_mode_of_operation(::sd_can_msgs::msg::HLMsg02::_hl_psa_mode_of_operation_type arg)
  {
    msg_.hl_psa_mode_of_operation = std::move(arg);
    return Init_HLMsg02_hl_target_psa_control(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg02 msg_;
};

class Init_HLMsg02_hl_alive_02
{
public:
  explicit Init_HLMsg02_hl_alive_02(::sd_can_msgs::msg::HLMsg02 & msg)
  : msg_(msg)
  {}
  Init_HLMsg02_hl_psa_mode_of_operation hl_alive_02(::sd_can_msgs::msg::HLMsg02::_hl_alive_02_type arg)
  {
    msg_.hl_alive_02 = std::move(arg);
    return Init_HLMsg02_hl_psa_mode_of_operation(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg02 msg_;
};

class Init_HLMsg02_header
{
public:
  Init_HLMsg02_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLMsg02_hl_alive_02 header(::sd_can_msgs::msg::HLMsg02::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HLMsg02_hl_alive_02(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg02 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::HLMsg02>()
{
  return sd_can_msgs::msg::builder::Init_HLMsg02_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__BUILDER_HPP_
