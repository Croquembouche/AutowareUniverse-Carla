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
import datetime
from rclpy.clock import Clock
import struct
import ctypes
import open3d as o3d
from rclpy.qos import QoSProfile
from rclpy.qos import QoSReliabilityPolicy, QoSDurabilityPolicy, QoSHistoryPolicy
from rclpy.clock import ROSClock



try:
    sys.path.append(glob.glob('../carla/dist/carla-*%d.%d-%s.egg' % (
        sys.version_info.major,
        sys.version_info.minor,
        'win-amd64' if os.name == 'nt' else 'linux-x86_64'))[0])
except IndexError:
    pass


# ----------MSGs--------
from v2x_msg.msg import BSM
from v2x_msg.msg import SRM
from v2x_msg.msg import SignalRequestPackage
from std_msgs.msg import String
from std_msgs.msg import Header
from sensor_msgs.msg import Image
from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import PointField
from sensor_msgs.msg import Imu
from geometry_msgs.msg import PoseWithCovarianceStamped
from geometry_msgs.msg import TwistWithCovariance
from geometry_msgs.msg import Quaternion
from autoware_auto_vehicle_msgs.msg import VelocityReport
from autoware_auto_vehicle_msgs.msg import SteeringReport
from autoware_auto_control_msgs.msg import AckermannControlCommand

_DATATYPES = {}
_DATATYPES[PointField.INT8] = ('b', 1)
_DATATYPES[PointField.UINT8] = ('B', 1)
_DATATYPES[PointField.INT16] = ('h', 2)
_DATATYPES[PointField.UINT16] = ('H', 2)
_DATATYPES[PointField.INT32] = ('i', 4)
_DATATYPES[PointField.UINT32] = ('I', 4)
_DATATYPES[PointField.FLOAT32] = ('f', 4)
_DATATYPES[PointField.FLOAT64] = ('d', 8)

def _get_struct_fmt(is_bigendian, fields, field_names=None):
    fmt = '>' if is_bigendian else '<'

    offset = 0
    for field in (f for f in sorted(fields, key=lambda f: f.offset)
                  if field_names is None or f.name in field_names):
        if offset < field.offset:
            fmt += 'x' * (field.offset - offset)
            offset = field.offset
        if field.datatype not in _DATATYPES:
            print('Skipping unknown PointField datatype [{}]' % field.datatype, file=sys.stderr)
        else:
            datatype_fmt, datatype_length = _DATATYPES[field.datatype]
            fmt += field.count * datatype_fmt
            offset += field.count * datatype_length

    return fmt

class DefaultVehicle(Node):
    def __init__(self, world, spawn_point):
        super().__init__('main_vehicle_publisher')
        # self.get_clock().ros_clock = ROSClock()
        # print(ROSClock())
        self.setUpPublishers()
        # grabbing all bps
        self.blueprint_library = world.get_blueprint_library()
        # finding the desired bp
        vehicle_bp = self.blueprint_library.find("vehicle.ford.mustang")
        # setting some attributes
        vehicle_bp.set_attribute('role_name', 'host_vehicle')
        vehicle_bp.set_attribute('color', '255,255,255')
        # spawning the bp
        self.vehicle = world.spawn_actor(vehicle_bp, spawn_point)
        self.world = world
        self.ego_control = carla.VehicleControl()
        # initialize control to all zeros
        self.initializeControl()
        # self.vehicle.set_autopilot(True) # set Autopilot on start to test lidar
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
        self.lon = 0
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
        # self.subscription_controls = self.create_subscription(String, 'hv_controls', self.vehicleROSControls, 10)
        # print("Subscribed to Controls.")
        # subscribe to BSM messages
        self.subscrib_bsm = self.create_subscription(BSM, 'BSM', self.BSMSubscriber_cb, 10)
        self.init = False
    def initializeControl(self):
        self.ego_control.throttle = 0.0
        self.ego_control.steer = 0.0
        self.vehicle.apply_control(self.ego_control)

# --------------Vehicle ID Generation--------------------------
    def genVehicleID(self):
        first_octet = random.randrange(1000000, 99999999)
        second_octet = random.randrange(1000000, 99999999)
        third_octet = random.randrange(1000000, 99999999)
        forth_octet = random.randrange(1000000, 99999999)
        id = str(first_octet)+"."+str(second_octet)+"."+str(third_octet)+"."+str(forth_octet)
        print("Host_veh ID: ", id)
        return id
