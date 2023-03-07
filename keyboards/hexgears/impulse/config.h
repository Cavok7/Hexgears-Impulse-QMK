// Copyright 2022 Cavok7 (@Cavok7)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x0c45
#define PRODUCT_ID   0x8103
#define DEVICE_VER   0x0001
#define MANUFACTURER Hexgears
#define PRODUCT      Impulse

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 21

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { C15, D11, D10, D9, D8, D7 }
#define MATRIX_COL_PINS { A9, A10, A11, A12, A13, A14, A15, B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11, B12, B13 }
#define UNUSED_PINS


//#define USB_POLLING_INTERVAL_MS 1 
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* indicator pins */
//#define LED_PIN_ON_STATE    0
//#define LED_NUM_LOCK_PIN    C6
//#define LED_CAPS_LOCK_PIN   C7
//#define LED_SCROLL_LOCK_PIN C8


//#define RGB_DISABLE_WHEN_USB_SUSPENDED true

/*
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 */
//#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

//#define NO_DEBUG
//#define NO_PRINT

//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
