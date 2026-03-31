# ESP 32 C3 Guide

1. Open [bhaptics.h](https://github.com/Pandaggar/senseshift-firmware/blob/master/include/config/bhaptics.h) 
2. Uncomment the "#define esp32_c3" line
3. Comment the "#define esp32_devkit_c" line
4. Save the file
5. When Building / Uploading, make sure to select only devices with an "_c3" after their names

Optional:
* Change pins to your wiring (currently using GPIOS 0,1,3,4,6,7)

Disclaimer: 
* Openglove support not implimented for esp32 c3, only support for bhaptics devices is available currently
