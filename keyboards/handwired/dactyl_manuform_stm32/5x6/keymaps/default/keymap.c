#include QMK_KEYBOARD_H

// COLEMAK-DH
#define _CM 0
// QWERTY
#define _QW 1
// MODKEY
#define _MO 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_CM] = LAYOUT_5x6(
        KC_GRV,	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,           KC_6,	KC_7,	KC_8,	KC_9,	KC_0,   KC_DEL,
        KC_TAB,	KC_Q,	KC_W,	KC_F,	KC_P,	KC_B,           KC_J,	KC_L,	KC_U,	KC_Y,	KC_SCLN,KC_BSLS,
        KC_ESC,	KC_A,	KC_R,	KC_S,	KC_T,	KC_G,           KC_M,	KC_N,	KC_E,	KC_I,	KC_O,   KC_QUOT,
        KC_LCTL,KC_Z,	KC_X,	KC_C,	KC_D,	KC_V,           KC_K,	KC_H,	KC_COMM,KC_DOT, KC_SLSH,KC_RCTL,
                                        KC_LBRC,KC_RBRC,        KC_MINS,KC_EQL,
                                        KC_LSFT,KC_SPC,         KC_ENT, KC_RSFT,
                                        KC_LALT,KC_DEL,         KC_BSPC,KC_RALT,
                                        MO(_MO),KC_LGUI,        KC_RGUI,MO(_MO)
    ),
	[_QW] = LAYOUT_5x6(
        KC_GRV, KC_1,	KC_2,	KC_3,	KC_4,	KC_5,          	KC_6,	KC_7,	KC_8,	KC_9,	KC_0,	KC_DEL,
        KC_TAB, KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,          	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	KC_BSLS,
        KC_ESC, KC_A,	KC_S,	KC_D,	KC_F,	KC_G,          	KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,KC_QUOT,
        KC_LCTL,KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,          	KC_N,	KC_M,	KC_COMM,KC_DOT, KC_SLSH,KC_RCTL,
                                        KC_LBRC,KC_RBRC,        KC_MINS,KC_EQL,
                                        KC_LSFT,KC_SPC,         KC_ENT, KC_RSFT,
                                        KC_LALT,KC_DEL,         KC_BSPC,KC_RALT,
                                        MO(_MO),KC_LGUI,        KC_LGUI,MO(_MO)
    ),
	[_MO] = LAYOUT_5x6(
        KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,          KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,
        KC_TAB, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_F12,
        KC_CAPS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_NO,  KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,KC_NO,
        KC_LCTL,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_PAUS,KC_APP, KC_PSCR,KC_INS, KC_HOME,KC_END,
                                        DF(_QW),DF(_CM),        KC_PGDN,KC_PGUP,
                                        KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,
                                        KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,
                                        KC_TRNS,LGUI(KC_LALT),  RGUI(KC_RALT), KC_TRNS
    ),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

