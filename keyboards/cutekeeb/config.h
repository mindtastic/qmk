// Copyright 2022 Mindtastic (@mindtastic)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


/* matrix definitions */	

/* key matrix pins */

/* COL2ROW or ROW2COL */

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/*
 * WS2812 Underglow Matrix options
 */
#define RGBLED_NUM 6
#define DRIVER_LED_TOTAL RGBLED_NUM

#define RGB_DI_PIN B1
//#define RGB_MATRIX_STARTUP_HUE 170
//#define RGB_MATRIX_STARTUP_SAT 255
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 130
#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS

#define RGBLIGHT_ANIMATIONS
#define ENABLE_RGB_MATRIX_BREATHING

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
