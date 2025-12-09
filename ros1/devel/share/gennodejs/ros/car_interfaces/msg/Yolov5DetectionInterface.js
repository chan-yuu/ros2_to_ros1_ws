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

class Yolov5DetectionInterface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timestamp = null;
      this.bbox = null;
      this.conf = null;
      this.class_id = null;
      this.mask = null;
      this.tray_degree = null;
      this.tray_distance = null;
      this.tray_height = null;
      this.tray_x = null;
      this.tray_y = null;
      this.tray_z = null;
      this.tray_yaw = null;
    }
    else {
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = 0.0;
      }
      if (initObj.hasOwnProperty('bbox')) {
        this.bbox = initObj.bbox
      }
      else {
        this.bbox = [];
      }
      if (initObj.hasOwnProperty('conf')) {
        this.conf = initObj.conf
      }
      else {
        this.conf = [];
      }
      if (initObj.hasOwnProperty('class_id')) {
        this.class_id = initObj.class_id
      }
      else {
        this.class_id = [];
      }
      if (initObj.hasOwnProperty('mask')) {
        this.mask = initObj.mask
      }
      else {
        this.mask = [];
      }
      if (initObj.hasOwnProperty('tray_degree')) {
        this.tray_degree = initObj.tray_degree
      }
      else {
        this.tray_degree = [];
      }
      if (initObj.hasOwnProperty('tray_distance')) {
        this.tray_distance = initObj.tray_distance
      }
      else {
        this.tray_distance = [];
      }
      if (initObj.hasOwnProperty('tray_height')) {
        this.tray_height = initObj.tray_height
      }
      else {
        this.tray_height = [];
      }
      if (initObj.hasOwnProperty('tray_x')) {
        this.tray_x = initObj.tray_x
      }
      else {
        this.tray_x = [];
      }
      if (initObj.hasOwnProperty('tray_y')) {
        this.tray_y = initObj.tray_y
      }
      else {
        this.tray_y = [];
      }
      if (initObj.hasOwnProperty('tray_z')) {
        this.tray_z = initObj.tray_z
      }
      else {
        this.tray_z = [];
      }
      if (initObj.hasOwnProperty('tray_yaw')) {
        this.tray_yaw = initObj.tray_yaw
      }
      else {
        this.tray_yaw = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Yolov5DetectionInterface
    // Serialize message field [timestamp]
    bufferOffset = _serializer.float64(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [bbox]
    bufferOffset = _arraySerializer.float32(obj.bbox, buffer, bufferOffset, null);
    // Serialize message field [conf]
    bufferOffset = _arraySerializer.float32(obj.conf, buffer, bufferOffset, null);
    // Serialize message field [class_id]
    bufferOffset = _arraySerializer.float32(obj.class_id, buffer, bufferOffset, null);
    // Serialize message field [mask]
    bufferOffset = _arraySerializer.float32(obj.mask, buffer, bufferOffset, null);
    // Serialize message field [tray_degree]
    bufferOffset = _arraySerializer.float32(obj.tray_degree, buffer, bufferOffset, null);
    // Serialize message field [tray_distance]
    bufferOffset = _arraySerializer.float32(obj.tray_distance, buffer, bufferOffset, null);
    // Serialize message field [tray_height]
    bufferOffset = _arraySerializer.float32(obj.tray_height, buffer, bufferOffset, null);
    // Serialize message field [tray_x]
    bufferOffset = _arraySerializer.float32(obj.tray_x, buffer, bufferOffset, null);
    // Serialize message field [tray_y]
    bufferOffset = _arraySerializer.float32(obj.tray_y, buffer, bufferOffset, null);
    // Serialize message field [tray_z]
    bufferOffset = _arraySerializer.float32(obj.tray_z, buffer, bufferOffset, null);
    // Serialize message field [tray_yaw]
    bufferOffset = _arraySerializer.float32(obj.tray_yaw, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Yolov5DetectionInterface
    let len;
    let data = new Yolov5DetectionInterface(null);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [bbox]
    data.bbox = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [conf]
    data.conf = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [class_id]
    data.class_id = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [mask]
    data.mask = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [tray_degree]
    data.tray_degree = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [tray_distance]
    data.tray_distance = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [tray_height]
    data.tray_height = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [tray_x]
    data.tray_x = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [tray_y]
    data.tray_y = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [tray_z]
    data.tray_z = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [tray_yaw]
    data.tray_yaw = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.bbox.length;
    length += 4 * object.conf.length;
    length += 4 * object.class_id.length;
    length += 4 * object.mask.length;
    length += 4 * object.tray_degree.length;
    length += 4 * object.tray_distance.length;
    length += 4 * object.tray_height.length;
    length += 4 * object.tray_x.length;
    length += 4 * object.tray_y.length;
    length += 4 * object.tray_z.length;
    length += 4 * object.tray_yaw.length;
    return length + 52;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/Yolov5DetectionInterface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2ee1970563c4a57e5269f962cf6b7df0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64  timestamp     # 数据帧时间戳
    #std_msgs/Header header   后续加入 坐标系信息
    float32[] bbox   	# 4 个一组    
    float32[] conf		# 1 个一组
    float32[] class_id	# 1
    float32[] mask		# 32
    
    float32[] tray_degree
    float32[] tray_distance
    float32[] tray_height
    
    float32[] tray_x
    float32[] tray_y
    float32[] tray_z
    float32[] tray_yaw
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Yolov5DetectionInterface(null);
    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = 0.0
    }

    if (msg.bbox !== undefined) {
      resolved.bbox = msg.bbox;
    }
    else {
      resolved.bbox = []
    }

    if (msg.conf !== undefined) {
      resolved.conf = msg.conf;
    }
    else {
      resolved.conf = []
    }

    if (msg.class_id !== undefined) {
      resolved.class_id = msg.class_id;
    }
    else {
      resolved.class_id = []
    }

    if (msg.mask !== undefined) {
      resolved.mask = msg.mask;
    }
    else {
      resolved.mask = []
    }

    if (msg.tray_degree !== undefined) {
      resolved.tray_degree = msg.tray_degree;
    }
    else {
      resolved.tray_degree = []
    }

    if (msg.tray_distance !== undefined) {
      resolved.tray_distance = msg.tray_distance;
    }
    else {
      resolved.tray_distance = []
    }

    if (msg.tray_height !== undefined) {
      resolved.tray_height = msg.tray_height;
    }
    else {
      resolved.tray_height = []
    }

    if (msg.tray_x !== undefined) {
      resolved.tray_x = msg.tray_x;
    }
    else {
      resolved.tray_x = []
    }

    if (msg.tray_y !== undefined) {
      resolved.tray_y = msg.tray_y;
    }
    else {
      resolved.tray_y = []
    }

    if (msg.tray_z !== undefined) {
      resolved.tray_z = msg.tray_z;
    }
    else {
      resolved.tray_z = []
    }

    if (msg.tray_yaw !== undefined) {
      resolved.tray_yaw = msg.tray_yaw;
    }
    else {
      resolved.tray_yaw = []
    }

    return resolved;
    }
};

module.exports = Yolov5DetectionInterface;
