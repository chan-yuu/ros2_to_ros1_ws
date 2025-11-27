#!/usr/bin/env python3
import rosbag
import numpy as np
import matplotlib.pyplot as plt
from scipy.spatial import KDTree
from scipy.linalg import svd
import datetime
import yaml
import os

# YAML_PATH="/home/nvidia/clamp_forklift_ws2/src/perception/config/map_in_gps.yaml"
# SOURCE_PATH="/home/nvidia/Documents/DATA/auto_map"
YAML_PATH="/home/cyun/forklift_sim_ws3/src/ndt_localizer/scripts/map_in_gps.yaml"
SOURCE_PATH=""

# YAML_PATH="/home/cyun/map_in_gps.yaml"
# SOURCE_PATH="/home/cyun/"


def rostime_to_datetime(rostime):
    """
    将ROS时间戳转换为Python的datetime对象
    """
    return datetime.datetime.fromtimestamp(rostime.secs + rostime.nsecs * 1e-9)


def fit_rotation_translation(A, B):
    """
    通过最小二乘拟合旋转和平移矩阵
    """
    centroid_A = np.mean(A, axis=0)
    centroid_B = np.mean(B, axis=0)
    AA = A - centroid_A
    BB = B - centroid_B
    H = np.dot(AA.T, BB)
    U, _, Vt = svd(H)
    R = np.dot(Vt.T, U.T)
    if np.linalg.det(R) < 0:
        Vt[-1, :] *= -1
        R = np.dot(Vt.T, U.T)
    t = centroid_B.T - np.dot(R, centroid_A.T)
    return R, t


def main():
    bag_path = os.path.join(SOURCE_PATH, 'lidar_gps.bag')
    bag_path = '2025-01-12-00-55-33.bag'

    # 读取bag文件
    with rosbag.Bag(bag_path, 'r') as bag:
        # 提取gps_imu数据
        gps_imu_data = []
        gps_timestamps = []
        for topic, msg, t in bag.read_messages(topics=['/gps_imu']):
            gps_imu_data.append([msg.x, msg.y, msg.z])
            gps_timestamps.append(rostime_to_datetime(t))
        gps_imu_data = np.array(gps_imu_data)

        # 提取map_pose数据
        map_pose_data = []
        map_timestamps = []
        for topic, msg, t in bag.read_messages(topics=['/map_pose']):
            map_pose_data.append([msg.x, msg.y, msg.z])
            map_timestamps.append(rostime_to_datetime(t))
        map_pose_data = np.array(map_pose_data)

        # # 提取odom数据
        # map_pose_data = []
        # map_timestamps = []
        # for topic, msg, t in bag.read_messages(topics=['/odom_p3d']):
        #     map_pose_data.append([msg.pose.pose.position.x, msg.pose.pose.position.y, msg.pose.pose.position.z])
        #     map_timestamps.append(rostime_to_datetime(t))
        # map_pose_data = np.array(map_pose_data)

        # 使用KDTree进行最近邻时间戳匹配
        tree = KDTree([(ts.timestamp(), 0) for ts in map_timestamps])
        _, idx_map = tree.query([(ts.timestamp(), 0) for ts in gps_timestamps])

        # 对齐点云数据
        A = gps_imu_data
        B = map_pose_data[idx_map]

        # 拟合旋转和平移矩阵
        R, t = fit_rotation_translation(A, B)

        # 验证变换
        B_transformed = np.dot(R, A.T).T + t
        error = np.linalg.norm(B_transformed - B, axis=1)
        rmse = np.sqrt(np.mean(error ** 2))

        # 计算逆旋转矩阵和逆平移向量
        R_inv = R.T
        t_inv = -np.dot(R_inv, t)

        # 从旋转矩阵计算roll, pitch, yaw（以度为单位）
        yaw = np.rad2deg(np.arctan2(R_inv[1, 0], R_inv[0, 0]))
        pitch = np.rad2deg(-np.arcsin(R_inv[2, 0]))
        roll = np.rad2deg(np.arctan2(R_inv[2, 1], R_inv[2, 2]))

        # 打印结果
        print(f"逆旋转矩阵 R_inv:\n{R_inv}")
        print(f"逆平移向量 t_inv:\n{t_inv}")
        print(f"最终的旋转平移结果为:")
        print(f"x: {t_inv[0]}")
        print(f"y: {t_inv[1]}")
        print(f"z: {t_inv[2]}")
        print(f"roll: {roll}")
        print(f"pitch: {pitch}")
        print(f"yaw: {yaw}")
        print(f"变换后的均方根误差: {rmse}")

        # 生成yaml文件
        result_data = {
            "map_in_world_x": float(t_inv[0]),
            "map_in_world_y": float(t_inv[1]),
            "map_in_world_z": float(t_inv[2]),
            "map_in_world_roll": float(roll),
            "map_in_world_pitch": float(pitch),
            "map_in_world_yaw": float(yaw),
        }

        with open(YAML_PATH, 'w') as file:
            yaml.dump(result_data, file, default_flow_style=False)

        print(f"Bag file '{bag_path}' opened and processed successfully.")

        # 绘制原始点云和变换后的点云
        plt.figure()
        # 绘制原始map_pose的x,y坐标（这里假设为雷达定位对应的坐标）
        plt.plot(B[:, 0], B[:, 1], 'r-', label='Lidar')
        # 绘制变换后与gps_imu对应的x,y坐标（这里假设为GPS定位对应的坐标）
        plt.plot(B_transformed[:, 0], B_transformed[:, 1], 'b-', label='GPS')
        plt.xlabel('X')
        plt.ylabel('Y')
        plt.title('定位结果')
        plt.legend()
        plt.grid(True)
        plt.axis('equal')
        plt.show()

if __name__ == "__main__":
    main()