Copyright 2021 stræf <straef@nihilad.com>

void matrix_init_kb(void);
void matrix_scan_kb(void);
bool process_record_kb(uint16_t keycode, keyrecord_t *record);
void led_set_kb(uint8_t usb_led);

/* code by @drashna#0343 to let the "USER" key (connected to pin A0) work as a reset button for the board
void keyboard_pre_init_user(void) {
    setPinInputHigh(A0);
}

void matrix_scan_user(void) {
    if (!readPin(A0)) {
        reset_keyboard();
    }
}
*/
