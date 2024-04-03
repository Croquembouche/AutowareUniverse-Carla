# Autoware-Carla (BlueICE Baseline)

docker file is available at williamcoin/bluebice:v1.0

## How to use?
### Setting up CARLA: Version Compatibility: >= 0.9.13
1. Install CARLA
2. Ingest map. If CARLA Built from source: https://carla.readthedocs.io/en/0.9.13/tuto_M_add_map_source/; If CARLA Pre-Built: https://carla.readthedocs.io/en/0.9.13/tuto_M_add_map_package/
3. Required map files are located in autoware_map/ud-modular-lab

### Setting up Autoware

#### Installation from source
Installing from source is currently unavailable. I have not had the chance to update the existing files to the newest autoware version

#### If using Docker/Rocker Container
1. Terminal command to run docker: `rocker --nvidia --x11 williamhecoin/blueice:v1.0'

## Running the Co-Sim
1. Start Carla simulation
2. `source install/setup.bash` from both Autoware and this repo
3. run `ros2 launch autoware_launch Bluebird_Carla.launch.xml map_path:=$HOME/autoware_map/ud-modular-lab vehicle_model:=sample_vehicle sensor_model:=sample_sensor_kit` on the Autoware side
4. run `ros2 run vehicle host_vehicle` on this repo's side
5. You should see a RViz screen with a pointcloud map of the UD Modular Lab, Lanes, and Vehicle pointclouds
6. Use 2D pose in RViz to supply an initial position
7. Use 2D Goal Pose To supply a destination.
8. The vehicle should start moving as soon as a destination is given.

#### Known Bug
1. The vehicle should receive commands through `/control/command/control_cmd`, but it current receives control from `/control/trajectory_follower/control_cmd`

#### If you have further questions, email me at willhe@udel.edu
#### Paper to Cite: Still Under Review
