// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/CbaStatusRr.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RR__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/cba_status_rr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_CbaStatusRr_cba_voltage_rr_v
{
public:
  explicit Init_CbaStatusRr_cba_voltage_rr_v(::sd_can_msgs::msg::CbaStatusRr & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::CbaStatusRr cba_voltage_rr_v(::sd_can_msgs::msg::CbaStatusRr::_cba_voltage_rr_v_type arg)
  {
    msg_.cba_voltage_rr_v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRr msg_;
};

class Init_CbaStatusRr_cba_actual_current_rr_a
{
public:
  explicit Init_CbaStatusRr_cba_actual_current_rr_a(::sd_can_msgs::msg::CbaStatusRr & msg)
  : msg_(msg)
  {}
  Init_CbaStatusRr_cba_voltage_rr_v cba_actual_current_rr_a(::sd_can_msgs::msg::CbaStatusRr::_cba_actual_current_rr_a_type arg)
  {
    msg_.cba_actual_current_rr_a = std::move(arg);
    return Init_CbaStatusRr_cba_voltage_rr_v(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRr msg_;
};

class Init_CbaStatusRr_cba_target_pressure_rr_ack
{
public:
  explicit Init_CbaStatusRr_cba_target_pressure_rr_ack(::sd_can_msgs::msg::CbaStatusRr & msg)
  : msg_(msg)
  {}
  Init_CbaStatusRr_cba_actual_current_rr_a cba_target_pressure_rr_ack(::sd_can_msgs::msg::CbaStatusRr::_cba_target_pressure_rr_ack_type arg)
  {
    msg_.cba_target_pressure_rr_ack = std::move(arg);
    return Init_CbaStatusRr_cba_actual_current_rr_a(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRr msg_;
};

class Init_CbaStatusRr_cba_actual_pressure_rr
{
public:
  explicit Init_CbaStatusRr_cba_actual_pressure_rr(::sd_can_msgs::msg::CbaStatusRr & msg)
  : msg_(msg)
  {}
  Init_CbaStatusRr_cba_target_pressure_rr_ack cba_actual_pressure_rr(::sd_can_msgs::msg::CbaStatusRr::_cba_actual_pressure_rr_type arg)
  {
    msg_.cba_actual_pressure_rr = std::move(arg);
    return Init_CbaStatusRr_cba_target_pressure_rr_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRr msg_;
};

class Init_CbaStatusRr_cba_actual_pressure_rr_pa
{
public:
  explicit Init_CbaStatusRr_cba_actual_pressure_rr_pa(::sd_can_msgs::msg::CbaStatusRr & msg)
  : msg_(msg)
  {}
  Init_CbaStatusRr_cba_actual_pressure_rr cba_actual_pressure_rr_pa(::sd_can_msgs::msg::CbaStatusRr::_cba_actual_pressure_rr_pa_type arg)
  {
    msg_.cba_actual_pressure_rr_pa = std::move(arg);
    return Init_CbaStatusRr_cba_actual_pressure_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRr msg_;
};

class Init_CbaStatusRr_header
{
public:
  Init_CbaStatusRr_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CbaStatusRr_cba_actual_pressure_rr_pa header(::sd_can_msgs::msg::CbaStatusRr::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CbaStatusRr_cba_actual_pressure_rr_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusRr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::CbaStatusRr>()
{
  return sd_can_msgs::msg::builder::Init_CbaStatusRr_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RR__BUILDER_HPP_
