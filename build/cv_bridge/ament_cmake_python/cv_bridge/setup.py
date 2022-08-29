import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='cv_bridge',
    version='3.0.3',
    packages=find_packages(
        include=('cv_bridge', 'cv_bridge.*')),
)
