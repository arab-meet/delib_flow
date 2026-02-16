from setuptools import find_packages
from setuptools import setup

setup(
    name='omni_base_description',
    version='2.0.19',
    packages=find_packages(
        include=('omni_base_description', 'omni_base_description.*')),
)
