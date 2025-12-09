;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::GpsImuInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'GpsImuInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::GPSIMUINTERFACE")
  (make-package "CAR_INTERFACES::GPSIMUINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude GpsImuInterface.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass car_interfaces::GpsImuInterface
  :super ros::object
  :slots (_nav_flag _x_acc _y_acc _x_gyro _y_gyro _z_acc _z_gyro _acc _gps_week _gps_ms _nav_flag_g _header _gps_time _PosLon _PosLat _PosAlt _lat_g _lon_g _east_speed_g _north_speed_g _up_speed_g _alt_g _heading_g _VelE _VelN _VelU _Vel _AngleHeading _AnglePitch _AngleRoll _system_state _GpsNumSatsUsed _satellite_status _GpsAge _state _posX _posY _posZ _process_time _Gps_Cfault _x _y _z _pitch _roll _yaw _vel _lat _lon _state_ndt ))

(defmethod car_interfaces::GpsImuInterface
  (:init
   (&key
    ((:nav_flag __nav_flag) "")
    ((:x_acc __x_acc) 0.0)
    ((:y_acc __y_acc) 0.0)
    ((:x_gyro __x_gyro) 0.0)
    ((:y_gyro __y_gyro) 0.0)
    ((:z_acc __z_acc) 0.0)
    ((:z_gyro __z_gyro) 0.0)
    ((:acc __acc) 0.0)
    ((:gps_week __gps_week) 0.0)
    ((:gps_ms __gps_ms) 0.0)
    ((:nav_flag_g __nav_flag_g) "")
    ((:header __header) (instance std_msgs::Header :init))
    ((:gps_time __gps_time) 0)
    ((:PosLon __PosLon) 0.0)
    ((:PosLat __PosLat) 0.0)
    ((:PosAlt __PosAlt) 0.0)
    ((:lat_g __lat_g) 0.0)
    ((:lon_g __lon_g) 0.0)
    ((:east_speed_g __east_speed_g) 0.0)
    ((:north_speed_g __north_speed_g) 0.0)
    ((:up_speed_g __up_speed_g) 0.0)
    ((:alt_g __alt_g) 0.0)
    ((:heading_g __heading_g) 0.0)
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
    ((:Gps_Cfault __Gps_Cfault) nil)
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    ((:pitch __pitch) 0.0)
    ((:roll __roll) 0.0)
    ((:yaw __yaw) 0.0)
    ((:vel __vel) 0.0)
    ((:lat __lat) 0.0)
    ((:lon __lon) 0.0)
    ((:state_ndt __state_ndt) nil)
    )
   (send-super :init)
   (setq _nav_flag (string __nav_flag))
   (setq _x_acc (float __x_acc))
   (setq _y_acc (float __y_acc))
   (setq _x_gyro (float __x_gyro))
   (setq _y_gyro (float __y_gyro))
   (setq _z_acc (float __z_acc))
   (setq _z_gyro (float __z_gyro))
   (setq _acc (float __acc))
   (setq _gps_week (float __gps_week))
   (setq _gps_ms (float __gps_ms))
   (setq _nav_flag_g (string __nav_flag_g))
   (setq _header __header)
   (setq _gps_time (round __gps_time))
   (setq _PosLon (float __PosLon))
   (setq _PosLat (float __PosLat))
   (setq _PosAlt (float __PosAlt))
   (setq _lat_g (float __lat_g))
   (setq _lon_g (float __lon_g))
   (setq _east_speed_g (float __east_speed_g))
   (setq _north_speed_g (float __north_speed_g))
   (setq _up_speed_g (float __up_speed_g))
   (setq _alt_g (float __alt_g))
   (setq _heading_g (float __heading_g))
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
   (setq _Gps_Cfault __Gps_Cfault)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   (setq _pitch (float __pitch))
   (setq _roll (float __roll))
   (setq _yaw (float __yaw))
   (setq _vel (float __vel))
   (setq _lat (float __lat))
   (setq _lon (float __lon))
   (setq _state_ndt __state_ndt)
   self)
  (:nav_flag
   (&optional __nav_flag)
   (if __nav_flag (setq _nav_flag __nav_flag)) _nav_flag)
  (:x_acc
   (&optional __x_acc)
   (if __x_acc (setq _x_acc __x_acc)) _x_acc)
  (:y_acc
   (&optional __y_acc)
   (if __y_acc (setq _y_acc __y_acc)) _y_acc)
  (:x_gyro
   (&optional __x_gyro)
   (if __x_gyro (setq _x_gyro __x_gyro)) _x_gyro)
  (:y_gyro
   (&optional __y_gyro)
   (if __y_gyro (setq _y_gyro __y_gyro)) _y_gyro)
  (:z_acc
   (&optional __z_acc)
   (if __z_acc (setq _z_acc __z_acc)) _z_acc)
  (:z_gyro
   (&optional __z_gyro)
   (if __z_gyro (setq _z_gyro __z_gyro)) _z_gyro)
  (:acc
   (&optional __acc)
   (if __acc (setq _acc __acc)) _acc)
  (:gps_week
   (&optional __gps_week)
   (if __gps_week (setq _gps_week __gps_week)) _gps_week)
  (:gps_ms
   (&optional __gps_ms)
   (if __gps_ms (setq _gps_ms __gps_ms)) _gps_ms)
  (:nav_flag_g
   (&optional __nav_flag_g)
   (if __nav_flag_g (setq _nav_flag_g __nav_flag_g)) _nav_flag_g)
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
  (:lat_g
   (&optional __lat_g)
   (if __lat_g (setq _lat_g __lat_g)) _lat_g)
  (:lon_g
   (&optional __lon_g)
   (if __lon_g (setq _lon_g __lon_g)) _lon_g)
  (:east_speed_g
   (&optional __east_speed_g)
   (if __east_speed_g (setq _east_speed_g __east_speed_g)) _east_speed_g)
  (:north_speed_g
   (&optional __north_speed_g)
   (if __north_speed_g (setq _north_speed_g __north_speed_g)) _north_speed_g)
  (:up_speed_g
   (&optional __up_speed_g)
   (if __up_speed_g (setq _up_speed_g __up_speed_g)) _up_speed_g)
  (:alt_g
   (&optional __alt_g)
   (if __alt_g (setq _alt_g __alt_g)) _alt_g)
  (:heading_g
   (&optional __heading_g)
   (if __heading_g (setq _heading_g __heading_g)) _heading_g)
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
  (:Gps_Cfault
   (&optional (__Gps_Cfault :null))
   (if (not (eq __Gps_Cfault :null)) (setq _Gps_Cfault __Gps_Cfault)) _Gps_Cfault)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:z
   (&optional __z)
   (if __z (setq _z __z)) _z)
  (:pitch
   (&optional __pitch)
   (if __pitch (setq _pitch __pitch)) _pitch)
  (:roll
   (&optional __roll)
   (if __roll (setq _roll __roll)) _roll)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:vel
   (&optional __vel)
   (if __vel (setq _vel __vel)) _vel)
  (:lat
   (&optional __lat)
   (if __lat (setq _lat __lat)) _lat)
  (:lon
   (&optional __lon)
   (if __lon (setq _lon __lon)) _lon)
  (:state_ndt
   (&optional (__state_ndt :null))
   (if (not (eq __state_ndt :null)) (setq _state_ndt __state_ndt)) _state_ndt)
  (:serialization-length
   ()
   (+
    ;; string _nav_flag
    4 (length _nav_flag)
    ;; float64 _x_acc
    8
    ;; float64 _y_acc
    8
    ;; float64 _x_gyro
    8
    ;; float64 _y_gyro
    8
    ;; float64 _z_acc
    8
    ;; float64 _z_gyro
    8
    ;; float64 _acc
    8
    ;; float64 _gps_week
    8
    ;; float64 _gps_ms
    8
    ;; string _nav_flag_g
    4 (length _nav_flag_g)
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
    ;; float64 _lat_g
    8
    ;; float64 _lon_g
    8
    ;; float64 _east_speed_g
    8
    ;; float64 _north_speed_g
    8
    ;; float64 _up_speed_g
    8
    ;; float64 _alt_g
    8
    ;; float64 _heading_g
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
    ;; float64 _process_time
    8
    ;; bool _Gps_Cfault
    1
    ;; float64 _x
    8
    ;; float64 _y
    8
    ;; float64 _z
    8
    ;; float64 _pitch
    8
    ;; float64 _roll
    8
    ;; float64 _yaw
    8
    ;; float64 _vel
    8
    ;; float64 _lat
    8
    ;; float64 _lon
    8
    ;; bool _state_ndt
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _nav_flag
       (write-long (length _nav_flag) s) (princ _nav_flag s)
     ;; float64 _x_acc
       (sys::poke _x_acc (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y_acc
       (sys::poke _y_acc (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _x_gyro
       (sys::poke _x_gyro (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y_gyro
       (sys::poke _y_gyro (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _z_acc
       (sys::poke _z_acc (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _z_gyro
       (sys::poke _z_gyro (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _acc
       (sys::poke _acc (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _gps_week
       (sys::poke _gps_week (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _gps_ms
       (sys::poke _gps_ms (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; string _nav_flag_g
       (write-long (length _nav_flag_g) s) (princ _nav_flag_g s)
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
     ;; float64 _lat_g
       (sys::poke _lat_g (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lon_g
       (sys::poke _lon_g (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _east_speed_g
       (sys::poke _east_speed_g (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _north_speed_g
       (sys::poke _north_speed_g (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _up_speed_g
       (sys::poke _up_speed_g (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _alt_g
       (sys::poke _alt_g (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _heading_g
       (sys::poke _heading_g (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
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
     ;; float64 _process_time
       (sys::poke _process_time (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; bool _Gps_Cfault
       (if _Gps_Cfault (write-byte -1 s) (write-byte 0 s))
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _z
       (sys::poke _z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _pitch
       (sys::poke _pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _roll
       (sys::poke _roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _vel
       (sys::poke _vel (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lat
       (sys::poke _lat (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lon
       (sys::poke _lon (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; bool _state_ndt
       (if _state_ndt (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _nav_flag
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _nav_flag (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float64 _x_acc
     (setq _x_acc (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y_acc
     (setq _y_acc (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _x_gyro
     (setq _x_gyro (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y_gyro
     (setq _y_gyro (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _z_acc
     (setq _z_acc (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _z_gyro
     (setq _z_gyro (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _acc
     (setq _acc (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _gps_week
     (setq _gps_week (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _gps_ms
     (setq _gps_ms (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; string _nav_flag_g
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _nav_flag_g (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
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
   ;; float64 _lat_g
     (setq _lat_g (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lon_g
     (setq _lon_g (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _east_speed_g
     (setq _east_speed_g (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _north_speed_g
     (setq _north_speed_g (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _up_speed_g
     (setq _up_speed_g (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _alt_g
     (setq _alt_g (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _heading_g
     (setq _heading_g (sys::peek buf ptr- :double)) (incf ptr- 8)
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
   ;; float64 _process_time
     (setq _process_time (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; bool _Gps_Cfault
     (setq _Gps_Cfault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _z
     (setq _z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _pitch
     (setq _pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _roll
     (setq _roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _yaw
     (setq _yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _vel
     (setq _vel (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lat
     (setq _lat (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lon
     (setq _lon (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; bool _state_ndt
     (setq _state_ndt (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get car_interfaces::GpsImuInterface :md5sum-) "a9bc67efa4f7a3a9f25eb10a367521b4")
(setf (get car_interfaces::GpsImuInterface :datatype-) "car_interfaces/GpsImuInterface")
(setf (get car_interfaces::GpsImuInterface :definition-)
      "string nav_flag #定位无效-0  单点解-1  差分定位-2  RTK固定解-4  RTK浮点解-5 递推-6

float64 x_acc
float64 y_acc
float64 x_gyro
float64 y_gyro
float64 z_acc
float64 z_gyro

float64 acc
float64 gps_week
float64 gps_ms

string nav_flag_g #无效解	0
# #单点解	1
# #差分解	2
# #浮点解	5
# #窄固定解（narrow int）	4
# #其它固定解	7
# #ID:0X51B gnss航向
# float32 heading_g

std_msgs/Header header       # ros时间戳
int64  gps_time              #时间戳

float64  PosLon        # 经度
float64  PosLat         # 纬度
float64  PosAlt         # 高度

float64 lat_g
float64 lon_g

float64 east_speed_g
float64 north_speed_g
float64 up_speed_g
float64 alt_g
float64 heading_g

float64  VelE         # 东向速度
float64  VelN        # 北向速度
float64  VelU        # 天向速度
float64  Vel          # 车辆速度

float64  AngleHeading         # 偏航角（-180-180）  #需要这个范围
float64  AnglePitch        # 俯仰角（-90-90）
float64  AngleRoll         # 横滚角（-180-180）

int32  system_state                #惯导模式（0-初始化；1-卫导模式；2-组合导航模式；3-纯惯导模式）
int32  GpsNumSatsUsed         #主天线使用卫星数
int32  satellite_status              #卫星状态（0-不定位不定向；1-单点定位定向；   2-伪距差分定位定向；3-组合推算；4-RTK稳定解定位定向；5-RTK浮点解定位定向；6-单点定位不定向； 7-伪距差分定位不定向；8-RTK稳定解定位不定向；9-RTK浮点解定位不定向）
float64  GpsAge                     #差分延时
bool  state                      #设备状态（0-状态异常；1-状态正常）
float64 posX                    #定位点UTM坐标x
float64 posY                    #定位点UTM坐标y
float64 posZ # 高程
float64  process_time        #进程处理时间
bool Gps_Cfault  #惯导通信故障

# 带slam的相应的数据：
float64 x
float64 y
float64 z
float64 pitch
float64 roll
float64 yaw
float64 vel
float64 lat
float64 lon
bool state_ndt

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



(provide :car_interfaces/GpsImuInterface "a9bc67efa4f7a3a9f25eb10a367521b4")


