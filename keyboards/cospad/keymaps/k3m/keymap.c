#include QMK_KEYBOARD_H
#include "led.h"

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-------------------.
   * | CTL|    |    | 1  |
   * |----+----+----+----|
   * | SFT| A  | Q  | 2  |
   * |----+----+----+----|
   * |    | S  | W  | 3  |
   * |----+----+----+----|
   * |    | D  | E  |    |
   * |----+----+----+----|
   * | SP | F  | R  |    |
   * |----+----+----+----|
   * | SP |    |    |    |
   * `-------------------'
   */

[_BL] = LAYOUT_numpad_6x4(
  KC_ESC,   KC_TAB,   MO(_FL),   KC_BSPC, \
  KC_NLCK,  KC_PSLS,  KC_PAST,   KC_PMNS, \
  KC_P7,    KC_P8,    KC_P9,              \
  KC_P4,    KC_P5,    KC_P6,     KC_PPLS, \
  KC_P1,    KC_P2,    KC_P3,              \
  KC_P0,              KC_PDOT,   KC_PENT),
