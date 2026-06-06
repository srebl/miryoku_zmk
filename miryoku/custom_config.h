// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#include "keys_de.h"

/* Use German/QWERTZ-style alphas if desired */
#define MIRYOKU_ALPHAS_QWERTZ
#define MIRYOKU_TAP_QWERTZ

/*
 * Substitute the existing Extra layer.
 * Copy the current EXTRA layer macro from:
 * miryoku/miryoku_babel/miryoku_layer_alternatives.h
 *
 * Rename it to MIRYOKU_LAYER_EXTRA, then replace positions with:
 *
 *   DE_A_UMLAUT  ä
 *   DE_O_UMLAUT  ö
 *   DE_U_UMLAUT  ü
 *   DE_SZ        ß
 *
 * Example bindings inside the copied layer:
 *
 *   &kp DE_A_UMLAUT
 *   &kp DE_O_UMLAUT
 *   &kp DE_U_UMLAUT
 *   &kp DE_SZ
 */

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp DE_U_UMLAUT,   &kp I,             &kp DE_O_UMLAUT,   &kp P,             \
&kp DE_A_UMLAUT,   &kp DE_SHARP_S,    U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Y), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
