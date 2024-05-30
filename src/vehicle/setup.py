from setuptools import setup
import os
from glob import glob

package_name = 'vehicle'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml'])
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='carla',
    maintainer_email='williamhecoin@yahoo.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'host_vehicle = vehicle.host_vehicle:main',
            'remote_vehicle = vehicle.remote_vehicle:main',
            'ren_vehicle = vehicle.ren_vehicle:main' 
        ],
    },
)
