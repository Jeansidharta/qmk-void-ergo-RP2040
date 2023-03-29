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
    [LAYER_0] =   { ENCODER_CCW_CW(KC_MS_DOWN, KC_MS_UP), ENCODER_CCW_CW(KC_NO, KC_NO) },
    [LAYER_1] =   { ENCODER_CCW_CW(KC_MS_LEFT, KC_MS_RIGHT), ENCODER_CCW_CW(KC_NO, KC_NO) },
    [LAYER_2] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_NO, KC_NO) },
    [LAYER_3] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_NO, KC_NO) }
};
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[LAYER_0] = LAYOUT(
		KC_ESC,       KC_Q,       KC_W,    KC_E,   KC_R,        KC_T,                                KC_Y,  KC_U,  KC_I,     KC_O,   KC_P,         KC_BACKSPACE,
		KC_TAB,       KC_A,       KC_S,    KC_D,   KC_F,        KC_G,                                KC_H,  KC_J,  KC_K,     KC_L,   KC_SEMICOLON, KC_QUOTE,
		KC_LEFT_CTRL, KC_Z,       KC_X,    KC_C,   KC_V,        KC_B,                                KC_N,  KC_M,  KC_COMMA, KC_DOT, KC_SLASH,     KC_BACKSLASH,
		              KC_MS_BTN1, KC_LSFT, KC_SPC, MO(LAYER_1), LM(LAYER_2, MOD_LSFT),        KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO
	),
	[LAYER_1] = LAYOUT(
		_______, KC_1      , KC_2   , KC_3   , KC_4    , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
		XXXXXXX, KC_LEFT   , KC_DOWN, KC_UP  , KC_RIGHT, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX   , XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		         KC_MS_BTN3, XXXXXXX, XXXXXXX, _______ , MO(LAYER_3),        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO
	),
	[LAYER_2] = LAYOUT(
		_______, KC_1   , KC_2   , KC_3   , KC_4   ,     KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		         XXXXXXX, XXXXXXX, XXXXXXX, MO(LAYER_3), _______,            KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO
	),
	[LAYER_3] = LAYOUT(
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		         XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,            KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO
	)
};
