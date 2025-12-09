;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::GpsImuAddInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'GpsImuAddInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::GPSIMUADDINTERFACE")
  (make-package "CAR_INTERFACES::GPSIMUADDINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude GpsImuAddInterface.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass car_interfaces::GpsImuAddInterface
  :super ros::object
  :slots (_header _gps_time _AngRateRawX _AngRateRawY _AngRateRawZ _AccelRawX _AccelRawY _AccelRawZ _PosESigma _PosNSigma _PosUSigma _VelESigma _VelNSigma _VelUSigma _VelSigma _AccelX _AccelY _AccelZ _AngleHeadingSigma _AnglePitchSigma _AngleRollSigma _AngRateX _AngRateY _AngRateZ _GpsNumSats2Used _GpsNumSats _GpsNumSats2 _Rear_posX _Rear_posY _Rear_posZ _process_time ))

(defmethod car_interfaces::GpsImuAddInterface
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:gps_time __gps_time) 0)
    ((:AngRateRawX __AngRateRawX) 0.0)
    ((:AngRateRawY __AngRateRawY) 0.0)
    ((:AngRateRawZ __AngRateRawZ) 0.0)
    ((:AccelRawX __AccelRawX) 0.0)
    ((:AccelRawY __AccelRawY) 0.0)
    ((:AccelRawZ __AccelRawZ) 0.0)
    ((:PosESigma __PosESigma) 0.0)
    ((:PosNSigma __PosNSigma) 0.0)
    ((:PosUSigma __PosUSigma) 0.0)
    ((:VelESigma __VelESigma) 0.0)
    ((:VelNSigma __VelNSigma) 0.0)
    ((:VelUSigma __VelUSigma) 0.0)
    ((:VelSigma __VelSigma) 0.0)
    ((:AccelX __AccelX) 0.0)
    ((:AccelY __AccelY) 0.0)
    ((:AccelZ __AccelZ) 0.0)
    ((:AngleHeadingSigma __AngleHeadingSigma) 0.0)
    ((:AnglePitchSigma __AnglePitchSigma) 0.0)
    ((:AngleRollSigma __AngleRollSigma) 0.0)
    ((:AngRateX __AngRateX) 0.0)
    ((:AngRateY __AngRateY) 0.0)
    ((:AngRateZ __AngRateZ) 0.0)
    ((:GpsNumSats2Used __GpsNumSats2Used) 0)
    ((:GpsNumSats __GpsNumSats) 0)
    ((:GpsNumSats2 __GpsNumSats2) 0)
    ((:Rear_posX __Rear_posX) 0.0)
    ((:Rear_posY __Rear_posY) 0.0)
    ((:Rear_posZ __Rear_posZ) 0.0)
    ((:process_time __process_time) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _gps_time (round __gps_time))
   (setq _AngRateRawX (float __AngRateRawX))
   (setq _AngRateRawY (float __AngRateRawY))
   (setq _AngRateRawZ (float __AngRateRawZ))
   (setq _AccelRawX (float __AccelRawX))
   (setq _AccelRawY (float __AccelRawY))
   (setq _AccelRawZ (float __AccelRawZ))
   (setq _PosESigma (float __PosESigma))
   (setq _PosNSigma (float __PosNSigma))
   (setq _PosUSigma (float __PosUSigma))
   (setq _VelESigma (float __VelESigma))
   (setq _VelNSigma (float __VelNSigma))
   (setq _VelUSigma (float __VelUSigma))
   (setq _VelSigma (float __VelSigma))
   (setq _AccelX (float __AccelX))
   (setq _AccelY (float __AccelY))
   (setq _AccelZ (float __AccelZ))
   (setq _AngleHeadingSigma (float __AngleHeadingSigma))
   (setq _AnglePitchSigma (float __AnglePitchSigma))
   (setq _AngleRollSigma (float __AngleRollSigma))
   (setq _AngRateX (float __AngRateX))
   (setq _AngRateY (float __AngRateY))
   (setq _AngRateZ (float __AngRateZ))
   (setq _GpsNumSats2Used (round __GpsNumSats2Used))
   (setq _GpsNumSats (round __GpsNumSats))
   (setq _GpsNumSats2 (round __GpsNumSats2))
   (setq _Rear_posX (float __Rear_posX))
   (setq _Rear_posY (float __Rear_posY))
   (setq _Rear_posZ (float __Rear_posZ))
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
  (:AngRateRawX
   (&optional __AngRateRawX)
   (if __AngRateRawX (setq _AngRateRawX __AngRateRawX)) _AngRateRawX)
  (:AngRateRawY
   (&optional __AngRateRawY)
   (if __AngRateRawY (setq _AngRateRawY __AngRateRawY)) _AngRateRawY)
  (:AngRateRawZ
   (&optional __AngRateRawZ)
   (if __AngRateRawZ (setq _AngRateRawZ __AngRateRawZ)) _AngRateRawZ)
  (:AccelRawX
   (&optional __AccelRawX)
   (if __AccelRawX (setq _AccelRawX __AccelRawX)) _AccelRawX)
  (:AccelRawY
   (&optional __AccelRawY)
   (if __AccelRawY (setq _AccelRawY __AccelRawY)) _AccelRawY)
  (:AccelRawZ
   (&optional __AccelRawZ)
   (if __AccelRawZ (setq _AccelRawZ __AccelRawZ)) _AccelRawZ)
  (:PosESigma
   (&optional __PosESigma)
   (if __PosESigma (setq _PosESigma __PosESigma)) _PosESigma)
  (:PosNSigma
   (&optional __PosNSigma)
   (if __PosNSigma (setq _PosNSigma __PosNSigma)) _PosNSigma)
  (:PosUSigma
   (&optional __PosUSigma)
   (if __PosUSigma (setq _PosUSigma __PosUSigma)) _PosUSigma)
  (:VelESigma
   (&optional __VelESigma)
   (if __VelESigma (setq _VelESigma __VelESigma)) _VelESigma)
  (:VelNSigma
   (&optional __VelNSigma)
   (if __VelNSigma (setq _VelNSigma __VelNSigma)) _VelNSigma)
  (:VelUSigma
   (&optional __VelUSigma)
   (if __VelUSigma (setq _VelUSigma __VelUSigma)) _VelUSigma)
  (:VelSigma
   (&optional __VelSigma)
   (if __VelSigma (setq _VelSigma __VelSigma)) _VelSigma)
  (:AccelX
   (&optional __AccelX)
   (if __AccelX (setq _AccelX __AccelX)) _AccelX)
  (:AccelY
   (&optional __AccelY)
   (if __AccelY (setq _AccelY __AccelY)) _AccelY)
  (:AccelZ
   (&optional __AccelZ)
   (if __AccelZ (setq _AccelZ __AccelZ)) _AccelZ)
  (:AngleHeadingSigma
   (&optional __AngleHeadingSigma)
   (if __AngleHeadingSigma (setq _AngleHeadingSigma __AngleHeadingSigma)) _AngleHeadingSigma)
  (:AnglePitchSigma
   (&optional __AnglePitchSigma)
   (if __AnglePitchSigma (setq _AnglePitchSigma __AnglePitchSigma)) _AnglePitchSigma)
  (:AngleRollSigma
   (&optional __AngleRollSigma)
   (if __AngleRollSigma (setq _AngleRollSigma __AngleRollSigma)) _AngleRollSigma)
  (:AngRateX
   (&optional __AngRateX)
   (if __AngRateX (setq _AngRateX __AngRateX)) _AngRateX)
  (:AngRateY
   (&optional __AngRateY)
   (if __AngRateY (setq _AngRateY __AngRateY)) _AngRateY)
  (:AngRateZ
   (&optional __AngRateZ)
   (if __AngRateZ (setq _AngRateZ __AngRateZ)) _AngRateZ)
  (:GpsNumSats2Used
   (&optional __GpsNumSats2Used)
   (if __GpsNumSats2Used (setq _GpsNumSats2Used __GpsNumSats2Used)) _GpsNumSats2Used)
  (:GpsNumSats
   (&optional __GpsNumSats)
   (if __GpsNumSats (setq _GpsNumSats __GpsNumSats)) _GpsNumSats)
  (:GpsNumSats2
   (&optional __GpsNumSats2)
   (if __GpsNumSats2 (setq _GpsNumSats2 __GpsNumSats2)) _GpsNumSats2)
  (:Rear_posX
   (&optional __Rear_posX)
   (if __Rear_posX (setq _Rear_posX __Rear_posX)) _Rear_posX)
  (:Rear_posY
   (&optional __Rear_posY)
   (if __Rear_posY (setq _Rear_posY __Rear_posY)) _Rear_posY)
  (:Rear_posZ
   (&optional __Rear_posZ)
   (if __Rear_posZ (setq _Rear_posZ __Rear_posZ)) _Rear_posZ)
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
    ;; float64 _AngRateRawX
    8
    ;; float64 _AngRateRawY
    8
    ;; float64 _AngRateRawZ
    8
    ;; float64 _AccelRawX
    8
    ;; float64 _AccelRawY
    8
    ;; float64 _AccelRawZ
    8
    ;; float64 _PosESigma
    8
    ;; float64 _PosNSigma
    8
    ;; float64 _PosUSigma
    8
    ;; float64 _VelESigma
    8
    ;; float64 _VelNSigma
    8
    ;; float64 _VelUSigma
    8
    ;; float64 _VelSigma
    8
    ;; float64 _AccelX
    8
    ;; float64 _AccelY
    8
    ;; float64 _AccelZ
    8
    ;; float64 _AngleHeadingSigma
    8
    ;; float64 _AnglePitchSigma
    8
    ;; float64 _AngleRollSigma
    8
    ;; float64 _AngRateX
    8
    ;; float64 _AngRateY
    8
    ;; float64 _AngRateZ
    8
    ;; int32 _GpsNumSats2Used
    4
    ;; int32 _GpsNumSats
    4
    ;; int32 _GpsNumSats2
    4
    ;; float64 _Rear_posX
    8
    ;; float64 _Rear_posY
    8
    ;; float64 _Rear_posZ
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
     ;; float64 _AngRateRawX
       (sys::poke _AngRateRawX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngRateRawY
       (sys::poke _AngRateRawY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngRateRawZ
       (sys::poke _AngRateRawZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelRawX
       (sys::poke _AccelRawX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelRawY
       (sys::poke _AccelRawY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelRawZ
       (sys::poke _AccelRawZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PosESigma
       (sys::poke _PosESigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PosNSigma
       (sys::poke _PosNSigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PosUSigma
       (sys::poke _PosUSigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _VelESigma
       (sys::poke _VelESigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _VelNSigma
       (sys::poke _VelNSigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _VelUSigma
       (sys::poke _VelUSigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _VelSigma
       (sys::poke _VelSigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelX
       (sys::poke _AccelX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelY
       (sys::poke _AccelY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AccelZ
       (sys::poke _AccelZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngleHeadingSigma
       (sys::poke _AngleHeadingSigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AnglePitchSigma
       (sys::poke _AnglePitchSigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngleRollSigma
       (sys::poke _AngleRollSigma (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngRateX
       (sys::poke _AngRateX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngRateY
       (sys::poke _AngRateY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AngRateZ
       (sys::poke _AngRateZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int32 _GpsNumSats2Used
       (write-long _GpsNumSats2Used s)
     ;; int32 _GpsNumSats
       (write-long _GpsNumSats s)
     ;; int32 _GpsNumSats2
       (write-long _GpsNumSats2 s)
     ;; float64 _Rear_posX
       (sys::poke _Rear_posX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Rear_posY
       (sys::poke _Rear_posY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Rear_posZ
       (sys::poke _Rear_posZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
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
   ;; float64 _AngRateRawX
     (setq _AngRateRawX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngRateRawY
     (setq _AngRateRawY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngRateRawZ
     (setq _AngRateRawZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelRawX
     (setq _AccelRawX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelRawY
     (setq _AccelRawY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelRawZ
     (setq _AccelRawZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PosESigma
     (setq _PosESigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PosNSigma
     (setq _PosNSigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PosUSigma
     (setq _PosUSigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _VelESigma
     (setq _VelESigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _VelNSigma
     (setq _VelNSigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _VelUSigma
     (setq _VelUSigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _VelSigma
     (setq _VelSigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelX
     (setq _AccelX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelY
     (setq _AccelY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AccelZ
     (setq _AccelZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngleHeadingSigma
     (setq _AngleHeadingSigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AnglePitchSigma
     (setq _AnglePitchSigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngleRollSigma
     (setq _AngleRollSigma (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngRateX
     (setq _AngRateX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngRateY
     (setq _AngRateY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AngRateZ
     (setq _AngRateZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int32 _GpsNumSats2Used
     (setq _GpsNumSats2Used (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _GpsNumSats
     (setq _GpsNumSats (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _GpsNumSats2
     (setq _GpsNumSats2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _Rear_posX
     (setq _Rear_posX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Rear_posY
     (setq _Rear_posY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Rear_posZ
     (setq _Rear_posZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float32 _process_time
     (setq _process_time (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get car_interfaces::GpsImuAddInterface :md5sum-) "ccdf9c1baf49a9162649abaf0da4c464")
(setf (get car_interfaces::GpsImuAddInterface :datatype-) "car_interfaces/GpsImuAddInterface")
(setf (get car_interfaces::GpsImuAddInterface :definition-)
      "std_msgs/Header header       # ros时间戳
int64  gps_time              # 时间戳
float64  AngRateRawX         # 角速度x
float64  AngRateRawY         # 角速度y
float64  AngRateRawZ         # 角速度z
float64  AccelRawX             # x轴加速度
float64  AccelRawY             # y轴加速度
float64  AccelRawZ             # z轴加速度
float64 PosESigma           #东向位置标准差
float64 PosNSigma          #北向位置标准差
float64 PosUSigma          #天向位置标准差
float64  VelESigma         # 东向速度标准差
float64  VelNSigma        # 北向速度标准差
float64  VelUSigma        # 天向速度标准差
float64  VelSigma          # 车辆速度标准差
float64  AccelX         # 车辆坐标系x轴加速度
float64  AccelY         # 车辆坐标系y轴加速度
float64  AccelZ         # 车辆坐标系z轴加速度
float64  AngleHeadingSigma         # 偏航角标准差
float64  AnglePitchSigma        # 俯仰角标准差
float64  AngleRollSigma         # 横滚角标准差
float64  AngRateX                  # 车辆坐标系x轴角速度
float64  AngRateY                  # 车辆坐标系y轴角速度
float64  AngRateZ                  # 车辆坐标系z轴角速度
int32  GpsNumSats2Used      #辅天线使用卫星数
int32  GpsNumSats                #主天线搜星数
int32  GpsNumSats2              #副天线搜星数
float64 Rear_posX                  #后轴中心点UTM坐标x
float64 Rear_posY                  #后轴中心点UTM坐标y
float64 Rear_posZ                  #后轴中心点UTM坐标z
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



(provide :car_interfaces/GpsImuAddInterface "ccdf9c1baf49a9162649abaf0da4c464")


