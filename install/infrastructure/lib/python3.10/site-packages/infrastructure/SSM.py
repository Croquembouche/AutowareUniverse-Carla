# The signal status message is a message sent by an RSU in a signalized intersection. It is used to relate the current
# status of the signal and the collection of pending or active preemption or priority requests acknowledged by the controller.
# It is also used to send information about preemption or priority requests which were denied. This in turn allows a dialog
# acknowledgment mechanism between any requester and the signal controller. The data contained in this message allows
# other users to determine their “ranking” for any request they have made as well as to see the currently active events. When
# there have been no recently received requests for service messages, this message may not be sent. While the outcome of
# all pending requests to a signal can be found in the signal status message, the current active event (if any) will be reflected
# in the SPAT message contents.

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
from v2x_msg.msg import SSM
from sensor_msgs.msg import Image

class DefaultSSM(Node):
    def __init__(self, world, traffic_signal):
        super().__init__('SSM_Publisher')
        self.world = world
        self.blueprint_library = world.get_blueprint_library()
        self.traffic_signal = traffic_signal
        self.sensors = []
        self.publisher_=self.create_publisher(SSM, "SSM_"+str(traffic_signal.id), 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.SSMCallback)

# ---------------------------SSM--------------------------------
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
    def SSMCallback(self):
        print("nothing")
        # print(self.getTrafficSignalState())
        # timestamp, seconds = self.getTimeStamp()
        # SSM.timestamp = timestamp
        # SSM.second = seconds
        # SSM.sequencenumber = 0 # optional
# ----------------------------Set up a camera to watch over this luck intersection-------------------------
    def convertCARLAIMGtoROSIMG(self, original):
        bridge = CvBridge()
        array = np.frombuffer(original.raw_data, dtype=np.dtype("uint8")) 
        array = np.reshape(array, (original.height, original.width, 4)) # RGBA
        image_message = bridge.cv2_to_imgmsg(array, encoding="passthrough")
        return image_message

    def RGBSensorcallback(self, img):
        # self.get_logger().info('Publishing: RGB Camera')
        ros_img = self.convertCARLAIMGtoROSIMG(img)
        bridge = CvBridge()
        current_frame = bridge.imgmsg_to_cv2(ros_img)
        cv.imshow("original", current_frame)
        k = cv.waitKey(1)
        self.camera_publisher_.publish(ros_img)
    def addRBGCameraSensor(self, x=-15,y=15,z=45, pitch=-90,yaw=0,row=0):
        # create camera publisher
        self.camera_publisher_ = self.create_publisher(Image, 'aerial_camera', 10)
        # get camera blueprint
        camera_bp = self.blueprint_library.find('sensor.camera.rgb') 
        camera_location = carla.Location(x,y,z)
        camera_rotation = carla.Rotation(pitch,yaw,row)
        camera_transform = carla.Transform(camera_location,camera_rotation)   
        # spawn onto infrastructure
        self.front_camera = self.world.spawn_actor(camera_bp, camera_transform, attach_to=self.traffic_signal)
        self.sensors.append(self.front_camera)
        self.front_camera.listen(lambda image: self.RGBSensorcallback(image))
    def destroy(self):
        destroyed = self.front_camera.destroy()
        return destroyed
    def assistedLocalizationLaneID(self):
        # vehicles tell me where they are and what they look like
        # if they know where they are, then they should have their lane id already
        # if their gps isnt accurate, then RSU provide backup lane ids
        # then infrastructure tell them which lane they are in
        print("s")

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
    ssm = DefaultSSM(world, lucky_traffic_signal)
    ssm.addRBGCameraSensor()
    

    try:
        rclpy.spin(ssm)
    except KeyboardInterrupt:
        destroyed = ssm.destroy()
        if destroyed:
            print("SSM Camera Destroyed")
    ssm.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()