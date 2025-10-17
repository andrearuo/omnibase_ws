from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='cbf_stl_pkg',
            executable='cbf_stl_node',
            name='cbf_stl_node',
            output='screen'
        ),
        Node(
            package='check_obstacle_pkg',
            executable='check_obstacle_node',
            name='check_obstacle_node',
            output='screen'
        )
    ])
