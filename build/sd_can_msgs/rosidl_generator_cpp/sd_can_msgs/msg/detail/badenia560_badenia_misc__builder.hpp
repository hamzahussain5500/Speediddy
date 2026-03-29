// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560BadeniaMisc.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_badenia_misc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560BadeniaMisc_battery_voltage
{
public:
  explicit Init_Badenia560BadeniaMisc_battery_voltage(::sd_can_msgs::msg::Badenia560BadeniaMisc & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560BadeniaMisc battery_voltage(::sd_can_msgs::msg::Badenia560BadeniaMisc::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BadeniaMisc msg_;
};

class Init_Badenia560BadeniaMisc_lap_number
{
public:
  explicit Init_Badenia560BadeniaMisc_lap_number(::sd_can_msgs::msg::Badenia560BadeniaMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560BadeniaMisc_battery_voltage lap_number(::sd_can_msgs::msg::Badenia560BadeniaMisc::_lap_number_type arg)
  {
    msg_.lap_number = std::move(arg);
    return Init_Badenia560BadeniaMisc_battery_voltage(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BadeniaMisc msg_;
};

class Init_Badenia560BadeniaMisc_lap_distance
{
public:
  explicit Init_Badenia560BadeniaMisc_lap_distance(::sd_can_msgs::msg::Badenia560BadeniaMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560BadeniaMisc_lap_number lap_distance(::sd_can_msgs::msg::Badenia560BadeniaMisc::_lap_distance_type arg)
  {
    msg_.lap_distance = std::move(arg);
    return Init_Badenia560BadeniaMisc_lap_number(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BadeniaMisc msg_;
};

class Init_Badenia560BadeniaMisc_lap_time
{
public:
  explicit Init_Badenia560BadeniaMisc_lap_time(::sd_can_msgs::msg::Badenia560BadeniaMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560BadeniaMisc_lap_distance lap_time(::sd_can_msgs::msg::Badenia560BadeniaMisc::_lap_time_type arg)
  {
    msg_.lap_time = std::move(arg);
    return Init_Badenia560BadeniaMisc_lap_distance(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BadeniaMisc msg_;
};

class Init_Badenia560BadeniaMisc_header
{
public:
  Init_Badenia560BadeniaMisc_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560BadeniaMisc_lap_time header(::sd_can_msgs::msg::Badenia560BadeniaMisc::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560BadeniaMisc_lap_time(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BadeniaMisc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560BadeniaMisc>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560BadeniaMisc_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__BUILDER_HPP_
