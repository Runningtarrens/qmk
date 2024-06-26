/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,   KC_K,   KC_DOT ,  KC_O , KC_COMM  ,  KC_Z,                      KC_V,     KC_G,     KC_C,    KC_L ,   KC_MINS,  KC_Y,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT ,KC_H,   KC_A,    KC_E ,    KC_I  ,   KC_U,                        KC_D,   KC_T,    KC_R,     KC_N   ,  KC_S,    KC_F,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTL,   KC_X,    KC_Q,  KC_QUOT, KC_LBRC, KC_SCLN,                      KC_B,     KC_P,     KC_W,   KC_M   ,  KC_J,  KC_RSFT,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MT(MOD_LGUI, KC_TAB), OSM(MOD_LSFT) , KC_BSPC,     KC_SPC, MO(2),  MO(1) \
                                      //`--------------------------'  `--------------------------'
 ),

  [1] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT,LSFT( KC_8),LSFT( KC_9),LCTL(LALT( KC_8)),LCTL(LALT( KC_9)), LSFT( KC_2),    LSFT( KC_0) ,LSFT( KC_5), KC_UP, LSFT( KC_1), KC_RBRC,KC_SLSH,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     LCTL(LALT( KC_Q)), KC_NUHS, LCTL(KC_NUHS), XXXXXXX, XXXXXXX, XXXXXXX,            KC_GRV, KC_LEFT, KC_DOWN,KC_RIGHT, KC_KP_ASTERISK,KC_KP_SLASH,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS , KC_TRNS,KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS \
                                      //`--------------------------'  `--------------------------'
    ),


   [2] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     LCTL(LALT(KC_DEL)), LCTL(LSFT( KC_B)), XXXXXXX, XXXXXXX,XXXXXXX,KC_PSCR ,   XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,TG(3),\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      LCTL(KC_A), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      LCTL(KC_X),LCTL(KC_C), LCTL(KC_V), XXXXXXX, LCTL(KC_Y), LCTL(KC_Z),        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_TRNS , KC_TRNS,KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS \
                                      //`--------------------------'  `--------------------------'
   ),


   [3] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_K,   KC_DOT ,  KC_O , KC_COMM  ,  KC_Z,                      KC_V,     KC_G,     KC_C,   KC_L , KC_MINS, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX ,KC_H,   KC_A,    KC_E ,    KC_I  ,   KC_U,                        KC_D,   KC_T,    KC_R,     KC_N   ,  KC_S, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,  MT(MOD_LSFT, KC_X) , KC_Q,  KC_QUOT, KC_LBRC, KC_SCLN,                      KC_B,     KC_P,     KC_W,   KC_M   , MT(MOD_RSFT, KC_J), XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS , KC_TRNS,KC_TRNS,     KC_SPC, TG(3),  MO(4) \
                                      //`--------------------------'  `--------------------------'
 
   ),


   [4] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, TG(5),\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,LSFT( KC_8),LSFT( KC_9),LCTL(LALT( KC_8)),LCTL(LALT( KC_9)), LSFT( KC_2),    LSFT( KC_0) ,LSFT( KC_5), KC_UP, LSFT( KC_1), KC_RBRC,XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_NUHS, LCTL(KC_NUHS), LCTL(LALT( KC_Q)), XXXXXXX, XXXXXXX,            KC_GRV, KC_LEFT, KC_DOWN,KC_RIGHT, KC_KP_ASTERISK,XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS , KC_TRNS,KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS \
                                      //`--------------------------'  `--------------------------'
 
   ),


   [5] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_L,   KC_H ,  KC_T , KC_D  ,  KC_S,                            KC_V,     KC_G,     KC_C,   KC_L , KC_MINS, TG(5),\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX ,KC_A,   KC_N,    KC_E ,    KC_I  ,   KC_R,                        KC_D,   KC_T,    KC_R,     KC_N   ,  KC_S, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,   KC_M,    KC_G,  KC_O,      KC_C,    KC_U,                      KC_B,     KC_P,     KC_W,   KC_M   ,  KC_J, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          OSL(MOD_LSFT), OSL(6) , KC_SPC,             KC_SPC, MO(2),  MO(1) \
                                      //`--------------------------'  `--------------------------'

  ),


   [6] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_Q,   KC_DOT ,  KC_J , KC_V  ,  KC_MINS,                       KC_V,     KC_G,    KC_C,   KC_L , KC_MINS, TG(5),\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX ,KC_P,   KC_W,    KC_K ,    KC_B  ,   KC_F,                        KC_D,   KC_T,    KC_R,     KC_N   ,  KC_S, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,   KC_Y,    KC_COMM,  KC_QUOT, KC_LBRC, KC_SCLN,                      KC_B,     KC_P,     KC_W,   KC_M   ,  KC_J, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          OSL(MOD_LSFT), OSL(7) , KC_SPC,     KC_SPC, MO(2),  MO(1) \
                                      //`--------------------------'  `--------------------------'
 
 ),


   [7] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, LCTL(LALT( KC_8)),LCTL(LALT( KC_9)) , KC_RBRC,KC_SLSH  , KC_KP_ASTERISK,                       KC_V,     KC_G,    KC_C,   KC_L , KC_MINS, TG(5),\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX ,LSFT( KC_8),LSFT( KC_9),    KC_X ,    KC_Z  ,KC_KP_SLASH,                        KC_D,   KC_T,    KC_R,     KC_N   ,  KC_S, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,  LCTL(LALT( KC_Q)), LSFT( KC_2), LSFT( KC_5), LSFT( KC_1), LSFT( KC_0),                      KC_B,     KC_P,     KC_W,   KC_M   ,  KC_J, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TAB, KC_LGUI , LSFT( KC_MINS),     KC_SPC, MO(2),  MO(1) \
                                      //`--------------------------'  `--------------------------'
  )


};

const uint16_t PROGMEM o_s_ent[] = { KC_O, KC_S, COMBO_END};
const uint16_t PROGMEM d_t_ent[] = { KC_D, KC_T, COMBO_END};
const uint16_t PROGMEM entf1[] = { KC_COMM, KC_Z, COMBO_END};
const uint16_t PROGMEM u_i_ent[] = { KC_I, KC_U, COMBO_END};
const uint16_t PROGMEM esc[] = { KC_K, KC_DOT, COMBO_END};
const uint16_t PROGMEM l_mins_z[] = { KC_L, KC_MINS, COMBO_END};
const uint16_t PROGMEM n_s_f[] = { KC_N, KC_S, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
	COMBO(o_s_ent, KC_ENT),
	COMBO(d_t_ent, KC_ENT),
	COMBO(entf1, KC_BSPC),
	COMBO(u_i_ent, KC_ENT),
	COMBO(esc, KC_ESC),
	COMBO(l_mins_z, KC_Y),
	COMBO(n_s_f, KC_F),



};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}


void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}



bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
