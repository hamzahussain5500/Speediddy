// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_map_msgs:msg/SnLaneState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__TRAITS_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_map_msgs/msg/detail/sn_lane_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sn_state'
#include "sd_map_msgs/msg/detail/sn_state__traits.hpp"

namespace sd_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SnLaneState & msg,
  std::ostream & out)
{
  out << "{";
  // member: sn_state
  {
    out << "sn_state: ";
    to_flow_style_yaml(msg.sn_state, out);
    out << ", ";
  }

  // member: is_inside_borders
  {
    out << "is_inside_borders: ";
    rosidl_generator_traits::value_to_yaml(msg.is_inside_borders, out);
    out << ", ";
  }

  // member: dist_to_border
  {
    out << "dist_to_border: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_border, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SnLaneState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sn_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sn_state:\n";
    to_block_style_yaml(msg.sn_state, out, indentation + 2);
  }

  // member: is_inside_borders
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_inside_borders: ";
    rosidl_generator_traits::value_to_yaml(msg.is_inside_borders, out);
    out << "\n";
  }

  // member: dist_to_border
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_border: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_border, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SnLaneState & msg, bool use_flow_style = false)
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
  const sd_map_msgs::msg::SnLaneState & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_map_msgs::msg::SnLaneState & msg)
{
  return sd_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_map_msgs::msg::SnLaneState>()
{
  return "sd_map_msgs::msg::SnLaneState";
}

template<>
inline const char * name<sd_map_msgs::msg::SnLaneState>()
{
  return "sd_map_msgs/msg/SnLaneState";
}

template<>
struct has_fixed_size<sd_map_msgs::msg::SnLaneState>
  : std::integral_constant<bool, has_fixed_size<sd_map_msgs::msg::SnState>::value> {};

template<>
struct has_bounded_size<sd_map_msgs::msg::SnLaneState>
  : std::integral_constant<bool, has_bounded_size<sd_map_msgs::msg::SnState>::value> {};

template<>
struct is_message<sd_map_msgs::msg::SnLaneState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__TRAITS_HPP_
