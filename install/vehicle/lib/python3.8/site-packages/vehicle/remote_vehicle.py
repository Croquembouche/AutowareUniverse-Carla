from lib2to3.pytree import convert
from zmq import NULL
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge, CvBridgeError
from ast import walk
from distutils.spawn import spawn
import glob
import os
import sys
import carla
import numpy as np
import cv2 as cv
import random
import math
import threading

try:
    sys.path.append(glob.glob('../carla/dist/carla-*%d.%d-%s.egg' % (
        sys.version_info.major,
        sys.version_info.minor,
        'win-amd64' if os.name == 'nt' else 'linux-x86_64'))[0])
except IndexError:
    pass


# ----------MSGs--------
from v2x_msg.msg import BSM
from std_msgs.msg import String
from std_msgs.msg import Header
from sensor_msgs.msg import Image
from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import PointField


class DefaultVehicle(Node):
    def __init__(self, world, spawn_point):
        super().__init__('main_vehicle_publisher')
        # grabbing all bps
        self.blueprint_library = world.get_blueprint_library()
        # finding the desired bp
        vehicle_bp = self.blueprint_library.find("vehicle.audi.a2")
        # setting some attributes
        vehicle_bp.set_attribute('role_name', 'ego')
        vehicle_bp.set_attribute('color', '255,255,255')
        # spawning the bp
        self.vehicle = world.spawn_actor(vehicle_bp, spawn_point)
        self.world = world
        self.ego_control = carla.VehicleControl()
        self.vehicle.set_autopilot(True)
        # storing a list of all sensors
        self.sensors = []
        # BSM Message
        # BSM message is published every 100ms
        self.bsmpublisher_=self.create_publisher(BSM, "BSM", 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.BSMCallback)
        self.msgcnt = 0
        # generate vehicle id, contains 4 octet
        self.id = self.genVehicleID()
        # initialize lat, long, elev
        self.lat = 0
        self.longi = 0
        self.elev = 0
        # initialize other vehicle info
        self.transmission = 1 # parked
        self.speed = 0
        self.longacc = 0
        self.latacc = 0
        self.vertacc = 0
        self.heading = 0
        # initialize CvBridge
        self.bridge = CvBridge()
        self.image_queue = []
        # subscribe to controls
        # self.subscription_controls = self.create_subscription(String, 'rv_controls', self.vehicleROSControls, 10)
        # print("Subscribed to Controls.")
# --------------Vehicle ID Generation--------------------------
    def genVehicleID(self):
        first_octet = random.randrange(1000000, 99999999)
        second_octet = random.randrange(1000000, 99999999)
        third_octet = random.randrange(1000000, 99999999)
        forth_octet = random.randrange(1000000, 99999999)
        id = str(first_octet)+"."+str(second_octet)+"."+str(third_octet)+"."+str(forth_octet)
        print("Remote_veh ID: ", id)
        return id
# ----------------msgCnt Checks------------------------------
    def msgcntIncrem(self):
        self.msgcnt += 1
        if self.msgcnt > 127:
            self.msgcnt = 0
# ------------------BSM MSG Population------------------------
    def BSMCallback(self):
        msg = BSM()
        msg.coredata.msgcnt = self.msgcnt
        msg.coredata.id = self.id
        msg.coredata.secmark = 65535
        self.getVehicleInformation()
        msg.coredata.lat = int(self.lat*10000000)
        msg.coredata.longitude = int(self.longi*10000000)
        msg.coredata.elev = int(self.elev*10)
        msg.coredata.accuracy.semimajor = 65535
        msg.coredata.accuracy.semiminor = 65535
        msg.coredata.accuracy.orientation = 65535
        msg.coredata.transmission = self.transmission
        msg.coredata.speed = int(self.speed)
        msg.coredata.heading = int(self.heading)
        msg.coredata.angle = 127
        msg.coredata.accelset.longitude = int(self.longacc)
        msg.coredata.accelset.lat = int(self.latacc)
        msg.coredata.accelset.vert = int(self.vertacc)
        msg.coredata.accelset.yaw = 0
        msg.coredata.brakes.wheelbrakes = "00000"
        msg.coredata.brakes.traction = 0
        msg.coredata.brakes.abs = 3
        msg.coredata.brakes.scs = 0
        msg.coredata.brakes.brakeboost = 0
        msg.coredata.brakes.auxbrakes = 0
        msg.coredata.size.width = 167
        msg.coredata.size.length = 383
        # Finally Publishing the msg
        self.bsmpublisher_.publish(msg)
        # self.get_logger().info('Publishing: BSM')
        # change msgcnt
        self.msgcntIncrem()
