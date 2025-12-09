// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/ObuReceive.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__TRAITS_HPP_

#include "car_interfaces/msg/detail/obu_receive__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::ObuReceive & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: dis_to_stopline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dis_to_stopline: ";
    value_to_yaml(msg.dis_to_stopline, out);
    out << "\n";
  }

  // member: cutin_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cutin_flag: ";
    value_to_yaml(msg.cutin_flag, out);
    out << "\n";
  }

  // member: end_point_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_point_lat: ";
    value_to_yaml(msg.end_point_lat, out);
    out << "\n";
  }

  // member: end_point_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_point_lon: ";
    value_to_yaml(msg.end_point_lon, out);
    out << "\n";
  }

  // member: transit_point_1_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transit_point_1_lat: ";
    value_to_yaml(msg.transit_point_1_lat, out);
    out << "\n";
  }

  // member: transit_point_1_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transit_point_1_lon: ";
    value_to_yaml(msg.transit_point_1_lon, out);
    out << "\n";
  }

  // member: transit_point_2_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transit_point_2_lat: ";
    value_to_yaml(msg.transit_point_2_lat, out);
    out << "\n";
  }

  // member: transit_point_2_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transit_point_2_lon: ";
    value_to_yaml(msg.transit_point_2_lon, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::ObuReceive & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::ObuReceive>()
{
  return "car_interfaces::msg::ObuReceive";
}

template<>
inline const char * name<car_interfaces::msg::ObuReceive>()
{
  return "car_interfaces/msg/ObuReceive";
}

template<>
struct has_fixed_size<car_interfaces::msg::ObuReceive>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interfaces::msg::ObuReceive>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interfaces::msg::ObuReceive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__TRAITS_HPP_
