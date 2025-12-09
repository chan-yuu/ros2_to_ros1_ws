#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
from sensor_msgs.msg import Imu

class ImuTransformer:
    def __init__(self):
        # 1. 初始化节点
        rospy.init_node('imu_transformer_node', anonymous=True)

        # --- 配置参数 ---
        # 你的原始imu话题
        self.input_topic = rospy.get_param('~input_topic', '/imu_data')
        # 转换后发布的correct话题
        self.output_topic = rospy.get_param('~output_topic', '/imu_correct')
        # 目标坐标系
        self.target_frame = rospy.get_param('~target_frame', 'base_link')

        # --- 订阅与发布 ---
        self.sub_imu = rospy.Subscriber(self.input_topic, Imu, self.imu_callback)
        self.pub_imu = rospy.Publisher(self.output_topic, Imu, queue_size=10)

        rospy.loginfo("IMU Transformer Started: %s -> %s", self.input_topic, self.output_topic)
        rospy.loginfo("Transform: [Front=Y, Right=X] -> [Front=X, Left=Y]")

        # 保持节点运行
        rospy.spin()

    def imu_callback(self, msg):
        new_msg = Imu()
        
        # 1. 复制头部信息并修改 frame_id
        new_msg.header = msg.header
        new_msg.header.frame_id = self.target_frame

        # 2. 转换角速度 (Angular Velocity)
        # New X (前) = Old Y
        new_msg.angular_velocity.x = msg.angular_velocity.y
        # New Y (左) = -Old X (右)
        new_msg.angular_velocity.y = -msg.angular_velocity.x
        # New Z (上) = Old Z
        new_msg.angular_velocity.z = msg.angular_velocity.z

        # 3. 转换线性加速度 (Linear Acceleration)
        new_msg.linear_acceleration.x = msg.linear_acceleration.y
        new_msg.linear_acceleration.y = -msg.linear_acceleration.x
        new_msg.linear_acceleration.z = msg.linear_acceleration.z

        # 4. 转换四元数 (Orientation)
        # 定义旋转四元数: 绕 Z 轴 +90度 (对应之前的逻辑)
        # w = cos(pi/4) = 0.70710678, z = sin(pi/4) = 0.70710678
        r_w = 0.70710678
        r_z = 0.70710678
        r_x = 0.0
        r_y = 0.0

        q_orig = msg.orientation
        
        # 四元数乘法公式 (q_rot * q_orig)
        new_msg.orientation.w = r_w*q_orig.w - r_x*q_orig.x - r_y*q_orig.y - r_z*q_orig.z
        new_msg.orientation.x = r_w*q_orig.x + r_x*q_orig.w + r_y*q_orig.z - r_z*q_orig.y
        new_msg.orientation.y = r_w*q_orig.y - r_x*q_orig.z + r_y*q_orig.w + r_z*q_orig.x
        new_msg.orientation.z = r_w*q_orig.z + r_x*q_orig.y - r_y*q_orig.x + r_z*q_orig.w

        # 5. 处理协方差 (简单交换行列)
        # 协方差矩阵是长为9的数组
        # 交换 0(xx) 和 4(yy) 位置
        new_msg.orientation_covariance = list(msg.orientation_covariance)
        new_msg.orientation_covariance[0] = msg.orientation_covariance[4]
        new_msg.orientation_covariance[4] = msg.orientation_covariance[0]

        new_msg.angular_velocity_covariance = list(msg.angular_velocity_covariance)
        new_msg.angular_velocity_covariance[0] = msg.angular_velocity_covariance[4]
        new_msg.angular_velocity_covariance[4] = msg.angular_velocity_covariance[0]

        new_msg.linear_acceleration_covariance = list(msg.linear_acceleration_covariance)
        new_msg.linear_acceleration_covariance[0] = msg.linear_acceleration_covariance[4]
        new_msg.linear_acceleration_covariance[4] = msg.linear_acceleration_covariance[0]

        # 发布
        self.pub_imu.publish(new_msg)

if __name__ == '__main__':
    try:
        ImuTransformer()
    except rospy.ROSInterruptException:
        pass