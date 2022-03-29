#include QMK_KEYBOARD_H

#define ____ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_PSCR,    KC_PAUS,    KC_ESC,     KC_1,       KC_3,       KC_5,       KC_EQL,                 KC_7,       KC_9,       KC_BSLS,
                    KC_SCRL,    KC_CAPS,    KC_GRV,     KC_2,       KC_4,       KC_MINS,                KC_6,       KC_8,       KC_0,
        KC_PMNS,    KC_PAST,    KC_DEL,     KC_Q,       KC_R,       KC_B,       KC_RBRC,                KC_F,       KC_P,       KC_SCLN,
        KC_NUM,     KC_PPLS,    KC_INS,     KC_TAB,     KC_D,       KC_W,       KC_LBRC,                KC_J,       KC_U,       KC_QUOT,
        KC_P7,      KC_P9,      KC_END,     KC_H,       KC_A,       KC_G,       RSFT_T(KC_RPRN),        KC_N,       KC_O,       KC_ENT,
        KC_PSLS,    KC_P8,      KC_HOME,    KC_BSPC,    KC_S,       KC_T,       LSFT_T(KC_LPRN),        KC_Y,       KC_E,       KC_I,
        KC_P4,      KC_P6,      KC_UP,      KC_Z,       KC_M,       KC_V,       RCTL_T(KC_RABK),        KC_L,       KC_DOT,     KC_RSFT,
        KC_PEQL,    KC_P5,      KC_PGUP,    KC_LSFT,    KC_X,       KC_C,       LCTL_T(KC_LABK),        KC_K,       KC_COMM,    KC_SLSH,
        KC_P1,      KC_P3,      KC_DOWN,    KC_F1,      KC_F3,      KC_F5,      KC_F7,                  KC_F9,      KC_F11,     KC_RCTL,
        KC_PENT,    KC_P2,      KC_PGDN,    KC_LCTL,    KC_F2,      KC_F4,      KC_F6,                  KC_F8,      KC_F10,     KC_F12,
        KC_BSPC,    KC_P0,      KC_RGHT,    ____,       KC_LGUI,    KC_SPC,     ____,                   KC_RALT,    KC_APP,     ____,
        KC_TAB,     KC_PDOT,    KC_LEFT,    ____,       UC_M_WC,    KC_LALT,    ____,                   KC_SPC,     KC_RGUI,    ____
    )
};
