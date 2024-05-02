#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
	                         KC_K, KC_DOT, KC_O, KC_COMM, KC_Z,                                                                                              KC_V,KC_G, KC_C, KC_L, KC_MINS,
                             KC_H, KC_A, KC_E, KC_I, KC_U,                                                                                                            KC_D, KC_T, KC_R, KC_N, KC_S,
                             MT(MOD_LSFT, KC_X), KC_Q, KC_QUOT, KC_LBRC, KC_SCLN,                                                            KC_B, KC_P, KC_W, KC_M, MT(MOD_RSFT, KC_J),
                                                                                    OSM(KC_LSFT) , KC_BSPC,                                                            KC_SPC, KC_TAB
                                              
                           ),




	[1] = LAYOUT(
	                         KC_1,KC_2,KC_3,KC_4,KC_5,                                                                                                                 KC_6,KC_7,KC_8,KC_9,KC_0,
                             LSFT( KC_8),LSFT( KC_9),RALT( KC_8),RALT( KC_9),LSFT( KC_2),                                                         LSFT( KC_0),LSFT( KC_5),KC_UP,KC_NUBS, KC_RBRC,
                             KC_NUHS, RALT(KC_Q), KC_SLSH, RALT(KC_7), RALT( KC_0),                                                              KC_GRV, KC_LEFT, KC_DOWN,KC_RIGHT, KC_KP_ASTERISK,
                                                                                              KC_TRNS, KC_TRNS,                                                            KC_TRNS, KC_TRNS
                                                                                                                
                            ),



};

const uint16_t PROGMEM d_t_ent[] = { KC_D, KC_T, COMBO_END}; 
const uint16_t PROGMEM u_i_ent[] = { KC_I, KC_U, COMBO_END};

const uint16_t PROGMEM esc[] = { KC_K, KC_DOT, COMBO_END};
const uint16_t PROGMEM del[] = { KC_COMM, KC_Z, COMBO_END};


const uint16_t PROGMEM l_mins_z[] = { KC_L, KC_MINS, COMBO_END};
const uint16_t PROGMEM n_s_f[] = { KC_N, KC_S, COMBO_END};

const uint16_t PROGMEM copy[] = { KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM cut[] = { KC_H, KC_A, COMBO_END};
const uint16_t PROGMEM paste[] = { KC_Q, KC_QUOT, COMBO_END};


const uint16_t PROGMEM TG1[] = { KC_T, KC_R,KC_N, COMBO_END};
const uint16_t PROGMEM RGBOFF[] = { KC_V, KC_G, KC_C, COMBO_END};
const uint16_t PROGMEM RGBCHANGE[] = { KC_C, KC_L, KC_MINS, COMBO_END};
const uint16_t PROGMEM RGBCOLOR[] = { KC_R, KC_N, KC_S, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	COMBO(d_t_ent, KC_ENT),
	COMBO(u_i_ent, KC_ENT),
	COMBO(esc, KC_ESC),
	COMBO(del, KC_DEL),
	COMBO(l_mins_z, KC_Y),
	COMBO(n_s_f, KC_F),
	COMBO(copy, KC_COPY),
	COMBO(cut, KC_CUT),
	COMBO(paste, KC_PASTE),
	COMBO(TG1, TG(1)),
	COMBO(RGBOFF, RGB_TOG),
	COMBO(RGBCHANGE, RGB_MOD),
	COMBO(RGBCOLOR, RGB_HUI),
};