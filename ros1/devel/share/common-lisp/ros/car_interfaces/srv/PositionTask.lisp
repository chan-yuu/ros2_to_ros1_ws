; Auto-generated. Do not edit!


(cl:in-package car_interfaces-srv)


;//! \htmlinclude PositionTask-request.msg.html

(cl:defclass <PositionTask-request> (roslisp-msg-protocol:ros-message)
  ((data
    :reader data
    :initarg :data
    :type cl:fixnum
    :initform 0))
)

(cl:defclass PositionTask-request (<PositionTask-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PositionTask-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PositionTask-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<PositionTask-request> is deprecated: use car_interfaces-srv:PositionTask-request instead.")))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <PositionTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:data-val is deprecated.  Use car_interfaces-srv:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PositionTask-request>) ostream)
  "Serializes a message object of type '<PositionTask-request>"
  (cl:let* ((signed (cl:slot-value msg 'data)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PositionTask-request>) istream)
  "Deserializes a message object of type '<PositionTask-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'data) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PositionTask-request>)))
  "Returns string type for a service object of type '<PositionTask-request>"
  "car_interfaces/PositionTaskRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionTask-request)))
  "Returns string type for a service object of type 'PositionTask-request"
  "car_interfaces/PositionTaskRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PositionTask-request>)))
  "Returns md5sum for a message object of type '<PositionTask-request>"
  "208d4ab53cf12eb941a7d93b34b7532b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PositionTask-request)))
  "Returns md5sum for a message object of type 'PositionTask-request"
  "208d4ab53cf12eb941a7d93b34b7532b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PositionTask-request>)))
  "Returns full string definition for message of type '<PositionTask-request>"
  (cl:format cl:nil "int8 data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PositionTask-request)))
  "Returns full string definition for message of type 'PositionTask-request"
  (cl:format cl:nil "int8 data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PositionTask-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PositionTask-request>))
  "Converts a ROS message object to a list"
  (cl:list 'PositionTask-request
    (cl:cons ':data (data msg))
))
;//! \htmlinclude PositionTask-response.msg.html

(cl:defclass <PositionTask-response> (roslisp-msg-protocol:ros-message)
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

(cl:defclass PositionTask-response (<PositionTask-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PositionTask-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PositionTask-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<PositionTask-response> is deprecated: use car_interfaces-srv:PositionTask-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <PositionTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:success-val is deprecated.  Use car_interfaces-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <PositionTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:message-val is deprecated.  Use car_interfaces-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PositionTask-response>) ostream)
  "Serializes a message object of type '<PositionTask-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PositionTask-response>) istream)
  "Deserializes a message object of type '<PositionTask-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PositionTask-response>)))
  "Returns string type for a service object of type '<PositionTask-response>"
  "car_interfaces/PositionTaskResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionTask-response)))
  "Returns string type for a service object of type 'PositionTask-response"
  "car_interfaces/PositionTaskResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PositionTask-response>)))
  "Returns md5sum for a message object of type '<PositionTask-response>"
  "208d4ab53cf12eb941a7d93b34b7532b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PositionTask-response)))
  "Returns md5sum for a message object of type 'PositionTask-response"
  "208d4ab53cf12eb941a7d93b34b7532b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PositionTask-response>)))
  "Returns full string definition for message of type '<PositionTask-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PositionTask-response)))
  "Returns full string definition for message of type 'PositionTask-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PositionTask-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PositionTask-response>))
  "Converts a ROS message object to a list"
  (cl:list 'PositionTask-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'PositionTask)))
  'PositionTask-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'PositionTask)))
  'PositionTask-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionTask)))
  "Returns string type for a service object of type '<PositionTask>"
  "car_interfaces/PositionTask")