# ----------------msgCnt Checks------------------------------
    def msgcntIncrem(self):
        self.msgcnt += 1
        if self.msgcnt > 127:
            self.msgcnt = 0
# -------------------TimeStamps, DSecond--------------------
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
# ------------------BSM MSG Population------------------------
    def BSMCallback(self):
        msg = BSM()
        msg.coredata.msgcnt = self.msgcnt
        msg.coredata.id = self.id
        msg.coredata.secmark = 65535
        self.getVehicleInformation()
        msg.coredata.lat = int(self.lat*10000000)
        msg.coredata.longitude = int(self.lon*10000000)
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
        msg.coredata.brakes.abs = 0
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
        # --------------Publishing Autoware Required Information--------------
        self.pubVelocityReport()
        self.pubSteeringReport()
        # -------------Vehicle Location-----------------
        vehicle_location = self.vehicle.get_location()
        vehicle_ = self.world.get_map().transform_to_geolocation(vehicle_location)
        self.lat = vehicle_.latitude
        self.lon = vehicle_.longitude
        self.elev = vehicle_.altitude
        # print("current position:", self.lat, self.lon)
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
    def create_cloud(self, header, fields, points):
        # """
        # Create a L{sensor_msgs.msg.PointCloud2} message.
        # @param header: The point cloud header.
        # @type  header: L{std_msgs.msg.Header}
        # @param fields: The point cloud fields.
        # @type  fields: iterable of L{sensor_msgs.msg.PointField}
        # @param points: The point cloud points.
        # @type  points: list of iterables, i.e. one iterable for each point, with the
        #                elements of each iterable being the values of the fields for
        #                that point (in the same order as the fields parameter)
        # @return: The point cloud.
        # @rtype:  L{sensor_msgs.msg.PointCloud2}
        # """

        cloud_struct = struct.Struct(_get_struct_fmt(False, fields))

        buff = ctypes.create_string_buffer(cloud_struct.size * len(points))

        point_step, pack_into = cloud_struct.size, cloud_struct.pack_into
        offset = 0
        for p in points:
            pack_into(buff, offset, *p)
            offset += point_step

        return PointCloud2(header=header,
                        height=1,
                        width=len(points),
                        is_dense=False,
                        is_bigendian=False,
                        fields=fields,
                        point_step=cloud_struct.size,
                        row_step=cloud_struct.size * len(points),
                        data=buff.raw)
    def createPCL2msg(self, data):
        header = Header()
        time_stamp = Clock().now()
        header.stamp = time_stamp.to_msg()
        header.frame_id = "velodyne_top_base_link"
        fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
            PointField(name='intensity', offset=12, datatype=PointField.FLOAT32, count=1)
        ]

        lidar_data = np.fromstring(
            bytes(data.raw_data), dtype=np.float32)
        lidar_data = np.reshape(
            lidar_data, (int(lidar_data.shape[0] / 4), 4))
        # we take the opposite of y axis
        # (as lidar point are express in left handed coordinate system, and ros need right handed)
        lidar_data[:, 1] *= -1
        point_cloud_msg = self.create_cloud(header, fields, lidar_data)

        return point_cloud_msg       
    
    def lidarSensorCallback(self, data):
        sensing_msg = self.createPCL2msg(data)
        self.sensing_lidarpublisher_.publish(sensing_msg)
        self.ndt_lidarpublisher_.publish(sensing_msg)
        # change msgcnt
        self.msgcntIncrem() 
    def addLidarSensor(self, x=0,y=0, z=1.7, pitch=0,yaw=0,row=0, channels="16", pps="300000", rot_freq="100", up_fov="15", low_fov="-15", range="100"):
        # creating a publisher
        sensing_qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10
        )
        ndt_qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10
        )
        self.ndt_lidarpublisher_ = self.create_publisher(PointCloud2, '/sensing/lidar/top/outlier_filtered/pointcloud', qos_profile=ndt_qos)
        print("Publishing Lidar Sensor Data for NDT")
        self.sensing_lidarpublisher_ = self.create_publisher(PointCloud2, '/sensing/lidar/concatenated/pointcloud', qos_profile=sensing_qos)
        # print("Publishing Lidar Sensor Data for Sensing")

        # finding the lidar bp
        lidar_bp = self.world.get_blueprint_library().find('sensor.lidar.ray_cast')
        # settings the lidar param
        lidar_bp.set_attribute('channels', channels)
        lidar_bp.set_attribute('points_per_second', pps)
        lidar_bp.set_attribute('rotation_frequency', rot_freq)
        lidar_bp.set_attribute('upper_fov', up_fov)
        lidar_bp.set_attribute('lower_fov', low_fov)
        lidar_bp.set_attribute('range', range)
        lidar_bp.set_attribute('role_name', 'center_main_lidar')
        # finding the location
        lidar_location = carla.Location(x,y,z)
        lidar_rotation = carla.Rotation(pitch,yaw,row)
        lidar_transform = carla.Transform(lidar_location,lidar_rotation)
        # spawn onto vehicle
        lidar_sen = self.world.spawn_actor(lidar_bp,lidar_transform,attach_to=self.vehicle)
        self.sensors.append(lidar_sen)
        # add a callback function to publish data via ros2
        # lidar_sen.listen(lambda point_cloud: self.lidarSensorCallback(point_cloud))
        lidar_sen.listen(lambda point_cloud: point_cloud.save_to_disk('/home/carla/Github/C-V2X-Autoware-Carla/src/vehicle/lidar_data/%.6d.ply' % point_cloud.frame))
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
            # self.image_queue.append(array)
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
        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10
        )
        self.camera_publisher_ = self.create_publisher(Image, 'camera', qos_profile=qos)
        print("Publishing Camera Data")
        # get camera blueprint
        camera_bp = self.blueprint_library.find('sensor.camera.rgb')
        camera_bp.set_attribute('role_name', 'host_front_camera')
        camera_location = carla.Location(x,y,z)
        camera_rotation = carla.Rotation(pitch,yaw,row)
        camera_transform = carla.Transform(camera_location,camera_rotation)   
        # spawn onto vehicle
        front_camera = self.world.spawn_actor(camera_bp, camera_transform, attach_to=self.vehicle)
        self.sensors.append(front_camera)
        front_camera.listen(lambda image: self.RGBSensorcallback(image)) 
