import carla
import os

import open3d as o3d

def convertPLY2PCD(input, output):
    pcd = o3d.io.read_point_cloud(input)
    o3d.io.write_point_cloud(output, pcd)

def convertOSM2XODR(input, output):
    # Read the .osm data
    f = open(input, 'r')
    osm_data = f.read()
    f.close()

    # Define the desired settings. In this case, default values.
    settings = carla.Osm2OdrSettings()
    # Set OSM road types to export to OpenDRIVE
    settings.set_osm_way_types(["motorway", "motorway_link", "trunk", "trunk_link", "primary", "primary_link", "secondary", "secondary_link", "tertiary", "tertiary_link", "unclassified", "residential"])
    # Convert to .xodr
    xodr_data = carla.Osm2Odr.convert(osm_data, settings)

    # save opendrive file
    f = open(output, 'w')
    f.write(xodr_data)
    f.close()

input = "/home/carla/Github/C-V2X-Autoware-Carla/src/map/osm/UDDT.osm"
output = "/home/carla/Github/C-V2X-Autoware-Carla/src/map/xodr/UDDT.xodr"
convertOSM2XODR(input, output)

# input = "/home/carla/Github/C-V2X-Autoware-Carla/src/vehicle/lidar_data/110494.ply"
# output = "/home/carla/Github/C-V2X-Autoware-Carla/src/vehicle/lidar_data/paper.pcd"
# convertPLY2PCD(input, output)