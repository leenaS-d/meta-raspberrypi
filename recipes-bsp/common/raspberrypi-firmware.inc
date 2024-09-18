#RPIFW_DATE ?= "20220830"

#RPIFW_SRC_URI ?= "https://archive.raspberrypi.com/debian/pool/main/r/raspberrypi-firmware/raspberrypi-firmware_1.${RPIFW_DATE}.orig.tar.xz"
#RPIFW_S ?= "${WORKDIR}/raspberrypi-firmware-1.${RPIFW_DATE}"

#SRC_URI = "${RPIFW_SRC_URI}"
#SRC_URI[sha256sum] = "2b27e4b3c4d2664a0a1d0dd8602bd80ea41dd006eb0ad9c67d7b659c9c8bb4e5"

#PV = "${RPIFW_DATE}"

### Working dunfell
#RPIFW_DATE ?= "20210527"
#SRCREV ?= "1eb8921ae7158249894f89e8bb6c4bfb04ec7377"
#RPIFW_SRC_URI ?= "https://github.com/raspberrypi/firmware/archive/${SRCREV}.tar.gz;downloadfilename=raspberrypi-firmware-${SRCREV}.tar.gz"
#RPIFW_S ?= "${WORKDIR}/firmware-${SRCREV}"
#SRC_URI = "${RPIFW_SRC_URI}"
#SRC_URI[sha256sum] = "32fb5cc72703247622839c3cb4df2f369f91d2185770df867ac9758283bf5380"
#PV = "${RPIFW_DATE}"


RPIFW_DATE ?= "20220328"
RPIFW_SRC_URI ?= "https://archive.raspberrypi.com/debian/pool/main/r/raspberrypi-firmware/raspberrypi-firmware_1.${RPIFW_DATE}.orig.tar.xz"
RPIFW_S ?= "${WORKDIR}/raspberrypi-firmware-1.${RPIFW_DATE}"
SRC_URI = "${RPIFW_SRC_URI}"
SRC_URI[sha256sum] = "8ab5949b9da1e2a2da18acc203946698737efe3e5d98286dcb7a8b0d0e92564e"
PV = "${RPIFW_DATE}"
