// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/MatchMapInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/match_map_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::MatchMapInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: special_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "special_road: ";
    value_to_yaml(msg.special_road, out);
    out << "\n";
  }

  // member: stopline_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stopline_longitude: ";
    value_to_yaml(msg.stopline_longitude, out);
    out << "\n";
  }

  // member: stopline_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stopline_latitude: ";
    value_to_yaml(msg.stopline_latitude, out);
    out << "\n";
  }

  // member: cross
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross: ";
    value_to_yaml(msg.cross, out);
    out << "\n";
  }

  // member: light_recognition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_recognition: ";
    value_to_yaml(msg.light_recognition, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::MatchMapInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::MatchMapInterface>()
{
  return "car_interfaces::msg::MatchMapInterface";
}

template<>
inline const char * name<car_interfaces::msg::MatchMapInterface>()
{
  return "car_interfaces/msg/MatchMapInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::MatchMapInterface>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interfaces::msg::MatchMapInterface>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interfaces::msg::MatchMapInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__TRAITS_HPP_
