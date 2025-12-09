from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='data_bridge_ros2',
            executable='pointcloud_writer_node',
            name='pointcloud_writer',
            output='screen',
            parameters=[
                {'use_sim_time': False}
            ],
            remappings=[
                # 重映射话题
                # ('/rslidar_points', '/your_custom_topic')
            ]
        ),
        Node(
            package='data_bridge_ros2',
            executable='imu_writer_node',
            name='imu_writer',
            output='screen',
            parameters=[
                {'use_sim_time': False}
            ],
            remappings=[
                # 重映射话题
                # ('/imu/data', '/your_custom_imu_topic')
                ('/imu/data', '/imu')
            ]
        ),
        Node(
            package='data_bridge_ros2',
            executable='gps_converter_node',
            name='gps_converter',
            output='screen',
            parameters=[
                {'use_sim_time': False}
            ],
            remappings=[
                # 重映射话题
                # ('/gps/data', '/your_custom_gps_topic')
                ('/gps/data', '/gps_plugin/out')
            ]
        ),
        Node(
            package='data_bridge_ros2',
            executable='tf_writer_node',
            name='tf_writer',
            output='screen',
            parameters=[
                {'use_sim_time': False}
            ],
            remappings=[
                # TF话题通常不需要重映射
            ]
        )
    ])