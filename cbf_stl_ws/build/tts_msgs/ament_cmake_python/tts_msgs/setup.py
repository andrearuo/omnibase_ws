from setuptools import find_packages
from setuptools import setup

setup(
    name='tts_msgs',
    version='1.1.0',
    packages=find_packages(
        include=('tts_msgs', 'tts_msgs.*')),
)
