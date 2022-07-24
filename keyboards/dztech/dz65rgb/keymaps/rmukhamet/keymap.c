#include QMK_KEYBOARD_H

enum layers {
    _BL,
    _FL,
    _ML
};

#define CTRL_SPACE LCTL(KC_SPACE)


/**************** LAYOUT *********************/

/*
[LEDS]
 0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14
15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29
30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,       42,  43
44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,       56,  57
58,  59,  60,            61,                 62,  63,  64,  65,  66,  67

[_BL]
ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   -,   =,  BCK,HOME
TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   [,   ],    \,PGUP
CPS, A,   S,   D,   F,   G,   H,   J,   K,   L,   COL, QOT,  RETURN,PGDN
SFT, Z,   X,   C,   V,   B,   N,   M,   COM, DOT, SLS, SHIFT,    UP, DEL
CTL, ALT, GUI,           SPACEBAR,           ALT, _FL, CTL, LFT, DWN, RIT

[_FL]
ESC,       F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,   DEL ,HOME
TAB,        Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   [,   ],QK_BOOT,PGUP
CPS,        A,   S,   D,   F,   G,   H,   J,   K,   L,   COL, QOT,    RETURN,PGDN
SFT,        Z,   X,   C,   V,   B,   N,   M,   COM, DOT, SLS, SHIFT,      UP, DEL
CTL,        GUI, ALT,           SPACEBAR,           ALT, FN, CTL, LFT,   DWN, RIT

[_ML]
ESC,       F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,   DEL ,HOME
TAB,        Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   [,   ],QK_BOOT,PGUP
CPS,        A,   S,   D,   F,   G,   H,   J,   K,   L,   COL, QOT,    RETURN,PGDN
SFT,        Z,   X,   C,   V,   B,   N,   M,   COM, DOT, SLS, SHIFT,      UP, DEL
CTL,        GUI, ALT,           SPACEBAR,           ALT, FN, CTL, LFT,   DWN, RIT
*/
enum {
  TD_LCTL_ML = 0
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_LCTL_ML] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, TG(_ML))
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_65_ansi(
        KC_GRV,         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
        KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
        LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_ENT, KC_PGDN,
        KC_LSFT,                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,   KC_UP,  KC_END, 
        KC_LCTL,    KC_LALT,   KC_LGUI,                            KC_SPC,                    KC_RALT, MO(_FL),  KC_LEAD, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FL] = LAYOUT_65_ansi(
        _______,        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  _______,
        _______,        RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, KC_PSCR, KC_SLCK, KC_PAUS, QK_BOOT, _______,
        _______,        RGB_SPI, RGB_SPD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          EE_CLR , _______,
        _______,                 _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______, KC_VOLU, KC_MUTE,
        TG(_ML),        _______, _______,                            _______,                   RESET,  _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [_ML] = LAYOUT_65_ansi(
        XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_U,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                KC_ENT , KC_WH_D,
        CTRL_SPACE,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2,
        _______,        XXXXXXX, XXXXXXX,                            XXXXXXX,                   XXXXXXX, MO(_FL), XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R
    )
};

void matrix_init_user(void) {

}

const key_override_t alt_space_override = ko_make_with_layers(
    KC_LALT,   // Trigger modifiers: alt 
    KC_SPACE,       // Trigger key: space						
    CTRL_SPACE, // Replacement key
    ~0           // Activate on layer
    //MOD_MASK_SHIFT,    // Do not activate when shift or ctrl are pressed
  //  ko_option_no_reregister_trigger // Specifies that the space key is not registered again after lifting alt
); 
const key_override_t alt_space_override_advanched = ko_make_with_layers_negmods_and_options(
    KC_TAB,   // Trigger modifiers: alt 
    KC_SPACE,       // Trigger key: space						
    CTRL_SPACE, // Replacement key
    _BL,           // Activate on layer
    MOD_MASK_SHIFT,    // Do not activate when shift or ctrl are pressed
    ko_option_no_reregister_trigger // Specifies that the space key is not registered again after lifting alt
); 
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&alt_space_override,
    &delete_key_override,
    &alt_space_override_advanched,
    NULL
};


// switch layers depending on keypressed, with persistent layer in the mix
//static bool bsdel_mods = false;

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case KC_BSPC: {
//             uint8_t kc = KC_BSPC;

//             if (keyboard_report->mods) {
//                 kc         = KC_DEL;
//                 bsdel_mods = true;
//             } else {
//                 bsdel_mods = false;
//             }

//             if (record->event.pressed)
//                 register_code(kc);
//             else
//                 unregister_code(kc);
//         }
//         default:
//             break;
//     }
//     return true;
// }

// second attemp
// static uint8_t saved_mods = 0;

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case KC_BSPC: {
//             // uint8_t kc = KC_BSPC;
//             if (record->event.pressed) {
//                 if (get_mods() & MOD_MASK_SHIFT) {
//                     saved_mods = get_mods() & MOD_MASK_SHIFT;
//                     del_mods(saved_mods);
//                     register_code(KC_DEL);
//                     unregister_code(KC_BSPC);

//                 } else {
//                     saved_mods = 0;
//                     register_code(KC_BSPC);
//                 }
//             } else {
//                 add_mods(saved_mods);
//                 unregister_code(KC_BSPC);
//                 unregister_code(KC_DEL);
//             }
//         }
//         default:
//             break;
//     }
//     return true;
// }
