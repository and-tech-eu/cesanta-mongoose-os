DOCKERFILES = esp32-build
SPIFFS_CONFIG_PATH = /vfs-fs-spiffs/include/esp32xx
PLATFORMS = amd64
# Can't build arm64 image on amd64. TODO(nikwest): Fix it.
# arm64

DOCKER_FLAGS = --build-arg=DOCKER_TAG=$(DOCKER_TAG)

include ../docker.mk

docker-pre-build-esp32-build: mgos_fw_meta.py serve_core mklfs mkspiffs mkspiffs8

clean: clean-tools