# -------------------GNSS Sensor------------------------------------------
    def pubGNSS(self):
        # -------------Vehicle Location-----------------
        vehicle_location = self.vehicle.get_location()
        vehicle_ = self.world.get_map().transform_to_geolocation(vehicle_location)
        orientation = self.vehicle.get_transform().rotation
        # Access the pitch, yaw, and roll angles
        pitch = orientation.pitch
        yaw = orientation.yaw
        roll = orientation.roll
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)

        qw = cy * cr * cp + sy * sr * sp
        qx = cy * sr * cp - sy * cr * sp
        qy = cy * cr * sp + sy * sr * cp
        qz = sy * cr * cp - cy * sr * sp
        # print(self.lat, self.lon, self.elev, pitch, yaw, roll  )
        gnss_msg = PoseWithCovarianceStamped()
        gnss_msg.header.stamp =Clock().now().to_msg()
        gnss_msg.header.frame_id = "map"
        gnss_msg.pose.pose.position.x = self.lat
        gnss_msg.pose.pose.position.y = self.lon
        gnss_msg.pose.pose.position.z = vehicle_.altitude
        gnss_msg.pose.pose.orientation.x = qx
        gnss_msg.pose.pose.orientation.y = qy
        gnss_msg.pose.pose.orientation.z = qz
        gnss_msg.pose.pose.orientation.w = qw

        self.gnss_pub.publish(gnss_msg)

    def GNSSSensorCallback(self, gnss):
        self.lat = gnss.latitude
        self.lon = gnss.longitude
        # if self.init == False:
        #     # Publish /initialpose3d to initialize autoware vehicle, message format: geometry_msgs::msg::PoseWithCovarianceStamped 
        #     self.pubGNSS()
        #     self.init = True
        # else:
        #     # print("Publishing /sensing/gnss/pose_with_covariance.")
        #     self.pubGNSS()
        self.pubGNSS()

    def addGNSSSensor(self):
        gnss_bp = self.blueprint_library.find('sensor.other.gnss')
        gnss_location = carla.Location(0,0,0)
        gnss_rotation = carla.Rotation(0,0,0)
        gnss_transform = carla.Transform(gnss_location,gnss_rotation)   
        # spawn onto vehicle
        center_gnss = self.world.spawn_actor(gnss_bp, gnss_transform, attach_to=self.vehicle)
        self.sensors.append(center_gnss)
        center_gnss.listen(lambda data: self.GNSSSensorCallback(data)) 

