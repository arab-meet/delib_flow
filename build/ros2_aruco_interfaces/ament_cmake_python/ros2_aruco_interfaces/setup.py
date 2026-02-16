from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_aruco_interfaces',
    version='0.1.0',
    packages=find_packages(
        include=('ros2_aruco_interfaces', 'ros2_aruco_interfaces.*')),
)
