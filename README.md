<h1 align="center">
  <img src="https://raw.githubusercontent.com/ros-infrastructure/artwork/master/ros_logo.svg" alt="ROS Logo" width="80" height="80"/>
  <br/>
  DelibFlow
  <br/>
  <sub>Behavior Tree Framework for TIAGo Robots</sub>
</h1>

<p align="center">
  <a href="https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml"><img src="https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml/badge.svg" alt="ROS2 CI"></a>
  <img src="https://img.shields.io/badge/ROS2-Jazzy-blue?logo=ros" alt="ROS 2 Jazzy">
  <img src="https://img.shields.io/badge/Gazebo-Harmonic-orange?logo=gazebo" alt="Gazebo Harmonic">
  <img src="https://img.shields.io/badge/Python-3.10+-yellow?logo=python" alt="Python 3.10+">
  <img src="https://img.shields.io/badge/Docker-Supported-blue?logo=docker" alt="Docker">
</p>

> [!WARNING]
> This is an experimental, work-in-progress repository!

---

## ✨ Introduction

**DelibFlow** is a ROS 2 framework for orchestrating complex robot behaviors using **Behavior Trees (BTs)**. It integrates high-level decision-making with standard ROS 2 stacks for Navigation, Manipulation, and Perception on PAL Robotics' TIAGo platform.

<p align="center">
  <img src="docs/assets/architecture_overview.png" alt="Architecture Overview" width="700"/>
</p>

---

## 🏗️ System Architecture

```mermaid
graph TD
    subgraph Behavior Trees
        BT[Behavior Tree Engine<br/>BehaviorTree.CPP]
    end

    subgraph Capabilities
        NAV[Navigation<br/>tiago_nav]
        MANIP[Manipulation<br/>tiago_grab]
        PERC[Perception<br/>tiago_aruco_broadcast]
    end

    subgraph Simulation
        SIM[Gazebo Harmonic<br/>tiago_sim]
    end

    BT --> NAV
    BT --> MANIP
    BT --> PERC
    NAV --> SIM
    MANIP --> SIM
    PERC --> SIM
```

---

## 📦 Tech Stack & Requirements

| Requirement | Version / Details |
|-------------|-------------------|
| **ROS 2** | Jazzy Jalisco |
| **Gazebo** | Harmonic |
| **BehaviorTree.CPP** | v4.x |
| **Nav2** | latest |
| **Python** | 3.10+ |
| **Docker** | (Optional) for containerized builds |

### Third-Party Libraries
- `BehaviorTree.CPP`
- `nav2_behavior_tree`
- PAL Robotics TIAGo packages

---

## 📁 Repository Structure

```
DelibFlow/
├── docs/                   # Sphinx Documentation
├── tiago_aruco_broadcast/  # 📷 Perception (ArUco Detection)
├── tiago_demos/            # 🧠 Behavior Tree Demos
├── tiago_grab/             # 🦾 Manipulation
├── tiago_nav/              # 🧭 Navigation (Nav2)
├── tiago_sim/              # 🎮 Simulation (Gazebo)
├── tiago_slam/             # 🗺️ SLAM
└── ThirdParty/             # External Dependencies
```

---

## 🚀 Getting Started

### 1. Clone & Setup

```bash
mkdir -p ~/bt_ws/src && cd ~/bt_ws/src
git clone https://github.com/arab-meet/Bt.git
cd Bt && ./setup_third_party_pkgs.sh
```

### 2. Build

```bash
cd ~/bt_ws
colcon build --symlink-install
source install/setup.bash
```

### 3. Launch Simulation

```bash
ros2 launch tiago_sim tiago_sim.launch.py
```

### 4. Run Capabilities

| Capability | Command |
|------------|---------|
| **Navigation** | `ros2 launch tiago_nav tiago_nav2.launch.py` |
| **SLAM** | `ros2 launch tiago_slam tiago_slam_toolbox.launch.py` |
| **Perception** | `ros2 launch tiago_aruco_broadcast aruco.launch.py` |

---

## 🐳 Docker (Optional)

A Docker environment is provided for reproducible builds:

```bash
cd docker_bt
docker compose up
```

---

## 📖 Documentation

Build and view the Sphinx documentation:

```bash
cd docs && make html
# Open docs/build/hybrid/index.html
```

---

## 📜 License

See the [LICENSE](LICENSE) file for details.

---

<p align="center">
  <sub>Built with ❤️ by the Arab Meet Community</sub>
</p>
