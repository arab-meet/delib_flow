#!/usr/bin/env bash
set -e

# Start a headless X server only when DISPLAY is :99
if command -v Xvfb >/dev/null 2>&1 && [ "${DISPLAY}" = ":99" ]; then
    echo "[entrypoint] Starting Xvfb on ${DISPLAY}"
    Xvfb :99 -screen 0 1600x1200x24+32 &
fi

source "/opt/ros/jazzy/setup.bash"
if [ -f "/bt_ws/install/setup.bash" ]; then
    source "/bt_ws/install/setup.bash"
fi

# Run as the host user so files written to the mounted workspace belong to them
if [ -n "${LOCAL_USER_ID}" ]; then
    useradd --shell /bin/bash -u "${LOCAL_USER_ID}" -o -m bt_user 2>/dev/null || true
    export HOME=/home/bt_user
    exec gosu bt_user "$@"
fi

exec "$@"
