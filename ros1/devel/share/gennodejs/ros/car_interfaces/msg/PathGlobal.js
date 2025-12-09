// Auto-generated. Do not edit!

// (in-package car_interfaces.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let nav_msgs = _finder('nav_msgs');

//-----------------------------------------------------------

class PathGlobal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timestamp = null;
      this.startpoint = null;
      this.goal_received = null;
      this.path = null;
    }
    else {
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = 0.0;
      }
      if (initObj.hasOwnProperty('startpoint')) {
        this.startpoint = initObj.startpoint
      }
      else {
        this.startpoint = [];
      }
      if (initObj.hasOwnProperty('goal_received')) {
        this.goal_received = initObj.goal_received
      }
      else {
        this.goal_received = false;
      }
      if (initObj.hasOwnProperty('path')) {
        this.path = initObj.path
      }
      else {
        this.path = new nav_msgs.msg.Path();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PathGlobal
    // Serialize message field [timestamp]
    bufferOffset = _serializer.float64(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [startpoint]
    bufferOffset = _arraySerializer.float64(obj.startpoint, buffer, bufferOffset, null);
    // Serialize message field [goal_received]
    bufferOffset = _serializer.bool(obj.goal_received, buffer, bufferOffset);
    // Serialize message field [path]
    bufferOffset = nav_msgs.msg.Path.serialize(obj.path, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PathGlobal
    let len;
    let data = new PathGlobal(null);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [startpoint]
    data.startpoint = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [goal_received]
    data.goal_received = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [path]
    data.path = nav_msgs.msg.Path.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 8 * object.startpoint.length;
    length += nav_msgs.msg.Path.getMessageSize(object.path);
    return length + 13;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/PathGlobal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b37aa2b40541c58a99e5b6f91bb685b0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64  timestamp  #时间戳
    float64[]  startpoint   #起点位置
    bool goal_received
    nav_msgs/Path path
    ================================================================================
    MSG: nav_msgs/Path
    #An array of poses that represents a Path for a robot to follow
    Header header
    geometry_msgs/PoseStamped[] poses
    
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
    
    ================================================================================
    MSG: geometry_msgs/PoseStamped
    # A Pose with reference coordinate frame and timestamp
    Header header
    Pose pose
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PathGlobal(null);
    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = 0.0
    }

    if (msg.startpoint !== undefined) {
      resolved.startpoint = msg.startpoint;
    }
    else {
      resolved.startpoint = []
    }

    if (msg.goal_received !== undefined) {
      resolved.goal_received = msg.goal_received;
    }
    else {
      resolved.goal_received = false
    }

    if (msg.path !== undefined) {
      resolved.path = nav_msgs.msg.Path.Resolve(msg.path)
    }
    else {
      resolved.path = new nav_msgs.msg.Path()
    }

    return resolved;
    }
};

module.exports = PathGlobal;
