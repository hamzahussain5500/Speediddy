// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560BrakeDiskTemp.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_brake_disk_temp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560BrakeDiskTemp_brake_disk_temp_rl
{
public:
  explicit Init_Badenia560BrakeDiskTemp_brake_disk_temp_rl(::sd_can_msgs::msg::Badenia560BrakeDiskTemp & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560BrakeDiskTemp brake_disk_temp_rl(::sd_can_msgs::msg::Badenia560BrakeDiskTemp::_brake_disk_temp_rl_type arg)
  {
    msg_.brake_disk_temp_rl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BrakeDiskTemp msg_;
};

class Init_Badenia560BrakeDiskTemp_brake_disk_temp_rr
{
public:
  explicit Init_Badenia560BrakeDiskTemp_brake_disk_temp_rr(::sd_can_msgs::msg::Badenia560BrakeDiskTemp & msg)
  : msg_(msg)
  {}
  Init_Badenia560BrakeDiskTemp_brake_disk_temp_rl brake_disk_temp_rr(::sd_can_msgs::msg::Badenia560BrakeDiskTemp::_brake_disk_temp_rr_type arg)
  {
    msg_.brake_disk_temp_rr = std::move(arg);
    return Init_Badenia560BrakeDiskTemp_brake_disk_temp_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BrakeDiskTemp msg_;
};

class Init_Badenia560BrakeDiskTemp_brake_disk_temp_fr
{
public:
  explicit Init_Badenia560BrakeDiskTemp_brake_disk_temp_fr(::sd_can_msgs::msg::Badenia560BrakeDiskTemp & msg)
  : msg_(msg)
  {}
  Init_Badenia560BrakeDiskTemp_brake_disk_temp_rr brake_disk_temp_fr(::sd_can_msgs::msg::Badenia560BrakeDiskTemp::_brake_disk_temp_fr_type arg)
  {
    msg_.brake_disk_temp_fr = std::move(arg);
    return Init_Badenia560BrakeDiskTemp_brake_disk_temp_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BrakeDiskTemp msg_;
};

class Init_Badenia560BrakeDiskTemp_brake_disk_temp_fl
{
public:
  explicit Init_Badenia560BrakeDiskTemp_brake_disk_temp_fl(::sd_can_msgs::msg::Badenia560BrakeDiskTemp & msg)
  : msg_(msg)
  {}
  Init_Badenia560BrakeDiskTemp_brake_disk_temp_fr brake_disk_temp_fl(::sd_can_msgs::msg::Badenia560BrakeDiskTemp::_brake_disk_temp_fl_type arg)
  {
    msg_.brake_disk_temp_fl = std::move(arg);
    return Init_Badenia560BrakeDiskTemp_brake_disk_temp_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BrakeDiskTemp msg_;
};

class Init_Badenia560BrakeDiskTemp_header
{
public:
  Init_Badenia560BrakeDiskTemp_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560BrakeDiskTemp_brake_disk_temp_fl header(::sd_can_msgs::msg::Badenia560BrakeDiskTemp::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560BrakeDiskTemp_brake_disk_temp_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560BrakeDiskTemp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560BrakeDiskTemp>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560BrakeDiskTemp_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__BUILDER_HPP_