# -------------Vehicle Related-------------------------------        
    def getSpeedandHeading(self, velocity):
        vx = velocity.x
        vy = velocity.y
        vz = velocity.z
        speed = math.sqrt(vx**2 + vy**2 + vz**2)
        self.speed = speed

        if vx == 0 and vy == 0: # when the vehicle is not moving, do not update heading
            pass
        if vx != 0 and vy == 0: # when the vehicle is only moving N-S direction
            if vx > 0:          # moving North
                self.heading = 0

            elif vx < 0:        # moving South
                self.heading = 180
        
        if vx ==0 and vy != 0:  # when the vehicle is only moving W-E direction
            if vy > 0:
                self.heading = 90
            elif vy < 0:
                self.heading = 270

        if vx != 0 and vy != 0: # when the vehicle is moving in some other direction
            self.heading = (math.atan2(vy, vx))/3.14*180
            if self.heading < 0:
                self.heading += 360
        self.heading = self.heading/360*28800
        if self.heading > 28800:
            self.heading = 28800
    def getVehicleInformation(self):
        # -------------Vehicle Location-----------------
        vehicle_location = self.vehicle.get_location()
        vehicle_ = self.world.get_map().transform_to_geolocation(vehicle_location)
        self.lat = vehicle_.latitude
        self.longi = vehicle_.longitude
        self.elev = vehicle_.altitude
        # print("current position:", self.lat, self.longi)
        # --------------- Vehicle State -----------------
        throttle = self.ego_control.throttle
        reverse = self.ego_control.reverse
        velocity = self.vehicle.get_velocity()
        self.getSpeedandHeading(velocity)
        if throttle == 0 and self.speed != 0:
            self.transmission = 0 # neutral
        elif throttle == 0 and self.speed == 0:
            self.transmission = 1 # park
        elif throttle > 0 and reverse == False:
            self.transmission = 2 # forward gear
        elif throttle > 0 and reverse == True:
            self.transmission = 3 # reverse gears
        # ----------------Vehicle Acceleration---------------
        acceleration = self.vehicle.get_acceleration()
        self.longacc = acceleration.x
        self.latacc = acceleration.y
        self.vertacc = acceleration.z
        # ------------------Vehicle Brakes--------------------
        self.brakes = self.ego_control.brake
# -------------------LiDAR Sensor----------------------------
    def createPCL2msg(self, data):
        points = data.raw_data
        msg = PointCloud2()
        #header
        msg.header = Header()
        # msg.header.stamp = data.timestamp
        msg.header.frame_id = str(data.frame)
        msg.is_bigendian = False
        msg.point_step = 12
        msg.row_step = 12*points.shape[0]
        msg.is_dense = False
        if len(points.shape) == 3:
            msg.height = points.shape[1]
            msg.width = points.shape[0]
        else:
            msg.height = 1
            msg.width = len(points)
        msg.fields = [
            PointField(),
            PointField(),
            PointField()]
        msg.data = np.asarray(points, np.float32).tostring()
        return msg
    def lidarSensorCallback(self, data):
        msg = self.createPCL2msg(data)
        # self.get_logger().info('Publishing: Lidar Data')
        self.lidarpublisher_.publish(msg) 
        # change msgcnt
        self.msgcntIncrem() 
    def addLidarSensor(self, x=0,y=0,z=1.7, pitch=0,yaw=0,row=0, channels="32", pps="90000", rot_freq="50", up_fov="25", low_fov="-25", range="20", dropoff_rate="0.0", dropoff_limit="1.0", dropoff_zero="0.0"):
        # creating a publisher
        self.lidarpublisher_ = self.create_publisher(PointCloud2, 'lidar', 10)
        # finding the lidar bp
        lidar_bp = self.world.get_blueprint_library().find('sensor.lidar.ray_cast')
        # settings the lidar param
        lidar_bp.set_attribute('channels', channels)
        lidar_bp.set_attribute('points_per_second', pps)
        lidar_bp.set_attribute('rotation_frequency', rot_freq)
        lidar_bp.set_attribute('upper_fov', up_fov)
        lidar_bp.set_attribute('lower_fov', low_fov)
        lidar_bp.set_attribute('range', range)
        lidar_bp.set_attribute('dropoff_general_rate', dropoff_rate)
        lidar_bp.set_attribute('dropoff_intensity_limit', dropoff_limit)
        lidar_bp.set_attribute('dropoff_zero_intensity', dropoff_zero)
        # finding the location
        lidar_location = carla.Location(x,y,z)
        lidar_rotation = carla.Rotation(pitch,yaw,row)
        lidar_transform = carla.Transform(lidar_location,lidar_rotation)
        # spawn onto vehicle
        lidar_sen = self.world.spawn_actor(lidar_bp,lidar_transform,attach_to=self.vehicle)
        self.sensors.append(lidar_sen)
        # add a callback function to publish data via ros2
        lidar_sen.listen(lambda point_cloud: self.lidarSensorCallback(point_cloud))
