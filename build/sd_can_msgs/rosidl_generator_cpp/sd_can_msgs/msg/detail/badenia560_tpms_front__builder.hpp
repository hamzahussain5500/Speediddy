// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560TpmsFront.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_tpms_front__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560TpmsFront_tpr4_abs_press_fl
{
public:
  explicit Init_Badenia560TpmsFront_tpr4_abs_press_fl(::sd_can_msgs::msg::Badenia560TpmsFront & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560TpmsFront tpr4_abs_press_fl(::sd_can_msgs::msg::Badenia560TpmsFront::_tpr4_abs_press_fl_type arg)
  {
    msg_.tpr4_abs_press_fl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsFront msg_;
};

class Init_Badenia560TpmsFront_tpr4_abs_press_fr
{
public:
  explicit Init_Badenia560TpmsFront_tpr4_abs_press_fr(::sd_can_msgs::msg::Badenia560TpmsFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560TpmsFront_tpr4_abs_press_fl tpr4_abs_press_fr(::sd_can_msgs::msg::Badenia560TpmsFront::_tpr4_abs_press_fr_type arg)
  {
    msg_.tpr4_abs_press_fr = std::move(arg);
    return Init_Badenia560TpmsFront_tpr4_abs_press_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsFront msg_;
};

class Init_Badenia560TpmsFront_tpr4_temp_fr
{
public:
  explicit Init_Badenia560TpmsFront_tpr4_temp_fr(::sd_can_msgs::msg::Badenia560TpmsFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560TpmsFront_tpr4_abs_press_fr tpr4_temp_fr(::sd_can_msgs::msg::Badenia560TpmsFront::_tpr4_temp_fr_type arg)
  {
    msg_.tpr4_temp_fr = std::move(arg);
    return Init_Badenia560TpmsFront_tpr4_abs_press_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsFront msg_;
};

class Init_Badenia560TpmsFront_tpr4_temp_fl
{
public:
  explicit Init_Badenia560TpmsFront_tpr4_temp_fl(::sd_can_msgs::msg::Badenia560TpmsFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560TpmsFront_tpr4_temp_fr tpr4_temp_fl(::sd_can_msgs::msg::Badenia560TpmsFront::_tpr4_temp_fl_type arg)
  {
    msg_.tpr4_temp_fl = std::move(arg);
    return Init_Badenia560TpmsFront_tpr4_temp_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsFront msg_;
};

class Init_Badenia560TpmsFront_header
{
public:
  Init_Badenia560TpmsFront_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560TpmsFront_tpr4_temp_fl header(::sd_can_msgs::msg::Badenia560TpmsFront::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560TpmsFront_tpr4_temp_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TpmsFront msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560TpmsFront>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560TpmsFront_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__BUILDER_HPP_
