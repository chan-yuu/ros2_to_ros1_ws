; Auto-generated. Do not edit!


(cl:in-package car_interfaces-srv)


;//! \htmlinclude cloud_order-request.msg.html

(cl:defclass <cloud_order-request> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (order_id
    :reader order_id
    :initarg :order_id
    :type cl:string
    :initform "")
   (task_info
    :reader task_info
    :initarg :task_info
    :type (cl:vector car_interfaces-msg:single_task)
   :initform (cl:make-array 0 :element-type 'car_interfaces-msg:single_task :initial-element (cl:make-instance 'car_interfaces-msg:single_task))))
)

(cl:defclass cloud_order-request (<cloud_order-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cloud_order-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cloud_order-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<cloud_order-request> is deprecated: use car_interfaces-srv:cloud_order-request instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <cloud_order-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:header-val is deprecated.  Use car_interfaces-srv:header instead.")
  (header m))

(cl:ensure-generic-function 'order_id-val :lambda-list '(m))
(cl:defmethod order_id-val ((m <cloud_order-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:order_id-val is deprecated.  Use car_interfaces-srv:order_id instead.")
  (order_id m))

(cl:ensure-generic-function 'task_info-val :lambda-list '(m))
(cl:defmethod task_info-val ((m <cloud_order-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:task_info-val is deprecated.  Use car_interfaces-srv:task_info instead.")
  (task_info m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cloud_order-request>) ostream)
  "Serializes a message object of type '<cloud_order-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'order_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'order_id))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'task_info))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'task_info))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cloud_order-request>) istream)
  "Deserializes a message object of type '<cloud_order-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'order_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'order_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'task_info) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'task_info)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'car_interfaces-msg:single_task))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cloud_order-request>)))
  "Returns string type for a service object of type '<cloud_order-request>"
  "car_interfaces/cloud_orderRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cloud_order-request)))
  "Returns string type for a service object of type 'cloud_order-request"
  "car_interfaces/cloud_orderRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cloud_order-request>)))
  "Returns md5sum for a message object of type '<cloud_order-request>"
  "2f612faf22d533382bbf07ab0d079f5c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cloud_order-request)))
  "Returns md5sum for a message object of type 'cloud_order-request"
  "2f612faf22d533382bbf07ab0d079f5c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cloud_order-request>)))
  "Returns full string definition for message of type '<cloud_order-request>"
  (cl:format cl:nil "std_msgs/Header header~%string order_id~%single_task[] task_info~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: car_interfaces/single_task~%string task_id~%int32 bale_num_to_handle~%string destination_shelf_area~%geometry_msgs/Pose origin_shelf_job_position~%geometry_msgs/Pose destination_shelf_job_position~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cloud_order-request)))
  "Returns full string definition for message of type 'cloud_order-request"
  (cl:format cl:nil "std_msgs/Header header~%string order_id~%single_task[] task_info~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: car_interfaces/single_task~%string task_id~%int32 bale_num_to_handle~%string destination_shelf_area~%geometry_msgs/Pose origin_shelf_job_position~%geometry_msgs/Pose destination_shelf_job_position~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cloud_order-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'order_id))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'task_info) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cloud_order-request>))
  "Converts a ROS message object to a list"
  (cl:list 'cloud_order-request
    (cl:cons ':header (header msg))
    (cl:cons ':order_id (order_id msg))
    (cl:cons ':task_info (task_info msg))
))
;//! \htmlinclude cloud_order-response.msg.html

(cl:defclass <cloud_order-response> (roslisp-msg-protocol:ros-message)
  ((task_progress
    :reader task_progress
    :initarg :task_progress
    :type cl:float
    :initform 0.0))
)

(cl:defclass cloud_order-response (<cloud_order-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cloud_order-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cloud_order-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<cloud_order-response> is deprecated: use car_interfaces-srv:cloud_order-response instead.")))

(cl:ensure-generic-function 'task_progress-val :lambda-list '(m))
(cl:defmethod task_progress-val ((m <cloud_order-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:task_progress-val is deprecated.  Use car_interfaces-srv:task_progress instead.")
  (task_progress m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cloud_order-response>) ostream)
  "Serializes a message object of type '<cloud_order-response>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'task_progress))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cloud_order-response>) istream)
  "Deserializes a message object of type '<cloud_order-response>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'task_progress) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cloud_order-response>)))
  "Returns string type for a service object of type '<cloud_order-response>"
  "car_interfaces/cloud_orderResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cloud_order-response)))
  "Returns string type for a service object of type 'cloud_order-response"
  "car_interfaces/cloud_orderResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cloud_order-response>)))
  "Returns md5sum for a message object of type '<cloud_order-response>"
  "2f612faf22d533382bbf07ab0d079f5c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cloud_order-response)))
  "Returns md5sum for a message object of type 'cloud_order-response"
  "2f612faf22d533382bbf07ab0d079f5c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cloud_order-response>)))
  "Returns full string definition for message of type '<cloud_order-response>"
  (cl:format cl:nil "float32 task_progress~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cloud_order-response)))
  "Returns full string definition for message of type 'cloud_order-response"
  (cl:format cl:nil "float32 task_progress~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cloud_order-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cloud_order-response>))
  "Converts a ROS message object to a list"
  (cl:list 'cloud_order-response
    (cl:cons ':task_progress (task_progress msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'cloud_order)))
  'cloud_order-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'cloud_order)))
  'cloud_order-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cloud_order)))
  "Returns string type for a service object of type '<cloud_order>"
  "car_interfaces/cloud_order")