# ----------------------RBG Sensor---------------------------------
    def convertCARLAIMGtoROSIMG(self, original):
        array = np.frombuffer(original.raw_data, dtype=np.dtype("uint8")) 
        array = np.reshape(array, (original.height, original.width, 4)) # RGBA
        image_message = self.bridge.cv2_to_imgmsg(array, encoding="passthrough")
        return image_message
    
    def RGBSensorcallback(self, img):
        # self.get_logger().info('Publishing: RGB Camera')
        try:
            ros_img = self.convertCARLAIMGtoROSIMG(img)
        except CvBridgeError as e:
            print(e)

        try:
            array = np.frombuffer(img.raw_data, dtype=np.dtype("uint8"))
            array = np.reshape(array, (img.height, img.width, 4))
            # Convert BGRA to RGB.
            array = array[:, :, :3]
            array = array[:, :, ::-1]
            # array = np.fliplr(array)
            # array = np.rot90(array)
            # array = np.rot90(array)
            self.image_queue.append(array)
            # self.vehicleManualControls()
        except:
            print("error occured")

        # try:
        #     current_frame = self.bridge.imgmsg_to_cv2(ros_img)
        # except CvBridgeError as e:
        #     print(e)
        self.camera_publisher_.publish(ros_img)
        # change msgcnt
        self.msgcntIncrem()
        
        
    def addRBGCameraSensor(self, x=0.6,y=0,z=1.4, pitch=0,yaw=0,row=0):
        # create camera publisher
        self.camera_publisher_ = self.create_publisher(Image, 'camera', 10)
        # get camera blueprint
        camera_bp = self.blueprint_library.find('sensor.camera.rgb') 
        camera_location = carla.Location(x,y,z)
        camera_rotation = carla.Rotation(pitch,yaw,row)
        camera_transform = carla.Transform(camera_location,camera_rotation)   
        # spawn onto vehicle
        front_camera = self.world.spawn_actor(camera_bp, camera_transform, attach_to=self.vehicle)
        self.sensors.append(front_camera)
        front_camera.listen(lambda image: self.RGBSensorcallback(image))
    
# --------------------Vehicle ROS Controls-----------------------
    def vehicleROSControls(self, msg):
        throttle_increament = 0.05

        if msg.data == "auto on":
            self.vehicle.set_autopilot(True)

        if msg.data == "auto off":
            self.vehicle.set_autopilot(False)

        if msg.data == "w":
            self.ego_control.throttle = min(self.ego_control.throttle + throttle_increament, 1.0)
            self.ego_control.brake = 0

        if msg.data == "s":
            self.ego_control.throttle = max(self.ego_control.throttle - throttle_increament, 0)
        steer_increment = 0.2

        if msg.data == "a":

            self.ego_control.steer = max(self.ego_control.steer - steer_increment, -1.0)
        if msg.data == "d":

            self.ego_control.steer = min(self.ego_control.steer + steer_increment, 1.0)
        if msg.data == "b":

            self.ego_control.brake = 1

        self.vehicle.apply_control(self.ego_control)     
    
# ------------------------------------- Destroy -------------------------------------
    def destroy(self):
        destroyed = self.vehicle.destroy()
        return destroyed


def main(args=None):
    # initialize ROS2
    rclpy.init(args=args)
    # list of things to do
    # 1. Connect to world
    client = carla.Client('localhost', 2000)
    client.set_timeout(10.0) #seconds
    # 2. Get World Information
    world = client.get_world()    
    # get a list of spawn points
    spawn_points = world.get_map().get_spawn_points()

    # spawn_point = spawn_points[random.randint(0, len(spawn_points)-1)]
    spawn_point = spawn_points[5]
    # spawn the vehicle
    demo_veh = DefaultVehicle(world, spawn_point)
    # add lidar sensor
    # demo_veh.addLidarSensor()
    # print("Publishing Lidar Sensor Data")
    # add camera sensor
    # demo_veh.addRBGCameraSensor()
    # print("Publishing Front Camera Data")
    try:
        rclpy.spin(demo_veh)
        
    except KeyboardInterrupt:
        destroyed = demo_veh.destroy()
        if destroyed:
            print("Vehicle Destroyed")
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    demo_veh.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()