// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/FusionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/fusion_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_FusionInterface_process_time
{
public:
  explicit Init_FusionInterface_process_time(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::FusionInterface process_time(::car_interfaces::msg::FusionInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_error
{
public:
  explicit Init_FusionInterface_error(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_process_time error(::car_interfaces::msg::FusionInterface::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_FusionInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_state
{
public:
  explicit Init_FusionInterface_state(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_error state(::car_interfaces::msg::FusionInterface::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_FusionInterface_error(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_stop_button
{
public:
  explicit Init_FusionInterface_stop_button(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_state stop_button(::car_interfaces::msg::FusionInterface::_stop_button_type arg)
  {
    msg_.stop_button = std::move(arg);
    return Init_FusionInterface_state(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_start_button
{
public:
  explicit Init_FusionInterface_start_button(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_stop_button start_button(::car_interfaces::msg::FusionInterface::_start_button_type arg)
  {
    msg_.start_button = std::move(arg);
    return Init_FusionInterface_stop_button(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_speaker
{
public:
  explicit Init_FusionInterface_speaker(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_start_button speaker(::car_interfaces::msg::FusionInterface::_speaker_type arg)
  {
    msg_.speaker = std::move(arg);
    return Init_FusionInterface_start_button(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_reversing_light
{
public:
  explicit Init_FusionInterface_reversing_light(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_speaker reversing_light(::car_interfaces::msg::FusionInterface::_reversing_light_type arg)
  {
    msg_.reversing_light = std::move(arg);
    return Init_FusionInterface_speaker(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_right_light
{
public:
  explicit Init_FusionInterface_right_light(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_reversing_light right_light(::car_interfaces::msg::FusionInterface::_right_light_type arg)
  {
    msg_.right_light = std::move(arg);
    return Init_FusionInterface_reversing_light(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_left_light
{
public:
  explicit Init_FusionInterface_left_light(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_right_light left_light(::car_interfaces::msg::FusionInterface::_left_light_type arg)
  {
    msg_.left_light = std::move(arg);
    return Init_FusionInterface_right_light(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_braking_percentage
{
public:
  explicit Init_FusionInterface_braking_percentage(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_left_light braking_percentage(::car_interfaces::msg::FusionInterface::_braking_percentage_type arg)
  {
    msg_.braking_percentage = std::move(arg);
    return Init_FusionInterface_left_light(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_throttle_percentage
{
public:
  explicit Init_FusionInterface_throttle_percentage(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_braking_percentage throttle_percentage(::car_interfaces::msg::FusionInterface::_throttle_percentage_type arg)
  {
    msg_.throttle_percentage = std::move(arg);
    return Init_FusionInterface_braking_percentage(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_car_run_mode
{
public:
  explicit Init_FusionInterface_car_run_mode(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_throttle_percentage car_run_mode(::car_interfaces::msg::FusionInterface::_car_run_mode_type arg)
  {
    msg_.car_run_mode = std::move(arg);
    return Init_FusionInterface_throttle_percentage(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_batterydischargecur
{
public:
  explicit Init_FusionInterface_batterydischargecur(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_car_run_mode batterydischargecur(::car_interfaces::msg::FusionInterface::_batterydischargecur_type arg)
  {
    msg_.batterydischargecur = std::move(arg);
    return Init_FusionInterface_car_run_mode(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_batteryvol
{
public:
  explicit Init_FusionInterface_batteryvol(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_batterydischargecur batteryvol(::car_interfaces::msg::FusionInterface::_batteryvol_type arg)
  {
    msg_.batteryvol = std::move(arg);
    return Init_FusionInterface_batterydischargecur(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_soc
{
public:
  explicit Init_FusionInterface_soc(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_batteryvol soc(::car_interfaces::msg::FusionInterface::_soc_type arg)
  {
    msg_.soc = std::move(arg);
    return Init_FusionInterface_batteryvol(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_parkingstate
{
public:
  explicit Init_FusionInterface_parkingstate(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_soc parkingstate(::car_interfaces::msg::FusionInterface::_parkingstate_type arg)
  {
    msg_.parkingstate = std::move(arg);
    return Init_FusionInterface_soc(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_braketq
{
public:
  explicit Init_FusionInterface_braketq(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_parkingstate braketq(::car_interfaces::msg::FusionInterface::_braketq_type arg)
  {
    msg_.braketq = std::move(arg);
    return Init_FusionInterface_parkingstate(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_gearpos
{
public:
  explicit Init_FusionInterface_gearpos(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_braketq gearpos(::car_interfaces::msg::FusionInterface::_gearpos_type arg)
  {
    msg_.gearpos = std::move(arg);
    return Init_FusionInterface_braketq(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_steerangle
{
public:
  explicit Init_FusionInterface_steerangle(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_gearpos steerangle(::car_interfaces::msg::FusionInterface::_steerangle_type arg)
  {
    msg_.steerangle = std::move(arg);
    return Init_FusionInterface_gearpos(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_carspeed
{
public:
  explicit Init_FusionInterface_carspeed(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_steerangle carspeed(::car_interfaces::msg::FusionInterface::_carspeed_type arg)
  {
    msg_.carspeed = std::move(arg);
    return Init_FusionInterface_steerangle(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_skyvelocity
{
public:
  explicit Init_FusionInterface_skyvelocity(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_carspeed skyvelocity(::car_interfaces::msg::FusionInterface::_skyvelocity_type arg)
  {
    msg_.skyvelocity = std::move(arg);
    return Init_FusionInterface_carspeed(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_northvelocity
{
public:
  explicit Init_FusionInterface_northvelocity(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_skyvelocity northvelocity(::car_interfaces::msg::FusionInterface::_northvelocity_type arg)
  {
    msg_.northvelocity = std::move(arg);
    return Init_FusionInterface_skyvelocity(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_eastvelocity
{
public:
  explicit Init_FusionInterface_eastvelocity(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_northvelocity eastvelocity(::car_interfaces::msg::FusionInterface::_eastvelocity_type arg)
  {
    msg_.eastvelocity = std::move(arg);
    return Init_FusionInterface_northvelocity(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_height
{
public:
  explicit Init_FusionInterface_height(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_eastvelocity height(::car_interfaces::msg::FusionInterface::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_FusionInterface_eastvelocity(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_latitude
{
public:
  explicit Init_FusionInterface_latitude(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_height latitude(::car_interfaces::msg::FusionInterface::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_FusionInterface_height(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_longitude
{
public:
  explicit Init_FusionInterface_longitude(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_latitude longitude(::car_interfaces::msg::FusionInterface::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_FusionInterface_latitude(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_az
{
public:
  explicit Init_FusionInterface_az(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_longitude az(::car_interfaces::msg::FusionInterface::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_FusionInterface_longitude(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_ay
{
public:
  explicit Init_FusionInterface_ay(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_az ay(::car_interfaces::msg::FusionInterface::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_FusionInterface_az(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_ax
{
public:
  explicit Init_FusionInterface_ax(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_ay ax(::car_interfaces::msg::FusionInterface::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_FusionInterface_ay(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_wz
{
public:
  explicit Init_FusionInterface_wz(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_ax wz(::car_interfaces::msg::FusionInterface::_wz_type arg)
  {
    msg_.wz = std::move(arg);
    return Init_FusionInterface_ax(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_wy
{
public:
  explicit Init_FusionInterface_wy(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_wz wy(::car_interfaces::msg::FusionInterface::_wy_type arg)
  {
    msg_.wy = std::move(arg);
    return Init_FusionInterface_wz(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_wx
{
public:
  explicit Init_FusionInterface_wx(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_wy wx(::car_interfaces::msg::FusionInterface::_wx_type arg)
  {
    msg_.wx = std::move(arg);
    return Init_FusionInterface_wy(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_roll
{
public:
  explicit Init_FusionInterface_roll(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_wx roll(::car_interfaces::msg::FusionInterface::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_FusionInterface_wx(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_pitch
{
public:
  explicit Init_FusionInterface_pitch(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_roll pitch(::car_interfaces::msg::FusionInterface::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_FusionInterface_roll(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_yaw
{
public:
  explicit Init_FusionInterface_yaw(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_pitch yaw(::car_interfaces::msg::FusionInterface::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_FusionInterface_pitch(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_obstacledata
{
public:
  explicit Init_FusionInterface_obstacledata(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_yaw obstacledata(::car_interfaces::msg::FusionInterface::_obstacledata_type arg)
  {
    msg_.obstacledata = std::move(arg);
    return Init_FusionInterface_yaw(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_lightdata
{
public:
  explicit Init_FusionInterface_lightdata(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_obstacledata lightdata(::car_interfaces::msg::FusionInterface::_lightdata_type arg)
  {
    msg_.lightdata = std::move(arg);
    return Init_FusionInterface_obstacledata(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_signdata
{
public:
  explicit Init_FusionInterface_signdata(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_lightdata signdata(::car_interfaces::msg::FusionInterface::_signdata_type arg)
  {
    msg_.signdata = std::move(arg);
    return Init_FusionInterface_lightdata(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_signnumber
{
public:
  explicit Init_FusionInterface_signnumber(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_signdata signnumber(::car_interfaces::msg::FusionInterface::_signnumber_type arg)
  {
    msg_.signnumber = std::move(arg);
    return Init_FusionInterface_signdata(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_centeroffset
{
public:
  explicit Init_FusionInterface_centeroffset(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_signnumber centeroffset(::car_interfaces::msg::FusionInterface::_centeroffset_type arg)
  {
    msg_.centeroffset = std::move(arg);
    return Init_FusionInterface_signnumber(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_carheight
{
public:
  explicit Init_FusionInterface_carheight(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_centeroffset carheight(::car_interfaces::msg::FusionInterface::_carheight_type arg)
  {
    msg_.carheight = std::move(arg);
    return Init_FusionInterface_centeroffset(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_carwidth
{
public:
  explicit Init_FusionInterface_carwidth(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_carheight carwidth(::car_interfaces::msg::FusionInterface::_carwidth_type arg)
  {
    msg_.carwidth = std::move(arg);
    return Init_FusionInterface_carheight(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_carlength
{
public:
  explicit Init_FusionInterface_carlength(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_carwidth carlength(::car_interfaces::msg::FusionInterface::_carlength_type arg)
  {
    msg_.carlength = std::move(arg);
    return Init_FusionInterface_carwidth(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_id
{
public:
  explicit Init_FusionInterface_id(::car_interfaces::msg::FusionInterface & msg)
  : msg_(msg)
  {}
  Init_FusionInterface_carlength id(::car_interfaces::msg::FusionInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FusionInterface_carlength(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

class Init_FusionInterface_timestamp
{
public:
  Init_FusionInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusionInterface_id timestamp(::car_interfaces::msg::FusionInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FusionInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::FusionInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::FusionInterface>()
{
  return car_interfaces::msg::builder::Init_FusionInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__BUILDER_HPP_