# -------------------- IMU Sensor ------------------------------
    def IMUSensorCallback(self, imu_data):
        imu_msg = Imu()
        imu_msg.header.stamp =Clock().now().to_msg()
        imu_msg.header.frame_id = "base_link"
        imu_msg.linear_acceleration.x = imu_data.accelerometer.x
        imu_msg.linear_acceleration.y = imu_data.accelerometer.y
        imu_msg.linear_acceleration.z = imu_data.accelerometer.z
        imu_msg.angular_velocity.x = imu_data.gyroscope.x
        imu_msg.angular_velocity.y = imu_data.gyroscope.y
        imu_msg.angular_velocity.z = imu_data.gyroscope.z
        quaternion = Quaternion()
        quaternion.x = 0.0
        quaternion.y = 0.0
        quaternion.z = 0.0
        quaternion.w = 1.0
        imu_msg.orientation = quaternion
        self.imu_pub.publish(imu_msg)

    def addIMUSensor(self):
        imu_bp = self.blueprint_library.find('sensor.other.imu')
        imu_location = carla.Location(0,0,0)
        imu_rotation = carla.Rotation(0,0,0)
        imu_transform = carla.Transform(imu_location,imu_rotation)   
        # spawn onto vehicle
        center_imu = self.world.spawn_actor(imu_bp, imu_transform, attach_to=self.vehicle)
        self.sensors.append(center_imu)
        center_imu.listen(lambda data: self.IMUSensorCallback(data)) 

# --------------------Vehicle ROS Controls-----------------------
    def vehicleROSControls(self, msg):
        throttle_increament = 0.05

        if msg.data == "auto on":
            self.vehicle.set_autopilot(True)

        if msg.data == "auto off":
            self.vehicle.set_autopilot(False)

        if msg.data == "srm":
            self.SRM()

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

#----------------------------Helper Functions---------------------------------
    def deg2rad(self, deg):
        return deg * (math.pi/180)
  
    def getDistanceFromLatLonInKm(self, lat1,lon1,lat2,lon2):
        R = 6371
        dLat = self.deg2rad(lat2-lat1)
        dLon = self.deg2rad(lon2-lon1)
        a = math.sin(dLat/2) * math.sin(dLat/2) + math.cos(self.deg2rad(lat1)) * math.cos(self.deg2rad(lat2)) * math.sin(dLon/2) * math.sin(dLon/2)

        c = 2 * math.atan2(math.sqrt(a), math.sqrt(1-a)); 
        d = R * c
        return d*1000
# ---------------------------Applications---------------------------------------------
# BSM Subscriber
    def BSMSubscriber_cb(self, bsm_msg):
        # only care about other vehicle's bsm
        if bsm_msg.coredata.id != self.id:
            self.FCW(bsm_msg)
            self.EBW(bsm_msg)

# -----------------------------Forward Collision Warning----------------------------
    
    def FCW(self, rv_bsm):
        # when do we issue the FCW warning?
        rv_heading = rv_bsm.coredata.heading
        hv_heading = self.heading/28800*360

        # if abs(rv_heading-hv_heading) < 200:
        rv_lat = rv_bsm.coredata.lat/10000000
        rv_long = rv_bsm.coredata.longitude/10000000
        
        hv_lat = int(self.lat*10000000)/10000000
        hv_long = int(self.lon*10000000)/10000000
        # print(hv_lat, hv_long, rv_lat, rv_long)
        distance = self.getDistanceFromLatLonInKm(hv_lat, hv_long, rv_lat, rv_long)
        # print(hv_heading)
        # if abs(hv_heading - rv_heading < 30): # same heading
            # determine if they are on the same lane...
            # method 1. compare lat, long with MAP message, find lane id
            # method 2. find angle between 2 (lat, long) points, angle < 60 degrees
        dy = hv_lat - rv_lat
        dx = hv_long - rv_long
        angle = math.atan2(dy, dx)/3.14*180*-1
        if angle < 0:
            angle += 360
        parellel_distance = abs(distance * math.sin(math.radians(abs(angle-hv_heading)))) # check if on same lane
        distance_that_matters = abs(distance * math.cos(math.radians(abs(angle-hv_heading))))
        if self.speed != 0:
            if parellel_distance < 3 and distance_that_matters/self.speed <= 2: # give 2 seconds warning time
                print("FCW Warning Issued!.")
        
