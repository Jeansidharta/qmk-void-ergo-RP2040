#include QMK_KEYBOARD_H

// Helpful defines
#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *  You can use _______ in place for KC_TRNS (transparent)   *
 *  Or you can use XXXXXXX for KC_NO (NOOP)                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.
enum layer_names {
    LAYER_0,
    LAYER_1,
    LAYER_2,
    LAYER_3
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t encoder_map[][NUM_ENCODERS][2] = {
    [LAYER_0] =   { ENCODER_CCW_CW(KC_MS_LEFT, KC_MS_RIGHT), ENCODER_CCW_CW(KC_MS_DOWN, KC_MS_UP) },
    [LAYER_1] =   { ENCODER_CCW_CW(KC_MS_WH_LEFT, KC_MS_WH_RIGHT), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [LAYER_2] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [LAYER_3] =   { ENCODER_CCW_CW(XXXXXXX, XXXXXXX), ENCODER_CCW_CW(XXXXXXX, XXXXXXX) }
};
#endif


// SHIFT
// CTRL
// ALT
// META

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[LAYER_0] = LAYOUT(
		KC_TAB,      KC_Q,       KC_W,    KC_E,   KC_R,    KC_T,    /*|*/ KC_Y,     KC_U,    KC_I,     KC_O,      KC_P,         KC_BSLS,
		MO(LAYER_2), KC_A,       KC_S,    KC_D,   KC_F,    KC_G,    /*|*/ KC_H,     KC_J,    KC_K,     KC_L,      KC_SEMICOLON, KC_QUOTE,
		MO(LAYER_1), KC_Z,       KC_X,    KC_C,   KC_V,    KC_B,    /*|*/ KC_N,     KC_M,    KC_COMMA, KC_DOT,    KC_SLASH,     KC_GRV,
		             KC_MS_BTN1, KC_ESC,  KC_SPC, KC_LSFT, KC_LALT, /*|*/ KC_LGUI,  KC_LCTL, KC_ENT,   KC_BSPC,   KC_MS_BTN2
	),
	[LAYER_1] = LAYOUT(
		XXXXXXX,    
		KC_1,        KC_2,    KC_3,    KC_4 ,    KC_5,    /*|*/ KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
		MO(LAYER_3), KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, XXXXXXX, /*|*/ XXXXXXX, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL,  XXXXXXX,
		_______,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		             XXXXXXX, XXXXXXX, XXXXXXX, _______,  _______, /*|*/ _______, _______, XXXXXXX, XXXXXXX, KC_MS_BTN3
	),
	[LAYER_2] = LAYOUT(
		XXXXXXX,     KC_F1,   KC_F2,   KC_F3,   KC_F5,   KC_F6,   /*|*/ KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
		_______,     KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		MO(LAYER_3), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		             KC_MUTE, XXXXXXX, KC_PSCR, _______, _______, /*|*/ _______, _______, XXXXXXX, KC_DEL,  KC_MPLY
	),
	[LAYER_3] = LAYOUT(
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, /*|*/ KC_PDOT, KC_PPLS, KC_P7, KC_P8, KC_P9, KC_PSLS,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /*|*/ KC_PEQL, KC_P0,   KC_P4, KC_P5, KC_P6, KC_PAST,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /*|*/ XXXXXXX, KC_PENT, KC_P1, KC_P2, KC_P3, KC_PMNS,
		         XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, /*|*/ _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
	)
};