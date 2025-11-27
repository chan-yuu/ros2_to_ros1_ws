建图算法说明
首先我们通过ros2的节点将需要的topic转为共享内存空间.
包括:
1.激光雷达
2.imu
3.gps
4.tf
至于共享内存的两种模式,还没有特别注意..现在也还是基本可以使用.

接着在ros1中接入了ros2的相关话题,得到最终的ros1的话题消息:
1.激光雷达
2.imu
3.gps
4.tf

启动顺序:
ros2 launch data_bridge_ros2 data_bridge.launch.py

roslaunch data_bridge_ros1 data_bridge.launch

运行算法
roslaunch lio_sam run.launch
记录数据
rosbag record /lio_sam/mapping/odometry /gps_imu_data

播放bag
ros2 bag play rosbag2_2025_10_11-09_57_36_0.db3


# slam建图
建图需要足够应对大范围建图时的漂移问题,也就是建图过程中/lio_sam/mapping/odometry话题的定位的z需要足够合适

然后我们主要是比较这个建图过程中最后两条轨迹之间的比较.
gps_imu_data数据以及/lio_sam/mapping/odometry,实时记录这两条轨迹,至于怎么比较呢?
通过一个py来读取bag数据来重新进行融合.
