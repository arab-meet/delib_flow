.PHONY: build run bash stop clean

# Docker image and container names
IMAGE_NAME=bt_ros2_jazzy
IMAGE_TAG=latest
CONTAINER_NAME=bt_ros2_jazzy_container

# GitHub credentials (can be overridden via environment variables)
GIT_USER ?= 
GIT_TOKEN ?= 

# Default target
all: build

# Build the Docker image
build:
	docker build \
		--build-arg GIT_USER=$(GIT_USER) \
		--build-arg GIT_TOKEN=$(GIT_TOKEN) \
		-t $(IMAGE_NAME):$(IMAGE_TAG) -f Dockerfile .

# Run the container interactively
run:
	@if [ -z "$(shell docker ps -aq -f name=$(CONTAINER_NAME))" ]; then \
		./run_container.sh; \
	else \
		echo "Container $(CONTAINER_NAME) already exists. Use 'make bash' to attach or 'make stop' to remove it first."; \
	fi

# Attach to running container or start a new one
bash:
	@if [ -n "$(shell docker ps -q -f name=$(CONTAINER_NAME))" ]; then \
		docker exec -it $(CONTAINER_NAME) /bin/bash; \
	elif [ -n "$(shell docker ps -aq -f name=$(CONTAINER_NAME))" ]; then \
		docker start $(CONTAINER_NAME) && docker exec -it $(CONTAINER_NAME) /bin/bash; \
	else \
		./run_container.sh; \
	fi

# Stop and remove the container
stop:
	@if [ -n "$(shell docker ps -q -f name=$(CONTAINER_NAME))" ]; then \
		docker stop $(CONTAINER_NAME); \
	fi
	@if [ -n "$(shell docker ps -aq -f name=$(CONTAINER_NAME))" ]; then \
		docker rm $(CONTAINER_NAME); \
	fi

# Clean up Docker image and containers
clean: stop
	docker rmi $(IMAGE_NAME):$(IMAGE_TAG) || true
	docker system prune -f

