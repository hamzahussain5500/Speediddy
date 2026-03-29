// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/HLMsg06.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/hl_msg06__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_HLMsg06_hl_aggressiveness
{
public:
  explicit Init_HLMsg06_hl_aggressiveness(::sd_can_msgs::msg::HLMsg06 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::HLMsg06 hl_aggressiveness(::sd_can_msgs::msg::HLMsg06::_hl_aggressiveness_type arg)
  {
    msg_.hl_aggressiveness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

class Init_HLMsg06_hl_watts_consumed
{
public:
  explicit Init_HLMsg06_hl_watts_consumed(::sd_can_msgs::msg::HLMsg06 & msg)
  : msg_(msg)
  {}
  Init_HLMsg06_hl_aggressiveness hl_watts_consumed(::sd_can_msgs::msg::HLMsg06::_hl_watts_consumed_type arg)
  {
    msg_.hl_watts_consumed = std::move(arg);
    return Init_HLMsg06_hl_aggressiveness(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

class Init_HLMsg06_hl_localization_acc
{
public:
  explicit Init_HLMsg06_hl_localization_acc(::sd_can_msgs::msg::HLMsg06 & msg)
  : msg_(msg)
  {}
  Init_HLMsg06_hl_watts_consumed hl_localization_acc(::sd_can_msgs::msg::HLMsg06::_hl_localization_acc_type arg)
  {
    msg_.hl_localization_acc = std::move(arg);
    return Init_HLMsg06_hl_watts_consumed(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

class Init_HLMsg06_hl_perception_acc
{
public:
  explicit Init_HLMsg06_hl_perception_acc(::sd_can_msgs::msg::HLMsg06 & msg)
  : msg_(msg)
  {}
  Init_HLMsg06_hl_localization_acc hl_perception_acc(::sd_can_msgs::msg::HLMsg06::_hl_perception_acc_type arg)
  {
    msg_.hl_perception_acc = std::move(arg);
    return Init_HLMsg06_hl_localization_acc(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

class Init_HLMsg06_hl_gpu_temp
{
public:
  explicit Init_HLMsg06_hl_gpu_temp(::sd_can_msgs::msg::HLMsg06 & msg)
  : msg_(msg)
  {}
  Init_HLMsg06_hl_perception_acc hl_gpu_temp(::sd_can_msgs::msg::HLMsg06::_hl_gpu_temp_type arg)
  {
    msg_.hl_gpu_temp = std::move(arg);
    return Init_HLMsg06_hl_perception_acc(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

class Init_HLMsg06_hl_gpu_usage
{
public:
  explicit Init_HLMsg06_hl_gpu_usage(::sd_can_msgs::msg::HLMsg06 & msg)
  : msg_(msg)
  {}
  Init_HLMsg06_hl_gpu_temp hl_gpu_usage(::sd_can_msgs::msg::HLMsg06::_hl_gpu_usage_type arg)
  {
    msg_.hl_gpu_usage = std::move(arg);
    return Init_HLMsg06_hl_gpu_temp(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

class Init_HLMsg06_hl_cpu_usage
{
public:
  explicit Init_HLMsg06_hl_cpu_usage(::sd_can_msgs::msg::HLMsg06 & msg)
  : msg_(msg)
  {}
  Init_HLMsg06_hl_gpu_usage hl_cpu_usage(::sd_can_msgs::msg::HLMsg06::_hl_cpu_usage_type arg)
  {
    msg_.hl_cpu_usage = std::move(arg);
    return Init_HLMsg06_hl_gpu_usage(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

class Init_HLMsg06_hl_pc_temp
{
public:
  explicit Init_HLMsg06_hl_pc_temp(::sd_can_msgs::msg::HLMsg06 & msg)
  : msg_(msg)
  {}
  Init_HLMsg06_hl_cpu_usage hl_pc_temp(::sd_can_msgs::msg::HLMsg06::_hl_pc_temp_type arg)
  {
    msg_.hl_pc_temp = std::move(arg);
    return Init_HLMsg06_hl_cpu_usage(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

class Init_HLMsg06_header
{
public:
  Init_HLMsg06_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLMsg06_hl_pc_temp header(::sd_can_msgs::msg::HLMsg06::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HLMsg06_hl_pc_temp(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg06 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::HLMsg06>()
{
  return sd_can_msgs::msg::builder::Init_HLMsg06_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__BUILDER_HPP_
