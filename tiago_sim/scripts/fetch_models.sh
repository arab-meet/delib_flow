# Copyright (c) 2025 Arabian Robotics. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the 'License');
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#!/usr/bin/env bash
set -euo pipefail

# ==========================================
# YOLO11 Weights Downloader
# Downloads yolo11n.pt and yolo11m.pt
# Places them into ../models (beside scripts/)
# ==========================================

# Script location (scripts folder)
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Target models folder (one level up from scripts)
DEST_DIR="${SCRIPT_DIR}/../models"

# Temp folder to download into (inside scripts)
TMP_DIR="${SCRIPT_DIR}/downloads"
mkdir -p "$TMP_DIR"

# URLs for YOLO11 models (Ultralytics hosting - update if needed)
URL_N="https://github.com/ultralytics/assets/releases/download/v8.3.0/yolo11n.pt"
URL_M="https://github.com/ultralytics/assets/releases/download/v8.3.0/yolo11m.pt"

download() {
  local url=$1
  local out="$TMP_DIR/$2"

  if [[ -f "$DEST_DIR/$2" ]]; then
    echo "$2 already exists in models/, skipping."
    return
  fi

  echo "Downloading $2..."
  if command -v curl >/dev/null 2>&1; then
    curl -fL --retry 3 --retry-delay 2 -o "$out" "$url"
  elif command -v wget >/dev/null 2>&1; then
    wget -O "$out" "$url"
  else
    echo "Neither curl nor wget found."
    exit 1
  fi

  mv "$out" "$DEST_DIR/"
  echo "Moved $2 to $DEST_DIR/"
}

# Download both models
download "$URL_N" "yolo11n.pt"
download "$URL_M" "yolo11m.pt"

# Cleanup tmp
rmdir "$TMP_DIR" 2>/dev/null || true

echo "All done. Models available in: $DEST_DIR"
