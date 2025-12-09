#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
from sensor_msgs.msg import NavSatFix, NavSatStatus
from car_interfaces.msg import GpsImuInterface  # 导入自定义消息 

class GpsConverter:
    def __init__(self):
        # 1. 初始化节点
        rospy.init_node('gps_data_converter', anonymous=True)

        # 2. 创建订阅者：订阅 /gps_data
        # queue_size 对应 ROS 2 中的 QoS history depth
        self.sub = rospy.Subscriber('/gps_imu_data', GpsImuInterface, self.listener_callback)
        
        # 3. 创建发布者：发布 /gps/fix
        self.pub = rospy.Publisher('/gps/fix', NavSatFix, queue_size=10)
        
        rospy.loginfo('GPS Converter Node has been started.')

    def listener_callback(self, msg):
        """
        回调函数：处理 GpsImuInterface 数据并转换为 NavSatFix
        """
        nav_msg = NavSatFix()

        # --- 1. 时间戳处理 ---
        # GpsImuInterface 中的 timestamp 是 float64 (Unix 时间戳) 
        # ROS 1 提供了便捷的方法直接从 float 秒数转换
        # if msg.timestamp > 0:
        #     nav_msg.header.stamp = rospy.Time.from_sec(msg.timestamp)
        # else:
        #     nav_msg.header.stamp = rospy.Time.now() # 如果时间戳无效，使用当前时间

        nav_msg.header = msg.header

        # Frame ID: 根据你的TF树配置，通常是 "gps_link"
        nav_msg.header.frame_id = "gps_link"

        # --- 2. 状态填充 ---
        # 假设收到数据即为有效定位，设置为 STATUS_FIX
        nav_msg.status.status = NavSatStatus.STATUS_FIX
        nav_msg.status.service = NavSatStatus.SERVICE_GPS

        # --- 3. 经纬高数据映射 ---
        # 根据 msg 定义直接映射 [cite: 9]
        nav_msg.latitude = msg.PosLat
        nav_msg.longitude = msg.PosLon
        nav_msg.altitude = msg.PosAlt

        # --- 4. 协方差 (Covariance) ---
        # 设置为未知
        nav_msg.position_covariance_type = NavSatFix.COVARIANCE_TYPE_UNKNOWN
        
        # 如果需要假定一个精度，可以取消下面注释并设置类型为 2 (COVARIANCE_TYPE_DIAGONAL_KNOWN)
        # nav_msg.position_covariance = [
        #     1.0, 0.0, 0.0,
        #     0.0, 1.0, 0.0,
        #     0.0, 0.0, 1.0
        # ]

        # --- 5. 发布 ---
        self.pub.publish(nav_msg)

if __name__ == '__main__':
    try:
        converter = GpsConverter()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass