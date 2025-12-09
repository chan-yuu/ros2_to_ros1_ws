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

class GpsImuRequisiteInterface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.gps_time = null;
      this.PosLon = null;
      this.PosLat = null;
      this.PosAlt = null;
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
    }
    else {
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
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GpsImuRequisiteInterface
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
    bufferOffset = _serializer.float32(obj.process_time, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GpsImuRequisiteInterface
    let len;
    let data = new GpsImuRequisiteInterface(null);
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
    data.process_time = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 137;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/GpsImuRequisiteInterface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3baa1bde7021901f9f6bda65e20ca1be';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header       # ros时间戳
    int64  gps_time                      #时间戳
    float64  PosLon        # 经度
    float64  PosLat         # 纬度
    float64  PosAlt         # 高度
    float64  VelE         # 东向速度
    float64  VelN        # 北向速度
    float64  VelU        # 天向速度
    float64  Vel          # 车辆速度
    
    float64  AngleHeading         # 偏航角（-180-180）
    float64  AnglePitch        # 俯仰角（-90-90）
    float64  AngleRoll         # 横滚角（-180-180）
    
    int32  system_state                #惯导模式（0-初始化；1-卫导模式；2-组合导航模式；3-纯惯导模式）
    int32  GpsNumSatsUsed         #主天线使用卫星数
    int32  satellite_status              #卫星状态（0-不定位不定向；1-单点定位定向；   2-伪距差分定位定向；3-组合推算；4-RTK稳定解定位定向；5-RTK浮点解定位定向；6-单点定位不定向； 7-伪距差分定位不定向；8-RTK稳定解定位不定向；9-RTK浮点解定位不定向）
    float64  GpsAge                     #差分延时
    bool  state                              #设备状态（0-状态异常；1-状态正常）
    float64 posX                           #定位点UTM坐标x
    float64 posY                           #定位点UTM坐标y
    float64 posZ                           #定位点UTM坐标z
    float32  process_time    # 进程处理时间
    
    
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
    const resolved = new GpsImuRequisiteInterface(null);
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

    return resolved;
    }
};

module.exports = GpsImuRequisiteInterface;
