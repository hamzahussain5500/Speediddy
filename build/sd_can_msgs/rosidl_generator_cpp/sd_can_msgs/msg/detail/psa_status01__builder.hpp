// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/PSAStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/psa_status01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_PSAStatus01_psa_actual_voltage_v
{
public:
  explicit Init_PSAStatus01_psa_actual_voltage_v(::sd_can_msgs::msg::PSAStatus01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::PSAStatus01 psa_actual_voltage_v(::sd_can_msgs::msg::PSAStatus01::_psa_actual_voltage_v_type arg)
  {
    msg_.psa_actual_voltage_v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus01 msg_;
};

class Init_PSAStatus01_psa_actual_current_a
{
public:
  explicit Init_PSAStatus01_psa_actual_current_a(::sd_can_msgs::msg::PSAStatus01 & msg)
  : msg_(msg)
  {}
  Init_PSAStatus01_psa_actual_voltage_v psa_actual_current_a(::sd_can_msgs::msg::PSAStatus01::_psa_actual_current_a_type arg)
  {
    msg_.psa_actual_current_a = std::move(arg);
    return Init_PSAStatus01_psa_actual_voltage_v(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus01 msg_;
};

class Init_PSAStatus01_psa_actual_mode_of_operation
{
public:
  explicit Init_PSAStatus01_psa_actual_mode_of_operation(::sd_can_msgs::msg::PSAStatus01 & msg)
  : msg_(msg)
  {}
  Init_PSAStatus01_psa_actual_current_a psa_actual_mode_of_operation(::sd_can_msgs::msg::PSAStatus01::_psa_actual_mode_of_operation_type arg)
  {
    msg_.psa_actual_mode_of_operation = std::move(arg);
    return Init_PSAStatus01_psa_actual_current_a(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus01 msg_;
};

class Init_PSAStatus01_psa_actual_torque_m_nm
{
public:
  explicit Init_PSAStatus01_psa_actual_torque_m_nm(::sd_can_msgs::msg::PSAStatus01 & msg)
  : msg_(msg)
  {}
  Init_PSAStatus01_psa_actual_mode_of_operation psa_actual_torque_m_nm(::sd_can_msgs::msg::PSAStatus01::_psa_actual_torque_m_nm_type arg)
  {
    msg_.psa_actual_torque_m_nm = std::move(arg);
    return Init_PSAStatus01_psa_actual_mode_of_operation(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus01 msg_;
};

class Init_PSAStatus01_psa_actual_speed_rad_s
{
public:
  explicit Init_PSAStatus01_psa_actual_speed_rad_s(::sd_can_msgs::msg::PSAStatus01 & msg)
  : msg_(msg)
  {}
  Init_PSAStatus01_psa_actual_torque_m_nm psa_actual_speed_rad_s(::sd_can_msgs::msg::PSAStatus01::_psa_actual_speed_rad_s_type arg)
  {
    msg_.psa_actual_speed_rad_s = std::move(arg);
    return Init_PSAStatus01_psa_actual_torque_m_nm(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus01 msg_;
};

class Init_PSAStatus01_psa_actual_pos_rad
{
public:
  explicit Init_PSAStatus01_psa_actual_pos_rad(::sd_can_msgs::msg::PSAStatus01 & msg)
  : msg_(msg)
  {}
  Init_PSAStatus01_psa_actual_speed_rad_s psa_actual_pos_rad(::sd_can_msgs::msg::PSAStatus01::_psa_actual_pos_rad_type arg)
  {
    msg_.psa_actual_pos_rad = std::move(arg);
    return Init_PSAStatus01_psa_actual_speed_rad_s(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus01 msg_;
};

class Init_PSAStatus01_header
{
public:
  Init_PSAStatus01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PSAStatus01_psa_actual_pos_rad header(::sd_can_msgs::msg::PSAStatus01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PSAStatus01_psa_actual_pos_rad(msg_);
  }

private:
  ::sd_can_msgs::msg::PSAStatus01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::PSAStatus01>()
{
  return sd_can_msgs::msg::builder::Init_PSAStatus01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS01__BUILDER_HPP_
