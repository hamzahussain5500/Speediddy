// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/ICEStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/ice_status01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_ICEStatus01_ice_downshift_available
{
public:
  explicit Init_ICEStatus01_ice_downshift_available(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::ICEStatus01 ice_downshift_available(::sd_can_msgs::msg::ICEStatus01::_ice_downshift_available_type arg)
  {
    msg_.ice_downshift_available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_ice_available_fuel_l
{
public:
  explicit Init_ICEStatus01_ice_available_fuel_l(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus01_ice_downshift_available ice_available_fuel_l(::sd_can_msgs::msg::ICEStatus01::_ice_available_fuel_l_type arg)
  {
    msg_.ice_available_fuel_l = std::move(arg);
    return Init_ICEStatus01_ice_downshift_available(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_ice_water_press_k_pa
{
public:
  explicit Init_ICEStatus01_ice_water_press_k_pa(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus01_ice_available_fuel_l ice_water_press_k_pa(::sd_can_msgs::msg::ICEStatus01::_ice_water_press_k_pa_type arg)
  {
    msg_.ice_water_press_k_pa = std::move(arg);
    return Init_ICEStatus01_ice_available_fuel_l(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_ice_push_to_pass_ack
{
public:
  explicit Init_ICEStatus01_ice_push_to_pass_ack(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus01_ice_water_press_k_pa ice_push_to_pass_ack(::sd_can_msgs::msg::ICEStatus01::_ice_push_to_pass_ack_type arg)
  {
    msg_.ice_push_to_pass_ack = std::move(arg);
    return Init_ICEStatus01_ice_water_press_k_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_ice_push_to_pass_req
{
public:
  explicit Init_ICEStatus01_ice_push_to_pass_req(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus01_ice_push_to_pass_ack ice_push_to_pass_req(::sd_can_msgs::msg::ICEStatus01::_ice_push_to_pass_req_type arg)
  {
    msg_.ice_push_to_pass_req = std::move(arg);
    return Init_ICEStatus01_ice_push_to_pass_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_ice_target_throttle_ack
{
public:
  explicit Init_ICEStatus01_ice_target_throttle_ack(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus01_ice_push_to_pass_req ice_target_throttle_ack(::sd_can_msgs::msg::ICEStatus01::_ice_target_throttle_ack_type arg)
  {
    msg_.ice_target_throttle_ack = std::move(arg);
    return Init_ICEStatus01_ice_push_to_pass_req(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_ice_actual_throttle
{
public:
  explicit Init_ICEStatus01_ice_actual_throttle(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus01_ice_target_throttle_ack ice_actual_throttle(::sd_can_msgs::msg::ICEStatus01::_ice_actual_throttle_type arg)
  {
    msg_.ice_actual_throttle = std::move(arg);
    return Init_ICEStatus01_ice_target_throttle_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_ice_target_gear_ack
{
public:
  explicit Init_ICEStatus01_ice_target_gear_ack(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus01_ice_actual_throttle ice_target_gear_ack(::sd_can_msgs::msg::ICEStatus01::_ice_target_gear_ack_type arg)
  {
    msg_.ice_target_gear_ack = std::move(arg);
    return Init_ICEStatus01_ice_actual_throttle(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_ice_actual_gear
{
public:
  explicit Init_ICEStatus01_ice_actual_gear(::sd_can_msgs::msg::ICEStatus01 & msg)
  : msg_(msg)
  {}
  Init_ICEStatus01_ice_target_gear_ack ice_actual_gear(::sd_can_msgs::msg::ICEStatus01::_ice_actual_gear_type arg)
  {
    msg_.ice_actual_gear = std::move(arg);
    return Init_ICEStatus01_ice_target_gear_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

class Init_ICEStatus01_header
{
public:
  Init_ICEStatus01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ICEStatus01_ice_actual_gear header(::sd_can_msgs::msg::ICEStatus01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ICEStatus01_ice_actual_gear(msg_);
  }

private:
  ::sd_can_msgs::msg::ICEStatus01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::ICEStatus01>()
{
  return sd_can_msgs::msg::builder::Init_ICEStatus01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__BUILDER_HPP_
