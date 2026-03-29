from setuptools import find_packages
from setuptools import setup

setup(
    name='sd_localization_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('sd_localization_msgs', 'sd_localization_msgs.*')),
)
