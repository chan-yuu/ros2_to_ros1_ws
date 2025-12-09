#!/usr/bin/env python3

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        # Declare launch arguments
        DeclareLaunchArgument(
            'log_level',
            default_value='info',
            description='Log level for the GPS converter node'
        ),
        
        # GPS converter node
        Node(
            package='data_bridge_ros2',
            executable='gps_converter_node',
            name='gps_converter_node',
            output='screen',
            parameters=[{
                'log_level': LaunchConfiguration('log_level')
            }],
            remappings=[
                ('/gps_interface', '/gps_interface'),
            ]
        ),
    ])