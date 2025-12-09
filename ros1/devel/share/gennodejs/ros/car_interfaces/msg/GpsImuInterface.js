// Auto-generated. Do not edit!

// (in-package car_interfaces.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class GpsImuInterface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.nav_flag = null;
      this.x_acc = null;
      this.y_acc = null;
      this.x_gyro = null;
      this.y_gyro = null;
      this.z_acc = null;
      this.z_gyro = null;
      this.acc = null;
      this.gps_week = null;
      this.gps_ms = null;
      this.nav_flag_g = null;
      this.header = null;
      this.gps_time = null;
      this.PosLon = null;
      this.PosLat = null;
      this.PosAlt = null;
      this.lat_g = null;
      this.lon_g = null;
      this.east_speed_g = null;
      this.north_speed_g = null;
      this.up_speed_g = null;
      this.alt_g = null;
      this.heading_g = null;
      this.VelE = null;
      this.VelN = null;
      this.VelU = null;
      this.Vel = null;
      this.AngleHeading = null;
      this.AnglePitch = null;
      this.AngleRoll = null;
      this.system_state = null;
      this.GpsNumSatsUsed = null;
      this.satellite_status = null;
      this.GpsAge = null;
      this.state = null;
      this.posX = null;
      this.posY = null;
      this.posZ = null;
      this.process_time = null;
      this.Gps_Cfault = null;
      this.x = null;
      this.y = null;
      this.z = null;
      this.pitch = null;
      this.roll = null;
      this.yaw = null;
      this.vel = null;
      this.lat = null;
      this.lon = null;
      this.state_ndt = null;
    }
    else {
      if (initObj.hasOwnProperty('nav_flag')) {
        this.nav_flag = initObj.nav_flag
      }
      else {
        this.nav_flag = '';
      }
      if (initObj.hasOwnProperty('x_acc')) {
        this.x_acc = initObj.x_acc
      }
      else {
        this.x_acc = 0.0;
      }
      if (initObj.hasOwnProperty('y_acc')) {
        this.y_acc = initObj.y_acc
      }
      else {
        this.y_acc = 0.0;
      }
      if (initObj.hasOwnProperty('x_gyro')) {
        this.x_gyro = initObj.x_gyro
      }
      else {
        this.x_gyro = 0.0;
      }
      if (initObj.hasOwnProperty('y_gyro')) {
        this.y_gyro = initObj.y_gyro
      }
      else {
        this.y_gyro = 0.0;
      }
      if (initObj.hasOwnProperty('z_acc')) {
        this.z_acc = initObj.z_acc
      }
      else {
        this.z_acc = 0.0;
      }
      if (initObj.hasOwnProperty('z_gyro')) {
        this.z_gyro = initObj.z_gyro
      }
      else {
        this.z_gyro = 0.0;
      }
      if (initObj.hasOwnProperty('acc')) {
        this.acc = initObj.acc
      }
      else {
        this.acc = 0.0;
      }
      if (initObj.hasOwnProperty('gps_week')) {
        this.gps_week = initObj.gps_week
      }
      else {
        this.gps_week = 0.0;
      }
      if (initObj.hasOwnProperty('gps_ms')) {
        this.gps_ms = initObj.gps_ms
      }
      else {
        this.gps_ms = 0.0;
      }
      if (initObj.hasOwnProperty('nav_flag_g')) {
        this.nav_flag_g = initObj.nav_flag_g
      }
      else {
        this.nav_flag_g = '';
      }
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('gps_time')) {
        this.gps_time = initObj.gps_time
      }
      else {
        this.gps_time = 0;
      }
      if (initObj.hasOwnProperty('PosLon')) {
        this.PosLon = initObj.PosLon
      }
      else {
        this.PosLon = 0.0;
      }
      if (initObj.hasOwnProperty('PosLat')) {
        this.PosLat = initObj.PosLat
      }
      else {
        this.PosLat = 0.0;
      }
      if (initObj.hasOwnProperty('PosAlt')) {
        this.PosAlt = initObj.PosAlt
      }
      else {
        this.PosAlt = 0.0;
      }
      if (initObj.hasOwnProperty('lat_g')) {
        this.lat_g = initObj.lat_g
      }
      else {
        this.lat_g = 0.0;
      }
      if (initObj.hasOwnProperty('lon_g')) {
        this.lon_g = initObj.lon_g
      }
      else {
        this.lon_g = 0.0;
      }
      if (initObj.hasOwnProperty('east_speed_g')) {
        this.east_speed_g = initObj.east_speed_g
      }
      else {
        this.east_speed_g = 0.0;
      }
      if (initObj.hasOwnProperty('north_speed_g')) {
        this.north_speed_g = initObj.north_speed_g
      }
      else {
        this.north_speed_g = 0.0;
      }
      if (initObj.hasOwnProperty('up_speed_g')) {
        this.up_speed_g = initObj.up_speed_g
      }
      else {
        this.up_speed_g = 0.0;
      }
      if (initObj.hasOwnProperty('alt_g')) {
        this.alt_g = initObj.alt_g
      }
      else {
        this.alt_g = 0.0;
      }
      if (initObj.hasOwnProperty('heading_g')) {
        this.heading_g = initObj.heading_g
      }
      else {
        this.heading_g = 0.0;
      }
      if (initObj.hasOwnProperty('VelE')) {
        this.VelE = initObj.VelE
      }
      else {
        this.VelE = 0.0;
      }
      if (initObj.hasOwnProperty('VelN')) {
        this.VelN = initObj.VelN
      }
      else {
        this.VelN = 0.0;
      }
      if (initObj.hasOwnProperty('VelU')) {
        this.VelU = initObj.VelU
      }
      else {
        this.VelU = 0.0;
      }
      if (initObj.hasOwnProperty('Vel')) {
        this.Vel = initObj.Vel
      }
      else {
        this.Vel = 0.0;
      }
      if (initObj.hasOwnProperty('AngleHeading')) {
        this.AngleHeading = initObj.AngleHeading
      }
      else {
        this.AngleHeading = 0.0;
      }
      if (initObj.hasOwnProperty('AnglePitch')) {
        this.AnglePitch = initObj.AnglePitch
      }
      else {
        this.AnglePitch = 0.0;
      }
      if (initObj.hasOwnProperty('AngleRoll')) {
        this.AngleRoll = initObj.AngleRoll
      }
      else {
        this.AngleRoll = 0.0;
      }
      if (initObj.hasOwnProperty('system_state')) {
        this.system_state = initObj.system_state
      }
      else {
        this.system_state = 0;
      }
      if (initObj.hasOwnProperty('GpsNumSatsUsed')) {
        this.GpsNumSatsUsed = initObj.GpsNumSatsUsed
      }
      else {
        this.GpsNumSatsUsed = 0;
      }
      if (initObj.hasOwnProperty('satellite_status')) {
        this.satellite_status = initObj.satellite_status
      }
      else {
        this.satellite_status = 0;
      }
      if (initObj.hasOwnProperty('GpsAge')) {
        this.GpsAge = initObj.GpsAge
      }
      else {
        this.GpsAge = 0.0;
      }
      if (initObj.hasOwnProperty('state')) {
        this.state = initObj.state
      }
      else {
        this.state = false;
      }
      if (initObj.hasOwnProperty('posX')) {
        this.posX = initObj.posX
      }
      else {
        this.posX = 0.0;
      }
      if (initObj.hasOwnProperty('posY')) {
        this.posY = initObj.posY
      }
      else {
        this.posY = 0.0;
      }
      if (initObj.hasOwnProperty('posZ')) {
        this.posZ = initObj.posZ
      }
      else {
        this.posZ = 0.0;
      }
      if (initObj.hasOwnProperty('process_time')) {
        this.process_time = initObj.process_time
      }
      else {
        this.process_time = 0.0;
      }
      if (initObj.hasOwnProperty('Gps_Cfault')) {
        this.Gps_Cfault = initObj.Gps_Cfault
      }
      else {
        this.Gps_Cfault = false;
      }
      if (initObj.hasOwnProperty('x')) {
        this.x = initObj.x
      }
      else {
        this.x = 0.0;
      }
      if (initObj.hasOwnProperty('y')) {
        this.y = initObj.y
      }
      else {
        this.y = 0.0;
      }
      if (initObj.hasOwnProperty('z')) {
        this.z = initObj.z
      }
      else {
        this.z = 0.0;
      }
      if (initObj.hasOwnProperty('pitch')) {
        this.pitch = initObj.pitch
      }
      else {
        this.pitch = 0.0;
      }
      if (initObj.hasOwnProperty('roll')) {
        this.roll = initObj.roll
      }
      else {
        this.roll = 0.0;
      }
      if (initObj.hasOwnProperty('yaw')) {
        this.yaw = initObj.yaw
      }
      else {
        this.yaw = 0.0;
      }
      if (initObj.hasOwnProperty('vel')) {
        this.vel = initObj.vel
      }
      else {
        this.vel = 0.0;
      }
      if (initObj.hasOwnProperty('lat')) {
        this.lat = initObj.lat
      }
      else {
        this.lat = 0.0;
      }
      if (initObj.hasOwnProperty('lon')) {
        this.lon = initObj.lon
      }
      else {
        this.lon = 0.0;
      }
      if (initObj.hasOwnProperty('state_ndt')) {
        this.state_ndt = initObj.state_ndt
      }
      else {
        this.state_ndt = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GpsImuInterface
    // Serialize message field [nav_flag]
    bufferOffset = _serializer.string(obj.nav_flag, buffer, bufferOffset);
    // Serialize message field [x_acc]
    bufferOffset = _serializer.float64(obj.x_acc, buffer, bufferOffset);
    // Serialize message field [y_acc]
    bufferOffset = _serializer.float64(obj.y_acc, buffer, bufferOffset);
    // Serialize message field [x_gyro]
    bufferOffset = _serializer.float64(obj.x_gyro, buffer, bufferOffset);
    // Serialize message field [y_gyro]
    bufferOffset = _serializer.float64(obj.y_gyro, buffer, bufferOffset);
    // Serialize message field [z_acc]
    bufferOffset = _serializer.float64(obj.z_acc, buffer, bufferOffset);
    // Serialize message field [z_gyro]
    bufferOffset = _serializer.float64(obj.z_gyro, buffer, bufferOffset);
    // Serialize message field [acc]
    bufferOffset = _serializer.float64(obj.acc, buffer, bufferOffset);
    // Serialize message field [gps_week]
    bufferOffset = _serializer.float64(obj.gps_week, buffer, bufferOffset);
    // Serialize message field [gps_ms]
    bufferOffset = _serializer.float64(obj.gps_ms, buffer, bufferOffset);
    // Serialize message field [nav_flag_g]
    bufferOffset = _serializer.string(obj.nav_flag_g, buffer, bufferOffset);
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [gps_time]
    bufferOffset = _serializer.int64(obj.gps_time, buffer, bufferOffset);
    // Serialize message field [PosLon]
    bufferOffset = _serializer.float64(obj.PosLon, buffer, bufferOffset);
    // Serialize message field [PosLat]
    bufferOffset = _serializer.float64(obj.PosLat, buffer, bufferOffset);
    // Serialize message field [PosAlt]
    bufferOffset = _serializer.float64(obj.PosAlt, buffer, bufferOffset);
    // Serialize message field [lat_g]
    bufferOffset = _serializer.float64(obj.lat_g, buffer, bufferOffset);
    // Serialize message field [lon_g]
    bufferOffset = _serializer.float64(obj.lon_g, buffer, bufferOffset);
    // Serialize message field [east_speed_g]
    bufferOffset = _serializer.float64(obj.east_speed_g, buffer, bufferOffset);
    // Serialize message field [north_speed_g]
    bufferOffset = _serializer.float64(obj.north_speed_g, buffer, bufferOffset);
    // Serialize message field [up_speed_g]
    bufferOffset = _serializer.float64(obj.up_speed_g, buffer, bufferOffset);
    // Serialize message field [alt_g]
    bufferOffset = _serializer.float64(obj.alt_g, buffer, bufferOffset);
    // Serialize message field [heading_g]
    bufferOffset = _serializer.float64(obj.heading_g, buffer, bufferOffset);
    // Serialize message field [VelE]
    bufferOffset = _serializer.float64(obj.VelE, buffer, bufferOffset);
    // Serialize message field [VelN]
    bufferOffset = _serializer.float64(obj.VelN, buffer, bufferOffset);
    // Serialize message field [VelU]
    bufferOffset = _serializer.float64(obj.VelU, buffer, bufferOffset);
    // Serialize message field [Vel]
    bufferOffset = _serializer.float64(obj.Vel, buffer, bufferOffset);
    // Serialize message field [AngleHeading]
    bufferOffset = _serializer.float64(obj.AngleHeading, buffer, bufferOffset);
    // Serialize message field [AnglePitch]
    bufferOffset = _serializer.float64(obj.AnglePitch, buffer, bufferOffset);
    // Serialize message field [AngleRoll]
    bufferOffset = _serializer.float64(obj.AngleRoll, buffer, bufferOffset);
    // Serialize message field [system_state]
    bufferOffset = _serializer.int32(obj.system_state, buffer, bufferOffset);
    // Serialize message field [GpsNumSatsUsed]
    bufferOffset = _serializer.int32(obj.GpsNumSatsUsed, buffer, bufferOffset);
    // Serialize message field [satellite_status]
    bufferOffset = _serializer.int32(obj.satellite_status, buffer, bufferOffset);
    // Serialize message field [GpsAge]
    bufferOffset = _serializer.float64(obj.GpsAge, buffer, bufferOffset);
    // Serialize message field [state]
    bufferOffset = _serializer.bool(obj.state, buffer, bufferOffset);
    // Serialize message field [posX]
    bufferOffset = _serializer.float64(obj.posX, buffer, bufferOffset);
    // Serialize message field [posY]
    bufferOffset = _serializer.float64(obj.posY, buffer, bufferOffset);
    // Serialize message field [posZ]
    bufferOffset = _serializer.float64(obj.posZ, buffer, bufferOffset);
    // Serialize message field [process_time]
    bufferOffset = _serializer.float64(obj.process_time, buffer, bufferOffset);
    // Serialize message field [Gps_Cfault]
    bufferOffset = _serializer.bool(obj.Gps_Cfault, buffer, bufferOffset);
    // Serialize message field [x]
    bufferOffset = _serializer.float64(obj.x, buffer, bufferOffset);
    // Serialize message field [y]
    bufferOffset = _serializer.float64(obj.y, buffer, bufferOffset);
    // Serialize message field [z]
    bufferOffset = _serializer.float64(obj.z, buffer, bufferOffset);
    // Serialize message field [pitch]
    bufferOffset = _serializer.float64(obj.pitch, buffer, bufferOffset);
    // Serialize message field [roll]
    bufferOffset = _serializer.float64(obj.roll, buffer, bufferOffset);
    // Serialize message field [yaw]
    bufferOffset = _serializer.float64(obj.yaw, buffer, bufferOffset);
    // Serialize message field [vel]
    bufferOffset = _serializer.float64(obj.vel, buffer, bufferOffset);
    // Serialize message field [lat]
    bufferOffset = _serializer.float64(obj.lat, buffer, bufferOffset);
    // Serialize message field [lon]
    bufferOffset = _serializer.float64(obj.lon, buffer, bufferOffset);
    // Serialize message field [state_ndt]
    bufferOffset = _serializer.bool(obj.state_ndt, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GpsImuInterface
    let len;
    let data = new GpsImuInterface(null);
    // Deserialize message field [nav_flag]
    data.nav_flag = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [x_acc]
    data.x_acc = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [y_acc]
    data.y_acc = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [x_gyro]
    data.x_gyro = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [y_gyro]
    data.y_gyro = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [z_acc]
    data.z_acc = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [z_gyro]
    data.z_gyro = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [acc]
    data.acc = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [gps_week]
    data.gps_week = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [gps_ms]
    data.gps_ms = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [nav_flag_g]
    data.nav_flag_g = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [gps_time]
    data.gps_time = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [PosLon]
    data.PosLon = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PosLat]
    data.PosLat = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PosAlt]
    data.PosAlt = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lat_g]
    data.lat_g = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lon_g]
    data.lon_g = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [east_speed_g]
    data.east_speed_g = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [north_speed_g]
    data.north_speed_g = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [up_speed_g]
    data.up_speed_g = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [alt_g]
    data.alt_g = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [heading_g]
    data.heading_g = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [VelE]
    data.VelE = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [VelN]
    data.VelN = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [VelU]
    data.VelU = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Vel]
    data.Vel = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngleHeading]
    data.AngleHeading = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AnglePitch]
    data.AnglePitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngleRoll]
    data.AngleRoll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [system_state]
    data.system_state = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [GpsNumSatsUsed]
    data.GpsNumSatsUsed = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [satellite_status]
    data.satellite_status = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [GpsAge]
    data.GpsAge = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [state]
    data.state = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [posX]
    data.posX = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [posY]
    data.posY = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [posZ]
    data.posZ = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [process_time]
    data.process_time = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Gps_Cfault]
    data.Gps_Cfault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [x]
    data.x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [y]
    data.y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [z]
    data.z = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [pitch]
    data.pitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [roll]
    data.roll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [yaw]
    data.yaw = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [vel]
    data.vel = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lat]
    data.lat = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lon]
    data.lon = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [state_ndt]
    data.state_ndt = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.nav_flag);
    length += _getByteLength(object.nav_flag_g);
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 351;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/GpsImuInterface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a9bc67efa4f7a3a9f25eb10a367521b4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string nav_flag #定位无效-0  单点解-1  差分定位-2  RTK固定解-4  RTK浮点解-5 递推-6
    
    float64 x_acc
    float64 y_acc
    float64 x_gyro
    float64 y_gyro
    float64 z_acc
    float64 z_gyro
    
    float64 acc
    float64 gps_week
    float64 gps_ms
    
    string nav_flag_g #无效解	0
    # #单点解	1
    # #差分解	2
    # #浮点解	5
    # #窄固定解（narrow int）	4
    # #其它固定解	7
    # #ID:0X51B gnss航向
    # float32 heading_g
    
    std_msgs/Header header       # ros时间戳
    int64  gps_time              #时间戳
    
    float64  PosLon        # 经度
    float64  PosLat         # 纬度
    float64  PosAlt         # 高度
    
    float64 lat_g
    float64 lon_g
    
    float64 east_speed_g
    float64 north_speed_g
    float64 up_speed_g
    float64 alt_g
    float64 heading_g
    
    float64  VelE         # 东向速度
    float64  VelN        # 北向速度
    float64  VelU        # 天向速度
    float64  Vel          # 车辆速度
    
    float64  AngleHeading         # 偏航角（-180-180）  #需要这个范围
    float64  AnglePitch        # 俯仰角（-90-90）
    float64  AngleRoll         # 横滚角（-180-180）
    
    int32  system_state                #惯导模式（0-初始化；1-卫导模式；2-组合导航模式；3-纯惯导模式）
    int32  GpsNumSatsUsed         #主天线使用卫星数
    int32  satellite_status              #卫星状态（0-不定位不定向；1-单点定位定向；   2-伪距差分定位定向；3-组合推算；4-RTK稳定解定位定向；5-RTK浮点解定位定向；6-单点定位不定向； 7-伪距差分定位不定向；8-RTK稳定解定位不定向；9-RTK浮点解定位不定向）
    float64  GpsAge                     #差分延时
    bool  state                      #设备状态（0-状态异常；1-状态正常）
    float64 posX                    #定位点UTM坐标x
    float64 posY                    #定位点UTM坐标y
    float64 posZ # 高程
    float64  process_time        #进程处理时间
    bool Gps_Cfault  #惯导通信故障
    
    # 带slam的相应的数据：
    float64 x
    float64 y
    float64 z
    float64 pitch
    float64 roll
    float64 yaw
    float64 vel
    float64 lat
    float64 lon
    bool state_ndt
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GpsImuInterface(null);
    if (msg.nav_flag !== undefined) {
      resolved.nav_flag = msg.nav_flag;
    }
    else {
      resolved.nav_flag = ''
    }

    if (msg.x_acc !== undefined) {
      resolved.x_acc = msg.x_acc;
    }
    else {
      resolved.x_acc = 0.0
    }

    if (msg.y_acc !== undefined) {
      resolved.y_acc = msg.y_acc;
    }
    else {
      resolved.y_acc = 0.0
    }

    if (msg.x_gyro !== undefined) {
      resolved.x_gyro = msg.x_gyro;
    }
    else {
      resolved.x_gyro = 0.0
    }

    if (msg.y_gyro !== undefined) {
      resolved.y_gyro = msg.y_gyro;
    }
    else {
      resolved.y_gyro = 0.0
    }

    if (msg.z_acc !== undefined) {
      resolved.z_acc = msg.z_acc;
    }
    else {
      resolved.z_acc = 0.0
    }

    if (msg.z_gyro !== undefined) {
      resolved.z_gyro = msg.z_gyro;
    }
    else {
      resolved.z_gyro = 0.0
    }

    if (msg.acc !== undefined) {
      resolved.acc = msg.acc;
    }
    else {
      resolved.acc = 0.0
    }

    if (msg.gps_week !== undefined) {
      resolved.gps_week = msg.gps_week;
    }
    else {
      resolved.gps_week = 0.0
    }

    if (msg.gps_ms !== undefined) {
      resolved.gps_ms = msg.gps_ms;
    }
    else {
      resolved.gps_ms = 0.0
    }

    if (msg.nav_flag_g !== undefined) {
      resolved.nav_flag_g = msg.nav_flag_g;
    }
    else {
      resolved.nav_flag_g = ''
    }

    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.gps_time !== undefined) {
      resolved.gps_time = msg.gps_time;
    }
    else {
      resolved.gps_time = 0
    }

    if (msg.PosLon !== undefined) {
      resolved.PosLon = msg.PosLon;
    }
    else {
      resolved.PosLon = 0.0
    }

    if (msg.PosLat !== undefined) {
      resolved.PosLat = msg.PosLat;
    }
    else {
      resolved.PosLat = 0.0
    }

    if (msg.PosAlt !== undefined) {
      resolved.PosAlt = msg.PosAlt;
    }
    else {
      resolved.PosAlt = 0.0
    }

    if (msg.lat_g !== undefined) {
      resolved.lat_g = msg.lat_g;
    }
    else {
      resolved.lat_g = 0.0
    }

    if (msg.lon_g !== undefined) {
      resolved.lon_g = msg.lon_g;
    }
    else {
      resolved.lon_g = 0.0
    }

    if (msg.east_speed_g !== undefined) {
      resolved.east_speed_g = msg.east_speed_g;
    }
    else {
      resolved.east_speed_g = 0.0
    }

    if (msg.north_speed_g !== undefined) {
      resolved.north_speed_g = msg.north_speed_g;
    }
    else {
      resolved.north_speed_g = 0.0
    }

    if (msg.up_speed_g !== undefined) {
      resolved.up_speed_g = msg.up_speed_g;
    }
    else {
      resolved.up_speed_g = 0.0
    }

    if (msg.alt_g !== undefined) {
      resolved.alt_g = msg.alt_g;
    }
    else {
      resolved.alt_g = 0.0
    }

    if (msg.heading_g !== undefined) {
      resolved.heading_g = msg.heading_g;
    }
    else {
      resolved.heading_g = 0.0
    }

    if (msg.VelE !== undefined) {
      resolved.VelE = msg.VelE;
    }
    else {
      resolved.VelE = 0.0
    }

    if (msg.VelN !== undefined) {
      resolved.VelN = msg.VelN;
    }
    else {
      resolved.VelN = 0.0
    }

    if (msg.VelU !== undefined) {
      resolved.VelU = msg.VelU;
    }
    else {
      resolved.VelU = 0.0
    }

    if (msg.Vel !== undefined) {
      resolved.Vel = msg.Vel;
    }
    else {
      resolved.Vel = 0.0
    }

    if (msg.AngleHeading !== undefined) {
      resolved.AngleHeading = msg.AngleHeading;
    }
    else {
      resolved.AngleHeading = 0.0
    }

    if (msg.AnglePitch !== undefined) {
      resolved.AnglePitch = msg.AnglePitch;
    }
    else {
      resolved.AnglePitch = 0.0
    }

    if (msg.AngleRoll !== undefined) {
      resolved.AngleRoll = msg.AngleRoll;
    }
    else {
      resolved.AngleRoll = 0.0
    }

    if (msg.system_state !== undefined) {
      resolved.system_state = msg.system_state;
    }
    else {
      resolved.system_state = 0
    }

    if (msg.GpsNumSatsUsed !== undefined) {
      resolved.GpsNumSatsUsed = msg.GpsNumSatsUsed;
    }
    else {
      resolved.GpsNumSatsUsed = 0
    }

    if (msg.satellite_status !== undefined) {
      resolved.satellite_status = msg.satellite_status;
    }
    else {
      resolved.satellite_status = 0
    }

    if (msg.GpsAge !== undefined) {
      resolved.GpsAge = msg.GpsAge;
    }
    else {
      resolved.GpsAge = 0.0
    }

    if (msg.state !== undefined) {
      resolved.state = msg.state;
    }
    else {
      resolved.state = false
    }

    if (msg.posX !== undefined) {
      resolved.posX = msg.posX;
    }
    else {
      resolved.posX = 0.0
    }

    if (msg.posY !== undefined) {
      resolved.posY = msg.posY;
    }
    else {
      resolved.posY = 0.0
    }

    if (msg.posZ !== undefined) {
      resolved.posZ = msg.posZ;
    }
    else {
      resolved.posZ = 0.0
    }

    if (msg.process_time !== undefined) {
      resolved.process_time = msg.process_time;
    }
    else {
      resolved.process_time = 0.0
    }

    if (msg.Gps_Cfault !== undefined) {
      resolved.Gps_Cfault = msg.Gps_Cfault;
    }
    else {
      resolved.Gps_Cfault = false
    }

    if (msg.x !== undefined) {
      resolved.x = msg.x;
    }
    else {
      resolved.x = 0.0
    }

    if (msg.y !== undefined) {
      resolved.y = msg.y;
    }
    else {
      resolved.y = 0.0
    }

    if (msg.z !== undefined) {
      resolved.z = msg.z;
    }
    else {
      resolved.z = 0.0
    }

    if (msg.pitch !== undefined) {
      resolved.pitch = msg.pitch;
    }
    else {
      resolved.pitch = 0.0
    }

    if (msg.roll !== undefined) {
      resolved.roll = msg.roll;
    }
    else {
      resolved.roll = 0.0
    }

    if (msg.yaw !== undefined) {
      resolved.yaw = msg.yaw;
    }
    else {
      resolved.yaw = 0.0
    }

    if (msg.vel !== undefined) {
      resolved.vel = msg.vel;
    }
    else {
      resolved.vel = 0.0
    }

    if (msg.lat !== undefined) {
      resolved.lat = msg.lat;
    }
    else {
      resolved.lat = 0.0
    }

    if (msg.lon !== undefined) {
      resolved.lon = msg.lon;
    }
    else {
      resolved.lon = 0.0
    }

    if (msg.state_ndt !== undefined) {
      resolved.state_ndt = msg.state_ndt;
    }
    else {
      resolved.state_ndt = false
    }

    return resolved;
    }
};

module.exports = GpsImuInterface;
