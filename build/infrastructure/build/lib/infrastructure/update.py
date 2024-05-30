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

from std_msgs.msg import String


class DefaultUpdater(Node):
    def __init__(self):
        super().__init__('Updater')

        self.declare_parameter('server_ip', 'localhost')
        server_ip = self.get_parameter('server_ip').get_parameter_value().string_value

        client = carla.Client(server_ip, 2000)
        client.set_timeout(10.0) #seconds
        # 2. Get World Information
        self.world = client.get_world()
        self.spawned = False
        self.blueprint_library = self.world.get_blueprint_library()

        # blueprints = [bp for bp in world.get_blueprint_library().filter('*stop*')]
        # for blueprint in blueprints:
        #     print(blueprint.id)

        self.update_subscriber_ = self.create_subscription(String, 'updater', self.updater_cb, 10)

# ---------------------------Updater--------------------------------
    def updater_cb(self, msg):
        x, y = msg.data.split(",")
        stopsign_bp = self.blueprint_library.find("static.prop.smallstopsign") #static.prop.trafficcone01
        transform = carla.Transform(carla.Location(x=7.14, y=-6, z=3.0), carla.Rotation(pitch=0, yaw=270, roll=0))

        self.world.on_tick(lambda snapshot: print('Tick received: %s' % snapshot.timestamp.frame))
        try:
            if self.spawned == False:
                stop_sign = self.world.spawn_actor(stopsign_bp, transform)
                print("Actor spawned:", stop_sign.id)
                print("Stop sign placed at:", transform.location)
        except RuntimeError as e:
            print("Failed to spawn actor:", e)






def main():
    rclpy.init(args=None)
    
    # Things to do in this file
    # 1. Connect to world
    
    
    update_publisher = DefaultUpdater()

    rclpy.spin(update_publisher)
    rclpy.shutdown()
    print('Hi from ICAT.')


if __name__ == '__main__':
    main()