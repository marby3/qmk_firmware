// Copyright 2023 marby3 (@marby3)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Split settings */
#define SOFT_SERIAL_PIN         D2
#define SPLIT_HAND_MATRIX_GRID C6, B2
#define SPLIT_HAND_MATRIX_GRID_LOW_IS_LEFT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT       500

// in config.h:
#define PMW33XX_CS_PIN B6
#define POINTING_DEVICE_RIGHT
