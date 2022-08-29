from lib2to3.pytree import convert
from zmq import NULL
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from ast import walk
from distutils.spawn import spawn
import glob
import os
import sys
import carla
import numpy as np
import random
import math
import datetime
try:
    sys.path.append(glob.glob('../carla/dist/carla-*%d.%d-%s.egg' % (
        sys.version_info.major,
        sys.version_info.minor,
        'win-amd64' if os.name == 'nt' else 'linux-x86_64'))[0])
except IndexError:
    pass


# ----------MSGs--------
from v2x_msg.msg import MAP

class DefaultMAP(Node):
    def __init__(self):
        super().__init__('MAP_Publisher')
        # self.publisher_ = self.create_publisher(MAP, 'topic', 10)
        # timer_period = 0.5  # seconds
        # self.timer = self.create_timer(timer_period, self.timer_callback)
        # self.i = 0

# ---------------------------MAP--------------------------------
    def getTimeStamp(self):
        now = datetime.datetime.now()
        month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        total_minutes = now.minute + now.hour*60 + now.day*24*60
        if now.year%4 != 0:
            month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        elif now.year%4 == 0:
            if now.year%100 == 0 and now.year%400 == 0:
                month_days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            else:
                month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        for i in range(0, now.month):
            total_minutes += month_days[i]*24*60
        milliseconds = now.second * 1000
        return total_minutes, milliseconds
    # def timer_callback(self):
    #     data = MAP()
    #     data.timestamp = "12345"
    #     data.msgissuerevision = 45
    #     data.layertype = "1212"
    #     data.layerid=6
    #     data.intersections = "1212"
    #     data.roadsegments= "1212"
    #     data.dataparameters= "1212"
    #     data.restrictionlist= "1212"
    #     data.regional=4

    #     self.publisher_.publish(data)
    #     self.get_logger().info('Publishing: MAP Data')
    #     self.i += 1

def main():
    rclpy.init(args=None)
    
    # Things to do in this file
    # 1. Connect to world
    client = carla.Client('localhost', 2000)
    client.set_timeout(10.0) #seconds
    # 2. Get World Information
    world = client.get_world()
    map_publisher = DefaultMAP()

    rclpy.spin(map_publisher)
    rclpy.shutdown()
    print('Hi from MAP.')


if __name__ == '__main__':
    main()