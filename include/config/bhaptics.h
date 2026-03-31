#pragma once

#ifdef SS_BHAPTICS

#include "config/bluetooth.h"

//------------BOARD SELECTION CONFIG------------

//if using esp32_c3 un-comment this line:
//#define esp32_c3
//if using esp32_devkit_C or similiar boards un-comment this line:
#define esp32_devkit_c

//------------BOARD PINOUTS------------

#ifdef esp32_c3
//GPIO Pins based off of ESP32_c3 supermini pinout
#define SS_HP_1 0
#define SS_HP_2 1
#define SS_HP_3 3
//Pins 1-3 used for Tactosy f/h
#define SS_HP_4 4
//Pins 1-4 used for Tactvisor
#define SS_HP_5 6
#define SS_HP_6 7
//Pins 1-6 used for Tactal or Tactosy 2 or Tactglove

//esp32_c3 only contains 6 pwm outputs so you can only make the devices listed above
#endif

#ifdef esp32_devkit_c
//GPIO Pins based off of ESP32 Devkit-C pinout (Also works with NodeMCU-32-S)
#define SS_HP_1 32
#define SS_HP_2 33
#define SS_HP_3 25
//Pins 1-3 used for Tactosy f/h
#define SS_HP_4 26
//Pins 1-4 used for Tactvisor
#define SS_HP_5 27
#define SS_HP_6 14
//Pins 1-6 used for Tactal or Tactosy 2 or Tactglove
#define SS_HP_7 12
#define SS_HP_8 13
//Pins 1-8 used for Tactsuit_x40 (requires PCA9685)
#define SS_HP_9 19
#define SS_HP_10 18
#define SS_HP_11 5
#define SS_HP_12 17
#define SS_HP_13 16
#define SS_HP_14 4
#define SS_HP_15 2
#define SS_HP_16 15
//Pins 1-16 used for Tactsuit_x16
//Tactsuit_x16 with PCA9685 not configured and tactsuit_x40 not tested using new global configs
#endif


#endif
