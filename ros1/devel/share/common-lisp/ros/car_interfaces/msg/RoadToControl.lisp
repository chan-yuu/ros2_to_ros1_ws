; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude RoadToControl.msg.html

(cl:defclass <RoadToControl> (roslisp-msg-protocol:ros-message)
  ((path
    :reader path
    :initarg :path
    :type nav_msgs-msg:Path
    :initform (cl:make-instance 'nav_msgs-msg:Path))
   (gear
    :reader gear
    :initarg :gear
    :type (cl:vector cl:integer)
   :initform (cl:make-array 0 :element-type 'cl:integer :initial-element 0)))
)

(cl:defclass RoadToControl (<RoadToControl>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RoadToControl>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RoadToControl)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<RoadToControl> is deprecated: use car_interfaces-msg:RoadToControl instead.")))

(cl:ensure-generic-function 'path-val :lambda-list '(m))
(cl:defmethod path-val ((m <RoadToControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:path-val is deprecated.  Use car_interfaces-msg:path instead.")
  (path m))

(cl:ensure-generic-function 'gear-val :lambda-list '(m))
(cl:defmethod gear-val ((m <RoadToControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:gear-val is deprecated.  Use car_interfaces-msg:gear instead.")
  (gear m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RoadToControl>) ostream)
  "Serializes a message object of type '<RoadToControl>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'path) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'gear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'gear))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RoadToControl>) istream)
  "Deserializes a message object of type '<RoadToControl>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'path) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'gear) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'gear)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296)))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RoadToControl>)))
  "Returns string type for a message object of type '<RoadToControl>"
  "car_interfaces/RoadToControl")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RoadToControl)))
  "Returns string type for a message object of type 'RoadToControl"
  "car_interfaces/RoadToControl")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RoadToControl>)))
  "Returns md5sum for a message object of type '<RoadToControl>"
  "ba7de6d6e6f69a4d62782487a2d676e6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RoadToControl)))
  "Returns md5sum for a message object of type 'RoadToControl"
  "ba7de6d6e6f69a4d62782487a2d676e6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RoadToControl>)))
  "Returns full string definition for message of type '<RoadToControl>"
  (cl:format cl:nil "# 发给控制的路 相比nav_msgs/Path 多加了档位，混合A搜索自带档位标志~%~%nav_msgs/Path path~%int32[] gear  #每个点对应档位~%~%================================================================================~%MSG: nav_msgs/Path~%#An array of poses that represents a Path for a robot to follow~%Header header~%geometry_msgs/PoseStamped[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RoadToControl)))
  "Returns full string definition for message of type 'RoadToControl"
  (cl:format cl:nil "# 发给控制的路 相比nav_msgs/Path 多加了档位，混合A搜索自带档位标志~%~%nav_msgs/Path path~%int32[] gear  #每个点对应档位~%~%================================================================================~%MSG: nav_msgs/Path~%#An array of poses that represents a Path for a robot to follow~%Header header~%geometry_msgs/PoseStamped[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RoadToControl>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'path))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'gear) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RoadToControl>))
  "Converts a ROS message object to a list"
  (cl:list 'RoadToControl
    (cl:cons ':path (path msg))
    (cl:cons ':gear (gear msg))
))
