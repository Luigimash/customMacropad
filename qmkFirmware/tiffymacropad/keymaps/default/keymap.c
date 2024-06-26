#include QMK_KEYBOARD_H
#include "quantum.h"
#include <stdio.h>

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
            KC_X,   KC_X, 
            KC_X, KC_X, KC_X, 
            KC_X, KC_X, KC_X)
};


#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
	[0] = { ENCODER_CCW_CW(KC_L, KC_A), ENCODER_CCW_CW(KC_F, KC_J) }
};



// bool encoder_update_user(uint8_t index, bool clockwise) {
//     if (index == 0) { //first encoder
//         if (clockwise) {
//             tap_code(KC_L);
//         } else {
//             tap_code(KC_U);
//         }
//     }
// 	else if (index == 1) { // Second encoder 
//         if (clockwise) {
//             tap_code(KC_Z);
//         } else {
//             tap_code(KC_Y);
//         }
//     }
	
//     return false;
// }
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE) 


// #ifdef ENCODER_ENABLE
// bool encoder_update_user(uint8_t index, bool clockwise) {
//     if (index == 0) { //first encoder
//         if (clockwise) {
//             tap_code(KC_L);
//         } else {
//             tap_code(KC_U);
//         }
//     }
// 	else if (index == 1) { /* Second encoder */
//         if (clockwise) {
//             tap_code(KC_Z);
//         } else {
//             tap_code(KC_Y);
//         }
//     }
	
//     return false;
// }
// #endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE) 
