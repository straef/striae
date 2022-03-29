//copyright 2021 straef <straef@nihilad.com>

#define VENDOR_ID               0x0010
#define PRODUCT_ID              0x0110
#define DEVICE_VER              0x0000

#define MANUFACTURER            hexRAVEN_labs
#define PRODUCT                 striae_r00
#define DESCRIPTION             the striae r00 by hexRaven_labs is a fullsize plus ortholinear keyboard with a left-side numpad and nav cluster

#define MATRIX_ROWS             12
#define MATRIX_COLS             10

#define MATRIX_ROW_PINS         { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11 }
#define MATRIX_COL_PINS         { B0, B1, B2, B3, B4, B5, B8, B9, B10, B12 }
#define UNUSED_PINS             {}

#define DIODE_DIRECTION         COL2ROW

#define BOOTMAGIC_LITE_ROW      0
#define BOOTMAGIC_LITE_COLUMN   3
