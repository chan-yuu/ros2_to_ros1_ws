;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::GpsImuRequisiteInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'GpsImuRequisiteInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::GPSIMUREQUISITEINTERFACE")
  (make-package "CAR_INTERFACES::GPSIMUREQUISITEINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude GpsImuRequisiteInterface.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass car_interfaces::GpsImuRequisiteInterface
  :super ros::object
  :slots (_header _gps_time _PosLon _PosLat _PosAlt _VelE _VelN _VelU _Vel _AngleHeading _AnglePitch _AngleRoll _system_state _GpsNumSatsUsed _satellite_status _GpsAge _state _posX _posY _posZ _process_time ))

(defmethod car_interfaces::GpsImuRequisiteInterface
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:gps_time __gps_time) 0)
    ((:PosLon __PosLon) 0.0)
    ((:PosLat __PosLat) 0.0)
    ((:PosAlt __PosAlt) 0.0)
    ((:VelE __VelE) 0.0)
    ((:VelN __VelN) 0.0)
    ((:VelU __VelU) 0.0)
    ((:Vel __Vel) 0.0)
    ((:AngleHeading __AngleHeading) 0.0)
    ((:AnglePitch __AnglePitch) 0.0)
    ((:AngleRoll __AngleRoll) 0.0)
    ((:system_state __system_state) 0)
    ((:GpsNumSatsUsed __GpsNumSatsUsed) 0)
    ((:satellite_status __satellite_status) 0)
    ((:GpsAge __GpsAge) 0.0)
    ((:state __state) nil)
    ((:posX __posX) 0.0)
    ((:posY __posY) 0.0)
    ((:posZ __posZ) 0.0)
    ((:process_time __process_time) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _gps_time (round __gps_time))
   (setq _PosLon (float __PosLon))
   (setq _PosLat (float __PosLat))
   (setq _PosAlt (float __PosAlt))
   (setq _VelE (float __VelE))
   (setq _VelN (float __VelN))
   (setq _VelU (float __VelU))
   (setq _Vel (float __Vel))
   (setq _AngleHeading (float __AngleHeading))
   (setq _AnglePitch (float __AnglePitch))
   (setq _AngleRoll (float __AngleRoll))
   (setq _system_state (round __system_state))
   (setq _GpsNumSatsUsed (round __GpsNumSatsUsed))
   (setq _satellite_status (round __satellite_status))
   (setq _GpsAge (float __GpsAge))
   (setq _state __state)
   (setq _posX (float __posX))
   (setq _posY (float __posY))
   (setq _posZ (float __posZ))
   (setq _process_time (float __process_time))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:gps_time
   (&optional __gps_time)
   (if __gps_time (setq _gps_time __gps_time)) _gps_time)
  (:PosLon
   (&optional __PosLon)
   (if __PosLon (setq _PosLon __PosLon)) _PosLon)
  (:PosLat
   (&optional __PosLat)
   (if __PosLat (setq _PosLat __PosLat)) _PosLat)
  (:PosAlt
   (&optional __PosAlt)
   (if __PosAlt (setq _PosAlt __PosAlt)) _PosAlt)
  (:VelE
   (&optional __VelE)
   (if __VelE (setq _VelE __VelE)) _VelE)
  (:VelN
   (&optional __VelN)
   (if __VelN (setq _VelN __VelN)) _VelN)
  (:VelU
   (&optional __VelU)
   (if __VelU (setq _VelU __VelU)) _VelU)
  (:Vel
   (&optional __Vel)
   (if __Vel (setq _Vel __Vel)) _Vel)
  (:AngleHeading
   (&optional __AngleHeading)
   (if __AngleHeading (setq _AngleHeading __AngleHeading)) _AngleHeading)
  (:AnglePitch
   (&optional __AnglePitch)
   (if __AnglePitch (setq _AnglePitch __AnglePitch)) _AnglePitch)
  (:AngleRoll
   (&optional __AngleRoll)
   (if __AngleRoll (setq _AngleRoll __AngleRoll)) _AngleRoll)
  (:system_state
   (&optional __system_state)
   (if __system_state (setq _system_state __system_state)) _system_state)
  (:GpsNumSatsUsed
   (&optional __GpsNumSatsUsed)
   (if __GpsNumSatsUsed (setq _GpsNumSatsUsed __GpsNumSatsUsed)) _GpsNumSatsUsed)
  (:satellite_status
   (&optional __satellite_status)
   (if __satellite_status (setq _satellite_status __satellite_status)) _satellite_status)
  (:GpsAge
   (&optional __GpsAge)
   (if __GpsAge (setq _GpsAge __GpsAge)) _GpsAge)
  (:state
   (&optional (__state :null))
   (if (not (eq __state :null)) (setq _state __state)) _state)
  (:posX
   (&optional __posX)
   (if __posX (setq _posX __posX)) _posX)
  (:posY
   (&optional __posY)
   (if __posY (setq _posY __posY)) _posY)
  (:posZ
   (&optional __posZ)
   (if __posZ (setq _posZ __posZ)) _posZ)
  (:process_time
   (&optional __process_time)
   (if __process_time (setq _process_time __process_time)) _process_time)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int64 _gps_time
    8
    ;; float64 _PosLon
    8
    ;; float64 _PosLat
    8
    ;; float64 _PosAlt
    8
    ;; float64 _VelE
    8
    ;; float64 _VelN
    8
    ;; float64 _VelU
    8
    ;; float64 _Vel
    8
    ;; float64 _AngleHeading
    8
    ;; float64 _AnglePitch
    8
    ;; float64 _AngleRoll
    8
    ;; int32 _system_state
    4
    ;; int32 _GpsNumSatsUsed
    4
    ;; int32 _satellite_status
    4
    ;; float64 _GpsAge
    8
    ;; bool _state
    1
    ;; float64 _posX
    8
    ;; float64 _posY
    8
    ;; float64 _posZ
    8
    ;; float32 _process_time
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int64 _gps_time
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _gps_time (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _gps_time) (= (length (_gps_time . bv)) 2)) ;; bignum
              (write-long (ash (elt (_gps_time . bv) 0) 0) s)
              (write-long (ash (elt (_gps_time . bv) 1) -1) s))
             ((and (class _gps_time) (= (length (_gps_time . bv)) 1)) ;; big1
              (write-long (elt (_gps_time . bv) 0) s)
              (write-long (if (>= _gps_time 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _gps_time s)(write-long (if (>= _gps_time 0) 0 #xffffffff) s)))
     ;; float64 _PosLon
       (sys::poke _PosLon (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PosLat
       (sys::poke _PosLat (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PosAlt
       (sys::poke _PosAlt (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _VelE
       (sys::poke _VelE (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _VelN
       (sys::poke _VelN (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _VelU
       (sys::poke _VelU (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Vel
       (sys::poke _Vel (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngleHeading
       (sys::poke _AngleHeading (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AnglePitch
       (sys::poke _AnglePitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngleRoll
       (sys::poke _AngleRoll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int32 _system_state
       (write-long _system_state s)
     ;; int32 _GpsNumSatsUsed
       (write-long _GpsNumSatsUsed s)
     ;; int32 _satellite_status
       (write-long _satellite_status s)
     ;; float64 _GpsAge
       (sys::poke _GpsAge (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; bool _state
       (if _state (write-byte -1 s) (write-byte 0 s))
     ;; float64 _posX
       (sys::poke _posX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _posY
       (sys::poke _posY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _posZ
       (sys::poke _posZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float32 _process_time
       (sys::poke _process_time (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int64 _gps_time
#+(or :alpha :irix6 :x86_64)
      (setf _gps_time (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _gps_time (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; float64 _PosLon
     (setq _PosLon (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PosLat
     (setq _PosLat (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PosAlt
     (setq _PosAlt (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _VelE
     (setq _VelE (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _VelN
     (setq _VelN (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _VelU
     (setq _VelU (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Vel
     (setq _Vel (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngleHeading
     (setq _AngleHeading (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AnglePitch
     (setq _AnglePitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngleRoll
     (setq _AngleRoll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int32 _system_state
     (setq _system_state (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _GpsNumSatsUsed
     (setq _GpsNumSatsUsed (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _satellite_status
     (setq _satellite_status (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _GpsAge
     (setq _GpsAge (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; bool _state
     (setq _state (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _posX
     (setq _posX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _posY
     (setq _posY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _posZ
     (setq _posZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float32 _process_time
     (setq _process_time (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get car_interfaces::GpsImuRequisiteInterface :md5sum-) "3baa1bde7021901f9f6bda65e20ca1be")
(setf (get car_interfaces::GpsImuRequisiteInterface :datatype-) "car_interfaces/GpsImuRequisiteInterface")
(setf (get car_interfaces::GpsImuRequisiteInterface :definition-)
      "std_msgs/Header header       # ros时间戳
int64  gps_time                      #时间戳
float64  PosLon        # 经度
float64  PosLat         # 纬度
float64  PosAlt         # 高度
float64  VelE         # 东向速度
float64  VelN        # 北向速度
float64  VelU        # 天向速度
float64  Vel          # 车辆速度

float64  AngleHeading         # 偏航角（-180-180）
float64  AnglePitch        # 俯仰角（-90-90）
float64  AngleRoll         # 横滚角（-180-180）

int32  system_state                #惯导模式（0-初始化；1-卫导模式；2-组合导航模式；3-纯惯导模式）
int32  GpsNumSatsUsed         #主天线使用卫星数
int32  satellite_status              #卫星状态（0-不定位不定向；1-单点定位定向；   2-伪距差分定位定向；3-组合推算；4-RTK稳定解定位定向；5-RTK浮点解定位定向；6-单点定位不定向； 7-伪距差分定位不定向；8-RTK稳定解定位不定向；9-RTK浮点解定位不定向）
float64  GpsAge                     #差分延时
bool  state                              #设备状态（0-状态异常；1-状态正常）
float64 posX                           #定位点UTM坐标x
float64 posY                           #定位点UTM坐标y
float64 posZ                           #定位点UTM坐标z
float32  process_time    # 进程处理时间


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

")



(provide :car_interfaces/GpsImuRequisiteInterface "3baa1bde7021901f9f6bda65e20ca1be")


