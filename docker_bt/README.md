# Docker Setup for ROS 2 Jazzy with Gazebo Harmonic

This Docker setup provides a complete development environment for ROS 2 Jazzy
with Gazebo Harmonic, pre-configured with the Bt workspace.

## Overview

- **Base Image**: ROS 2 Jazzy Desktop Full (`osrf/ros:jazzy-desktop-full`)
- **Gazebo Version**: Harmonic (binary installation)
- **Workspace**: `/bt_ws` (pre-built in the image)
- **Shared Volume**: `~/shared_bt` (accessible from both host and container)

## Prerequisites

- Docker installed and running
- X11 server (for Gazebo GUI)
- Git credentials (for private repository access)

## Quick Start

### 1. Build the Docker Image

```bash
cd docker_bt
make build
```

This will:

- Build the Docker image with ROS 2 Jazzy and Gazebo Harmonic
- Clone the Bt repository
- Install all dependencies
- Build the workspace with colcon

**Note**: The build process may take 15-30 minutes depending on your system.

### 2. Run the Container

```bash
make run
```

Or use the run script directly:

```bash
./run_container.sh
```

This will:

- Start an interactive container
- Mount the workspace to `~/shared_bt/bt_ws` on your host
- Set up X11 forwarding for Gazebo GUI
- Source ROS 2 and workspace environments

### 3. Access the Container

Once inside the container, you'll have:

- ROS 2 Jazzy environment sourced
- Workspace at `/bt_ws`
- Full access to edit files via `~/shared_bt/bt_ws` on your host

## Makefile Commands

The Makefile provides convenient shortcuts:

```bash
make build    # Build the Docker image
make run      # Run the container interactively
make bash     # Attach to running container or start new one
make stop     # Stop and remove the container
make clean    # Remove image and clean up
```

## Shared Volume

The workspace is mounted to your home directory for easy access:

- **Host Path**: `~/shared_bt/bt_ws`
- **Container Path**: `/bt_ws`

### Editing Files

You can edit files from your host machine:

```bash
# On your host
cd ~/shared_bt/bt_ws/src/Bt
# Make your edits here
```

Changes are immediately visible inside the container. After editing, rebuild:

```bash
# Inside container
cd /bt_ws
colcon build
```

## Common Workflows

### Running Simulation

```bash
# Inside container
ros2 launch tiago_sim sim.launch.py
```

### Building the Workspace

```bash
# Inside container
cd /bt_ws
colcon build
```

### Rebuilding Specific Package

```bash
# Inside container
cd /bt_ws
colcon build --packages-select <package_name>
```

### Running Navigation

```bash
# Inside container
ros2 launch tiago_nav tiago_nav2.launch.py
```

## Environment Variables

The container uses the following environment variables (set automatically):

- `ROS_DISTRO=jazzy`
- `QT_X11_NO_MITSHM=1` (for GUI support)
- `GALLIUM_DRIVER=llvmpipe` (software rendering)
- `MESA_GL_VERSION_OVERRIDE=3.3`
- `GZ_SIM_RENDER_ENGINE=ogre2`

## GitHub Credentials

The Dockerfile uses GitHub credentials for cloning private repositories.
These are set in the Makefile:

- `GIT_USER`: Your GitHub username
- `GIT_TOKEN`: Your GitHub personal access token

To override, use:

```bash
GIT_USER=your_username GIT_TOKEN=your_token make build
```

## Troubleshooting

### Container Won't Start

```bash
# Check if container exists
docker ps -a | grep bt_ros2_jazzy_container

# Remove old container
make stop

# Try again
make run
```

### Gazebo GUI Not Showing

Ensure X11 forwarding is set up:

```bash
# On host
xhost +local:root

# Then restart container
make stop
make run
```

### Workspace Not Found

If `/bt_ws` is empty or missing:

```bash
# Inside container, check if workspace exists
ls -la /bt_ws

# If empty, the workspace should be in ~/shared_bt/bt_ws
# Copy it or rebuild
cd /bt_ws
colcon build
```

### Permission Errors

If you get permission errors:

```bash
# Inside container
sudo chown -R $(whoami):$(whoami) /bt_ws
```

### Graphics/Rendering Issues

If you encounter MESA/Vulkan errors, the container is configured for software
rendering. If issues persist:

```bash
# Try running Gazebo in headless mode
export GZ_SIM_HEADLESS=1
gz sim <your_world>
```

## File Structure

```text
docker_bt/
├── Dockerfile              # Main Docker image definition
├── Makefile                # Convenience commands
├── run_container.sh        # Container run script
├── scripts/
│   └── entrypoint.sh      # Container entrypoint script
└── README.md              # This file
```

## Workspace Structure

```text
/bt_ws/
├── src/                   # Source packages
│   └── Bt/                # Main repository
├── build/                 # Build artifacts
├── install/               # Installed packages
└── log/                   # Build logs
```

## Notes

- The workspace is pre-built in the Docker image
- Source files are synced via the shared volume
- Build artifacts (`build/`, `install/`, `log/`) are not synced by default
- The container runs as a non-root user (UID 1000) for security
- Git is configured to trust all directories to avoid ownership issues

## Support

For issues or questions:

1. Check the troubleshooting section above
2. Review Docker logs: `docker logs bt_ros2_jazzy_container`
3. Check container status: `docker ps -a`
