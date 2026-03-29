// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/PdUsStatus01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_LEGACY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_LEGACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/pd_us_status01_legacy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_PdUsStatus01Legacy_pdu2_total_current_a
{
public:
  explicit Init_PdUsStatus01Legacy_pdu2_total_current_a(::sd_can_msgs::msg::PdUsStatus01Legacy & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::PdUsStatus01Legacy pdu2_total_current_a(::sd_can_msgs::msg::PdUsStatus01Legacy::_pdu2_total_current_a_type arg)
  {
    msg_.pdu2_total_current_a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01Legacy msg_;
};

class Init_PdUsStatus01Legacy_pdu2_power_supply_voltage_v
{
public:
  explicit Init_PdUsStatus01Legacy_pdu2_power_supply_voltage_v(::sd_can_msgs::msg::PdUsStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01Legacy_pdu2_total_current_a pdu2_power_supply_voltage_v(::sd_can_msgs::msg::PdUsStatus01Legacy::_pdu2_power_supply_voltage_v_type arg)
  {
    msg_.pdu2_power_supply_voltage_v = std::move(arg);
    return Init_PdUsStatus01Legacy_pdu2_total_current_a(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01Legacy msg_;
};

class Init_PdUsStatus01Legacy_pdu1_total_current_a
{
public:
  explicit Init_PdUsStatus01Legacy_pdu1_total_current_a(::sd_can_msgs::msg::PdUsStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01Legacy_pdu2_power_supply_voltage_v pdu1_total_current_a(::sd_can_msgs::msg::PdUsStatus01Legacy::_pdu1_total_current_a_type arg)
  {
    msg_.pdu1_total_current_a = std::move(arg);
    return Init_PdUsStatus01Legacy_pdu2_power_supply_voltage_v(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01Legacy msg_;
};

class Init_PdUsStatus01Legacy_pdu1_power_supply_voltage_v
{
public:
  explicit Init_PdUsStatus01Legacy_pdu1_power_supply_voltage_v(::sd_can_msgs::msg::PdUsStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01Legacy_pdu1_total_current_a pdu1_power_supply_voltage_v(::sd_can_msgs::msg::PdUsStatus01Legacy::_pdu1_power_supply_voltage_v_type arg)
  {
    msg_.pdu1_power_supply_voltage_v = std::move(arg);
    return Init_PdUsStatus01Legacy_pdu1_total_current_a(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01Legacy msg_;
};

class Init_PdUsStatus01Legacy_header
{
public:
  Init_PdUsStatus01Legacy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PdUsStatus01Legacy_pdu1_power_supply_voltage_v header(::sd_can_msgs::msg::PdUsStatus01Legacy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PdUsStatus01Legacy_pdu1_power_supply_voltage_v(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01Legacy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::PdUsStatus01Legacy>()
{
  return sd_can_msgs::msg::builder::Init_PdUsStatus01Legacy_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_LEGACY__BUILDER_HPP_
