; Auto-generated. Do not edit!


(cl:in-package car_interfaces-srv)


;//! \htmlinclude TaskSts-request.msg.html

(cl:defclass <TaskSts-request> (roslisp-msg-protocol:ros-message)
  ((order_id
    :reader order_id
    :initarg :order_id
    :type cl:string
    :initform "")
   (business_type
    :reader business_type
    :initarg :business_type
    :type cl:string
    :initform "")
   (origin_shelf_area
    :reader origin_shelf_area
    :initarg :origin_shelf_area
    :type cl:string
    :initform "")
   (destination_shelf_area
    :reader destination_shelf_area
    :initarg :destination_shelf_area
    :type cl:string
    :initform "")
   (task_id
    :reader task_id
    :initarg :task_id
    :type cl:string
    :initform "")
   (bale_num_to_handle
    :reader bale_num_to_handle
    :initarg :bale_num_to_handle
    :type cl:fixnum
    :initform 0)
   (task_sts
    :reader task_sts
    :initarg :task_sts
    :type cl:fixnum
    :initform 0)
   (final_pose
    :reader final_pose
    :initarg :final_pose
    :type car_interfaces-msg:pose
    :initform (cl:make-instance 'car_interfaces-msg:pose)))
)

(cl:defclass TaskSts-request (<TaskSts-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TaskSts-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TaskSts-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<TaskSts-request> is deprecated: use car_interfaces-srv:TaskSts-request instead.")))

(cl:ensure-generic-function 'order_id-val :lambda-list '(m))
(cl:defmethod order_id-val ((m <TaskSts-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:order_id-val is deprecated.  Use car_interfaces-srv:order_id instead.")
  (order_id m))

(cl:ensure-generic-function 'business_type-val :lambda-list '(m))
(cl:defmethod business_type-val ((m <TaskSts-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:business_type-val is deprecated.  Use car_interfaces-srv:business_type instead.")
  (business_type m))

(cl:ensure-generic-function 'origin_shelf_area-val :lambda-list '(m))
(cl:defmethod origin_shelf_area-val ((m <TaskSts-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:origin_shelf_area-val is deprecated.  Use car_interfaces-srv:origin_shelf_area instead.")
  (origin_shelf_area m))

(cl:ensure-generic-function 'destination_shelf_area-val :lambda-list '(m))
(cl:defmethod destination_shelf_area-val ((m <TaskSts-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:destination_shelf_area-val is deprecated.  Use car_interfaces-srv:destination_shelf_area instead.")
  (destination_shelf_area m))

(cl:ensure-generic-function 'task_id-val :lambda-list '(m))
(cl:defmethod task_id-val ((m <TaskSts-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:task_id-val is deprecated.  Use car_interfaces-srv:task_id instead.")
  (task_id m))

(cl:ensure-generic-function 'bale_num_to_handle-val :lambda-list '(m))
(cl:defmethod bale_num_to_handle-val ((m <TaskSts-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:bale_num_to_handle-val is deprecated.  Use car_interfaces-srv:bale_num_to_handle instead.")
  (bale_num_to_handle m))

(cl:ensure-generic-function 'task_sts-val :lambda-list '(m))
(cl:defmethod task_sts-val ((m <TaskSts-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:task_sts-val is deprecated.  Use car_interfaces-srv:task_sts instead.")
  (task_sts m))

(cl:ensure-generic-function 'final_pose-val :lambda-list '(m))
(cl:defmethod final_pose-val ((m <TaskSts-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:final_pose-val is deprecated.  Use car_interfaces-srv:final_pose instead.")
  (final_pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TaskSts-request>) ostream)
  "Serializes a message object of type '<TaskSts-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'order_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'order_id))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'business_type))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'business_type))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'origin_shelf_area))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'origin_shelf_area))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'destination_shelf_area))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'destination_shelf_area))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'task_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'task_id))
  (cl:let* ((signed (cl:slot-value msg 'bale_num_to_handle)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'task_sts)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'final_pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TaskSts-request>) istream)
  "Deserializes a message object of type '<TaskSts-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'order_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'order_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'business_type) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'business_type) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'origin_shelf_area) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'origin_shelf_area) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'destination_shelf_area) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'destination_shelf_area) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'task_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'task_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'bale_num_to_handle) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'task_sts) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'final_pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TaskSts-request>)))
  "Returns string type for a service object of type '<TaskSts-request>"
  "car_interfaces/TaskStsRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TaskSts-request)))
  "Returns string type for a service object of type 'TaskSts-request"
  "car_interfaces/TaskStsRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TaskSts-request>)))
  "Returns md5sum for a message object of type '<TaskSts-request>"
  "8a6ad011433f39152e544540da918dee")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TaskSts-request)))
  "Returns md5sum for a message object of type 'TaskSts-request"
  "8a6ad011433f39152e544540da918dee")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TaskSts-request>)))
  "Returns full string definition for message of type '<TaskSts-request>"
  (cl:format cl:nil "string order_id~%string business_type~%string origin_shelf_area~%string destination_shelf_area~%string task_id~%int8 bale_num_to_handle~%int8 task_sts~%car_interfaces/pose final_pose~%~%================================================================================~%MSG: car_interfaces/pose~%std_msgs/Header header~%float32 x~%float32 y~%float32 z~%float32 pitch~%float32 roll~%float32 yaw~%bool state~%bool slam_reliability~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TaskSts-request)))
  "Returns full string definition for message of type 'TaskSts-request"
  (cl:format cl:nil "string order_id~%string business_type~%string origin_shelf_area~%string destination_shelf_area~%string task_id~%int8 bale_num_to_handle~%int8 task_sts~%car_interfaces/pose final_pose~%~%================================================================================~%MSG: car_interfaces/pose~%std_msgs/Header header~%float32 x~%float32 y~%float32 z~%float32 pitch~%float32 roll~%float32 yaw~%bool state~%bool slam_reliability~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TaskSts-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'order_id))
     4 (cl:length (cl:slot-value msg 'business_type))
     4 (cl:length (cl:slot-value msg 'origin_shelf_area))
     4 (cl:length (cl:slot-value msg 'destination_shelf_area))
     4 (cl:length (cl:slot-value msg 'task_id))
     1
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'final_pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TaskSts-request>))
  "Converts a ROS message object to a list"
  (cl:list 'TaskSts-request
    (cl:cons ':order_id (order_id msg))
    (cl:cons ':business_type (business_type msg))
    (cl:cons ':origin_shelf_area (origin_shelf_area msg))
    (cl:cons ':destination_shelf_area (destination_shelf_area msg))
    (cl:cons ':task_id (task_id msg))
    (cl:cons ':bale_num_to_handle (bale_num_to_handle msg))
    (cl:cons ':task_sts (task_sts msg))
    (cl:cons ':final_pose (final_pose msg))
))
;//! \htmlinclude TaskSts-response.msg.html

(cl:defclass <TaskSts-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass TaskSts-response (<TaskSts-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TaskSts-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TaskSts-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<TaskSts-response> is deprecated: use car_interfaces-srv:TaskSts-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <TaskSts-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:success-val is deprecated.  Use car_interfaces-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <TaskSts-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:message-val is deprecated.  Use car_interfaces-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TaskSts-response>) ostream)
  "Serializes a message object of type '<TaskSts-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TaskSts-response>) istream)
  "Deserializes a message object of type '<TaskSts-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TaskSts-response>)))
  "Returns string type for a service object of type '<TaskSts-response>"
  "car_interfaces/TaskStsResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TaskSts-response)))
  "Returns string type for a service object of type 'TaskSts-response"
  "car_interfaces/TaskStsResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TaskSts-response>)))
  "Returns md5sum for a message object of type '<TaskSts-response>"
  "8a6ad011433f39152e544540da918dee")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TaskSts-response)))
  "Returns md5sum for a message object of type 'TaskSts-response"
  "8a6ad011433f39152e544540da918dee")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TaskSts-response>)))
  "Returns full string definition for message of type '<TaskSts-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TaskSts-response)))
  "Returns full string definition for message of type 'TaskSts-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TaskSts-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TaskSts-response>))
  "Converts a ROS message object to a list"
  (cl:list 'TaskSts-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'TaskSts)))
  'TaskSts-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'TaskSts)))
  'TaskSts-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TaskSts)))
  "Returns string type for a service object of type '<TaskSts>"
  "car_interfaces/TaskSts")