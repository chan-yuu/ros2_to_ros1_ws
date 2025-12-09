// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/GpsInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/gps_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::GpsInterface & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: wx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wx: ";
    value_to_yaml(msg.wx, out);
    out << "\n";
  }

  // member: wy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wy: ";
    value_to_yaml(msg.wy, out);
    out << "\n";
  }

  // member: wz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wz: ";
    value_to_yaml(msg.wz, out);
    out << "\n";
  }

  // member: ax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax: ";
    value_to_yaml(msg.ax, out);
    out << "\n";
  }

  // member: ay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay: ";
    value_to_yaml(msg.ay, out);
    out << "\n";
  }

  // member: az
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az: ";
    value_to_yaml(msg.az, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: eastvelocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eastvelocity: ";
    value_to_yaml(msg.eastvelocity, out);
    out << "\n";
  }

  // member: northvelocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "northvelocity: ";
    value_to_yaml(msg.northvelocity, out);
    out << "\n";
  }

  // member: skyvelocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skyvelocity: ";
    value_to_yaml(msg.skyvelocity, out);
    out << "\n";
  }

  // member: process_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_time: ";
    value_to_yaml(msg.process_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::GpsInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::GpsInterface>()
{
  return "car_interfaces::msg::GpsInterface";
}

template<>
inline const char * name<car_interfaces::msg::GpsInterface>()
{
  return "car_interfaces/msg/GpsInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::GpsInterface>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interfaces::msg::GpsInterface>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interfaces::msg::GpsInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__TRAITS_HPP_
