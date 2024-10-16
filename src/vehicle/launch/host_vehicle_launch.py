# launch_vehicle.py

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='vehicle',  # Replace with your package name
            executable='host_vehicle',  # Replace with your node's executable name
            name='host_vehicle',
            parameters=['src/vehicle/config/host_vehicle.yaml'],  # Specify the path to your params file
        )
    ])
