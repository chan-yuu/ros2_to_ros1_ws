; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude GpsImuAddInterface.msg.html

(cl:defclass <GpsImuAddInterface> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (gps_time
    :reader gps_time
    :initarg :gps_time
    :type cl:integer
    :initform 0)
   (AngRateRawX
    :reader AngRateRawX
    :initarg :AngRateRawX
    :type cl:float
    :initform 0.0)
   (AngRateRawY
    :reader AngRateRawY
    :initarg :AngRateRawY
    :type cl:float
    :initform 0.0)
   (AngRateRawZ
    :reader AngRateRawZ
    :initarg :AngRateRawZ
    :type cl:float
    :initform 0.0)
   (AccelRawX
    :reader AccelRawX
    :initarg :AccelRawX
    :type cl:float
    :initform 0.0)
   (AccelRawY
    :reader AccelRawY
    :initarg :AccelRawY
    :type cl:float
    :initform 0.0)
   (AccelRawZ
    :reader AccelRawZ
    :initarg :AccelRawZ
    :type cl:float
    :initform 0.0)
   (PosESigma
    :reader PosESigma
    :initarg :PosESigma
    :type cl:float
    :initform 0.0)
   (PosNSigma
    :reader PosNSigma
    :initarg :PosNSigma
    :type cl:float
    :initform 0.0)
   (PosUSigma
    :reader PosUSigma
    :initarg :PosUSigma
    :type cl:float
    :initform 0.0)
   (VelESigma
    :reader VelESigma
    :initarg :VelESigma
    :type cl:float
    :initform 0.0)
   (VelNSigma
    :reader VelNSigma
    :initarg :VelNSigma
    :type cl:float
    :initform 0.0)
   (VelUSigma
    :reader VelUSigma
    :initarg :VelUSigma
    :type cl:float
    :initform 0.0)
   (VelSigma
    :reader VelSigma
    :initarg :VelSigma
    :type cl:float
    :initform 0.0)
   (AccelX
    :reader AccelX
    :initarg :AccelX
    :type cl:float
    :initform 0.0)
   (AccelY
    :reader AccelY
    :initarg :AccelY
    :type cl:float
    :initform 0.0)
   (AccelZ
    :reader AccelZ
    :initarg :AccelZ
    :type cl:float
    :initform 0.0)
   (AngleHeadingSigma
    :reader AngleHeadingSigma
    :initarg :AngleHeadingSigma
    :type cl:float
    :initform 0.0)
   (AnglePitchSigma
    :reader AnglePitchSigma
    :initarg :AnglePitchSigma
    :type cl:float
    :initform 0.0)
   (AngleRollSigma
    :reader AngleRollSigma
    :initarg :AngleRollSigma
    :type cl:float
    :initform 0.0)
   (AngRateX
    :reader AngRateX
    :initarg :AngRateX
    :type cl:float
    :initform 0.0)
   (AngRateY
    :reader AngRateY
    :initarg :AngRateY
    :type cl:float
    :initform 0.0)
   (AngRateZ
    :reader AngRateZ
    :initarg :AngRateZ
    :type cl:float
    :initform 0.0)
   (GpsNumSats2Used
    :reader GpsNumSats2Used
    :initarg :GpsNumSats2Used
    :type cl:integer
    :initform 0)
   (GpsNumSats
    :reader GpsNumSats
    :initarg :GpsNumSats
    :type cl:integer
    :initform 0)
   (GpsNumSats2
    :reader GpsNumSats2
    :initarg :GpsNumSats2
    :type cl:integer
    :initform 0)
   (Rear_posX
    :reader Rear_posX
    :initarg :Rear_posX
    :type cl:float
    :initform 0.0)
   (Rear_posY
    :reader Rear_posY
    :initarg :Rear_posY
    :type cl:float
    :initform 0.0)
   (Rear_posZ
    :reader Rear_posZ
    :initarg :Rear_posZ
    :type cl:float
    :initform 0.0)
   (process_time
    :reader process_time
    :initarg :process_time
    :type cl:float
    :initform 0.0))
)

