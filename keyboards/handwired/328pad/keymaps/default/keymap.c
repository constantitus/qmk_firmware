#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_pad(
        JS_0, JS_1, JS_2, JS_3, JS_4, JS_5, JS_6, JS_7, JS_8, JS_9, JS_10, JS_11
        // KC_Y, KC_B, KC_A, KC_X, KC_R, KC_L, KC_UP, KC_ENTER, KC_SPACE, KC_RIGHT, KC_LEFT, KC_DOWN
    ),
};
