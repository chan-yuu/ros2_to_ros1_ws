; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude FaultDiagnosisInterface.msg.html

(cl:defclass <FaultDiagnosisInterface> (roslisp-msg-protocol:ros-message)
  ((lidar_state
    :reader lidar_state
    :initarg :lidar_state
    :type cl:fixnum
    :initform 0)
   (can_state
    :reader can_state
    :initarg :can_state
    :type cl:fixnum
    :initform 0)
   (gps_can_state
    :reader gps_can_state
    :initarg :gps_can_state
    :type cl:fixnum
    :initform 0)
   (gps_system_state
    :reader gps_system_state
    :initarg :gps_system_state
    :type cl:fixnum
    :initform 0)
   (camera_state
    :reader camera_state
    :initarg :camera_state
    :type cl:fixnum
    :initform 0)
   (internet_state
    :reader internet_state
    :initarg :internet_state
    :type cl:fixnum
    :initform 0)
   (v2n_state
    :reader v2n_state
    :initarg :v2n_state
    :type cl:fixnum
    :initform 0)
   (location_state
    :reader location_state
    :initarg :location_state
    :type cl:fixnum
    :initform 0)
   (sim_state
    :reader sim_state
    :initarg :sim_state
    :type cl:fixnum
    :initform 0))
)

(cl:defclass FaultDiagnosisInterface (<FaultDiagnosisInterface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FaultDiagnosisInterface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FaultDiagnosisInterface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<FaultDiagnosisInterface> is deprecated: use car_interfaces-msg:FaultDiagnosisInterface instead.")))

(cl:ensure-generic-function 'lidar_state-val :lambda-list '(m))
(cl:defmethod lidar_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:lidar_state-val is deprecated.  Use car_interfaces-msg:lidar_state instead.")
  (lidar_state m))

(cl:ensure-generic-function 'can_state-val :lambda-list '(m))
(cl:defmethod can_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:can_state-val is deprecated.  Use car_interfaces-msg:can_state instead.")
  (can_state m))

(cl:ensure-generic-function 'gps_can_state-val :lambda-list '(m))
(cl:defmethod gps_can_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:gps_can_state-val is deprecated.  Use car_interfaces-msg:gps_can_state instead.")
  (gps_can_state m))

(cl:ensure-generic-function 'gps_system_state-val :lambda-list '(m))
(cl:defmethod gps_system_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:gps_system_state-val is deprecated.  Use car_interfaces-msg:gps_system_state instead.")
  (gps_system_state m))

(cl:ensure-generic-function 'camera_state-val :lambda-list '(m))
(cl:defmethod camera_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:camera_state-val is deprecated.  Use car_interfaces-msg:camera_state instead.")
  (camera_state m))

(cl:ensure-generic-function 'internet_state-val :lambda-list '(m))
(cl:defmethod internet_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:internet_state-val is deprecated.  Use car_interfaces-msg:internet_state instead.")
  (internet_state m))

(cl:ensure-generic-function 'v2n_state-val :lambda-list '(m))
(cl:defmethod v2n_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:v2n_state-val is deprecated.  Use car_interfaces-msg:v2n_state instead.")
  (v2n_state m))

(cl:ensure-generic-function 'location_state-val :lambda-list '(m))
(cl:defmethod location_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:location_state-val is deprecated.  Use car_interfaces-msg:location_state instead.")
  (location_state m))

(cl:ensure-generic-function 'sim_state-val :lambda-list '(m))
(cl:defmethod sim_state-val ((m <FaultDiagnosisInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:sim_state-val is deprecated.  Use car_interfaces-msg:sim_state instead.")
  (sim_state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FaultDiagnosisInterface>) ostream)
  "Serializes a message object of type '<FaultDiagnosisInterface>"
  (cl:let* ((signed (cl:slot-value msg 'lidar_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'can_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'gps_can_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'gps_system_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'camera_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'internet_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'v2n_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'location_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'sim_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FaultDiagnosisInterface>) istream)
  "Deserializes a message object of type '<FaultDiagnosisInterface>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'lidar_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'can_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'gps_can_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'gps_system_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'camera_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'internet_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'v2n_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'location_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'sim_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FaultDiagnosisInterface>)))
  "Returns string type for a message object of type '<FaultDiagnosisInterface>"
  "car_interfaces/FaultDiagnosisInterface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FaultDiagnosisInterface)))
  "Returns string type for a message object of type 'FaultDiagnosisInterface"
  "car_interfaces/FaultDiagnosisInterface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FaultDiagnosisInterface>)))
  "Returns md5sum for a message object of type '<FaultDiagnosisInterface>"
  "0acf205619b222615d838811655182ab")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FaultDiagnosisInterface)))
  "Returns md5sum for a message object of type 'FaultDiagnosisInterface"
  "0acf205619b222615d838811655182ab")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FaultDiagnosisInterface>)))
  "Returns full string definition for message of type '<FaultDiagnosisInterface>"
  (cl:format cl:nil "int8 lidar_state~%int8 can_state~%int8 gps_can_state~%int8 gps_system_state~%int8 camera_state~%int8 internet_state~%~%int8 v2n_state~%int8 location_state~%int8 sim_state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FaultDiagnosisInterface)))
  "Returns full string definition for message of type 'FaultDiagnosisInterface"
  (cl:format cl:nil "int8 lidar_state~%int8 can_state~%int8 gps_can_state~%int8 gps_system_state~%int8 camera_state~%int8 internet_state~%~%int8 v2n_state~%int8 location_state~%int8 sim_state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FaultDiagnosisInterface>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FaultDiagnosisInterface>))
  "Converts a ROS message object to a list"
  (cl:list 'FaultDiagnosisInterface
    (cl:cons ':lidar_state (lidar_state msg))
    (cl:cons ':can_state (can_state msg))
    (cl:cons ':gps_can_state (gps_can_state msg))
    (cl:cons ':gps_system_state (gps_system_state msg))
    (cl:cons ':camera_state (camera_state msg))
    (cl:cons ':internet_state (internet_state msg))
    (cl:cons ':v2n_state (v2n_state msg))
    (cl:cons ':location_state (location_state msg))
    (cl:cons ':sim_state (sim_state msg))
))