# ---------------------------Emergency Brake Warning-----------------------------
    def EBW(self, rv_bsm):
        # when do we issue the EBW warning?
        if rv_bsm.coredata.brakes.abs == 3:
            rv_heading = rv_bsm.coredata.heading
            hv_heading = self.heading/28800*360

            # if abs(rv_heading-hv_heading) < 200:
            rv_lat = rv_bsm.coredata.lat/10000000
            rv_long = rv_bsm.coredata.longitude/10000000
            
            hv_lat = int(self.lat*10000000)/10000000
            hv_long = int(self.lon*10000000)/10000000
            distance = self.getDistanceFromLatLonInKm(hv_lat, hv_long, rv_lat, rv_long)

            dy = hv_lat - rv_lat
            dx = hv_long - rv_long
            angle = math.atan2(dy, dx)/3.14*180*-1
            if angle < 0:
                angle += 360
            parellel_distance = abs(distance * math.sin(math.radians(abs(angle-hv_heading)))) # check if on same lane
            distance_that_matters = abs(distance * math.cos(math.radians(abs(angle-hv_heading))))
            if self.speed != 0:
                if parellel_distance < 3 and distance_that_matters/self.speed <= 2: # give 2 seconds warning time
                    print("EBW Warning Issued!.")

# ---------------------------Signal Request Message -------------------------------
    def SRM(self):
        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10
        )
        self.srmpublisher_=self.create_publisher(SRM, "SRM", qos_profile=qos)
        timer_period = 0.1  # seconds
        self.srmtimer = self.create_timer(timer_period, self.SRMCallBack)

    def SRMCallBack(self):
        print("Publishing SRM mesage.")
        msg = SRM()
        msg.timestamp, msg.second = self.getTimeStamp()
        msg.sequencenumber = self.msgcnt
        self.msgcntIncrem()
        # requests
        actors = self.world.get_actors().filter("traffic.traffic_light")
        # add this to the first in the list
        lucky_traffic_signal = actors[0]
        # requests_list = []
        request_pkg = SignalRequestPackage()
        request_pkg.signalrequest.id.roadregulatorid = 0
        request_pkg.signalrequest.id.intersectionid = lucky_traffic_signal.id
        request_pkg.signalrequest.requestid = 255
        request_pkg.signalrequest.requesttype = 2
        request_pkg.signalrequest.inboundlane.lane = 1
        request_pkg.signalrequest.inboundlane.approach = 1
        request_pkg.signalrequest.inboundlane.connection = 1
        request_pkg.signalrequest.outboundlane.lane = 1
        request_pkg.signalrequest.outboundlane.approach = 1
        request_pkg.signalrequest.outboundlane.connection = 1
        request_pkg.minute, request_pkg.second = msg.timestamp, msg.second
        request_pkg.duration = 65535
        # requests_list.append(request_pkg)
        msg.requests = request_pkg
        # requestor
        msg.requestor.id.entityid = self.id
        msg.requestor.id.stationid = 0
        msg.requestor.type.role = 0
        msg.requestor.type.subrole = 0
        msg.requestor.type.request = 0
        msg.requestor.type.iso3833vehicletype = 0
        msg.requestor.type.hpmstype = 4
        msg.requestor.position.position.latitude = int(self.lat*10000000)
        msg.requestor.position.position.longitude = int(self.lon*10000000)
        msg.requestor.position.position.elevation = int(self.elev*10)
        msg.requestor.position.heading = int(self.heading)
        msg.requestor.position.speed.transmission = self.transmission
        msg.requestor.position.speed.velocity = int(self.speed)
        msg.requestor.name = "Mustang"
        msg.requestor.routename = "Test Route"
        msg.requestor.transitstatus = "000000"
        msg.requestor.transitoccupancy = 0
        msg.requestor.transitschedule = 0
        self.srmpublisher_.publish(msg)

# --------------------Autoware Related Topics-----------------------------
    def AutowareControllCallbacks(self, controlmsg):
        desired_steering = controlmsg.lateral.steering_tire_angle * (180.0 / math.pi)
        desired_steering_rate = controlmsg.lateral.steering_tire_rotation_rate* (180.0 / math.pi)
        desired_acceleration = controlmsg.longitudinal.acceleration

        self.ego_control.steer = desired_steering + desired_steering_rate
        self.vehicle.apply_control(self.ego_control) 
        throttle_increament = 0.05
        brake_increament = 0.05

        if desired_acceleration > 0: # we are moving forward
            self.transmission = 2
            while self.vehicle.get_acceleration().x < desired_acceleration:
                self.ego_control.throttle = min(self.ego_control.throttle + throttle_increament, 1.0)
                self.vehicle.apply_control(self.ego_control) 
            self.ego_control.throttle = 0 # stop pressing on throttle after target acceleration has been reached.
        else:
            if self.speed == 0: # meaning autoware wants us to go in reverse
                self.transmission = 3
                self.vehicle.apply_control(self.ego_control)
                while self.vehicle.get_acceleration().x > desired_acceleration:
                    self.ego_control.throttle = min(self.ego_control.throttle + throttle_increament, 1.0)
                    self.vehicle.apply_control(self.ego_control) 
                self.ego_control.throttle = 0 # stop pressing on throttle after target acceleration has been reached.
            else: # we are breaking
                while self.vehicle.get_acceleration().x > desired_acceleration:
                    self.ego_control.throttle = min(self.ego_control.brake + brake_increament, 1.0)
                    self.vehicle.apply_control(self.ego_control) 
                self.ego_control.brake = 0


        
        self.vehicle.apply_control(self.ego_control) 

    def AutowareControl(self, enabled=True):
        self.enabled = enabled
        if self.enabled:
            print("Enabling Autoware Control")
            self.autoware_control = self.create_subscription(AckermannControlCommand, '/control/command/control_cmd', self.AutowareControllCallbacks, 10)

