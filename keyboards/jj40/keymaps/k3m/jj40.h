#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include "quantum.h"

#define KEYMAP_GRID( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K010, K011, K012, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K110, K111, K112, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K210, K211, K212, \
    K31, K32, K33, K34, K35, K36, K37, K38, K39, K310, K311, K312  \
) \
{ \
  { K012,  K011,  K010,  K09,   K05,   K06,   K07,   K08,   K04,   K03,   K02,   K01 },   \
  { K112,  K111,  K110,  K19,   K15,   K16,   K17,   K18,   K14,   K13,   K12,   K11 },   \
  { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { K212,  K211,  K210,  K29,   K25,   K26,   K27,   K28,   K24,   K23,   K22,   K21 },   \
  { K312,  K311,  K310,  K39,   K35,   K36,   K37,   K38,   K34,   K33,   K32,   K31 }    \
}

#define KEYMAP_MIT( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K010, K011, K012, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K110, K111, K112, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K210, K211, K212, \
    K31, K32, K33, K34, K35,    K3X,   K38, K39, K310, K311, K312  \
) \
{ \
  { K012,  K011,  K010,  K09,   K05,   K06,   K07,   K08,   K04,   K03,   K02,   K01 },   \
  { K112,  K111,  K110,  K19,   K15,   K16,   K17,   K18,   K14,   K13,   K12,   K11 },   \
  { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { K212,  K211,  K210,  K29,   K25,   K26,   K27,   K28,   K24,   K23,   K22,   K21 },   \
  { K312,  K311,  K310,  K39,   K35,   K3X,   KC_NO, K38,   K34,   K33,   K32,   K31 }    \
}

#define KEYMAP_OFFSET( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K010, K011, K012, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K110, K111, K112, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K210, K211, K212, \
    K31, K32, K33, K34, K35, K36,    K3X,   K39, K310, K311, K312  \
) \
{ \
  { K012,  K011,  K010,  K09,   K05,   K06,   K07,   K08,   K04,   K03,   K02,   K01 },   \
  { K112,  K111,  K110,  K19,   K15,   K16,   K17,   K18,   K14,   K13,   K12,   K11 },   \
  { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { K212,  K211,  K210,  K29,   K25,   K26,   K27,   K28,   K24,   K23,   K22,   K21 },   \
  { K312,  K311,  K310,  K39,   K35,   K36,   K3X,   KC_NO, K34,   K33,   K32,   K31 }    \
}

#define KEYMAP KEYMAP_GRID
#define LAYOUT_ortho_4x12 LAYOUT_planck_grid

#endif
