#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x5(
        KC_NUM,  KC_PSLS, KC_PAST, KC_BSPC, KC_PENT,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_PGUP,
        KC_P4,   KC_P5,   KC_P6,   KC_PMNS, KC_PGDN,
        KC_P1,   KC_P2,   KC_P3,   KC_UP,   MO(1),
        KC_P0,   KC_PDOT, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_ortho_5x5(
        RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_MOD, RGB_RMOD,XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_HUI, RGB_HUD, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_SAI, RGB_SAD, XXXXXXX, XXXXXXX, _______,
        RGB_VAI, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX
    )
};

