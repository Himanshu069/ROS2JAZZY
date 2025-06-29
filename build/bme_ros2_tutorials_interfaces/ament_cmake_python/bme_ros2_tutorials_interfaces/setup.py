from setuptools import find_packages
from setuptools import setup

setup(
    name='bme_ros2_tutorials_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('bme_ros2_tutorials_interfaces', 'bme_ros2_tutorials_interfaces.*')),
)
