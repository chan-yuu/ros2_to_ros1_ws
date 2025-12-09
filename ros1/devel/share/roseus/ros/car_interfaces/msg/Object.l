;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::Object)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'Object (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::OBJECT")
  (make-package "CAR_INTERFACES::OBJECT"))

(in-package "ROS")
;;//! \htmlinclude Object.msg.html


(defclass car_interfaces::Object
  :super ros::object
  :slots (_conf _class_id _track_id _x _y _z _l_x _l_y _l_z _pitch _roll _yaw _degree _distance _height _target_width _target_height _left_boudary_point _right_boudary_point _top_boudary_point ))

(defmethod car_interfaces::Object
  (:init
   (&key
    ((:conf __conf) 0.0)
    ((:class_id __class_id) 0.0)
    ((:track_id __track_id) 0.0)
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    ((:l_x __l_x) 0.0)
    ((:l_y __l_y) 0.0)
    ((:l_z __l_z) 0.0)
    ((:pitch __pitch) 0.0)
    ((:roll __roll) 0.0)
    ((:yaw __yaw) 0.0)
    ((:degree __degree) 0.0)
    ((:distance __distance) 0.0)
    ((:height __height) 0.0)
    ((:target_width __target_width) 0.0)
    ((:target_height __target_height) 0.0)
    ((:left_boudary_point __left_boudary_point) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:right_boudary_point __right_boudary_point) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:top_boudary_point __top_boudary_point) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _conf (float __conf))
   (setq _class_id (float __class_id))
   (setq _track_id (float __track_id))
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   (setq _l_x (float __l_x))
   (setq _l_y (float __l_y))
   (setq _l_z (float __l_z))
   (setq _pitch (float __pitch))
   (setq _roll (float __roll))
   (setq _yaw (float __yaw))
   (setq _degree (float __degree))
   (setq _distance (float __distance))
   (setq _height (float __height))
   (setq _target_width (float __target_width))
   (setq _target_height (float __target_height))
   (setq _left_boudary_point __left_boudary_point)
   (setq _right_boudary_point __right_boudary_point)
   (setq _top_boudary_point __top_boudary_point)
   self)
  (:conf
   (&optional __conf)
   (if __conf (setq _conf __conf)) _conf)
  (:class_id
   (&optional __class_id)
   (if __class_id (setq _class_id __class_id)) _class_id)
  (:track_id
   (&optional __track_id)
   (if __track_id (setq _track_id __track_id)) _track_id)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:z
   (&optional __z)
   (if __z (setq _z __z)) _z)
  (:l_x
   (&optional __l_x)
   (if __l_x (setq _l_x __l_x)) _l_x)
  (:l_y
   (&optional __l_y)
   (if __l_y (setq _l_y __l_y)) _l_y)
  (:l_z
   (&optional __l_z)
   (if __l_z (setq _l_z __l_z)) _l_z)
  (:pitch
   (&optional __pitch)
   (if __pitch (setq _pitch __pitch)) _pitch)
  (:roll
   (&optional __roll)
   (if __roll (setq _roll __roll)) _roll)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:degree
   (&optional __degree)
   (if __degree (setq _degree __degree)) _degree)
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:target_width
   (&optional __target_width)
   (if __target_width (setq _target_width __target_width)) _target_width)
  (:target_height
   (&optional __target_height)
   (if __target_height (setq _target_height __target_height)) _target_height)
  (:left_boudary_point
   (&optional __left_boudary_point)
   (if __left_boudary_point (setq _left_boudary_point __left_boudary_point)) _left_boudary_point)
  (:right_boudary_point
   (&optional __right_boudary_point)
   (if __right_boudary_point (setq _right_boudary_point __right_boudary_point)) _right_boudary_point)
  (:top_boudary_point
   (&optional __top_boudary_point)
   (if __top_boudary_point (setq _top_boudary_point __top_boudary_point)) _top_boudary_point)
  (:serialization-length
   ()
   (+
    ;; float32 _conf
    4
    ;; float32 _class_id
    4
    ;; float32 _track_id
    4
    ;; float32 _x
    4
    ;; float32 _y
    4
    ;; float32 _z
    4
    ;; float32 _l_x
    4
    ;; float32 _l_y
    4
    ;; float32 _l_z
    4
    ;; float32 _pitch
    4
    ;; float32 _roll
    4
    ;; float32 _yaw
    4
    ;; float32 _degree
    4
    ;; float32 _distance
    4
    ;; float32 _height
    4
    ;; float32 _target_width
    4
    ;; float32 _target_height
    4
    ;; float32[] _left_boudary_point
    (* 4    (length _left_boudary_point)) 4
    ;; float32[] _right_boudary_point
    (* 4    (length _right_boudary_point)) 4
    ;; float32[] _top_boudary_point
    (* 4    (length _top_boudary_point)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _conf
       (sys::poke _conf (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _class_id
       (sys::poke _class_id (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _track_id
       (sys::poke _track_id (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _x
       (sys::poke _x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _y
       (sys::poke _y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _z
       (sys::poke _z (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _l_x
       (sys::poke _l_x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _l_y
       (sys::poke _l_y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _l_z
       (sys::poke _l_z (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _pitch
       (sys::poke _pitch (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _roll
       (sys::poke _roll (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _degree
       (sys::poke _degree (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _distance
       (sys::poke _distance (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _height
       (sys::poke _height (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _target_width
       (sys::poke _target_width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _target_height
       (sys::poke _target_height (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32[] _left_boudary_point
     (write-long (length _left_boudary_point) s)
     (dotimes (i (length _left_boudary_point))
       (sys::poke (elt _left_boudary_point i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _right_boudary_point
     (write-long (length _right_boudary_point) s)
     (dotimes (i (length _right_boudary_point))
       (sys::poke (elt _right_boudary_point i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _top_boudary_point
     (write-long (length _top_boudary_point) s)
     (dotimes (i (length _top_boudary_point))
       (sys::poke (elt _top_boudary_point i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _conf
     (setq _conf (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _class_id
     (setq _class_id (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _track_id
     (setq _track_id (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _x
     (setq _x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _y
     (setq _y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _z
     (setq _z (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _l_x
     (setq _l_x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _l_y
     (setq _l_y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _l_z
     (setq _l_z (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _pitch
     (setq _pitch (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _roll
     (setq _roll (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _yaw
     (setq _yaw (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _degree
     (setq _degree (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _distance
     (setq _distance (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _height
     (setq _height (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _target_width
     (setq _target_width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _target_height
     (setq _target_height (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32[] _left_boudary_point
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _left_boudary_point (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _left_boudary_point i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _right_boudary_point
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _right_boudary_point (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _right_boudary_point i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _top_boudary_point
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _top_boudary_point (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _top_boudary_point i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get car_interfaces::Object :md5sum-) "693ea0c1d42830af046c93ddc187f2b2")
(setf (get car_interfaces::Object :datatype-) "car_interfaces/Object")
(setf (get car_interfaces::Object :definition-)
      "float32 conf            # 得分
float32 class_id        # 类别
float32 track_id	    # 跟踪id
float32 x               # 全局 相对加+车辆定位  单位m
float32 y	            # 全局 相对加+车辆定位  单位m
float32 z	            # 全局 相对加+车辆定位  单位m
float32 l_x	            # 相对 单位m
float32 l_y	            # 相对 单位m
float32 l_z	            # 相对 单位m
float32 pitch	        # unit:rad,关于车辆坐标系z轴角度+车辆pitch 
float32 roll	        # unit:rad,关于车辆坐标系y轴角度+车辆roll 
float32 yaw	            # unit:rad,degree+车辆航向 yaw 
float32 degree	        # 角度,车辆坐标系x轴夹角 
float32 distance	    # 单位m
float32 height	        # 单位m
float32 target_width    # 单位m
float32 target_height   # 单位m
float32[] left_boudary_point
float32[] right_boudary_point
float32[] top_boudary_point
")



(provide :car_interfaces/Object "693ea0c1d42830af046c93ddc187f2b2")


