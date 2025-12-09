// Auto-generated. Do not edit!

// (in-package car_interfaces.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class CarDecisionInterface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timestamp = null;
      this.stop = null;
      this.speed = null;
      this.maxspeed = null;
      this.process_time = null;
      this.lanechange_flag = null;
    }
    else {
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = 0.0;
      }
      if (initObj.hasOwnProperty('stop')) {
        this.stop = initObj.stop
      }
      else {
        this.stop = false;
      }
      if (initObj.hasOwnProperty('speed')) {
        this.speed = initObj.speed
      }
      else {
        this.speed = false;
      }
      if (initObj.hasOwnProperty('maxspeed')) {
        this.maxspeed = initObj.maxspeed
      }
      else {
        this.maxspeed = 0.0;
      }
      if (initObj.hasOwnProperty('process_time')) {
        this.process_time = initObj.process_time
      }
      else {
        this.process_time = 0.0;
      }
      if (initObj.hasOwnProperty('lanechange_flag')) {
        this.lanechange_flag = initObj.lanechange_flag
      }
      else {
        this.lanechange_flag = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CarDecisionInterface
    // Serialize message field [timestamp]
    bufferOffset = _serializer.float64(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [stop]
    bufferOffset = _serializer.bool(obj.stop, buffer, bufferOffset);
    // Serialize message field [speed]
    bufferOffset = _serializer.bool(obj.speed, buffer, bufferOffset);
    // Serialize message field [maxspeed]
    bufferOffset = _serializer.float32(obj.maxspeed, buffer, bufferOffset);
    // Serialize message field [process_time]
    bufferOffset = _serializer.float32(obj.process_time, buffer, bufferOffset);
    // Serialize message field [lanechange_flag]
    bufferOffset = _serializer.float32(obj.lanechange_flag, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CarDecisionInterface
    let len;
    let data = new CarDecisionInterface(null);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [stop]
    data.stop = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [speed]
    data.speed = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [maxspeed]
    data.maxspeed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [process_time]
    data.process_time = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lanechange_flag]
    data.lanechange_flag = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 22;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/CarDecisionInterface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2ba1499a3ce71d6f0ce03ca3012beede';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64  timestamp   #数据时间戳
    bool   stop   #是否停车，0继续前进，1停车（判断依据：障碍物位置）
    bool  speed   #是否限速，0否，1是
    float32  maxspeed    # 路段限速最大速度，单位为m/s（依据：限速标识）
    float32  process_time    # 进程处理时间
    float32 lanechange_flag   # 0 – 不换道， 1 – 又换道， 2- 左换道
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CarDecisionInterface(null);
    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = 0.0
    }

    if (msg.stop !== undefined) {
      resolved.stop = msg.stop;
    }
    else {
      resolved.stop = false
    }

    if (msg.speed !== undefined) {
      resolved.speed = msg.speed;
    }
    else {
      resolved.speed = false
    }

    if (msg.maxspeed !== undefined) {
      resolved.maxspeed = msg.maxspeed;
    }
    else {
      resolved.maxspeed = 0.0
    }

    if (msg.process_time !== undefined) {
      resolved.process_time = msg.process_time;
    }
    else {
      resolved.process_time = 0.0
    }

    if (msg.lanechange_flag !== undefined) {
      resolved.lanechange_flag = msg.lanechange_flag;
    }
    else {
      resolved.lanechange_flag = 0.0
    }

    return resolved;
    }
};

module.exports = CarDecisionInterface;
