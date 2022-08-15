<<<<<<< HEAD
/* Copyright 2022 Jason Wihardja
=======
/* Copyright 2021 Joe Maples <joe@maples.dev>
>>>>>>> vial-pelly/vial
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
<<<<<<< HEAD
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0002
#define MANUFACTURER    Drop
#define PRODUCT         The Key V2
=======
#define VENDOR_ID       0x04D8
#define PRODUCT_ID      0x1337
#define DEVICE_VER      0x0102

#define MANUFACTURER        "Massdrop Inc."
#define PRODUCT             "The Key V2"
#define SERIAL_NUM          "Unavailable"
>>>>>>> vial-pelly/vial

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3

/*
 * Keyboard Matrix Assignments
 */
#define MATRIX_ROW_PINS { D4 }
#define MATRIX_COL_PINS { D2, D1, D0 }

#define DIODE_DIRECTION ROW2COL

#define RGB_DI_PIN B1
#define RGBLED_NUM 5
<<<<<<< HEAD
#define RGBLIGHT_LED_MAP {4, 0, 1, 2, 3}
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 10
#define RGBLIGHT_VAL_STEP 15
#define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#define RGBLIGHT_SLEEP /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGBLIGHT_LAYERS /* Enable lighting layers */
#define RGBLIGHT_LAYER_BLINK /* Enable lighting layer blink */
=======
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGBLIGHT_ANIMATIONS

/* Disable Mechanical locking support. */
#ifdef LOCKING_SUPPORT_ENABLE
#define LOCKING_SUPPORT_ENABLE
#endif
/* Disable Locking resynchronize hack */
#ifdef LOCKING_RESYNC_ENABLE
#undef LOCKING_RESYNC_ENABLE
#endif

/* Turn off music mode. */
#define NO_MUSIC_MODE
>>>>>>> vial-pelly/vial
