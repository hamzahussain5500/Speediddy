// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/Badenia560PowertrainMisc.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/badenia560_powertrain_misc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Badenia560PowertrainMisc & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: b12_soc
  {
    out << "b12_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.b12_soc, out);
    out << ", ";
  }

  // member: b48_soc
  {
    out << "b48_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.b48_soc, out);
    out << ", ";
  }

  // member: b12_temp
  {
    out << "b12_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.b12_temp, out);
    out << ", ";
  }

  // member: b48_temp
  {
    out << "b48_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.b48_temp, out);
    out << ", ";
  }

  // member: throttle_position
  {
    out << "throttle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_position, out);
    out << ", ";
  }

  // member: engine_speed_limit
  {
    out << "engine_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed_limit, out);
    out << ", ";
  }

  // member: fuel_used_kg
  {
    out << "fuel_used_kg: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_used_kg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Badenia560PowertrainMisc & msg,
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

  // member: b12_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b12_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.b12_soc, out);
    out << "\n";
  }

  // member: b48_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b48_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.b48_soc, out);
    out << "\n";
  }

  // member: b12_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b12_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.b12_temp, out);
    out << "\n";
  }

  // member: b48_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b48_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.b48_temp, out);
    out << "\n";
  }

  // member: throttle_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_position, out);
    out << "\n";
  }

  // member: engine_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed_limit, out);
    out << "\n";
  }

  // member: fuel_used_kg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_used_kg: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_used_kg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Badenia560PowertrainMisc & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::Badenia560PowertrainMisc & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::Badenia560PowertrainMisc & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::Badenia560PowertrainMisc>()
{
  return "sd_can_msgs::msg::Badenia560PowertrainMisc";
}

template<>
inline const char * name<sd_can_msgs::msg::Badenia560PowertrainMisc>()
{
  return "sd_can_msgs/msg/Badenia560PowertrainMisc";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::Badenia560PowertrainMisc>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::Badenia560PowertrainMisc>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::Badenia560PowertrainMisc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__TRAITS_HPP_
