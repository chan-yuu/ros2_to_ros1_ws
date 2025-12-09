; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude CarDecisionInterface.msg.html

(cl:defclass <CarDecisionInterface> (roslisp-msg-protocol:ros-message)
  ((timestamp
    :reader timestamp
    :initarg :timestamp
    :type cl:float
    :initform 0.0)
   (stop
    :reader stop
    :initarg :stop
    :type cl:boolean
    :initform cl:nil)
   (speed
    :reader speed
    :initarg :speed
    :type cl:boolean
    :initform cl:nil)
   (maxspeed
    :reader maxspeed
    :initarg :maxspeed
    :type cl:float
    :initform 0.0)
   (process_time
    :reader process_time
    :initarg :process_time
    :type cl:float
    :initform 0.0)
   (lanechange_flag
    :reader lanechange_flag
    :initarg :lanechange_flag
    :type cl:float
    :initform 0.0))
)

(cl:defclass CarDecisionInterface (<CarDecisionInterface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CarDecisionInterface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CarDecisionInterface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<CarDecisionInterface> is deprecated: use car_interfaces-msg:CarDecisionInterface instead.")))

(cl:ensure-generic-function 'timestamp-val :lambda-list '(m))
(cl:defmethod timestamp-val ((m <CarDecisionInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:timestamp-val is deprecated.  Use car_interfaces-msg:timestamp instead.")
  (timestamp m))

(cl:ensure-generic-function 'stop-val :lambda-list '(m))
(cl:defmethod stop-val ((m <CarDecisionInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:stop-val is deprecated.  Use car_interfaces-msg:stop instead.")
  (stop m))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <CarDecisionInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:speed-val is deprecated.  Use car_interfaces-msg:speed instead.")
  (speed m))

(cl:ensure-generic-function 'maxspeed-val :lambda-list '(m))
(cl:defmethod maxspeed-val ((m <CarDecisionInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:maxspeed-val is deprecated.  Use car_interfaces-msg:maxspeed instead.")
  (maxspeed m))

(cl:ensure-generic-function 'process_time-val :lambda-list '(m))
(cl:defmethod process_time-val ((m <CarDecisionInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:process_time-val is deprecated.  Use car_interfaces-msg:process_time instead.")
  (process_time m))

(cl:ensure-generic-function 'lanechange_flag-val :lambda-list '(m))
(cl:defmethod lanechange_flag-val ((m <CarDecisionInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:lanechange_flag-val is deprecated.  Use car_interfaces-msg:lanechange_flag instead.")
  (lanechange_flag m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CarDecisionInterface>) ostream)
  "Serializes a message object of type '<CarDecisionInterface>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'timestamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'stop) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'speed) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'maxspeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'process_time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'lanechange_flag))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CarDecisionInterface>) istream)
  "Deserializes a message object of type '<CarDecisionInterface>"
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
    (cl:setf (cl:slot-value msg 'stop) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'speed) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'maxspeed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'process_time) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lanechange_flag) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CarDecisionInterface>)))
  "Returns string type for a message object of type '<CarDecisionInterface>"
  "car_interfaces/CarDecisionInterface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CarDecisionInterface)))
  "Returns string type for a message object of type 'CarDecisionInterface"
  "car_interfaces/CarDecisionInterface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CarDecisionInterface>)))
  "Returns md5sum for a message object of type '<CarDecisionInterface>"
  "2ba1499a3ce71d6f0ce03ca3012beede")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CarDecisionInterface)))
  "Returns md5sum for a message object of type 'CarDecisionInterface"
  "2ba1499a3ce71d6f0ce03ca3012beede")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CarDecisionInterface>)))
  "Returns full string definition for message of type '<CarDecisionInterface>"
  (cl:format cl:nil "float64  timestamp   #数据时间戳~%bool   stop   #是否停车，0继续前进，1停车（判断依据：障碍物位置）~%bool  speed   #是否限速，0否，1是~%float32  maxspeed    # 路段限速最大速度，单位为m/s（依据：限速标识）~%float32  process_time    # 进程处理时间~%float32 lanechange_flag   # 0 – 不换道， 1 – 又换道， 2- 左换道~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CarDecisionInterface)))
  "Returns full string definition for message of type 'CarDecisionInterface"
  (cl:format cl:nil "float64  timestamp   #数据时间戳~%bool   stop   #是否停车，0继续前进，1停车（判断依据：障碍物位置）~%bool  speed   #是否限速，0否，1是~%float32  maxspeed    # 路段限速最大速度，单位为m/s（依据：限速标识）~%float32  process_time    # 进程处理时间~%float32 lanechange_flag   # 0 – 不换道， 1 – 又换道， 2- 左换道~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CarDecisionInterface>))
  (cl:+ 0
     8
     1
     1
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CarDecisionInterface>))
  "Converts a ROS message object to a list"
  (cl:list 'CarDecisionInterface
    (cl:cons ':timestamp (timestamp msg))
    (cl:cons ':stop (stop msg))
    (cl:cons ':speed (speed msg))
    (cl:cons ':maxspeed (maxspeed msg))
    (cl:cons ':process_time (process_time msg))
    (cl:cons ':lanechange_flag (lanechange_flag msg))
))
