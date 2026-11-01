#!/usr/bin/env python3
"""Turn Grab2's mock-hardware Panda URDF into a Gazebo one with usable contact.

Differences from experiments/panda_gz (the pilot): both fingers are commanded by one trajectory
controller, as on TIAGo, with no mirror node, and the finger collision meshes are replaced by boxes
with set friction. usage: make_urdf.py <out.urdf> <controllers.yaml>
"""
import re
import subprocess
import sys

from ament_index_python.packages import get_package_share_directory as share

xacro_file = share("grab2_controller") + "/description/panda/panda.urdf.xacro"
controllers = sys.argv[2]
urdf = subprocess.run(
    ["xacro", xacro_file, "ros2_control_hardware_type:=mock_components"],
    capture_output=True,
    text=True,
    check=True,
).stdout
urdf = urdf.replace("mock_components/GenericSystem", "gz_ros2_control/GazeboSimSystem")

# MoveIt's Panda URDF has no inertials, which Gazebo needs. Franka's published link masses with
# uniform-box inertia estimates. The arm is position controlled, so these need not be exact.
MASSES = {
    "panda_link0": 2.92,
    "panda_link1": 2.74,
    "panda_link2": 2.74,
    "panda_link3": 2.38,
    "panda_link4": 2.38,
    "panda_link5": 2.74,
    "panda_link6": 1.55,
    "panda_link7": 0.54,
    "panda_link8": 0.01,
    "panda_hand": 0.73,
    "panda_leftfinger": 0.1,
    "panda_rightfinger": 0.1,
}
for link, mass in MASSES.items():
    i = mass * 0.01 if mass > 0.2 else mass * 0.001
    inertial = (
        f'<inertial><mass value="{mass}"/><origin xyz="0 0 0"/>'
        f'<inertia ixx="{i}" ixy="0" ixz="0" iyy="{i}" iyz="0" izz="{i}"/></inertial>'
    )
    urdf = re.sub(rf'(<link name="{link}"\s*>)', rf"\1{inertial}", urdf)
    urdf = re.sub(
        rf'<link name="{link}"\s*/>', f'<link name="{link}">{inertial}</link>', urdf
    )

# Both fingers get their own command interface and one controller commands both
urdf = re.sub(r'<mimic joint="panda_finger_joint1"[^>]*/>', "", urdf)
urdf = re.sub(
    r'<param name="mimic">panda_finger_joint1</param>\s*<param name="multiplier">1</param>',
    '<command_interface name="position"/>',
    urdf,
)


# A finger resting on its joint limit stays stuck for seconds when told to close. The tree opens to
# 0.04 m, the real Panda's limit, so keep the simulated limit above it. Fingers also start open.
urdf, n = re.subn(
    r'(<joint name="panda_finger_joint\d" type="prismatic">.*?)upper="0.04"',
    r'\1upper="0.045"',
    urdf,
    flags=re.S,
)
assert n == 2
urdf, n = re.subn(
    r'(<joint name="panda_finger_joint\d">.*?<state_interface name="position">\s*<param name="initial_value">)0.0',
    r"\g<1>0.04",
    urdf,
    flags=re.S,
)
assert n == 2


def finger_boxes(sign):
    """Pad and body of a finger. The bounds come from finger.stl: x +-0.0105, y 0-0.0264, z 0-0.0538."""
    boxes = [
        ((0, 0.0076, 0.0449), (0.021, 0.0152, 0.0178)),
        ((0, 0.0187, 0.018), (0.021, 0.0154, 0.036)),
    ]
    return "".join(
        f'<collision><origin xyz="{x} {sign * y} {z}"/><geometry><box size="{a} {b} {c}"/></geometry></collision>'
        for (x, y, z), (a, b, c) in boxes
    )


for link, sign in (("panda_leftfinger", 1), ("panda_rightfinger", -1)):
    pattern = rf'(<link name="{link}"\s*>.*?)<collision>.*?</collision>(.*?</link>)'
    urdf, n = re.subn(
        pattern,
        lambda m, s=sign: m[1] + finger_boxes(s) + m[2],
        urdf,
        count=1,
        flags=re.S,
    )
    assert n == 1, link

# DelibFlow's location file holds x, y, z and yaw only. This tool frame makes yaw 0 mean the top-down
# grasp, with the fingers closing across the cube's faces. The transform is what Grab2's Panda demo sends as a goal.
extra = f"""
  <link name="panda_tool"/>
  <joint name="panda_tool_joint" type="fixed"><parent link="panda_link8"/><child link="panda_tool"/>
    <origin rpy="3.14159265 0 -0.78539816"/></joint>
  <link name="world"/>
  <joint name="world_to_base" type="fixed"><parent link="world"/><child link="panda_link0"/></joint>
  <gazebo reference="panda_leftfinger"><mu1>1.0</mu1><mu2>1.0</mu2></gazebo>
  <gazebo reference="panda_rightfinger"><mu1>1.0</mu1><mu2>1.0</mu2></gazebo>
  <gazebo>
    <plugin filename="libgz_ros2_control-system.so" name="gz_ros2_control::GazeboSimROS2ControlPlugin">
      <parameters>{controllers}</parameters>
    </plugin>
  </gazebo>
</robot>"""
urdf = urdf.replace("</robot>", extra)
open(sys.argv[1], "w").write(urdf)