# -------------------Setting up Publishers ------------------------------
    def setUpPublishers(self):
        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10
        )
        self.vehicle_report_pub = self.create_publisher(VelocityReport, "/vehicle/status/velocity_status", 100)
        print("Publishing Vehicle Report")
        self.steering_report_pub = self.create_publisher(SteeringReport, "/vehicle/status/steering_status", 10)
        print("Publishing Steering Report")
        self.gnss_pub = self.create_publisher(PoseWithCovarianceStamped, "/sensing/gnss/pose_with_covariance", 10)
        print("Publishing GNSS Pose with Covar")
        self.imu_pub = self.create_publisher(Imu, "/sensing/imu/imu_data", 100)
        print("Publishing IMU Data")

# --------------------Velocity Report -------------------------
    def pubVelocityReport(self):
        # print(self.vehicle.get_angular_velocity())
        velocity_report = VelocityReport()
        velocity_report.header.stamp=Clock().now().to_msg()
        velocity_report.header.frame_id = "base_link"
        velocity_report.longitudinal_velocity = 0-self.vehicle.get_velocity().y 
        velocity_report.lateral_velocity = 0-self.vehicle.get_velocity().x
        velocity_report.heading_rate = 0-self.vehicle.get_angular_velocity().z
        self.vehicle_report_pub.publish(velocity_report)
    
    def pubSteeringReport(self):
        steering_angle = self.vehicle.get_control().steer
        steering_angle_degrees = steering_angle * 45.0  # Scaling to [-45, 45] degrees
        steering_angle_radians = math.radians(steering_angle_degrees)
        
        msg = SteeringReport()
        msg.stamp=Clock().now().to_msg()
        msg.steering_tire_angle = steering_angle_radians
        self.steering_report_pub.publish(msg)

# ------------------------------------- Destroy -------------------------------------
    def destroy(self):
        destroyed = self.vehicle.destroy()
        if self.vehicle.is_alive:
            # Perform operations on the vehicle
            print("Vehicle is still valid")
        else:
            return destroyed
        
# ---------------------------------------- Setting up Autoware Controls --------------------------


def main(args=None):
    # initialize ROS2
    rclpy.init(args=args)
    # list of things to do
    # 1. Connect to world
    client = carla.Client('localhost', 2000)
    client.set_timeout(10.0) #seconds
    # 2. Get World Information
    world = client.get_world()
    # Toggle all buildings off
    world.unload_map_layer(carla.MapLayer.Buildings)
    # get a list of spawn points
    spawn_points = world.get_map().get_spawn_points()

    # spawn_point = spawn_points[random.randint(1, len(spawn_points)-1)]
    spawn_point = spawn_points[1]
    # spawn the vehicle
    demo_veh = DefaultVehicle(world, spawn_point)
    # add lidar sensor
    demo_veh.addLidarSensor()
    # print("Publishing Lidar Sensor Data")
    # add camera sensor
    demo_veh.addRBGCameraSensor()
    # print("Publishing Front Camera Data")
    # add GNSS Sensor
    demo_veh.addGNSSSensor()
    # print("Publishing GNSS Data")
    # add IMU Sensor
    demo_veh.addIMUSensor()
    # print("Publishing IMU Sensor Data")
    # demo_veh.AutowareControl(True)
    
    
    try:
        rclpy.spin(demo_veh)
        
    except KeyboardInterrupt:
        destroyed = demo_veh.destroy()

        if destroyed:
            print("Vehicle Destroyed")
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the nodbe object)
    demo_veh.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()