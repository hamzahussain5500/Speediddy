// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_map_msgs:msg/SnLaneState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__BUILDER_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_map_msgs/msg/detail/sn_lane_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_map_msgs
{

namespace msg
{

namespace builder
{

class Init_SnLaneState_dist_to_border
{
public:
  explicit Init_SnLaneState_dist_to_border(::sd_map_msgs::msg::SnLaneState & msg)
  : msg_(msg)
  {}
  ::sd_map_msgs::msg::SnLaneState dist_to_border(::sd_map_msgs::msg::SnLaneState::_dist_to_border_type arg)
  {
    msg_.dist_to_border = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_map_msgs::msg::SnLaneState msg_;
};

class Init_SnLaneState_is_inside_borders
{
public:
  explicit Init_SnLaneState_is_inside_borders(::sd_map_msgs::msg::SnLaneState & msg)
  : msg_(msg)
  {}
  Init_SnLaneState_dist_to_border is_inside_borders(::sd_map_msgs::msg::SnLaneState::_is_inside_borders_type arg)
  {
    msg_.is_inside_borders = std::move(arg);
    return Init_SnLaneState_dist_to_border(msg_);
  }

private:
  ::sd_map_msgs::msg::SnLaneState msg_;
};

class Init_SnLaneState_sn_state
{
public:
  Init_SnLaneState_sn_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SnLaneState_is_inside_borders sn_state(::sd_map_msgs::msg::SnLaneState::_sn_state_type arg)
  {
    msg_.sn_state = std::move(arg);
    return Init_SnLaneState_is_inside_borders(msg_);
  }

private:
  ::sd_map_msgs::msg::SnLaneState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_map_msgs::msg::SnLaneState>()
{
  return sd_map_msgs::msg::builder::Init_SnLaneState_sn_state();
}

}  // namespace sd_map_msgs

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__BUILDER_HPP_
