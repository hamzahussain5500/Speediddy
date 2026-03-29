from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='racing_analyzer',
            executable='path_publisher',
            name='path_publisher',
            output='screen',
            emulate_tty=True,
        ),
    ])
