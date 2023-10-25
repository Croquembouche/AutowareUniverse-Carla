from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_auto_system_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('autoware_auto_system_msgs', 'autoware_auto_system_msgs.*')),
)
