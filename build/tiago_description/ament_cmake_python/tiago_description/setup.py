from setuptools import find_packages
from setuptools import setup

setup(
    name='tiago_description',
    version='4.2.20',
    packages=find_packages(
        include=('tiago_description', 'tiago_description.*')),
)
