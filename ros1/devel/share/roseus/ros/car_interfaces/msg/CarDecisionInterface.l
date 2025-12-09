;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::CarDecisionInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'CarDecisionInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::CARDECISIONINTERFACE")
  (make-package "CAR_INTERFACES::CARDECISIONINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude CarDecisionInterface.msg.html


(defclass car_interfaces::CarDecisionInterface
  :super ros::object
  :slots (_timestamp _stop _speed _maxspeed _process_time _lanechange_flag ))

(defmethod car_interfaces::CarDecisionInterface
  (:init
   (&key
    ((:timestamp __timestamp) 0.0)
    ((:stop __stop) nil)
    ((:speed __speed) nil)
    ((:maxspeed __maxspeed) 0.0)
    ((:process_time __process_time) 0.0)
    ((:lanechange_flag __lanechange_flag) 0.0)
    )
   (send-super :init)
   (setq _timestamp (float __timestamp))
   (setq _stop __stop)
   (setq _speed __speed)
   (setq _maxspeed (float __maxspeed))
   (setq _process_time (float __process_time))
   (setq _lanechange_flag (float __lanechange_flag))
   self)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:stop
   (&optional (__stop :null))
   (if (not (eq __stop :null)) (setq _stop __stop)) _stop)
  (:speed
   (&optional (__speed :null))
   (if (not (eq __speed :null)) (setq _speed __speed)) _speed)
  (:maxspeed
   (&optional __maxspeed)
   (if __maxspeed (setq _maxspeed __maxspeed)) _maxspeed)
  (:process_time
   (&optional __process_time)
   (if __process_time (setq _process_time __process_time)) _process_time)
  (:lanechange_flag
   (&optional __lanechange_flag)
   (if __lanechange_flag (setq _lanechange_flag __lanechange_flag)) _lanechange_flag)
  (:serialization-length
   ()
   (+
    ;; float64 _timestamp
    8
    ;; bool _stop
    1
    ;; bool _speed
    1
    ;; float32 _maxspeed
    4
    ;; float32 _process_time
    4
    ;; float32 _lanechange_flag
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _timestamp
       (sys::poke _timestamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; bool _stop
       (if _stop (write-byte -1 s) (write-byte 0 s))
     ;; bool _speed
       (if _speed (write-byte -1 s) (write-byte 0 s))
     ;; float32 _maxspeed
       (sys::poke _maxspeed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _process_time
       (sys::poke _process_time (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lanechange_flag
       (sys::poke _lanechange_flag (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _timestamp
     (setq _timestamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; bool _stop
     (setq _stop (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _speed
     (setq _speed (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float32 _maxspeed
     (setq _maxspeed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _process_time
     (setq _process_time (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lanechange_flag
     (setq _lanechange_flag (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get car_interfaces::CarDecisionInterface :md5sum-) "2ba1499a3ce71d6f0ce03ca3012beede")
(setf (get car_interfaces::CarDecisionInterface :datatype-) "car_interfaces/CarDecisionInterface")
(setf (get car_interfaces::CarDecisionInterface :definition-)
      "float64  timestamp   #数据时间戳
bool   stop   #是否停车，0继续前进，1停车（判断依据：障碍物位置）
bool  speed   #是否限速，0否，1是
float32  maxspeed    # 路段限速最大速度，单位为m/s（依据：限速标识）
float32  process_time    # 进程处理时间
float32 lanechange_flag   # 0 – 不换道， 1 – 又换道， 2- 左换道


")



(provide :car_interfaces/CarDecisionInterface "2ba1499a3ce71d6f0ce03ca3012beede")


