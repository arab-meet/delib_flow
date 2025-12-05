#!/usr/bin/env bash
set -e

# -----------------------------------------------------------
# 1. Start a headless X server only when DISPLAY == :99
# -----------------------------------------------------------
if command -v Xvfb >/dev/null 2>&1 && [ "${DISPLAY}" = ":99" ]; then
    echo "[entrypoint] Starting Xvfb on ${DISPLAY}"
    Xvfb :99 -screen 0 1600x1200x24+32 &
fi

# -----------------------------------------------------------
# 2. Source ROS 2 Jazzy
# -----------------------------------------------------------
if [ -f "/opt/ros/jazzy/setup.bash" ]; then
    echo "[entrypoint] Sourcing ROS 2 jazzy"
    # shellcheck disable=SC1090
    source "/opt/ros/jazzy/setup.bash"
fi

# -----------------------------------------------------------
# 3. Source workspace setup (if available)
# -----------------------------------------------------------
# Note: This happens before workspace initialization, so install might not exist yet
# It will be sourced again in .bashrc after workspace is ready
if [ -f "/bt_ws/install/setup.bash" ]; then
    echo "[entrypoint] Sourcing workspace setup"
    # shellcheck disable=SC1090
    source "/bt_ws/install/setup.bash"
fi

# -----------------------------------------------------------
# 4. Switch to non-root user, optionally remapping UID/GID
# -----------------------------------------------------------
# Detect the default user (UID 1000) or use bt_user as fallback
if id -u 1000 >/dev/null 2>&1; then
    RUNTIME_USER=$(id -nu 1000)
else
    RUNTIME_USER="bt_user"
fi

if [ -n "${LOCAL_USER_ID}" ]; then
    echo "[entrypoint] Remapping ${RUNTIME_USER} to UID:GID ${LOCAL_USER_ID}:${LOCAL_USER_ID}"
    # Change UID and primary GID so that files created in a mounted
    # volume belong to the host user.
    usermod  -u "${LOCAL_USER_ID}" "${RUNTIME_USER}"
    groupmod -g "${LOCAL_USER_ID}" "${RUNTIME_USER}"
fi

# -----------------------------------------------------------
# 5. Initialize workspace in mounted volume if empty
# -----------------------------------------------------------
# Check if /bt_ws is mounted and if it's empty, initialize from image backup
if mountpoint -q /bt_ws 2>/dev/null; then
    if [ -z "$(ls -A /bt_ws/src 2>/dev/null)" ]; then
        echo "[entrypoint] Mounted workspace is empty, initializing from image..."
        # Since /bt_ws is mounted, we can't access the original
        # The workspace should have been copied by run script, but if not, create structure
        mkdir -p /bt_ws/src /bt_ws/build /bt_ws/install /bt_ws/log
        echo "[entrypoint] Workspace structure created. You may need to clone repository and rebuild."
    else
        echo "[entrypoint] Workspace mounted and contains files - ready to use"
    fi
else
    # Not mounted, so workspace is in image - copy to shared volume for access
    if [ -d "/shared_bt" ] && [ -d "/bt_ws/src" ]; then
        if [ ! -d "/shared_bt/bt_ws" ] || [ -z "$(ls -A /shared_bt/bt_ws/src 2>/dev/null)" ]; then
            echo "[entrypoint] Copying workspace to shared volume..."
            mkdir -p /shared_bt/bt_ws
            cp -r /bt_ws/* /shared_bt/bt_ws/ 2>/dev/null || true
            chown -R "${RUNTIME_USER}:${RUNTIME_USER}" /shared_bt/bt_ws 2>/dev/null || true
            echo "[entrypoint] Workspace copied to /shared_bt/bt_ws"
        fi
    fi
fi

# exec as the non-root user (gosu is already in the image)
exec gosu "${RUNTIME_USER}" "$@"

