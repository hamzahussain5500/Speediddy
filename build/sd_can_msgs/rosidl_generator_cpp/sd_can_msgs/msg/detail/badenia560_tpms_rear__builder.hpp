// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560TpmsRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_tpms_rear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560TpmsRear_tpr4_abs_press_rr
{
public:
  explicit Init_Badenia560TpmsRear_tpr4_abs_press_rr(::sd_can_msgs::msg::Badenia560TpmsRear & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560TpmsRear tpr4_abs_press_rr(::sd_can_msgs::msg::Badenia560TpmsRear::_tpr4_abs_press_rr_type arg)
  {
    msg_.tpr4_abs_press_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsRear msg_;
};

class Init_Badenia560TpmsRear_tpr4_abs_press_rl
{
public:
  explicit Init_Badenia560TpmsRear_tpr4_abs_press_rl(::sd_can_msgs::msg::Badenia560TpmsRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560TpmsRear_tpr4_abs_press_rr tpr4_abs_press_rl(::sd_can_msgs::msg::Badenia560TpmsRear::_tpr4_abs_press_rl_type arg)
  {
    msg_.tpr4_abs_press_rl = std::move(arg);
    return Init_Badenia560TpmsRear_tpr4_abs_press_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsRear msg_;
};

class Init_Badenia560TpmsRear_tpr4_temp_rr
{
public:
  explicit Init_Badenia560TpmsRear_tpr4_temp_rr(::sd_can_msgs::msg::Badenia560TpmsRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560TpmsRear_tpr4_abs_press_rl tpr4_temp_rr(::sd_can_msgs::msg::Badenia560TpmsRear::_tpr4_temp_rr_type arg)
  {
    msg_.tpr4_temp_rr = std::move(arg);
    return Init_Badenia560TpmsRear_tpr4_abs_press_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsRear msg_;
};

class Init_Badenia560TpmsRear_tpr4_temp_rl
{
public:
  explicit Init_Badenia560TpmsRear_tpr4_temp_rl(::sd_can_msgs::msg::Badenia560TpmsRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560TpmsRear_tpr4_temp_rr tpr4_temp_rl(::sd_can_msgs::msg::Badenia560TpmsRear::_tpr4_temp_rl_type arg)
  {
    msg_.tpr4_temp_rl = std::move(arg);
    return Init_Badenia560TpmsRear_tpr4_temp_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsRear msg_;
};

class Init_Badenia560TpmsRear_header
{
public:
  Init_Badenia560TpmsRear_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560TpmsRear_tpr4_temp_rl header(::sd_can_msgs::msg::Badenia560TpmsRear::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560TpmsRear_tpr4_temp_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsRear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560TpmsRear>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560TpmsRear_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__BUILDER_HPP_
