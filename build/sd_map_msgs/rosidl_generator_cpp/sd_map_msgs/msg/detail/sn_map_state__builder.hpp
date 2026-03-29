// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_map_msgs:msg/SnMapState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__BUILDER_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_map_msgs/msg/detail/sn_map_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_map_msgs
{

namespace msg
{

namespace builder
{

class Init_SnMapState_pitlane_sn_state
{
public:
  explicit Init_SnMapState_pitlane_sn_state(::sd_map_msgs::msg::SnMapState & msg)
  : msg_(msg)
  {}
  ::sd_map_msgs::msg::SnMapState pitlane_sn_state(::sd_map_msgs::msg::SnMapState::_pitlane_sn_state_type arg)
  {
    msg_.pitlane_sn_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_map_msgs::msg::SnMapState msg_;
};

class Init_SnMapState_track_sn_state
{
public:
  explicit Init_SnMapState_track_sn_state(::sd_map_msgs::msg::SnMapState & msg)
  : msg_(msg)
  {}
  Init_SnMapState_pitlane_sn_state track_sn_state(::sd_map_msgs::msg::SnMapState::_track_sn_state_type arg)
  {
    msg_.track_sn_state = std::move(arg);
    return Init_SnMapState_pitlane_sn_state(msg_);
  }

private:
  ::sd_map_msgs::msg::SnMapState msg_;
};

class Init_SnMapState_current_lane
{
public:
  Init_SnMapState_current_lane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SnMapState_track_sn_state current_lane(::sd_map_msgs::msg::SnMapState::_current_lane_type arg)
  {
    msg_.current_lane = std::move(arg);
    return Init_SnMapState_track_sn_state(msg_);
  }

private:
  ::sd_map_msgs::msg::SnMapState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_map_msgs::msg::SnMapState>()
{
  return sd_map_msgs::msg::builder::Init_SnMapState_current_lane();
}

}  // namespace sd_map_msgs

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__BUILDER_HPP_
