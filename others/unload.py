import carla
import sys
import glob
import os

try:
    sys.path.append(glob.glob('../carla/dist/carla-*%d.%d-%s.egg' % (
    sys.version_info.major,
    sys.version_info.minor,
    'win-amd64' if os.name == 'nt' else 'linux-x86_64'))[0])
except IndexError:
    pass


client = carla.Client('localhost', 2000)
client.set_timeout(10.0) #seconds
# 2. Get World Information
world = client.get_world()
# Toggle all buildings off
world.unload_map_layer(carla.MapLayer.Buildings)
world.unload_map_layer(carla.MapLayer.Decals)
world.unload_map_layer(carla.MapLayer.Foliage)
world.unload_map_layer(carla.MapLayer.ParkedVehicles)
world.unload_map_layer(carla.MapLayer.Particles)
world.unload_map_layer(carla.MapLayer.Props)
world.unload_map_layer(carla.MapLayer.Walls)