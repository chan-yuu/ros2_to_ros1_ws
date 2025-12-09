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

class GpsImuAddInterface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.gps_time = null;
      this.AngRateRawX = null;
      this.AngRateRawY = null;
      this.AngRateRawZ = null;
      this.AccelRawX = null;
      this.AccelRawY = null;
      this.AccelRawZ = null;
      this.PosESigma = null;
      this.PosNSigma = null;
      this.PosUSigma = null;
      this.VelESigma = null;
      this.VelNSigma = null;
      this.VelUSigma = null;
      this.VelSigma = null;
      this.AccelX = null;
      this.AccelY = null;
      this.AccelZ = null;
      this.AngleHeadingSigma = null;
      this.AnglePitchSigma = null;
      this.AngleRollSigma = null;
      this.AngRateX = null;
      this.AngRateY = null;
      this.AngRateZ = null;
      this.GpsNumSats2Used = null;
      this.GpsNumSats = null;
      this.GpsNumSats2 = null;
      this.Rear_posX = null;
      this.Rear_posY = null;
      this.Rear_posZ = null;
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
      if (initObj.hasOwnProperty('AngRateRawX')) {
        this.AngRateRawX = initObj.AngRateRawX
      }
      else {
        this.AngRateRawX = 0.0;
      }
      if (initObj.hasOwnProperty('AngRateRawY')) {
        this.AngRateRawY = initObj.AngRateRawY
      }
      else {
        this.AngRateRawY = 0.0;
      }
      if (initObj.hasOwnProperty('AngRateRawZ')) {
        this.AngRateRawZ = initObj.AngRateRawZ
      }
      else {
        this.AngRateRawZ = 0.0;
      }
      if (initObj.hasOwnProperty('AccelRawX')) {
        this.AccelRawX = initObj.AccelRawX
      }
      else {
        this.AccelRawX = 0.0;
      }
      if (initObj.hasOwnProperty('AccelRawY')) {
        this.AccelRawY = initObj.AccelRawY
      }
      else {
        this.AccelRawY = 0.0;
      }
      if (initObj.hasOwnProperty('AccelRawZ')) {
        this.AccelRawZ = initObj.AccelRawZ
      }
      else {
        this.AccelRawZ = 0.0;
      }
      if (initObj.hasOwnProperty('PosESigma')) {
        this.PosESigma = initObj.PosESigma
      }
      else {
        this.PosESigma = 0.0;
      }
      if (initObj.hasOwnProperty('PosNSigma')) {
        this.PosNSigma = initObj.PosNSigma
      }
      else {
        this.PosNSigma = 0.0;
      }
      if (initObj.hasOwnProperty('PosUSigma')) {
        this.PosUSigma = initObj.PosUSigma
      }
      else {
        this.PosUSigma = 0.0;
      }
      if (initObj.hasOwnProperty('VelESigma')) {
        this.VelESigma = initObj.VelESigma
      }
      else {
        this.VelESigma = 0.0;
      }
      if (initObj.hasOwnProperty('VelNSigma')) {
        this.VelNSigma = initObj.VelNSigma
      }
      else {
        this.VelNSigma = 0.0;
      }
      if (initObj.hasOwnProperty('VelUSigma')) {
        this.VelUSigma = initObj.VelUSigma
      }
      else {
        this.VelUSigma = 0.0;
      }
      if (initObj.hasOwnProperty('VelSigma')) {
        this.VelSigma = initObj.VelSigma
      }
      else {
        this.VelSigma = 0.0;
      }
      if (initObj.hasOwnProperty('AccelX')) {
        this.AccelX = initObj.AccelX
      }
      else {
        this.AccelX = 0.0;
      }
      if (initObj.hasOwnProperty('AccelY')) {
        this.AccelY = initObj.AccelY
      }
      else {
        this.AccelY = 0.0;
      }
      if (initObj.hasOwnProperty('AccelZ')) {
        this.AccelZ = initObj.AccelZ
      }
      else {
        this.AccelZ = 0.0;
      }
      if (initObj.hasOwnProperty('AngleHeadingSigma')) {
        this.AngleHeadingSigma = initObj.AngleHeadingSigma
      }
      else {
        this.AngleHeadingSigma = 0.0;
      }
      if (initObj.hasOwnProperty('AnglePitchSigma')) {
        this.AnglePitchSigma = initObj.AnglePitchSigma
      }
      else {
        this.AnglePitchSigma = 0.0;
      }
      if (initObj.hasOwnProperty('AngleRollSigma')) {
        this.AngleRollSigma = initObj.AngleRollSigma
      }
      else {
        this.AngleRollSigma = 0.0;
      }
      if (initObj.hasOwnProperty('AngRateX')) {
        this.AngRateX = initObj.AngRateX
      }
      else {
        this.AngRateX = 0.0;
      }
      if (initObj.hasOwnProperty('AngRateY')) {
        this.AngRateY = initObj.AngRateY
      }
      else {
        this.AngRateY = 0.0;
      }
      if (initObj.hasOwnProperty('AngRateZ')) {
        this.AngRateZ = initObj.AngRateZ
      }
      else {
        this.AngRateZ = 0.0;
      }
      if (initObj.hasOwnProperty('GpsNumSats2Used')) {
        this.GpsNumSats2Used = initObj.GpsNumSats2Used
      }
      else {
        this.GpsNumSats2Used = 0;
      }
      if (initObj.hasOwnProperty('GpsNumSats')) {
        this.GpsNumSats = initObj.GpsNumSats
      }
      else {
        this.GpsNumSats = 0;
      }
      if (initObj.hasOwnProperty('GpsNumSats2')) {
        this.GpsNumSats2 = initObj.GpsNumSats2
      }
      else {
        this.GpsNumSats2 = 0;
      }
      if (initObj.hasOwnProperty('Rear_posX')) {
        this.Rear_posX = initObj.Rear_posX
      }
      else {
        this.Rear_posX = 0.0;
      }
      if (initObj.hasOwnProperty('Rear_posY')) {
        this.Rear_posY = initObj.Rear_posY
      }
      else {
        this.Rear_posY = 0.0;
      }
      if (initObj.hasOwnProperty('Rear_posZ')) {
        this.Rear_posZ = initObj.Rear_posZ
      }
      else {
        this.Rear_posZ = 0.0;
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
    // Serializes a message object of type GpsImuAddInterface
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [gps_time]
    bufferOffset = _serializer.int64(obj.gps_time, buffer, bufferOffset);
    // Serialize message field [AngRateRawX]
    bufferOffset = _serializer.float64(obj.AngRateRawX, buffer, bufferOffset);
    // Serialize message field [AngRateRawY]
    bufferOffset = _serializer.float64(obj.AngRateRawY, buffer, bufferOffset);
    // Serialize message field [AngRateRawZ]
    bufferOffset = _serializer.float64(obj.AngRateRawZ, buffer, bufferOffset);
    // Serialize message field [AccelRawX]
    bufferOffset = _serializer.float64(obj.AccelRawX, buffer, bufferOffset);
    // Serialize message field [AccelRawY]
    bufferOffset = _serializer.float64(obj.AccelRawY, buffer, bufferOffset);
    // Serialize message field [AccelRawZ]
    bufferOffset = _serializer.float64(obj.AccelRawZ, buffer, bufferOffset);
    // Serialize message field [PosESigma]
    bufferOffset = _serializer.float64(obj.PosESigma, buffer, bufferOffset);
    // Serialize message field [PosNSigma]
    bufferOffset = _serializer.float64(obj.PosNSigma, buffer, bufferOffset);
    // Serialize message field [PosUSigma]
    bufferOffset = _serializer.float64(obj.PosUSigma, buffer, bufferOffset);
    // Serialize message field [VelESigma]
    bufferOffset = _serializer.float64(obj.VelESigma, buffer, bufferOffset);
    // Serialize message field [VelNSigma]
    bufferOffset = _serializer.float64(obj.VelNSigma, buffer, bufferOffset);
    // Serialize message field [VelUSigma]
    bufferOffset = _serializer.float64(obj.VelUSigma, buffer, bufferOffset);
    // Serialize message field [VelSigma]
    bufferOffset = _serializer.float64(obj.VelSigma, buffer, bufferOffset);
    // Serialize message field [AccelX]
    bufferOffset = _serializer.float64(obj.AccelX, buffer, bufferOffset);
    // Serialize message field [AccelY]
    bufferOffset = _serializer.float64(obj.AccelY, buffer, bufferOffset);
    // Serialize message field [AccelZ]
    bufferOffset = _serializer.float64(obj.AccelZ, buffer, bufferOffset);
    // Serialize message field [AngleHeadingSigma]
    bufferOffset = _serializer.float64(obj.AngleHeadingSigma, buffer, bufferOffset);
    // Serialize message field [AnglePitchSigma]
    bufferOffset = _serializer.float64(obj.AnglePitchSigma, buffer, bufferOffset);
    // Serialize message field [AngleRollSigma]
    bufferOffset = _serializer.float64(obj.AngleRollSigma, buffer, bufferOffset);
    // Serialize message field [AngRateX]
    bufferOffset = _serializer.float64(obj.AngRateX, buffer, bufferOffset);
    // Serialize message field [AngRateY]
    bufferOffset = _serializer.float64(obj.AngRateY, buffer, bufferOffset);
    // Serialize message field [AngRateZ]
    bufferOffset = _serializer.float64(obj.AngRateZ, buffer, bufferOffset);
    // Serialize message field [GpsNumSats2Used]
    bufferOffset = _serializer.int32(obj.GpsNumSats2Used, buffer, bufferOffset);
    // Serialize message field [GpsNumSats]
    bufferOffset = _serializer.int32(obj.GpsNumSats, buffer, bufferOffset);
    // Serialize message field [GpsNumSats2]
    bufferOffset = _serializer.int32(obj.GpsNumSats2, buffer, bufferOffset);
    // Serialize message field [Rear_posX]
    bufferOffset = _serializer.float64(obj.Rear_posX, buffer, bufferOffset);
    // Serialize message field [Rear_posY]
    bufferOffset = _serializer.float64(obj.Rear_posY, buffer, bufferOffset);
    // Serialize message field [Rear_posZ]
    bufferOffset = _serializer.float64(obj.Rear_posZ, buffer, bufferOffset);
    // Serialize message field [process_time]
    bufferOffset = _serializer.float32(obj.process_time, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GpsImuAddInterface
    let len;
    let data = new GpsImuAddInterface(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [gps_time]
    data.gps_time = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [AngRateRawX]
    data.AngRateRawX = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngRateRawY]
    data.AngRateRawY = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngRateRawZ]
    data.AngRateRawZ = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AccelRawX]
    data.AccelRawX = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AccelRawY]
    data.AccelRawY = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AccelRawZ]
    data.AccelRawZ = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PosESigma]
    data.PosESigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PosNSigma]
    data.PosNSigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PosUSigma]
    data.PosUSigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [VelESigma]
    data.VelESigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [VelNSigma]
    data.VelNSigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [VelUSigma]
    data.VelUSigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [VelSigma]
    data.VelSigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AccelX]
    data.AccelX = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AccelY]
    data.AccelY = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AccelZ]
    data.AccelZ = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngleHeadingSigma]
    data.AngleHeadingSigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AnglePitchSigma]
    data.AnglePitchSigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngleRollSigma]
    data.AngleRollSigma = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngRateX]
    data.AngRateX = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngRateY]
    data.AngRateY = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AngRateZ]
    data.AngRateZ = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [GpsNumSats2Used]
    data.GpsNumSats2Used = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [GpsNumSats]
    data.GpsNumSats = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [GpsNumSats2]
    data.GpsNumSats2 = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Rear_posX]
    data.Rear_posX = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Rear_posY]
    data.Rear_posY = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Rear_posZ]
    data.Rear_posZ = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [process_time]
    data.process_time = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 224;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/GpsImuAddInterface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ccdf9c1baf49a9162649abaf0da4c464';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header       # ros时间戳
    int64  gps_time              # 时间戳
    float64  AngRateRawX         # 角速度x
    float64  AngRateRawY         # 角速度y
    float64  AngRateRawZ         # 角速度z
    float64  AccelRawX             # x轴加速度
    float64  AccelRawY             # y轴加速度
    float64  AccelRawZ             # z轴加速度
    float64 PosESigma           #东向位置标准差
    float64 PosNSigma          #北向位置标准差
    float64 PosUSigma          #天向位置标准差
    float64  VelESigma         # 东向速度标准差
    float64  VelNSigma        # 北向速度标准差
    float64  VelUSigma        # 天向速度标准差
    float64  VelSigma          # 车辆速度标准差
    float64  AccelX         # 车辆坐标系x轴加速度
    float64  AccelY         # 车辆坐标系y轴加速度
    float64  AccelZ         # 车辆坐标系z轴加速度
    float64  AngleHeadingSigma         # 偏航角标准差
    float64  AnglePitchSigma        # 俯仰角标准差
    float64  AngleRollSigma         # 横滚角标准差
    float64  AngRateX                  # 车辆坐标系x轴角速度
    float64  AngRateY                  # 车辆坐标系y轴角速度
    float64  AngRateZ                  # 车辆坐标系z轴角速度
    int32  GpsNumSats2Used      #辅天线使用卫星数
    int32  GpsNumSats                #主天线搜星数
    int32  GpsNumSats2              #副天线搜星数
    float64 Rear_posX                  #后轴中心点UTM坐标x
    float64 Rear_posY                  #后轴中心点UTM坐标y
    float64 Rear_posZ                  #后轴中心点UTM坐标z
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
    const resolved = new GpsImuAddInterface(null);
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

    if (msg.AngRateRawX !== undefined) {
      resolved.AngRateRawX = msg.AngRateRawX;
    }
    else {
      resolved.AngRateRawX = 0.0
    }

    if (msg.AngRateRawY !== undefined) {
      resolved.AngRateRawY = msg.AngRateRawY;
    }
    else {
      resolved.AngRateRawY = 0.0
    }

    if (msg.AngRateRawZ !== undefined) {
      resolved.AngRateRawZ = msg.AngRateRawZ;
    }
    else {
      resolved.AngRateRawZ = 0.0
    }

    if (msg.AccelRawX !== undefined) {
      resolved.AccelRawX = msg.AccelRawX;
    }
    else {
      resolved.AccelRawX = 0.0
    }

    if (msg.AccelRawY !== undefined) {
      resolved.AccelRawY = msg.AccelRawY;
    }
    else {
      resolved.AccelRawY = 0.0
    }

    if (msg.AccelRawZ !== undefined) {
      resolved.AccelRawZ = msg.AccelRawZ;
    }
    else {
      resolved.AccelRawZ = 0.0
    }

    if (msg.PosESigma !== undefined) {
      resolved.PosESigma = msg.PosESigma;
    }
    else {
      resolved.PosESigma = 0.0
    }

    if (msg.PosNSigma !== undefined) {
      resolved.PosNSigma = msg.PosNSigma;
    }
    else {
      resolved.PosNSigma = 0.0
    }

    if (msg.PosUSigma !== undefined) {
      resolved.PosUSigma = msg.PosUSigma;
    }
    else {
      resolved.PosUSigma = 0.0
    }

    if (msg.VelESigma !== undefined) {
      resolved.VelESigma = msg.VelESigma;
    }
    else {
      resolved.VelESigma = 0.0
    }

    if (msg.VelNSigma !== undefined) {
      resolved.VelNSigma = msg.VelNSigma;
    }
    else {
      resolved.VelNSigma = 0.0
    }

    if (msg.VelUSigma !== undefined) {
      resolved.VelUSigma = msg.VelUSigma;
    }
    else {
      resolved.VelUSigma = 0.0
    }

    if (msg.VelSigma !== undefined) {
      resolved.VelSigma = msg.VelSigma;
    }
    else {
      resolved.VelSigma = 0.0
    }

    if (msg.AccelX !== undefined) {
      resolved.AccelX = msg.AccelX;
    }
    else {
      resolved.AccelX = 0.0
    }

    if (msg.AccelY !== undefined) {
      resolved.AccelY = msg.AccelY;
    }
    else {
      resolved.AccelY = 0.0
    }

    if (msg.AccelZ !== undefined) {
      resolved.AccelZ = msg.AccelZ;
    }
    else {
      resolved.AccelZ = 0.0
    }

    if (msg.AngleHeadingSigma !== undefined) {
      resolved.AngleHeadingSigma = msg.AngleHeadingSigma;
    }
    else {
      resolved.AngleHeadingSigma = 0.0
    }

    if (msg.AnglePitchSigma !== undefined) {
      resolved.AnglePitchSigma = msg.AnglePitchSigma;
    }
    else {
      resolved.AnglePitchSigma = 0.0
    }

    if (msg.AngleRollSigma !== undefined) {
      resolved.AngleRollSigma = msg.AngleRollSigma;
    }
    else {
      resolved.AngleRollSigma = 0.0
    }

    if (msg.AngRateX !== undefined) {
      resolved.AngRateX = msg.AngRateX;
    }
    else {
      resolved.AngRateX = 0.0
    }

    if (msg.AngRateY !== undefined) {
      resolved.AngRateY = msg.AngRateY;
    }
    else {
      resolved.AngRateY = 0.0
    }

    if (msg.AngRateZ !== undefined) {
      resolved.AngRateZ = msg.AngRateZ;
    }
    else {
      resolved.AngRateZ = 0.0
    }

    if (msg.GpsNumSats2Used !== undefined) {
      resolved.GpsNumSats2Used = msg.GpsNumSats2Used;
    }
    else {
      resolved.GpsNumSats2Used = 0
    }

    if (msg.GpsNumSats !== undefined) {
      resolved.GpsNumSats = msg.GpsNumSats;
    }
    else {
      resolved.GpsNumSats = 0
    }

    if (msg.GpsNumSats2 !== undefined) {
      resolved.GpsNumSats2 = msg.GpsNumSats2;
    }
    else {
      resolved.GpsNumSats2 = 0
    }

    if (msg.Rear_posX !== undefined) {
      resolved.Rear_posX = msg.Rear_posX;
    }
    else {
      resolved.Rear_posX = 0.0
    }

    if (msg.Rear_posY !== undefined) {
      resolved.Rear_posY = msg.Rear_posY;
    }
    else {
      resolved.Rear_posY = 0.0
    }

    if (msg.Rear_posZ !== undefined) {
      resolved.Rear_posZ = msg.Rear_posZ;
    }
    else {
      resolved.Rear_posZ = 0.0
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

module.exports = GpsImuAddInterface;
