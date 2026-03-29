// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerStatus.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerStatus_direction_head
{
public:
  explicit Init_KistlerStatus_direction_head(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerStatus direction_head(::sd_can_msgs::msg::KistlerStatus::_direction_head_type arg)
  {
    msg_.direction_head = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_direction_head_is_valid
{
public:
  explicit Init_KistlerStatus_direction_head_is_valid(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_direction_head direction_head_is_valid(::sd_can_msgs::msg::KistlerStatus::_direction_head_is_valid_type arg)
  {
    msg_.direction_head_is_valid = std::move(arg);
    return Init_KistlerStatus_direction_head(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_direction_mounting
{
public:
  explicit Init_KistlerStatus_direction_mounting(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_direction_head_is_valid direction_mounting(::sd_can_msgs::msg::KistlerStatus::_direction_mounting_type arg)
  {
    msg_.direction_mounting = std::move(arg);
    return Init_KistlerStatus_direction_head_is_valid(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_direction_motion
{
public:
  explicit Init_KistlerStatus_direction_motion(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_direction_mounting direction_motion(::sd_can_msgs::msg::KistlerStatus::_direction_motion_type arg)
  {
    msg_.direction_motion = std::move(arg);
    return Init_KistlerStatus_direction_mounting(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_ang_vel_correction
{
public:
  explicit Init_KistlerStatus_ang_vel_correction(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_direction_motion ang_vel_correction(::sd_can_msgs::msg::KistlerStatus::_ang_vel_correction_type arg)
  {
    msg_.ang_vel_correction = std::move(arg);
    return Init_KistlerStatus_direction_motion(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_direction
{
public:
  explicit Init_KistlerStatus_direction(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_ang_vel_correction direction(::sd_can_msgs::msg::KistlerStatus::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_KistlerStatus_ang_vel_correction(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_angle_switched_off
{
public:
  explicit Init_KistlerStatus_angle_switched_off(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_direction angle_switched_off(::sd_can_msgs::msg::KistlerStatus::_angle_switched_off_type arg)
  {
    msg_.angle_switched_off = std::move(arg);
    return Init_KistlerStatus_direction(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_head_status
{
public:
  explicit Init_KistlerStatus_head_status(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_angle_switched_off head_status(::sd_can_msgs::msg::KistlerStatus::_head_status_type arg)
  {
    msg_.head_status = std::move(arg);
    return Init_KistlerStatus_angle_switched_off(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_temperature_ok
{
public:
  explicit Init_KistlerStatus_temperature_ok(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_head_status temperature_ok(::sd_can_msgs::msg::KistlerStatus::_temperature_ok_type arg)
  {
    msg_.temperature_ok = std::move(arg);
    return Init_KistlerStatus_head_status(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_lamp_current_control
{
public:
  explicit Init_KistlerStatus_lamp_current_control(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_temperature_ok lamp_current_control(::sd_can_msgs::msg::KistlerStatus::_lamp_current_control_type arg)
  {
    msg_.lamp_current_control = std::move(arg);
    return Init_KistlerStatus_temperature_ok(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_filter_off_on
{
public:
  explicit Init_KistlerStatus_filter_off_on(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_lamp_current_control filter_off_on(::sd_can_msgs::msg::KistlerStatus::_filter_off_on_type arg)
  {
    msg_.filter_off_on = std::move(arg);
    return Init_KistlerStatus_lamp_current_control(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_stst
{
public:
  explicit Init_KistlerStatus_stst(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_filter_off_on stst(::sd_can_msgs::msg::KistlerStatus::_stst_type arg)
  {
    msg_.stst = std::move(arg);
    return Init_KistlerStatus_filter_off_on(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_filter_setting
{
public:
  explicit Init_KistlerStatus_filter_setting(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_stst filter_setting(::sd_can_msgs::msg::KistlerStatus::_filter_setting_type arg)
  {
    msg_.filter_setting = std::move(arg);
    return Init_KistlerStatus_stst(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_lamp_current
{
public:
  explicit Init_KistlerStatus_lamp_current(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_filter_setting lamp_current(::sd_can_msgs::msg::KistlerStatus::_lamp_current_type arg)
  {
    msg_.lamp_current = std::move(arg);
    return Init_KistlerStatus_filter_setting(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_temperature
{
public:
  explicit Init_KistlerStatus_temperature(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_lamp_current temperature(::sd_can_msgs::msg::KistlerStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_KistlerStatus_lamp_current(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_sensor_id
{
public:
  explicit Init_KistlerStatus_sensor_id(::sd_can_msgs::msg::KistlerStatus & msg)
  : msg_(msg)
  {}
  Init_KistlerStatus_temperature sensor_id(::sd_can_msgs::msg::KistlerStatus::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_KistlerStatus_temperature(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

class Init_KistlerStatus_header
{
public:
  Init_KistlerStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerStatus_sensor_id header(::sd_can_msgs::msg::KistlerStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerStatus_sensor_id(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerStatus>()
{
  return sd_can_msgs::msg::builder::Init_KistlerStatus_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__BUILDER_HPP_
