sudo apt install ros-$ROS_DISTRO-geographic-info

sudo apt install ros-$ROS_DISTRO-geodesy

sudo apt install ros-$ROS_DISTRO-geographic-msgs

# ros2的lidar数据没有ring 和 dense 不行!!!
尝试配置dds的空间.
## 1. 操作系统内核层：增加 UDP 缓冲区 (Linux)
sudo nano /etc/sysctl.conf

### 在文件末尾添加以下内容
net.core.rmem_max = 33554432

net.core.rmem_default = 33554432

net.core.wmem_max = 33554432

net.core.wmem_default = 33554432

sudo sysctl -p


sudo apt install -y ros-galactic-cyclonedds ros-galactic-rmw-cyclonedds-cpp


<?xml version="1.0" encoding="UTF-8" ?>
<CycloneDDS xmlns="https://cdds.io/config" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="https://cdds.io/config https://raw.githubusercontent.com/eclipse-cyclonedds/cyclonedds/master/etc/cyclonedds.xsd">
    <Domain>
        <General>
            <NetworkInterfaceAddress>auto</NetworkInterfaceAddress>
            <AllowMulticast>true</AllowMulticast>
        </General>
        <Internal>
            <MaxMessageSize>65500B</MaxMessageSize>
            <SocketReceiveBufferSize>50MB</SocketReceiveBufferSize> 
        </Internal>
        </Domain>
</CycloneDDS>

export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp

export CYCLONEDDS_URI=file:///path/to/your/cyclonedds.xml



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
