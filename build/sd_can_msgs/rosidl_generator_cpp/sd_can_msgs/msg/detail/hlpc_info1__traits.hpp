// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/HLPCInfo1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/hlpc_info1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HLPCInfo1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hlpc_network_ping
  {
    out << "hlpc_network_ping: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_network_ping, out);
    out << ", ";
  }

  // member: hlpc_lidar_status_left
  {
    out << "hlpc_lidar_status_left: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_lidar_status_left, out);
    out << ", ";
  }

  // member: hlpc_lidar_status_front
  {
    out << "hlpc_lidar_status_front: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_lidar_status_front, out);
    out << ", ";
  }

  // member: hlpc_lidar_status_right
  {
    out << "hlpc_lidar_status_right: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_lidar_status_right, out);
    out << ", ";
  }

  // member: hlpc_radar_status_front
  {
    out << "hlpc_radar_status_front: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_radar_status_front, out);
    out << ", ";
  }

  // member: hlpc_radar_status_left
  {
    out << "hlpc_radar_status_left: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_radar_status_left, out);
    out << ", ";
  }

  // member: hlpc_radar_status_right
  {
    out << "hlpc_radar_status_right: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_radar_status_right, out);
    out << ", ";
  }

  // member: hlpc_radar_status_rear
  {
    out << "hlpc_radar_status_rear: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_radar_status_rear, out);
    out << ", ";
  }

  // member: hlpc_vector_nav_fix
  {
    out << "hlpc_vector_nav_fix: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_vector_nav_fix, out);
    out << ", ";
  }

  // member: hlpc_alive_c4
  {
    out << "hlpc_alive_c4: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_alive_c4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HLPCInfo1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: hlpc_network_ping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_network_ping: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_network_ping, out);
    out << "\n";
  }

  // member: hlpc_lidar_status_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_lidar_status_left: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_lidar_status_left, out);
    out << "\n";
  }

  // member: hlpc_lidar_status_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_lidar_status_front: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_lidar_status_front, out);
    out << "\n";
  }

  // member: hlpc_lidar_status_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_lidar_status_right: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_lidar_status_right, out);
    out << "\n";
  }

  // member: hlpc_radar_status_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_radar_status_front: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_radar_status_front, out);
    out << "\n";
  }

  // member: hlpc_radar_status_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_radar_status_left: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_radar_status_left, out);
    out << "\n";
  }

  // member: hlpc_radar_status_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_radar_status_right: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_radar_status_right, out);
    out << "\n";
  }

  // member: hlpc_radar_status_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_radar_status_rear: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_radar_status_rear, out);
    out << "\n";
  }

  // member: hlpc_vector_nav_fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_vector_nav_fix: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_vector_nav_fix, out);
    out << "\n";
  }

  // member: hlpc_alive_c4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlpc_alive_c4: ";
    rosidl_generator_traits::value_to_yaml(msg.hlpc_alive_c4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HLPCInfo1 & msg, bool use_flow_style = false)
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

}  // namespace sd_can_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_can_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_can_msgs::msg::HLPCInfo1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::HLPCInfo1 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::HLPCInfo1>()
{
  return "sd_can_msgs::msg::HLPCInfo1";
}

template<>
inline const char * name<sd_can_msgs::msg::HLPCInfo1>()
{
  return "sd_can_msgs/msg/HLPCInfo1";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::HLPCInfo1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::HLPCInfo1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::HLPCInfo1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__TRAITS_HPP_
