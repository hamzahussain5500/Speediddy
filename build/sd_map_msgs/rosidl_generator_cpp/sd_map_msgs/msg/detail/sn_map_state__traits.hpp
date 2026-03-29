// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_map_msgs:msg/SnMapState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__TRAITS_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_map_msgs/msg/detail/sn_map_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'track_sn_state'
// Member 'pitlane_sn_state'
#include "sd_map_msgs/msg/detail/sn_lane_state__traits.hpp"

namespace sd_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SnMapState & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_lane
  {
    out << "current_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.current_lane, out);
    out << ", ";
  }

  // member: track_sn_state
  {
    out << "track_sn_state: ";
    to_flow_style_yaml(msg.track_sn_state, out);
    out << ", ";
  }

  // member: pitlane_sn_state
  {
    out << "pitlane_sn_state: ";
    to_flow_style_yaml(msg.pitlane_sn_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SnMapState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.current_lane, out);
    out << "\n";
  }

  // member: track_sn_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_sn_state:\n";
    to_block_style_yaml(msg.track_sn_state, out, indentation + 2);
  }

  // member: pitlane_sn_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitlane_sn_state:\n";
    to_block_style_yaml(msg.pitlane_sn_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SnMapState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sd_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_map_msgs::msg::SnMapState & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_map_msgs::msg::SnMapState & msg)
{
  return sd_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_map_msgs::msg::SnMapState>()
{
  return "sd_map_msgs::msg::SnMapState";
}

template<>
inline const char * name<sd_map_msgs::msg::SnMapState>()
{
  return "sd_map_msgs/msg/SnMapState";
}

template<>
struct has_fixed_size<sd_map_msgs::msg::SnMapState>
  : std::integral_constant<bool, has_fixed_size<sd_map_msgs::msg::SnLaneState>::value> {};

template<>
struct has_bounded_size<sd_map_msgs::msg::SnMapState>
  : std::integral_constant<bool, has_bounded_size<sd_map_msgs::msg::SnLaneState>::value> {};

template<>
struct is_message<sd_map_msgs::msg::SnMapState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__TRAITS_HPP_
