; Auto-generated. Do not edit!


(cl:in-package car_interfaces-srv)


;//! \htmlinclude FusionDetTask-request.msg.html

(cl:defclass <FusionDetTask-request> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:float
    :initform 0.0)
   (y
    :reader y
    :initarg :y
    :type cl:float
    :initform 0.0)
   (z
    :reader z
    :initarg :z
    :type cl:float
    :initform 0.0)
   (width
    :reader width
    :initarg :width
    :type cl:float
    :initform 0.0)
   (height
    :reader height
    :initarg :height
    :type cl:float
    :initform 0.0)
   (yaw
    :reader yaw
    :initarg :yaw
    :type cl:float
    :initform 0.0))
)

(cl:defclass FusionDetTask-request (<FusionDetTask-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FusionDetTask-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FusionDetTask-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<FusionDetTask-request> is deprecated: use car_interfaces-srv:FusionDetTask-request instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <FusionDetTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:x-val is deprecated.  Use car_interfaces-srv:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <FusionDetTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:y-val is deprecated.  Use car_interfaces-srv:y instead.")
  (y m))

(cl:ensure-generic-function 'z-val :lambda-list '(m))
(cl:defmethod z-val ((m <FusionDetTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:z-val is deprecated.  Use car_interfaces-srv:z instead.")
  (z m))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <FusionDetTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:width-val is deprecated.  Use car_interfaces-srv:width instead.")
  (width m))

(cl:ensure-generic-function 'height-val :lambda-list '(m))
(cl:defmethod height-val ((m <FusionDetTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:height-val is deprecated.  Use car_interfaces-srv:height instead.")
  (height m))

(cl:ensure-generic-function 'yaw-val :lambda-list '(m))
(cl:defmethod yaw-val ((m <FusionDetTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:yaw-val is deprecated.  Use car_interfaces-srv:yaw instead.")
  (yaw m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FusionDetTask-request>) ostream)
  "Serializes a message object of type '<FusionDetTask-request>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'z))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'width))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'height))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'yaw))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FusionDetTask-request>) istream)
  "Deserializes a message object of type '<FusionDetTask-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'x) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'z) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'width) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'height) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'yaw) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FusionDetTask-request>)))
  "Returns string type for a service object of type '<FusionDetTask-request>"
  "car_interfaces/FusionDetTaskRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FusionDetTask-request)))
  "Returns string type for a service object of type 'FusionDetTask-request"
  "car_interfaces/FusionDetTaskRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FusionDetTask-request>)))
  "Returns md5sum for a message object of type '<FusionDetTask-request>"
  "48cd9fb0e1c8c635b71f4ac18496bd3e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FusionDetTask-request)))
  "Returns md5sum for a message object of type 'FusionDetTask-request"
  "48cd9fb0e1c8c635b71f4ac18496bd3e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FusionDetTask-request>)))
  "Returns full string definition for message of type '<FusionDetTask-request>"
  (cl:format cl:nil "~%# fusion_det_task~%float32 x~%float32 y~%float32 z~%float32 width~%float32 height~%float32 yaw~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FusionDetTask-request)))
  "Returns full string definition for message of type 'FusionDetTask-request"
  (cl:format cl:nil "~%# fusion_det_task~%float32 x~%float32 y~%float32 z~%float32 width~%float32 height~%float32 yaw~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FusionDetTask-request>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FusionDetTask-request>))
  "Converts a ROS message object to a list"
  (cl:list 'FusionDetTask-request
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':z (z msg))
    (cl:cons ':width (width msg))
    (cl:cons ':height (height msg))
    (cl:cons ':yaw (yaw msg))
))
;//! \htmlinclude FusionDetTask-response.msg.html

(cl:defclass <FusionDetTask-response> (roslisp-msg-protocol:ros-message)
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

(cl:defclass FusionDetTask-response (<FusionDetTask-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FusionDetTask-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FusionDetTask-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<FusionDetTask-response> is deprecated: use car_interfaces-srv:FusionDetTask-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <FusionDetTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:success-val is deprecated.  Use car_interfaces-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <FusionDetTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:message-val is deprecated.  Use car_interfaces-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FusionDetTask-response>) ostream)
  "Serializes a message object of type '<FusionDetTask-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FusionDetTask-response>) istream)
  "Deserializes a message object of type '<FusionDetTask-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FusionDetTask-response>)))
  "Returns string type for a service object of type '<FusionDetTask-response>"
  "car_interfaces/FusionDetTaskResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FusionDetTask-response)))
  "Returns string type for a service object of type 'FusionDetTask-response"
  "car_interfaces/FusionDetTaskResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FusionDetTask-response>)))
  "Returns md5sum for a message object of type '<FusionDetTask-response>"
  "48cd9fb0e1c8c635b71f4ac18496bd3e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FusionDetTask-response)))
  "Returns md5sum for a message object of type 'FusionDetTask-response"
  "48cd9fb0e1c8c635b71f4ac18496bd3e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FusionDetTask-response>)))
  "Returns full string definition for message of type '<FusionDetTask-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FusionDetTask-response)))
  "Returns full string definition for message of type 'FusionDetTask-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FusionDetTask-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FusionDetTask-response>))
  "Converts a ROS message object to a list"
  (cl:list 'FusionDetTask-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'FusionDetTask)))
  'FusionDetTask-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'FusionDetTask)))
  'FusionDetTask-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FusionDetTask)))
  "Returns string type for a service object of type '<FusionDetTask>"
  "car_interfaces/FusionDetTask")