(cl:defclass GpsImuAddInterface (<GpsImuAddInterface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GpsImuAddInterface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GpsImuAddInterface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<GpsImuAddInterface> is deprecated: use car_interfaces-msg:GpsImuAddInterface instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:header-val is deprecated.  Use car_interfaces-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'gps_time-val :lambda-list '(m))
(cl:defmethod gps_time-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:gps_time-val is deprecated.  Use car_interfaces-msg:gps_time instead.")
  (gps_time m))

(cl:ensure-generic-function 'AngRateRawX-val :lambda-list '(m))
(cl:defmethod AngRateRawX-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AngRateRawX-val is deprecated.  Use car_interfaces-msg:AngRateRawX instead.")
  (AngRateRawX m))

(cl:ensure-generic-function 'AngRateRawY-val :lambda-list '(m))
(cl:defmethod AngRateRawY-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AngRateRawY-val is deprecated.  Use car_interfaces-msg:AngRateRawY instead.")
  (AngRateRawY m))

(cl:ensure-generic-function 'AngRateRawZ-val :lambda-list '(m))
(cl:defmethod AngRateRawZ-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AngRateRawZ-val is deprecated.  Use car_interfaces-msg:AngRateRawZ instead.")
  (AngRateRawZ m))

(cl:ensure-generic-function 'AccelRawX-val :lambda-list '(m))
(cl:defmethod AccelRawX-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AccelRawX-val is deprecated.  Use car_interfaces-msg:AccelRawX instead.")
  (AccelRawX m))

(cl:ensure-generic-function 'AccelRawY-val :lambda-list '(m))
(cl:defmethod AccelRawY-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AccelRawY-val is deprecated.  Use car_interfaces-msg:AccelRawY instead.")
  (AccelRawY m))

(cl:ensure-generic-function 'AccelRawZ-val :lambda-list '(m))
(cl:defmethod AccelRawZ-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AccelRawZ-val is deprecated.  Use car_interfaces-msg:AccelRawZ instead.")
  (AccelRawZ m))

(cl:ensure-generic-function 'PosESigma-val :lambda-list '(m))
(cl:defmethod PosESigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:PosESigma-val is deprecated.  Use car_interfaces-msg:PosESigma instead.")
  (PosESigma m))

(cl:ensure-generic-function 'PosNSigma-val :lambda-list '(m))
(cl:defmethod PosNSigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:PosNSigma-val is deprecated.  Use car_interfaces-msg:PosNSigma instead.")
  (PosNSigma m))

(cl:ensure-generic-function 'PosUSigma-val :lambda-list '(m))
(cl:defmethod PosUSigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:PosUSigma-val is deprecated.  Use car_interfaces-msg:PosUSigma instead.")
  (PosUSigma m))

(cl:ensure-generic-function 'VelESigma-val :lambda-list '(m))
(cl:defmethod VelESigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:VelESigma-val is deprecated.  Use car_interfaces-msg:VelESigma instead.")
  (VelESigma m))

(cl:ensure-generic-function 'VelNSigma-val :lambda-list '(m))
(cl:defmethod VelNSigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:VelNSigma-val is deprecated.  Use car_interfaces-msg:VelNSigma instead.")
  (VelNSigma m))

(cl:ensure-generic-function 'VelUSigma-val :lambda-list '(m))
(cl:defmethod VelUSigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:VelUSigma-val is deprecated.  Use car_interfaces-msg:VelUSigma instead.")
  (VelUSigma m))

(cl:ensure-generic-function 'VelSigma-val :lambda-list '(m))
(cl:defmethod VelSigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:VelSigma-val is deprecated.  Use car_interfaces-msg:VelSigma instead.")
  (VelSigma m))

(cl:ensure-generic-function 'AccelX-val :lambda-list '(m))
(cl:defmethod AccelX-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AccelX-val is deprecated.  Use car_interfaces-msg:AccelX instead.")
  (AccelX m))

(cl:ensure-generic-function 'AccelY-val :lambda-list '(m))
(cl:defmethod AccelY-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AccelY-val is deprecated.  Use car_interfaces-msg:AccelY instead.")
  (AccelY m))

(cl:ensure-generic-function 'AccelZ-val :lambda-list '(m))
(cl:defmethod AccelZ-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AccelZ-val is deprecated.  Use car_interfaces-msg:AccelZ instead.")
  (AccelZ m))

(cl:ensure-generic-function 'AngleHeadingSigma-val :lambda-list '(m))
(cl:defmethod AngleHeadingSigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AngleHeadingSigma-val is deprecated.  Use car_interfaces-msg:AngleHeadingSigma instead.")
  (AngleHeadingSigma m))

(cl:ensure-generic-function 'AnglePitchSigma-val :lambda-list '(m))
(cl:defmethod AnglePitchSigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AnglePitchSigma-val is deprecated.  Use car_interfaces-msg:AnglePitchSigma instead.")
  (AnglePitchSigma m))

(cl:ensure-generic-function 'AngleRollSigma-val :lambda-list '(m))
(cl:defmethod AngleRollSigma-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AngleRollSigma-val is deprecated.  Use car_interfaces-msg:AngleRollSigma instead.")
  (AngleRollSigma m))

(cl:ensure-generic-function 'AngRateX-val :lambda-list '(m))
(cl:defmethod AngRateX-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AngRateX-val is deprecated.  Use car_interfaces-msg:AngRateX instead.")
  (AngRateX m))

(cl:ensure-generic-function 'AngRateY-val :lambda-list '(m))
(cl:defmethod AngRateY-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AngRateY-val is deprecated.  Use car_interfaces-msg:AngRateY instead.")
  (AngRateY m))

(cl:ensure-generic-function 'AngRateZ-val :lambda-list '(m))
(cl:defmethod AngRateZ-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:AngRateZ-val is deprecated.  Use car_interfaces-msg:AngRateZ instead.")
  (AngRateZ m))

(cl:ensure-generic-function 'GpsNumSats2Used-val :lambda-list '(m))
(cl:defmethod GpsNumSats2Used-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:GpsNumSats2Used-val is deprecated.  Use car_interfaces-msg:GpsNumSats2Used instead.")
  (GpsNumSats2Used m))

(cl:ensure-generic-function 'GpsNumSats-val :lambda-list '(m))
(cl:defmethod GpsNumSats-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:GpsNumSats-val is deprecated.  Use car_interfaces-msg:GpsNumSats instead.")
  (GpsNumSats m))

(cl:ensure-generic-function 'GpsNumSats2-val :lambda-list '(m))
(cl:defmethod GpsNumSats2-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:GpsNumSats2-val is deprecated.  Use car_interfaces-msg:GpsNumSats2 instead.")
  (GpsNumSats2 m))

(cl:ensure-generic-function 'Rear_posX-val :lambda-list '(m))
(cl:defmethod Rear_posX-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Rear_posX-val is deprecated.  Use car_interfaces-msg:Rear_posX instead.")
  (Rear_posX m))

(cl:ensure-generic-function 'Rear_posY-val :lambda-list '(m))
(cl:defmethod Rear_posY-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Rear_posY-val is deprecated.  Use car_interfaces-msg:Rear_posY instead.")
  (Rear_posY m))

(cl:ensure-generic-function 'Rear_posZ-val :lambda-list '(m))
(cl:defmethod Rear_posZ-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Rear_posZ-val is deprecated.  Use car_interfaces-msg:Rear_posZ instead.")
  (Rear_posZ m))

(cl:ensure-generic-function 'process_time-val :lambda-list '(m))
(cl:defmethod process_time-val ((m <GpsImuAddInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:process_time-val is deprecated.  Use car_interfaces-msg:process_time instead.")
  (process_time m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GpsImuAddInterface>) ostream)
  "Serializes a message object of type '<GpsImuAddInterface>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'gps_time)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AngRateRawX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AngRateRawY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AngRateRawZ))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AccelRawX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AccelRawY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AccelRawZ))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'PosESigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'PosNSigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'PosUSigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'VelESigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'VelNSigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'VelUSigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'VelSigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AccelX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AccelY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AccelZ))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AngleHeadingSigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AnglePitchSigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AngleRollSigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AngRateX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AngRateY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AngRateZ))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'GpsNumSats2Used)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'GpsNumSats)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'GpsNumSats2)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Rear_posX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Rear_posY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Rear_posZ))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'process_time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GpsImuAddInterface>) istream)
  "Deserializes a message object of type '<GpsImuAddInterface>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'gps_time) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AngRateRawX) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AngRateRawY) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AngRateRawZ) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AccelRawX) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AccelRawY) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AccelRawZ) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'PosESigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'PosNSigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'PosUSigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'VelESigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'VelNSigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'VelUSigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'VelSigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AccelX) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AccelY) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AccelZ) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AngleHeadingSigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AnglePitchSigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AngleRollSigma) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AngRateX) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AngRateY) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AngRateZ) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'GpsNumSats2Used) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'GpsNumSats) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'GpsNumSats2) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Rear_posX) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Rear_posY) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Rear_posZ) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'process_time) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GpsImuAddInterface>)))
  "Returns string type for a message object of type '<GpsImuAddInterface>"
  "car_interfaces/GpsImuAddInterface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GpsImuAddInterface)))
  "Returns string type for a message object of type 'GpsImuAddInterface"
  "car_interfaces/GpsImuAddInterface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GpsImuAddInterface>)))
  "Returns md5sum for a message object of type '<GpsImuAddInterface>"
  "ccdf9c1baf49a9162649abaf0da4c464")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GpsImuAddInterface)))
  "Returns md5sum for a message object of type 'GpsImuAddInterface"
  "ccdf9c1baf49a9162649abaf0da4c464")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GpsImuAddInterface>)))
  "Returns full string definition for message of type '<GpsImuAddInterface>"
  (cl:format cl:nil "std_msgs/Header header       # ros时间戳~%int64  gps_time              # 时间戳~%float64  AngRateRawX         # 角速度x~%float64  AngRateRawY         # 角速度y~%float64  AngRateRawZ         # 角速度z~%float64  AccelRawX             # x轴加速度~%float64  AccelRawY             # y轴加速度~%float64  AccelRawZ             # z轴加速度~%float64 PosESigma           #东向位置标准差~%float64 PosNSigma          #北向位置标准差~%float64 PosUSigma          #天向位置标准差~%float64  VelESigma         # 东向速度标准差~%float64  VelNSigma        # 北向速度标准差~%float64  VelUSigma        # 天向速度标准差~%float64  VelSigma          # 车辆速度标准差~%float64  AccelX         # 车辆坐标系x轴加速度~%float64  AccelY         # 车辆坐标系y轴加速度~%float64  AccelZ         # 车辆坐标系z轴加速度~%float64  AngleHeadingSigma         # 偏航角标准差~%float64  AnglePitchSigma        # 俯仰角标准差~%float64  AngleRollSigma         # 横滚角标准差~%float64  AngRateX                  # 车辆坐标系x轴角速度~%float64  AngRateY                  # 车辆坐标系y轴角速度~%float64  AngRateZ                  # 车辆坐标系z轴角速度~%int32  GpsNumSats2Used      #辅天线使用卫星数~%int32  GpsNumSats                #主天线搜星数~%int32  GpsNumSats2              #副天线搜星数~%float64 Rear_posX                  #后轴中心点UTM坐标x~%float64 Rear_posY                  #后轴中心点UTM坐标y~%float64 Rear_posZ                  #后轴中心点UTM坐标z~%float32  process_time    # 进程处理时间~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GpsImuAddInterface)))
  "Returns full string definition for message of type 'GpsImuAddInterface"
  (cl:format cl:nil "std_msgs/Header header       # ros时间戳~%int64  gps_time              # 时间戳~%float64  AngRateRawX         # 角速度x~%float64  AngRateRawY         # 角速度y~%float64  AngRateRawZ         # 角速度z~%float64  AccelRawX             # x轴加速度~%float64  AccelRawY             # y轴加速度~%float64  AccelRawZ             # z轴加速度~%float64 PosESigma           #东向位置标准差~%float64 PosNSigma          #北向位置标准差~%float64 PosUSigma          #天向位置标准差~%float64  VelESigma         # 东向速度标准差~%float64  VelNSigma        # 北向速度标准差~%float64  VelUSigma        # 天向速度标准差~%float64  VelSigma          # 车辆速度标准差~%float64  AccelX         # 车辆坐标系x轴加速度~%float64  AccelY         # 车辆坐标系y轴加速度~%float64  AccelZ         # 车辆坐标系z轴加速度~%float64  AngleHeadingSigma         # 偏航角标准差~%float64  AnglePitchSigma        # 俯仰角标准差~%float64  AngleRollSigma         # 横滚角标准差~%float64  AngRateX                  # 车辆坐标系x轴角速度~%float64  AngRateY                  # 车辆坐标系y轴角速度~%float64  AngRateZ                  # 车辆坐标系z轴角速度~%int32  GpsNumSats2Used      #辅天线使用卫星数~%int32  GpsNumSats                #主天线搜星数~%int32  GpsNumSats2              #副天线搜星数~%float64 Rear_posX                  #后轴中心点UTM坐标x~%float64 Rear_posY                  #后轴中心点UTM坐标y~%float64 Rear_posZ                  #后轴中心点UTM坐标z~%float32  process_time    # 进程处理时间~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GpsImuAddInterface>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     4
     4
     4
     8
     8
     8
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GpsImuAddInterface>))
  "Converts a ROS message object to a list"
  (cl:list 'GpsImuAddInterface
    (cl:cons ':header (header msg))
    (cl:cons ':gps_time (gps_time msg))
    (cl:cons ':AngRateRawX (AngRateRawX msg))
    (cl:cons ':AngRateRawY (AngRateRawY msg))
    (cl:cons ':AngRateRawZ (AngRateRawZ msg))
    (cl:cons ':AccelRawX (AccelRawX msg))
    (cl:cons ':AccelRawY (AccelRawY msg))
    (cl:cons ':AccelRawZ (AccelRawZ msg))
    (cl:cons ':PosESigma (PosESigma msg))
    (cl:cons ':PosNSigma (PosNSigma msg))
    (cl:cons ':PosUSigma (PosUSigma msg))
    (cl:cons ':VelESigma (VelESigma msg))
    (cl:cons ':VelNSigma (VelNSigma msg))
    (cl:cons ':VelUSigma (VelUSigma msg))
    (cl:cons ':VelSigma (VelSigma msg))
    (cl:cons ':AccelX (AccelX msg))
    (cl:cons ':AccelY (AccelY msg))
    (cl:cons ':AccelZ (AccelZ msg))
    (cl:cons ':AngleHeadingSigma (AngleHeadingSigma msg))
    (cl:cons ':AnglePitchSigma (AnglePitchSigma msg))
    (cl:cons ':AngleRollSigma (AngleRollSigma msg))
    (cl:cons ':AngRateX (AngRateX msg))
    (cl:cons ':AngRateY (AngRateY msg))
    (cl:cons ':AngRateZ (AngRateZ msg))
    (cl:cons ':GpsNumSats2Used (GpsNumSats2Used msg))
    (cl:cons ':GpsNumSats (GpsNumSats msg))
    (cl:cons ':GpsNumSats2 (GpsNumSats2 msg))
    (cl:cons ':Rear_posX (Rear_posX msg))
    (cl:cons ':Rear_posY (Rear_posY msg))
    (cl:cons ':Rear_posZ (Rear_posZ msg))
    (cl:cons ':process_time (process_time msg))
))
