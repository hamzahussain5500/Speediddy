// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/BSURanges02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/bsu_ranges02__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_BSURanges02_psa_max_torque_m_nm
{
public:
  explicit Init_BSURanges02_psa_max_torque_m_nm(::sd_can_msgs::msg::BSURanges02 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::BSURanges02 psa_max_torque_m_nm(::sd_can_msgs::msg::BSURanges02::_psa_max_torque_m_nm_type arg)
  {
    msg_.psa_max_torque_m_nm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges02 msg_;
};

class Init_BSURanges02_psa_min_torque_m_nm
{
public:
  explicit Init_BSURanges02_psa_min_torque_m_nm(::sd_can_msgs::msg::BSURanges02 & msg)
  : msg_(msg)
  {}
  Init_BSURanges02_psa_max_torque_m_nm psa_min_torque_m_nm(::sd_can_msgs::msg::BSURanges02::_psa_min_torque_m_nm_type arg)
  {
    msg_.psa_min_torque_m_nm = std::move(arg);
    return Init_BSURanges02_psa_max_torque_m_nm(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges02 msg_;
};

class Init_BSURanges02_psa_max_angle_speed_rad_s
{
public:
  explicit Init_BSURanges02_psa_max_angle_speed_rad_s(::sd_can_msgs::msg::BSURanges02 & msg)
  : msg_(msg)
  {}
  Init_BSURanges02_psa_min_torque_m_nm psa_max_angle_speed_rad_s(::sd_can_msgs::msg::BSURanges02::_psa_max_angle_speed_rad_s_type arg)
  {
    msg_.psa_max_angle_speed_rad_s = std::move(arg);
    return Init_BSURanges02_psa_min_torque_m_nm(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges02 msg_;
};

class Init_BSURanges02_psa_min_angle_speed_rad_s
{
public:
  explicit Init_BSURanges02_psa_min_angle_speed_rad_s(::sd_can_msgs::msg::BSURanges02 & msg)
  : msg_(msg)
  {}
  Init_BSURanges02_psa_max_angle_speed_rad_s psa_min_angle_speed_rad_s(::sd_can_msgs::msg::BSURanges02::_psa_min_angle_speed_rad_s_type arg)
  {
    msg_.psa_min_angle_speed_rad_s = std::move(arg);
    return Init_BSURanges02_psa_max_angle_speed_rad_s(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges02 msg_;
};

class Init_BSURanges02_psa_max_angle_rad
{
public:
  explicit Init_BSURanges02_psa_max_angle_rad(::sd_can_msgs::msg::BSURanges02 & msg)
  : msg_(msg)
  {}
  Init_BSURanges02_psa_min_angle_speed_rad_s psa_max_angle_rad(::sd_can_msgs::msg::BSURanges02::_psa_max_angle_rad_type arg)
  {
    msg_.psa_max_angle_rad = std::move(arg);
    return Init_BSURanges02_psa_min_angle_speed_rad_s(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges02 msg_;
};

class Init_BSURanges02_psa_min_angle_rad
{
public:
  explicit Init_BSURanges02_psa_min_angle_rad(::sd_can_msgs::msg::BSURanges02 & msg)
  : msg_(msg)
  {}
  Init_BSURanges02_psa_max_angle_rad psa_min_angle_rad(::sd_can_msgs::msg::BSURanges02::_psa_min_angle_rad_type arg)
  {
    msg_.psa_min_angle_rad = std::move(arg);
    return Init_BSURanges02_psa_max_angle_rad(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges02 msg_;
};

class Init_BSURanges02_header
{
public:
  Init_BSURanges02_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSURanges02_psa_min_angle_rad header(::sd_can_msgs::msg::BSURanges02::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BSURanges02_psa_min_angle_rad(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges02 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::BSURanges02>()
{
  return sd_can_msgs::msg::builder::Init_BSURanges02_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__BUILDER_HPP_
