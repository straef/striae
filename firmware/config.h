//copyright 2021 straef <straef@nihilad.com>

#pragma once

//#define VENDOR_ID               0x0010
//#define PRODUCT_ID              0x0110
#define DEVICE_VER              0x0000

#define MANUFACTURER            hexRAVEN_labs
#define PRODUCT                 striae_r00
#define DESCRIPTION             the striae r00 by hexRaven_labs is a fullsize plus ortholinear keyboard with a left-side numpad and nav cluster

#define MATRIX_COLS             10
#define MATRIX_ROWS             12

#define MATRIX_COL_PINS         { C13, C14, C15, A0, A1, A2, A3, A4, A5, A6 }
#define MATRIX_ROW_PINS         { A7, B0, B1, B12, B13, B14, B15, A8, A15, B3, B4, B5 }
#define UNUSED_PINS             { B2, B10, A9, A10, A11, A12, B6, B7, B8, B9 }

#define DIODE_DIRECTION         COL2ROW

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
