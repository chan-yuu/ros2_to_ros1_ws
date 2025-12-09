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

class Object {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.conf = null;
      this.class_id = null;
      this.track_id = null;
      this.x = null;
      this.y = null;
      this.z = null;
      this.l_x = null;
      this.l_y = null;
      this.l_z = null;
      this.pitch = null;
      this.roll = null;
      this.yaw = null;
      this.degree = null;
      this.distance = null;
      this.height = null;
      this.target_width = null;
      this.target_height = null;
      this.left_boudary_point = null;
      this.right_boudary_point = null;
      this.top_boudary_point = null;
    }
    else {
      if (initObj.hasOwnProperty('conf')) {
        this.conf = initObj.conf
      }
      else {
        this.conf = 0.0;
      }
      if (initObj.hasOwnProperty('class_id')) {
        this.class_id = initObj.class_id
      }
      else {
        this.class_id = 0.0;
      }
      if (initObj.hasOwnProperty('track_id')) {
        this.track_id = initObj.track_id
      }
      else {
        this.track_id = 0.0;
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
      if (initObj.hasOwnProperty('l_x')) {
        this.l_x = initObj.l_x
      }
      else {
        this.l_x = 0.0;
      }
      if (initObj.hasOwnProperty('l_y')) {
        this.l_y = initObj.l_y
      }
      else {
        this.l_y = 0.0;
      }
      if (initObj.hasOwnProperty('l_z')) {
        this.l_z = initObj.l_z
      }
      else {
        this.l_z = 0.0;
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
      if (initObj.hasOwnProperty('degree')) {
        this.degree = initObj.degree
      }
      else {
        this.degree = 0.0;
      }
      if (initObj.hasOwnProperty('distance')) {
        this.distance = initObj.distance
      }
      else {
        this.distance = 0.0;
      }
      if (initObj.hasOwnProperty('height')) {
        this.height = initObj.height
      }
      else {
        this.height = 0.0;
      }
      if (initObj.hasOwnProperty('target_width')) {
        this.target_width = initObj.target_width
      }
      else {
        this.target_width = 0.0;
      }
      if (initObj.hasOwnProperty('target_height')) {
        this.target_height = initObj.target_height
      }
      else {
        this.target_height = 0.0;
      }
      if (initObj.hasOwnProperty('left_boudary_point')) {
        this.left_boudary_point = initObj.left_boudary_point
      }
      else {
        this.left_boudary_point = [];
      }
      if (initObj.hasOwnProperty('right_boudary_point')) {
        this.right_boudary_point = initObj.right_boudary_point
      }
      else {
        this.right_boudary_point = [];
      }
      if (initObj.hasOwnProperty('top_boudary_point')) {
        this.top_boudary_point = initObj.top_boudary_point
      }
      else {
        this.top_boudary_point = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Object
    // Serialize message field [conf]
    bufferOffset = _serializer.float32(obj.conf, buffer, bufferOffset);
    // Serialize message field [class_id]
    bufferOffset = _serializer.float32(obj.class_id, buffer, bufferOffset);
    // Serialize message field [track_id]
    bufferOffset = _serializer.float32(obj.track_id, buffer, bufferOffset);
    // Serialize message field [x]
    bufferOffset = _serializer.float32(obj.x, buffer, bufferOffset);
    // Serialize message field [y]
    bufferOffset = _serializer.float32(obj.y, buffer, bufferOffset);
    // Serialize message field [z]
    bufferOffset = _serializer.float32(obj.z, buffer, bufferOffset);
    // Serialize message field [l_x]
    bufferOffset = _serializer.float32(obj.l_x, buffer, bufferOffset);
    // Serialize message field [l_y]
    bufferOffset = _serializer.float32(obj.l_y, buffer, bufferOffset);
    // Serialize message field [l_z]
    bufferOffset = _serializer.float32(obj.l_z, buffer, bufferOffset);
    // Serialize message field [pitch]
    bufferOffset = _serializer.float32(obj.pitch, buffer, bufferOffset);
    // Serialize message field [roll]
    bufferOffset = _serializer.float32(obj.roll, buffer, bufferOffset);
    // Serialize message field [yaw]
    bufferOffset = _serializer.float32(obj.yaw, buffer, bufferOffset);
    // Serialize message field [degree]
    bufferOffset = _serializer.float32(obj.degree, buffer, bufferOffset);
    // Serialize message field [distance]
    bufferOffset = _serializer.float32(obj.distance, buffer, bufferOffset);
    // Serialize message field [height]
    bufferOffset = _serializer.float32(obj.height, buffer, bufferOffset);
    // Serialize message field [target_width]
    bufferOffset = _serializer.float32(obj.target_width, buffer, bufferOffset);
    // Serialize message field [target_height]
    bufferOffset = _serializer.float32(obj.target_height, buffer, bufferOffset);
    // Serialize message field [left_boudary_point]
    bufferOffset = _arraySerializer.float32(obj.left_boudary_point, buffer, bufferOffset, null);
    // Serialize message field [right_boudary_point]
    bufferOffset = _arraySerializer.float32(obj.right_boudary_point, buffer, bufferOffset, null);
    // Serialize message field [top_boudary_point]
    bufferOffset = _arraySerializer.float32(obj.top_boudary_point, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Object
    let len;
    let data = new Object(null);
    // Deserialize message field [conf]
    data.conf = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [class_id]
    data.class_id = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [track_id]
    data.track_id = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [x]
    data.x = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [y]
    data.y = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [z]
    data.z = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [l_x]
    data.l_x = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [l_y]
    data.l_y = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [l_z]
    data.l_z = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [pitch]
    data.pitch = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [roll]
    data.roll = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [yaw]
    data.yaw = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [degree]
    data.degree = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [distance]
    data.distance = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [height]
    data.height = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [target_width]
    data.target_width = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [target_height]
    data.target_height = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [left_boudary_point]
    data.left_boudary_point = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [right_boudary_point]
    data.right_boudary_point = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [top_boudary_point]
    data.top_boudary_point = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.left_boudary_point.length;
    length += 4 * object.right_boudary_point.length;
    length += 4 * object.top_boudary_point.length;
    return length + 80;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/Object';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '693ea0c1d42830af046c93ddc187f2b2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 conf            # 得分
    float32 class_id        # 类别
    float32 track_id	    # 跟踪id
    float32 x               # 全局 相对加+车辆定位  单位m
    float32 y	            # 全局 相对加+车辆定位  单位m
    float32 z	            # 全局 相对加+车辆定位  单位m
    float32 l_x	            # 相对 单位m
    float32 l_y	            # 相对 单位m
    float32 l_z	            # 相对 单位m
    float32 pitch	        # unit:rad,关于车辆坐标系z轴角度+车辆pitch 
    float32 roll	        # unit:rad,关于车辆坐标系y轴角度+车辆roll 
    float32 yaw	            # unit:rad,degree+车辆航向 yaw 
    float32 degree	        # 角度,车辆坐标系x轴夹角 
    float32 distance	    # 单位m
    float32 height	        # 单位m
    float32 target_width    # 单位m
    float32 target_height   # 单位m
    float32[] left_boudary_point
    float32[] right_boudary_point
    float32[] top_boudary_point
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Object(null);
    if (msg.conf !== undefined) {
      resolved.conf = msg.conf;
    }
    else {
      resolved.conf = 0.0
    }

    if (msg.class_id !== undefined) {
      resolved.class_id = msg.class_id;
    }
    else {
      resolved.class_id = 0.0
    }

    if (msg.track_id !== undefined) {
      resolved.track_id = msg.track_id;
    }
    else {
      resolved.track_id = 0.0
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

    if (msg.l_x !== undefined) {
      resolved.l_x = msg.l_x;
    }
    else {
      resolved.l_x = 0.0
    }

    if (msg.l_y !== undefined) {
      resolved.l_y = msg.l_y;
    }
    else {
      resolved.l_y = 0.0
    }

    if (msg.l_z !== undefined) {
      resolved.l_z = msg.l_z;
    }
    else {
      resolved.l_z = 0.0
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

    if (msg.degree !== undefined) {
      resolved.degree = msg.degree;
    }
    else {
      resolved.degree = 0.0
    }

    if (msg.distance !== undefined) {
      resolved.distance = msg.distance;
    }
    else {
      resolved.distance = 0.0
    }

    if (msg.height !== undefined) {
      resolved.height = msg.height;
    }
    else {
      resolved.height = 0.0
    }

    if (msg.target_width !== undefined) {
      resolved.target_width = msg.target_width;
    }
    else {
      resolved.target_width = 0.0
    }

    if (msg.target_height !== undefined) {
      resolved.target_height = msg.target_height;
    }
    else {
      resolved.target_height = 0.0
    }

    if (msg.left_boudary_point !== undefined) {
      resolved.left_boudary_point = msg.left_boudary_point;
    }
    else {
      resolved.left_boudary_point = []
    }

    if (msg.right_boudary_point !== undefined) {
      resolved.right_boudary_point = msg.right_boudary_point;
    }
    else {
      resolved.right_boudary_point = []
    }

    if (msg.top_boudary_point !== undefined) {
      resolved.top_boudary_point = msg.top_boudary_point;
    }
    else {
      resolved.top_boudary_point = []
    }

    return resolved;
    }
};

module.exports = Object;
