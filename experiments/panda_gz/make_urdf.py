#!/usr/bin/env python3
"""Turn Grab2's mock-hardware Panda URDF into a Gazebo one: swap the ros2_control plugin, fix the base to the world, add the gz plugin."""
import re
import subprocess
import sys

from ament_index_python.packages import get_package_share_directory as share

xacro_file = share('grab2_controller') + '/description/panda/panda.urdf.xacro'
controllers = sys.argv[2]
urdf = subprocess.run(
    ['xacro', xacro_file, 'ros2_control_hardware_type:=mock_components'],
    capture_output=True,
    text=True,
    check=True,
).stdout
urdf = urdf.replace('mock_components/GenericSystem', 'gz_ros2_control/GazeboSimSystem')

# MoveIt's Panda URDF has no inertials, which Gazebo needs. Use Franka's published link masses
# with uniform-box inertia estimates. The arm is position controlled, so these need not be exact.
MASSES = {
    'panda_link0': 2.92,
    'panda_link1': 2.74,
    'panda_link2': 2.74,
    'panda_link3': 2.38,
    'panda_link4': 2.38,
    'panda_link5': 2.74,
    'panda_link6': 1.55,
    'panda_link7': 0.54,
    'panda_link8': 0.01,
    'panda_hand': 0.73,
    'panda_leftfinger': 0.1,
    'panda_rightfinger': 0.1,
}
for link, mass in MASSES.items():
    i = mass * 0.01 if mass > 0.2 else mass * 0.001
    inertial = (
        f'<inertial><mass value="{mass}"/><origin xyz="0 0 0"/>'
        f'<inertia ixx="{i}" ixy="0" ixz="0" iyy="{i}" iyz="0" izz="{i}"/></inertial>'
    )
    urdf = re.sub(rf'(<link name="{link}"\s*>)', rf'\1{inertial}', urdf)
    urdf = re.sub(
        rf'<link name="{link}"\s*/>', f'<link name="{link}">{inertial}</link>', urdf
    )
# Gazebo's DART engine has no mimic constraints, so finger 2 gets its own command and finger_mirror.py follows finger 1
urdf = re.sub(r'<mimic joint="panda_finger_joint1"[^>]*/>', '', urdf)
urdf = re.sub(
    r'<param name="mimic">panda_finger_joint1</param>\s*<param name="multiplier">1</param>',
    '<command_interface name="position"/>',
    urdf,
)
extra = f'''
  <link name="world"/>
  <joint name="world_to_base" type="fixed"><parent link="world"/><child link="panda_link0"/></joint>
  <gazebo>
    <plugin filename="libgz_ros2_control-system.so" name="gz_ros2_control::GazeboSimROS2ControlPlugin">
      <parameters>{controllers}</parameters>
    </plugin>
  </gazebo>
</robot>'''
urdf = urdf.replace('</robot>', extra)
open(sys.argv[1], 'w').write(urdf)
