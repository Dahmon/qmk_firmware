#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x15(
    KC_ESC,  KC_1,    KC_2,  KC_3,    KC_4,   KC_5,   KC_GRV,  KC_BSLS, KC_DEL,  KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,  KC_E,    KC_R,   KC_T,   KC_EQL,  KC_PGUP, KC_MINS, KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_QUOT,
    KC_ESC,  KC_A,    KC_S,  KC_D,    KC_F,   KC_G,   KC_HOME, KC_PGDN, KC_END,  KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,  KC_C,    KC_V,   KC_B,   KC_LBRC, KC_UP,   KC_RBRC, KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, MO(1), KC_LALT, KC_SPC, KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC, KC_SPC, KC_RALT, MO(1),  KC_RGUI, KC_RCTL
  ),
	[1] = LAYOUT_ortho_5x15(
    KC_F1, KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_F6, KC_NO, KC_NO,   KC_NO, KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO
  )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



