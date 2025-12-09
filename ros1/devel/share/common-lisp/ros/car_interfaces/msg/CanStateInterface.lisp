; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude CanStateInterface.msg.html

(cl:defclass <CanStateInterface> (roslisp-msg-protocol:ros-message)
  ((timestamp
    :reader timestamp
    :initarg :timestamp
    :type cl:float
    :initform 0.0)
   (id
    :reader id
    :initarg :id
    :type cl:fixnum
    :initform 0)
   (state
    :reader state
    :initarg :state
    :type cl:fixnum
    :initform 0)
   (error
    :reader error
    :initarg :error
    :type cl:fixnum
    :initform 0))
)

(cl:defclass CanStateInterface (<CanStateInterface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CanStateInterface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CanStateInterface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<CanStateInterface> is deprecated: use car_interfaces-msg:CanStateInterface instead.")))

(cl:ensure-generic-function 'timestamp-val :lambda-list '(m))
(cl:defmethod timestamp-val ((m <CanStateInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:timestamp-val is deprecated.  Use car_interfaces-msg:timestamp instead.")
  (timestamp m))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <CanStateInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:id-val is deprecated.  Use car_interfaces-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <CanStateInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:state-val is deprecated.  Use car_interfaces-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'error-val :lambda-list '(m))
(cl:defmethod error-val ((m <CanStateInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:error-val is deprecated.  Use car_interfaces-msg:error instead.")
  (error m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CanStateInterface>) ostream)
  "Serializes a message object of type '<CanStateInterface>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'timestamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'state)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'error)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CanStateInterface>) istream)
  "Deserializes a message object of type '<CanStateInterface>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'timestamp) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'state)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'error)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CanStateInterface>)))
  "Returns string type for a message object of type '<CanStateInterface>"
  "car_interfaces/CanStateInterface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CanStateInterface)))
  "Returns string type for a message object of type 'CanStateInterface"
  "car_interfaces/CanStateInterface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CanStateInterface>)))
  "Returns md5sum for a message object of type '<CanStateInterface>"
  "734c36f80e5d087b16b7faf91834343f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CanStateInterface)))
  "Returns md5sum for a message object of type 'CanStateInterface"
  "734c36f80e5d087b16b7faf91834343f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CanStateInterface>)))
  "Returns full string definition for message of type '<CanStateInterface>"
  (cl:format cl:nil "float64  timestamp  #时间戳~%uint8  id   # CANID~%uint8  state          # 设备状态，0：状态正常，1：状态异常~%uint8  error          # 错误码,  0: 无错误，1：库函数错误，2：打开设备错误，3：初始化CAN0通道错误，4：清空CAN0缓冲区错误，5：启动CAN0通道错误，~%                      # 6：初始化CAN1通道错误，7：清空CAN1缓冲区错误，8：启动CAN1通道错误~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CanStateInterface)))
  "Returns full string definition for message of type 'CanStateInterface"
  (cl:format cl:nil "float64  timestamp  #时间戳~%uint8  id   # CANID~%uint8  state          # 设备状态，0：状态正常，1：状态异常~%uint8  error          # 错误码,  0: 无错误，1：库函数错误，2：打开设备错误，3：初始化CAN0通道错误，4：清空CAN0缓冲区错误，5：启动CAN0通道错误，~%                      # 6：初始化CAN1通道错误，7：清空CAN1缓冲区错误，8：启动CAN1通道错误~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CanStateInterface>))
  (cl:+ 0
     8
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CanStateInterface>))
  "Converts a ROS message object to a list"
  (cl:list 'CanStateInterface
    (cl:cons ':timestamp (timestamp msg))
    (cl:cons ':id (id msg))
    (cl:cons ':state (state msg))
    (cl:cons ':error (error msg))
))
