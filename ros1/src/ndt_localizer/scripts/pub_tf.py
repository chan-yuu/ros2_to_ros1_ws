#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import tf
import tf.transformations as tft
import geometry_msgs.msg
from car_interfaces.msg import GpsImuInterface  # 替换为你的ROS包名和消息名
import math

class MapToOdomTFPublisher:
    def __init__(self):
        rospy.init_node('map_to_odom_tf_publisher')

        self.tf_broadcaster = tf.TransformBroadcaster()
        self.initial_tf_published = False
        self.initial_transform = None

        # 订阅 map_pose 话题
        self.map_pose_sub = rospy.Subscriber('/map_pose', GpsImuInterface, self.map_pose_callback)

        self.rate = rospy.Rate(100)  # 100Hz 的频率发布

    def map_pose_callback(self, msg):
        if not self.initial_tf_published:
            # 将初始 map_pose 转换为 tf 变换
            self.initial_transform = geometry_msgs.msg.TransformStamped()

            self.initial_transform.header.stamp = rospy.Time.now()
            self.initial_transform.header.frame_id = "map"
            self.initial_transform.child_frame_id = "odom"

            # 设置初始平移
            self.initial_transform.transform.translation.x = msg.x
            self.initial_transform.transform.translation.y = msg.y
            self.initial_transform.transform.translation.z = msg.z

            # 将欧拉角（roll, pitch, yaw）转换为四元数
            quat = tft.quaternion_from_euler(math.radians(msg.roll), math.radians(msg.pitch), math.radians(msg.yaw))
            self.initial_transform.transform.rotation.x = quat[0]
            self.initial_transform.transform.rotation.y = quat[1]
            self.initial_transform.transform.rotation.z = quat[2]
            self.initial_transform.transform.rotation.w = quat[3]

            self.initial_tf_published = True
            rospy.loginfo("Initial map to odom transform has been set.")

    def publish_tf(self):
        while not rospy.is_shutdown():
            if self.initial_tf_published:
                # 持续发布初始的 tf 变换
                self.initial_transform.header.stamp = rospy.Time.now()
                self.tf_broadcaster.sendTransform(
                    (self.initial_transform.transform.translation.x,
                     self.initial_transform.transform.translation.y,
                     self.initial_transform.transform.translation.z),
                    (self.initial_transform.transform.rotation.x,
                     self.initial_transform.transform.rotation.y,
                     self.initial_transform.transform.rotation.z,
                     self.initial_transform.transform.rotation.w),
                    rospy.Time.now(),
                    self.initial_transform.child_frame_id,
                    self.initial_transform.header.frame_id
                )

            self.rate.sleep()

if __name__ == '__main__':
    try:
        tf_publisher = MapToOdomTFPublisher()
        tf_publisher.publish_tf()
    except rospy.ROSInterruptException:
        pass
