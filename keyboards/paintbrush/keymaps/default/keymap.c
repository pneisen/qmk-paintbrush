// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "artsey.h"
#include "keymap_combo.h"
#include "artsey.c"

#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_A_BASE] = LAYOUT_left(
        A_BASE_S, A_BASE_T, A_BASE_R, A_BASE_A,
        A_BASE_O, A_BASE_I, A_BASE_Y, A_BASE_E
    ),
    [_A_NUM] = LAYOUT_left(
        A_NUM_S, A_NUM_T, A_NUM_R, A_NUM_A,
        A_NUM_O, A_NUM_I, A_NUM_Y, A_NUM_E
    ),
    [_A_NAV] = LAYOUT_left(
        A_NAV_S, A_NAV_T, A_NAV_R, A_NAV_A,
        A_NAV_O, A_NAV_I, A_NAV_Y, A_NAV_E
    ),
    [_A_SYM] = LAYOUT_left(
        A_SYM_S, A_SYM_T, A_SYM_R, A_SYM_A,
        A_SYM_O, A_SYM_I, A_SYM_Y, A_SYM_E
    ),
    [_A_BRAC] = LAYOUT_left(
        A_BRAC_S, A_BRAC_T, A_BRAC_R, A_BRAC_A,
        A_BRAC_O, A_BRAC_I, A_BRAC_Y, A_BRAC_E
    ),
    [_A_MOU] = LAYOUT_left(
        A_MOU_S, A_MOU_T, A_MOU_R, A_MOU_A,
        A_MOU_O, A_MOU_I, A_MOU_Y, A_MOU_E
    ),
    [_A_CUSTOM] = LAYOUT_left(
        A_CUSTOM_S, A_CUSTOM_T, A_CUSTOM_R, A_CUSTOM_A,
        A_CUSTOM_O, A_CUSTOM_I, A_CUSTOM_Y, QK_BOOT
    ),
};

bool oled_task_user(void) {
    if (is_oled_on()) {
        oled_write_P(PSTR("TEST"), false);
    }
    return false;
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  //debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    print("oled init\n");
    return OLED_ROTATION_270;
}
