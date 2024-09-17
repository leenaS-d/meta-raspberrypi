RPIFW_DATE ?= "20221028"
SRCREV ?= "00feccb1dbfee286d3f1ce457c045effffbf90fc"
RPIFW_SRC_URI ?= "https://github.com/raspberrypi/firmware/archive/${SRCREV}.tar.gz;downloadfilename=raspberrypi-firmware-${SRCREV}.tar.gz"
RPIFW_S ?= "${WORKDIR}/firmware-${SRCREV}"

SRC_URI = "${RPIFW_SRC_URI}"
SRC_URI[sha256sum] = "86e3c050aedf2e4886f4901a0e0e3792bf9cde227aff95f8d873d726398bdddf"

PV = "${RPIFW_DATE}"
