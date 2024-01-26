from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_adapi_v1_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('autoware_adapi_v1_msgs', 'autoware_adapi_v1_msgs.*')),
)
