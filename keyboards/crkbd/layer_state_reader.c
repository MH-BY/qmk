
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "crkbd.h"

// in the future, should use (1U<<_LAYER_NAME) instead, but needs to be moved to keymap,c
#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8
#define L_FUNCTION 16
#define L_NUMBS 32
#define L_ADJUST_TRI 14

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: QWERTY");
    break;
  case L_RAISE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: UI");
    break;
  case L_LOWER:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: SYMBOLS");
    break;
  case L_ADJUST:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: ADJUST");
    break;
  case L_FUNCTION:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: FUNCTION");
    break;
  case L_NUMBS:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: NUMBS");
    break;
  case L_ADJUST_TRI:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
