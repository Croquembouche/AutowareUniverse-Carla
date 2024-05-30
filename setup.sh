#! /bin/bash

export ROS_MASTER_URI=http://192.168.0.130:11311
export ROS_IP=192.168.0.222


source /opt/ros/noetic/setup.bash
sleep 1
source ~/ros2_humble/install/setup.bash
sleep 1
source ~/Github/C-V2X-Autoware-Carla/install/setup.bash
sleep 1
source ~/ros1_bridge/install/setup.bash
sleep 1

echo "ROS Source Complete"

# ros2 run ros1_bridge dynamic_bridge --bridge-all-topics --disable-rosout-logs
