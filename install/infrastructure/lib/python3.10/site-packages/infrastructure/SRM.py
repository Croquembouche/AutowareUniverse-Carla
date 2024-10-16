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
import cv2 as cv
try:
    sys.path.append(glob.glob('../carla/dist/carla-*%d.%d-%s.egg' % (
        sys.version_info.major,
        sys.version_info.minor,
        'win-amd64' if os.name == 'nt' else 'linux-x86_64'))[0])
except IndexError:
    pass


# ----------MSGs--------
from v2x_msg.msg import SRM
from sensor_msgs.msg import Image

class DefaultSRM(Node):
    def __init__(self, world, traffic_signal):
        super().__init__('SRM_Publisher')
        self.world = world
        self.blueprint_library = world.get_blueprint_library()
        self.traffic_signal = traffic_signal
        self.sensors = []
        self.publisher_=self.create_publisher(SRM, "SRM_"+str(traffic_signal.id), 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.SRMCallback)

# ---------------------------SRM--------------------------------
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
    def SRMCallback(self):
        print("nothing")



def main():
    rclpy.init(args=None)

    # Things to do in this file
    # 1. Connect to world
    client = carla.Client('localhost', 2000)
    client.set_timeout(10.0) #seconds
    # 2. Get World Information
    world = client.get_world()
    actors = world.get_actors().filter("traffic.traffic_light")
    # add this to the first in the list
    lucky_traffic_signal = actors[0] # this one is the horizontal traffic, we'll only deal with this one for now
    ssm = DefaultSRM(world, lucky_traffic_signal)
    

    try:
        rclpy.spin(ssm)
    except KeyboardInterrupt:
        # destroyed = ssm.destroy()
        # if destroyed:
        #     print("SSM Camera Destroyed")
        print("destroyed")
    ssm.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()