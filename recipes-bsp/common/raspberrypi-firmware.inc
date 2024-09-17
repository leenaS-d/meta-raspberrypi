RPIFW_DATE ?= "20221028"
SRCREV ?= "00feccb1dbfee286d3f1ce457c045effffbf90fc"
RPIFW_SRC_URI ?= "https://github.com/raspberrypi/firmware/archive/${SRCREV}.tar.gz;downloadfilename=raspberrypi-firmware-${SRCREV}.tar.gz"
RPIFW_S ?= "${WORKDIR}/firmware-${SRCREV}"

SRC_URI = "${RPIFW_SRC_URI}"
SRC_URI[sha256sum] = "d9c345269de950e0ebad945af0065269bd3ce7ea1998730d6b7d3b647444764e"

PV = "${RPIFW_DATE}"
