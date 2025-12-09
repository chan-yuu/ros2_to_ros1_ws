;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::Yolov5DetectionInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'Yolov5DetectionInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::YOLOV5DETECTIONINTERFACE")
  (make-package "CAR_INTERFACES::YOLOV5DETECTIONINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude Yolov5DetectionInterface.msg.html


(defclass car_interfaces::Yolov5DetectionInterface
  :super ros::object
  :slots (_timestamp _bbox _conf _class_id _mask _tray_degree _tray_distance _tray_height _tray_x _tray_y _tray_z _tray_yaw ))

(defmethod car_interfaces::Yolov5DetectionInterface
  (:init
   (&key
    ((:timestamp __timestamp) 0.0)
    ((:bbox __bbox) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:conf __conf) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:class_id __class_id) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:mask __mask) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:tray_degree __tray_degree) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:tray_distance __tray_distance) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:tray_height __tray_height) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:tray_x __tray_x) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:tray_y __tray_y) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:tray_z __tray_z) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:tray_yaw __tray_yaw) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _timestamp (float __timestamp))
   (setq _bbox __bbox)
   (setq _conf __conf)
   (setq _class_id __class_id)
   (setq _mask __mask)
   (setq _tray_degree __tray_degree)
   (setq _tray_distance __tray_distance)
   (setq _tray_height __tray_height)
   (setq _tray_x __tray_x)
   (setq _tray_y __tray_y)
   (setq _tray_z __tray_z)
   (setq _tray_yaw __tray_yaw)
   self)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:bbox
   (&optional __bbox)
   (if __bbox (setq _bbox __bbox)) _bbox)
  (:conf
   (&optional __conf)
   (if __conf (setq _conf __conf)) _conf)
  (:class_id
   (&optional __class_id)
   (if __class_id (setq _class_id __class_id)) _class_id)
  (:mask
   (&optional __mask)
   (if __mask (setq _mask __mask)) _mask)
  (:tray_degree
   (&optional __tray_degree)
   (if __tray_degree (setq _tray_degree __tray_degree)) _tray_degree)
  (:tray_distance
   (&optional __tray_distance)
   (if __tray_distance (setq _tray_distance __tray_distance)) _tray_distance)
  (:tray_height
   (&optional __tray_height)
   (if __tray_height (setq _tray_height __tray_height)) _tray_height)
  (:tray_x
   (&optional __tray_x)
   (if __tray_x (setq _tray_x __tray_x)) _tray_x)
  (:tray_y
   (&optional __tray_y)
   (if __tray_y (setq _tray_y __tray_y)) _tray_y)
  (:tray_z
   (&optional __tray_z)
   (if __tray_z (setq _tray_z __tray_z)) _tray_z)
  (:tray_yaw
   (&optional __tray_yaw)
   (if __tray_yaw (setq _tray_yaw __tray_yaw)) _tray_yaw)
  (:serialization-length
   ()
   (+
    ;; float64 _timestamp
    8
    ;; float32[] _bbox
    (* 4    (length _bbox)) 4
    ;; float32[] _conf
    (* 4    (length _conf)) 4
    ;; float32[] _class_id
    (* 4    (length _class_id)) 4
    ;; float32[] _mask
    (* 4    (length _mask)) 4
    ;; float32[] _tray_degree
    (* 4    (length _tray_degree)) 4
    ;; float32[] _tray_distance
    (* 4    (length _tray_distance)) 4
    ;; float32[] _tray_height
    (* 4    (length _tray_height)) 4
    ;; float32[] _tray_x
    (* 4    (length _tray_x)) 4
    ;; float32[] _tray_y
    (* 4    (length _tray_y)) 4
    ;; float32[] _tray_z
    (* 4    (length _tray_z)) 4
    ;; float32[] _tray_yaw
    (* 4    (length _tray_yaw)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _timestamp
       (sys::poke _timestamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float32[] _bbox
     (write-long (length _bbox) s)
     (dotimes (i (length _bbox))
       (sys::poke (elt _bbox i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _conf
     (write-long (length _conf) s)
     (dotimes (i (length _conf))
       (sys::poke (elt _conf i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _class_id
     (write-long (length _class_id) s)
     (dotimes (i (length _class_id))
       (sys::poke (elt _class_id i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _mask
     (write-long (length _mask) s)
     (dotimes (i (length _mask))
       (sys::poke (elt _mask i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _tray_degree
     (write-long (length _tray_degree) s)
     (dotimes (i (length _tray_degree))
       (sys::poke (elt _tray_degree i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _tray_distance
     (write-long (length _tray_distance) s)
     (dotimes (i (length _tray_distance))
       (sys::poke (elt _tray_distance i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _tray_height
     (write-long (length _tray_height) s)
     (dotimes (i (length _tray_height))
       (sys::poke (elt _tray_height i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _tray_x
     (write-long (length _tray_x) s)
     (dotimes (i (length _tray_x))
       (sys::poke (elt _tray_x i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _tray_y
     (write-long (length _tray_y) s)
     (dotimes (i (length _tray_y))
       (sys::poke (elt _tray_y i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _tray_z
     (write-long (length _tray_z) s)
     (dotimes (i (length _tray_z))
       (sys::poke (elt _tray_z i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _tray_yaw
     (write-long (length _tray_yaw) s)
     (dotimes (i (length _tray_yaw))
       (sys::poke (elt _tray_yaw i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _timestamp
     (setq _timestamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float32[] _bbox
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _bbox (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _bbox i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _conf
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _conf (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _conf i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _class_id
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _class_id (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _class_id i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _mask
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _mask (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _mask i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _tray_degree
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tray_degree (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _tray_degree i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _tray_distance
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tray_distance (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _tray_distance i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _tray_height
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tray_height (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _tray_height i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _tray_x
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tray_x (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _tray_x i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _tray_y
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tray_y (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _tray_y i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _tray_z
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tray_z (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _tray_z i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _tray_yaw
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tray_yaw (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _tray_yaw i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get car_interfaces::Yolov5DetectionInterface :md5sum-) "2ee1970563c4a57e5269f962cf6b7df0")
(setf (get car_interfaces::Yolov5DetectionInterface :datatype-) "car_interfaces/Yolov5DetectionInterface")
(setf (get car_interfaces::Yolov5DetectionInterface :definition-)
      "float64  timestamp     # 数据帧时间戳
#std_msgs/Header header   后续加入 坐标系信息
float32[] bbox   	# 4 个一组    
float32[] conf		# 1 个一组
float32[] class_id	# 1
float32[] mask		# 32

float32[] tray_degree
float32[] tray_distance
float32[] tray_height

float32[] tray_x
float32[] tray_y
float32[] tray_z
float32[] tray_yaw
")



(provide :car_interfaces/Yolov5DetectionInterface "2ee1970563c4a57e5269f962cf6b7df0")


