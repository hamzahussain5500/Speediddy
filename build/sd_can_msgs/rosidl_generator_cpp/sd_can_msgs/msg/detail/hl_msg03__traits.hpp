// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/HLMsg03.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/hl_msg03__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
// Member 'header_legacy'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HLMsg03 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hl_alive_03
  {
    out << "hl_alive_03: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_alive_03, out);
    out << ", ";
  }

  // member: hl_dbw_enable
  {
    out << "hl_dbw_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_dbw_enable, out);
    out << ", ";
  }

  // member: hl_push_to_pass_on
  {
    out << "hl_push_to_pass_on: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_push_to_pass_on, out);
    out << ", ";
  }

  // member: hl_pdu12_activate_gnss
  {
    out << "hl_pdu12_activate_gnss: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu12_activate_gnss, out);
    out << ", ";
  }

  // member: hl_pdu12_activate_oss
  {
    out << "hl_pdu12_activate_oss: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu12_activate_oss, out);
    out << ", ";
  }

  // member: hl_ice_enable
  {
    out << "hl_ice_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_ice_enable, out);
    out << ", ";
  }

  // member: hl_ml_supervisor_activation
  {
    out << "hl_ml_supervisor_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_ml_supervisor_activation, out);
    out << ", ";
  }

  // member: hl_pdu12_activate_lidar
  {
    out << "hl_pdu12_activate_lidar: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu12_activate_lidar, out);
    out << ", ";
  }

  // member: hl_pdu12_activate_radar
  {
    out << "hl_pdu12_activate_radar: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu12_activate_radar, out);
    out << ", ";
  }

  // member: ice_start_fuel_level_l
  {
    out << "ice_start_fuel_level_l: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_start_fuel_level_l, out);
    out << ", ";
  }

  // member: hl_crancking_by_pass
  {
    out << "hl_crancking_by_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_crancking_by_pass, out);
    out << ", ";
  }

  // member: hl_switch_off_ok
  {
    out << "hl_switch_off_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_switch_off_ok, out);
    out << ", ";
  }

  // member: header_legacy
  {
    out << "header_legacy: ";
    to_flow_style_yaml(msg.header_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_gnss_legacy
  {
    out << "hl_pdu1_activate_gnss_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_gnss_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_oss_legacy
  {
    out << "hl_pdu1_activate_oss_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_oss_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_lidar_r_legacy
  {
    out << "hl_pdu1_activate_lidar_r_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_lidar_r_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_lidar_cn_legacy
  {
    out << "hl_pdu1_activate_lidar_cn_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_lidar_cn_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_lidar_l_legacy
  {
    out << "hl_pdu1_activate_lidar_l_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_lidar_l_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_radar_rear_legacy
  {
    out << "hl_pdu1_activate_radar_rear_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_radar_rear_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_radar_cn_legacy
  {
    out << "hl_pdu1_activate_radar_cn_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_radar_cn_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_radar_r_legacy
  {
    out << "hl_pdu1_activate_radar_r_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_radar_r_legacy, out);
    out << ", ";
  }

  // member: hl_pdu1_activate_radar_l_legacy
  {
    out << "hl_pdu1_activate_radar_l_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_radar_l_legacy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HLMsg03 & msg,
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

  // member: hl_alive_03
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_alive_03: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_alive_03, out);
    out << "\n";
  }

  // member: hl_dbw_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_dbw_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_dbw_enable, out);
    out << "\n";
  }

  // member: hl_push_to_pass_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_push_to_pass_on: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_push_to_pass_on, out);
    out << "\n";
  }

  // member: hl_pdu12_activate_gnss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu12_activate_gnss: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu12_activate_gnss, out);
    out << "\n";
  }

  // member: hl_pdu12_activate_oss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu12_activate_oss: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu12_activate_oss, out);
    out << "\n";
  }

  // member: hl_ice_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_ice_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_ice_enable, out);
    out << "\n";
  }

  // member: hl_ml_supervisor_activation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_ml_supervisor_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_ml_supervisor_activation, out);
    out << "\n";
  }

  // member: hl_pdu12_activate_lidar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu12_activate_lidar: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu12_activate_lidar, out);
    out << "\n";
  }

  // member: hl_pdu12_activate_radar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu12_activate_radar: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu12_activate_radar, out);
    out << "\n";
  }

  // member: ice_start_fuel_level_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_start_fuel_level_l: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_start_fuel_level_l, out);
    out << "\n";
  }

  // member: hl_crancking_by_pass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_crancking_by_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_crancking_by_pass, out);
    out << "\n";
  }

  // member: hl_switch_off_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_switch_off_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_switch_off_ok, out);
    out << "\n";
  }

  // member: header_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_legacy:\n";
    to_block_style_yaml(msg.header_legacy, out, indentation + 2);
  }

  // member: hl_pdu1_activate_gnss_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_gnss_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_gnss_legacy, out);
    out << "\n";
  }

  // member: hl_pdu1_activate_oss_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_oss_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_oss_legacy, out);
    out << "\n";
  }

  // member: hl_pdu1_activate_lidar_r_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_lidar_r_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_lidar_r_legacy, out);
    out << "\n";
  }

  // member: hl_pdu1_activate_lidar_cn_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_lidar_cn_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_lidar_cn_legacy, out);
    out << "\n";
  }

  // member: hl_pdu1_activate_lidar_l_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_lidar_l_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_lidar_l_legacy, out);
    out << "\n";
  }

  // member: hl_pdu1_activate_radar_rear_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_radar_rear_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_radar_rear_legacy, out);
    out << "\n";
  }

  // member: hl_pdu1_activate_radar_cn_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_radar_cn_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_radar_cn_legacy, out);
    out << "\n";
  }

  // member: hl_pdu1_activate_radar_r_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_radar_r_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_radar_r_legacy, out);
    out << "\n";
  }

  // member: hl_pdu1_activate_radar_l_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pdu1_activate_radar_l_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pdu1_activate_radar_l_legacy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HLMsg03 & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::HLMsg03 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::HLMsg03 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::HLMsg03>()
{
  return "sd_can_msgs::msg::HLMsg03";
}

template<>
inline const char * name<sd_can_msgs::msg::HLMsg03>()
{
  return "sd_can_msgs/msg/HLMsg03";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::HLMsg03>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::HLMsg03>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::HLMsg03>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__TRAITS_HPP_
