import os

number_of_rvs = 1
os.system("source install/setup.bash")
for i in range(number_of_rvs):
    os.system("ros2 run vehicle remote_vehicle")
