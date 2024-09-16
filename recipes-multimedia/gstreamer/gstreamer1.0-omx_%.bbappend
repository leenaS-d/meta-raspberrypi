GSTREAMER_1_0_OMX_TARGET:rpi = "rpi"
GSTREAMER_1_0_OMX_CORE_NAME:rpi = "${libdir}/libopenmaxil.so"
EXTRA_OEMESON:append:rpi = " -Dheader_path=${STAGING_DIR_TARGET}/usr/include"
CFLAGS:append:rpi = " \
    -I${STAGING_DIR_TARGET}/usr/include/IL \
    -I${STAGING_DIR_TARGET}/usr/include/interface/vcos/pthreads \
    -I${STAGING_DIR_TARGET}/usr/include/interface/vmcs_host/linux \
"
