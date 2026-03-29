from setuptools import find_packages
from setuptools import setup

setup(
    name='sd_can_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('sd_can_msgs', 'sd_can_msgs.*')),
)
