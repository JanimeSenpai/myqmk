// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_hungarian.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,          KC_F1,   KC_F2,          KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,
        KC_NO,           HU_0,    KC_1,           KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        KC_NO,           KC_NO,   KC_Q,           KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,
        KC_CAPS_LOCK,    KC_V,    KC_A,           KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,
        KC_NO,           KC_LSFT, HU_IACU,        HU_Y,    KC_X,    KC_C,    KC_B,    KC_B,
        KC_NO,           KC_NO,   KC_LEFT_CTRL,   KC_NO,   KC_SPACE, KC_SPACE, KC_SPACE, KC_ENTER,
        // right half down
        KC_F8,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_NO,
        KC_NO,  KC_NO,   KC_7,    KC_8,    KC_9,    HU_ODIA, HU_UDIA, HU_OACU,
        KC_NO,  HU_Z,    KC_U,    KC_I,    KC_O,    KC_P,    HU_ODAC, HU_UACU,
        KC_NO,  KC_H,    KC_J,    KC_K,    KC_L,    HU_EACU, HU_AACU, HU_UDAC,
        KC_NO,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,   KC_NO,
        KC_NO,  KC_CAPS_LOCK,   KC_CAPS_LOCK,   KC_NO,   KC_NO,   KC_RIGHT_CTRL,   KC_NO,   KC_NO
    )
};
