.PHONY: build run bash stop clean

IMAGE=delibflow-ws:jazzy
CONTAINER=delibflow-dev

# Build the dependency image from the repository root
build:
	docker build -f Dockerfile -t $(IMAGE) ..

# Start an interactive container with this repository mounted
run:
	./run_container.sh

# Open another shell in the running container
bash:
	docker exec -it -u $$(id -u) -e HOME=/home/bt_user $(CONTAINER) bash

stop:
	docker stop $(CONTAINER)

clean:
	docker rmi $(IMAGE)
