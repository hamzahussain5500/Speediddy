// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/ICEStatus02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/ice_status02__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_ICEStatus02_ice_oil_press_k_pa
{
public:
  explicit Init_ICEStatus02_ice_oil_press_k_pa(::sd_can_msgs::msg::ICEStatus02 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::ICEStatus02 ice_oil_press_k_pa(::sd_can_msgs::msg::ICEStatus02::_ice_oil_press_k_pa_type arg)
  {
    msg_.ice_oil_press_k_pa = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus02 msg_;
};

class Init_ICEStatus02_ice_water_temp_deg_c
{
public:
  explicit Init_ICEStatus02_ice_water_temp_deg_c(::sd_can_msgs::msg::ICEStatus02 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus02_ice_oil_press_k_pa ice_water_temp_deg_c(::sd_can_msgs::msg::ICEStatus02::_ice_water_temp_deg_c_type arg)
  {
    msg_.ice_water_temp_deg_c = std::move(arg);
    return Init_ICEStatus02_ice_oil_press_k_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus02 msg_;
};

class Init_ICEStatus02_ice_fuel_press_k_pa
{
public:
  explicit Init_ICEStatus02_ice_fuel_press_k_pa(::sd_can_msgs::msg::ICEStatus02 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus02_ice_water_temp_deg_c ice_fuel_press_k_pa(::sd_can_msgs::msg::ICEStatus02::_ice_fuel_press_k_pa_type arg)
  {
    msg_.ice_fuel_press_k_pa = std::move(arg);
    return Init_ICEStatus02_ice_water_temp_deg_c(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus02 msg_;
};

class Init_ICEStatus02_ice_engine_speed_rpm
{
public:
  explicit Init_ICEStatus02_ice_engine_speed_rpm(::sd_can_msgs::msg::ICEStatus02 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus02_ice_fuel_press_k_pa ice_engine_speed_rpm(::sd_can_msgs::msg::ICEStatus02::_ice_engine_speed_rpm_type arg)
  {
    msg_.ice_engine_speed_rpm = std::move(arg);
    return Init_ICEStatus02_ice_fuel_press_k_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus02 msg_;
};

class Init_ICEStatus02_ice_oil_temp_deg_c
{
public:
  explicit Init_ICEStatus02_ice_oil_temp_deg_c(::sd_can_msgs::msg::ICEStatus02 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus02_ice_engine_speed_rpm ice_oil_temp_deg_c(::sd_can_msgs::msg::ICEStatus02::_ice_oil_temp_deg_c_type arg)
  {
    msg_.ice_oil_temp_deg_c = std::move(arg);
    return Init_ICEStatus02_ice_engine_speed_rpm(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus02 msg_;
};

class Init_ICEStatus02_header
{
public:
  Init_ICEStatus02_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ICEStatus02_ice_oil_temp_deg_c header(::sd_can_msgs::msg::ICEStatus02::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ICEStatus02_ice_oil_temp_deg_c(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus02 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::ICEStatus02>()
{
  return sd_can_msgs::msg::builder::Init_ICEStatus02_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__BUILDER_HPP_
