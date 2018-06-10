#include "cospad.h"
#include "led.h"

#ifdef RGBLIGHT_ENABLE
#include "rgblight.h"
#endif

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _FPS 0
#define _MOD 1
#define _FN  2

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_COLS][MATRIX_ROWS] = {

  /* Layer 0: _FPS
   * ,-----------------------------,
   * |tab | Q  | W  | E  | R  | _fn|
   * |----|----|----|----|----|----|
   * |_mod| A  | S  | D  | F  | G  |
   * |----|----|----|----|----|----|
   * |shft| B  | Z  | X  | C  | V  |
   * |----|----|----|----|----|----|
   * |ctrl| 4  | 3  | 2  |spc | 1  |
   * `-----------------------------`
   */

[_FPS] = KEYMAP(
  KC_TAB,    KC_Q,  KC_W,   KC_E, KC_R,   MO(_RGB), \
  MO(_MOD),  KC_A,  KC_S,   KC_D, KC_F,   KC_G, \
  KC_LSHIFT, KC_B,  KC_Z,   KC_X, KC_C,   KC_V,  \
  KC_LCTRL,  KC_4,  KC_3,   KC_2, KC_SPC, KC_1),

    /* Layer 1: _MOD
   * ,-----------------------------,
   * |esc | Q  | W  | E  | R  | _fn|
   * |----|----|----|----|----|----|
   * |_mod| A  | S  | D  | F  | ent|
   * |----|----|----|----|----|----|
   * |shft| N  | M  | U  | I  | O  |
   * |----|----|----|----|----|----|
   * |ctrl| 7  | 6  | 5  |spc | 4  |
   * `-----------------------------`
   */

[_MOD] = KEYMAP(
  KC_ESC,    KC_Q,  KC_W,   KC_E, KC_R,   MO(_fn), \
  MO(_MOD),  KC_A,  KC_S,   KC_D, KC_F,   KC_ENTER, \
  KC_LSHIFT, KC_N,  KC_M,   KC_U, KC_I,   KC_O,  \
  KC_LCTRL,  KC_7,  KC_6,   KC_5, KC_SPC, KC_4),

  /* Layer 2: _FN
   * ,-----------------------------,
   * |RGBT|RGBM|VAD |VAS |    |_fn |
   * |----|----|----|----|----|----|
   * |BTOG|    |HUD |HUI |    |VOLU|
   * |----|----|----|----|----|----|
   * |    |    |SAD |SAI |    |VOLD|
   * |----|----|----|----|----|----|
   * |RST |    |    |    |    |MUTE|
   * `-----------------------------`
   */

[_FN] = KEYMAP(
  RGB_TOG, RGB_MOD, RGB_VAD, RGB_VAS, KC_NO, MO(_FN), \
  BL_TOGG, KC_NO,   RGB_HUD, RGB_HUI, KC_NO, KC_VOLU, \
  KC_NO,   KC_NO,   RGB_SAD, RGB_SAI, KC_NO, KC_VOLD,  \
  RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_MUTE),

const uint16_t PROGMEM fn_actions[] = {
    [0] = MO(_FL),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   switch (keycode) {
      case BL_TOGG:
         if (record->event.pressed) {
            cospad_bl_led_togg();
         }
         return false;
      case BL_ON:
         if (record->event.pressed) {
            cospad_bl_led_on();
         }
         return false;
      case BL_OFF:
         if(record->event.pressed) {
            cospad_bl_led_off();
         }
         return false;
      default:
         return true;
   }
}
