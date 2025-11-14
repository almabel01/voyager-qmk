#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_0_255,
  HSV_192_240_161,
  HSV_1_218_204,
  HSV_154_239_161,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
};

#define DUAL_FUNC_0 LT(2, KC_K)
#define DUAL_FUNC_1 LT(4, KC_F1)
#define DUAL_FUNC_2 LT(9, KC_K)
#define DUAL_FUNC_3 LT(11, KC_F1)
#define DUAL_FUNC_4 LT(10, KC_L)
#define DUAL_FUNC_5 LT(3, KC_Z)
#define DUAL_FUNC_6 LT(15, KC_F15)
#define DUAL_FUNC_7 LT(15, KC_Y)
#define DUAL_FUNC_8 LT(13, KC_2)
#define DUAL_FUNC_9 LT(2, KC_E)
#define DUAL_FUNC_10 LT(5, KC_F10)
#define DUAL_FUNC_11 LT(12, KC_J)
#define DUAL_FUNC_12 LT(13, KC_F19)
#define DUAL_FUNC_13 LT(6, KC_7)
#define DUAL_FUNC_14 LT(10, KC_F7)
#define DUAL_FUNC_15 LT(15, KC_Z)
#define DUAL_FUNC_16 LT(4, KC_F12)
#define DUAL_FUNC_17 LT(4, KC_E)
#define DUAL_FUNC_18 LT(6, KC_2)
#define DUAL_FUNC_19 LT(8, KC_F10)
#define DUAL_FUNC_20 LT(1, KC_O)
#define DUAL_FUNC_21 LT(1, KC_F21)
#define DUAL_FUNC_22 LT(5, KC_E)
#define DUAL_FUNC_23 LT(14, KC_W)
#define DUAL_FUNC_24 LT(13, KC_N)
#define DUAL_FUNC_25 LT(1, KC_5)
#define DUAL_FUNC_26 LT(9, KC_U)
#define DUAL_FUNC_27 LT(15, KC_F9)
#define DUAL_FUNC_28 LT(6, KC_3)
#define DUAL_FUNC_29 LT(2, KC_W)
#define DUAL_FUNC_30 LT(7, KC_F17)
#define DUAL_FUNC_31 LT(9, KC_7)
#define DUAL_FUNC_32 LT(1, KC_F4)
#define DUAL_FUNC_33 LT(13, KC_1)
#define DUAL_FUNC_34 LT(1, KC_L)
#define DUAL_FUNC_35 LT(9, KC_V)
#define DUAL_FUNC_36 LT(12, KC_F7)
#define DUAL_FUNC_37 LT(4, KC_F6)
#define DUAL_FUNC_38 LT(11, KC_1)
#define DUAL_FUNC_39 LT(3, KC_N)
#define DUAL_FUNC_40 LT(4, KC_M)
#define DUAL_FUNC_41 LT(3, KC_I)
#define DUAL_FUNC_42 LT(12, KC_7)
#define DUAL_FUNC_43 LT(5, KC_X)
#define DUAL_FUNC_44 LT(12, KC_F15)
#define DUAL_FUNC_45 LT(12, KC_T)
#define DUAL_FUNC_46 LT(10, KC_B)
#define DUAL_FUNC_47 LT(3, KC_F11)
#define DUAL_FUNC_48 LT(6, KC_F3)
#define DUAL_FUNC_49 LT(10, KC_F17)
#define DUAL_FUNC_50 LT(3, KC_F23)
#define DUAL_FUNC_51 LT(9, KC_W)
#define DUAL_FUNC_52 LT(9, KC_Q)
#define DUAL_FUNC_53 LT(15, KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    HU_CIRC,        DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,                                    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,   DUAL_FUNC_12,   
    LT(5, KC_TAB),  KC_Q,           KC_W,           KC_F,           LT(8, KC_P),    KC_B,                                           KC_J,           LT(8, KC_L),    KC_U,           HU_Y,           HU_QUOT,        KC_BSPC,        
    LT(4, KC_ESCAPE),LT(3, KC_A),    MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),MT(MOD_LGUI, KC_G),                                MT(MOD_RGUI, KC_M),MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_LALT, KC_I),LT(3, KC_O),    MT(MOD_RSFT, KC_ENTER),
    MT(MOD_LCTL, KC_ENTER),HU_Z,           KC_X,           DUAL_FUNC_5,    KC_D,           DUAL_FUNC_6,                                    MT(MOD_LALT | MOD_LGUI, KC_K),MEH_T(KC_H),    HU_COMM,        LT(9, HU_DOT),  MT(MOD_RALT, HU_MINS),DUAL_FUNC_13,   
                                                    LT(4, KC_SPACE),KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(2, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_P,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_L,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_C,           KC_TRANSPARENT, KC_V,                                           KC_K,           KC_H,           KC_TRANSPARENT, HU_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          DUAL_FUNC_14,   DUAL_FUNC_15,   DUAL_FUNC_16,   DUAL_FUNC_17,   DUAL_FUNC_18,                                   DUAL_FUNC_23,   DUAL_FUNC_24,   DUAL_FUNC_25,   DUAL_FUNC_26,   DUAL_FUNC_27,   MO(10),         
    KC_NO,          HU_MINS,        KC_7,           DUAL_FUNC_19,   KC_9,           TD(DANCE_0),                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          HU_PLUS,        DUAL_FUNC_20,   KC_5,           DUAL_FUNC_21,   HU_ASTR,                                        OSM(MOD_LGUI),  OSM(MOD_LSFT),  OSM(MOD_LCTL),  OSM(MOD_LALT),  LT(5, KC_ENTER),KC_TRANSPARENT, 
    KC_NO,          HU_EQL,         KC_1,           DUAL_FUNC_22,   KC_3,           HU_0,                                           LGUI(KC_LEFT_ALT),OSM(MOD_MEH),   KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_RALT),  QK_LLCK,        
                                                    KC_TAB,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          DUAL_FUNC_28,   DUAL_FUNC_29,   DUAL_FUNC_30,   DUAL_FUNC_31,   DUAL_FUNC_32,                                   DUAL_FUNC_36,   DUAL_FUNC_37,   DUAL_FUNC_38,   DUAL_FUNC_39,   DUAL_FUNC_40,   MO(10),         
    KC_NO,          HU_GRV,         HU_LESS,        HU_MORE,        HU_UNDS,        TD(DANCE_1),                                    HU_CIRC,        HU_LCBR,        HU_RCBR,        HU_DLR,         HU_QST,         KC_NO,          
    KC_NO,          HU_EXLM,        DUAL_FUNC_33,   TD(DANCE_2),    DUAL_FUNC_34,   DUAL_FUNC_35,                                   DUAL_FUNC_41,   DUAL_FUNC_42,   DUAL_FUNC_43,   DUAL_FUNC_44,   HU_DQOT,        KC_NO,          
    KC_NO,          HU_TILD,        HU_PLUS,        TD(DANCE_3),    HU_ACUT,        HU_PERC,                                        HU_AT,          HU_LBRC,        HU_RBRC,        HU_COLN,        ST_MACRO_0,     QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          DUAL_FUNC_28,   DUAL_FUNC_29,   DUAL_FUNC_30,   DUAL_FUNC_31,   DUAL_FUNC_32,                                   DUAL_FUNC_36,   DUAL_FUNC_37,   DUAL_FUNC_38,   DUAL_FUNC_39,   DUAL_FUNC_40,   MO(10),         
    KC_NO,          DUAL_FUNC_45,   DM_PLY1,        DM_PLY2,        KC_TAB,         KC_NO,                                          KC_PAGE_UP,     DUAL_FUNC_47,   LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   DUAL_FUNC_48,   KC_NO,          
    KC_TAB,         LT(5, KC_ENTER),OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_LGUI),                                  KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LT(5, KC_ENTER),
    KC_NO,          KC_NO,          KC_NO,          KC_PC_COPY,     DUAL_FUNC_46,   KC_NO,                                          ST_MACRO_1,     DUAL_FUNC_49,   DUAL_FUNC_50,   KC_NO,          KC_NO,          QK_LLCK,        
                                                    KC_TAB,         KC_TAB,                                         KC_DELETE,      KC_ENTER
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MO(10),         
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_LGUI),                                  KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,        
                                                    LCTL(KC_MS_BTN1),KC_MS_BTN1,                                     KC_MS_BTN2,     KC_MS_BTN3
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      DUAL_FUNC_28,   DUAL_FUNC_29,   DUAL_FUNC_30,   DUAL_FUNC_31,   DUAL_FUNC_32,                                   DUAL_FUNC_36,   DUAL_FUNC_37,   DUAL_FUNC_38,   DUAL_FUNC_39,   DUAL_FUNC_40,   MO(10),         
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_P,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_L,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LALT, KC_BSPC),
    KC_LEFT_SHIFT,  KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_LEFT_CTRL,   HU_Z,           KC_TRANSPARENT, KC_C,           KC_TRANSPARENT, KC_V,                                           KC_K,           KC_H,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_13,   
                                                    MT(MOD_LSFT, KC_SPACE),KC_SPACE,                                       KC_ENTER,       KC_RIGHT_CTRL
  ),
  [7] = LAYOUT_voyager(
    KC_ESCAPE,      DUAL_FUNC_28,   DUAL_FUNC_29,   DUAL_FUNC_30,   DUAL_FUNC_31,   DUAL_FUNC_32,                                   DUAL_FUNC_36,   DUAL_FUNC_37,   DUAL_FUNC_38,   DUAL_FUNC_39,   DUAL_FUNC_40,   MO(10),         
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_E,           KC_R,           KC_T,                                           HU_Y,           KC_U,           KC_I,           KC_O,           KC_P,           MT(MOD_LALT, KC_BSPC),
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           HU_QUOT,        KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_13,   
                                                    MT(MOD_LSFT, KC_SPACE),KC_SPACE,                                       KC_ENTER,       KC_RIGHT_CTRL
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     LCTL(KC_5),                                     LCTL(KC_6),     LCTL(KC_7),     LCTL(KC_8),     LCTL(KC_9),     LCTL(HU_0),     MO(10),         
    KC_NO,          DUAL_FUNC_45,   LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     LGUI(HU_0),                                     KC_NO,          LGUI(LCTL(KC_LEFT)),LALT(LSFT(KC_TAB)),LALT(KC_TAB),   LGUI(LCTL(KC_RIGHT)),KC_NO,          
    KC_NO,          KC_NO,          DUAL_FUNC_51,   DUAL_FUNC_52,   DUAL_FUNC_53,   KC_NO,                                          KC_NO,          TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    KC_NO,          
    KC_NO,          KC_NO,          LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,        
                                                    LCTL(LSFT(KC_TAB)),LALT(LSFT(KC_TAB)),                                LALT(KC_TAB),   LCTL(KC_TAB)
  ),
  [9] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(10),         
    KC_TRANSPARENT, LALT(LSFT(KC_8)),LALT(LSFT(KC_Q)),LALT(LSFT(KC_D)),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        TO(0),          KC_NO,          TO(6),          TO(7),          LGUI(KC_L),     KC_TRANSPARENT, 
    KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  LCTL(LSFT(KC_M)),KC_AUDIO_VOL_UP,KC_NO,                                          KC_NO,          AS_TOGG,        KC_NO,          KC_MS_LEFT,     KC_MS_RIGHT,    KC_NO,          
    KC_PSCR,        KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_BRIGHTNESS_UP,                                QK_DYNAMIC_TAPPING_TERM_UP,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LGUI(LSFT(KC_S)),LSFT(KC_PSCR),  DM_RSTP,        DM_REC1,        DM_REC2,        KC_BRIGHTNESS_DOWN,                                QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_NO,          KC_NO,          KC_NO,          QK_LLCK,        
                                                    HSV_0_0_255,    HSV_192_240_161,                                HSV_1_218_204,  HSV_154_239_161
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { MT(MOD_LSFT, KC_T), MT(MOD_RSFT, KC_N), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_U, HU_Y, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_F, LT(8, KC_P), COMBO_END};
const uint16_t PROGMEM combo4[] = { LT(8, KC_L), KC_U, COMBO_END};
const uint16_t PROGMEM combo5[] = { DUAL_FUNC_13, MT(MOD_LCTL, KC_ENTER), COMBO_END};
const uint16_t PROGMEM combo6[] = { DUAL_FUNC_5, KC_D, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, CW_TOGG),
    COMBO(combo1, KC_DELETE),
    COMBO(combo2, KC_BSPC),
    COMBO(combo3, KC_TAB),
    COMBO(combo4, LSFT(KC_TAB)),
    COMBO(combo5, TG(1)),
    COMBO(combo6, LALT(LCTL(LSFT(KC_C)))),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {131,65,234}, {131,65,234}, {131,65,234}, {131,65,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {131,65,234}, {131,65,234}, {131,65,234}, {131,65,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {31,245,245}, {31,245,245}, {154,239,161}, {43,255,255}, {2,218,204}, {2,218,204}, {31,245,245}, {31,245,245}, {154,239,161}, {43,255,255}, {2,218,204}, {2,218,204}, {31,245,245}, {31,245,245}, {154,239,161}, {43,255,255}, {2,218,204}, {2,218,204}, {31,245,245}, {31,245,245}, {154,239,161}, {43,255,255}, {2,218,204}, {2,218,204}, {0,0,255}, {0,0,255}, {2,218,204}, {2,218,204}, {43,255,255}, {154,239,161}, {31,245,245}, {31,245,245}, {2,218,204}, {2,218,204}, {43,255,255}, {154,239,161}, {31,245,245}, {31,245,245}, {2,218,204}, {2,218,204}, {43,255,255}, {154,239,161}, {31,245,245}, {31,245,245}, {2,218,204}, {2,218,204}, {43,255,255}, {154,239,161}, {31,245,245}, {31,245,245}, {0,0,255}, {0,0,255} },

    [2] = { {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,255}, {0,0,0}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,255}, {0,0,0}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,255,255}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {1,218,204}, {31,245,245}, {31,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {1,218,204}, {1,218,204}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,157}, {0,0,157}, {0,0,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {39,218,204}, {39,218,204}, {39,218,204}, {39,218,204}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {31,218,204}, {31,218,204} },

    [6] = { {192,240,161}, {192,240,161}, {192,240,161}, {0,0,255}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {0,0,255}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161}, {192,240,161} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {2,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {2,218,204}, {2,218,204}, {2,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {1,218,204}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {131,65,234}, {131,65,234}, {131,65,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {192,240,161}, {192,240,161}, {192,240,161}, {0,0,0}, {0,0,0}, {0,0,0}, {1,218,204}, {1,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0} },

    [10] = { {1,218,204}, {131,255,255}, {192,218,204}, {1,218,204}, {31,245,245}, {0,0,255}, {0,0,0}, {46,218,204}, {1,218,204}, {1,218,204}, {84,218,204}, {0,0,0}, {0,0,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {1,218,204}, {1,218,204}, {1,218,204}, {31,245,245}, {0,0,255}, {192,240,161}, {0,0,255}, {0,0,0}, {192,218,204}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,65,234}, {0,0,0}, {43,255,255}, {43,255,255}, {0,0,0}, {31,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,245,245}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {1,218,204}, {154,239,161} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
      case 10:
        set_layer_color(10);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[8];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_KP_SLASH);
        tap_code16(KC_KP_SLASH);
        tap_code16(KC_KP_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_KP_SLASH);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_KP_SLASH); break;
        case DOUBLE_TAP: register_code16(HU_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_SLASH); register_code16(KC_KP_SLASH);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
        case DOUBLE_TAP: unregister_code16(HU_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_BSLS);
        tap_code16(HU_BSLS);
        tap_code16(HU_BSLS);
    }
    if(state->count > 3) {
        tap_code16(HU_BSLS);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(HU_BSLS); break;
        case DOUBLE_TAP: register_code16(HU_PIPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_BSLS); register_code16(HU_BSLS);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(HU_BSLS); break;
        case DOUBLE_TAP: unregister_code16(HU_PIPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_BSLS); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_SLSH);
        tap_code16(HU_SLSH);
        tap_code16(HU_SLSH);
    }
    if(state->count > 3) {
        tap_code16(HU_SLSH);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(HU_SLSH); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(HU_SS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_SLSH); register_code16(HU_SLSH);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(HU_SLSH); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(HU_SS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_SLSH); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(HU_UE));
        tap_code16(RALT(HU_UE));
        tap_code16(RALT(HU_UE));
    }
    if(state->count > 3) {
        tap_code16(RALT(HU_UE));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(RALT(HU_UE)); break;
        case DOUBLE_TAP: register_code16(RALT(HU_OE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(HU_UE)); register_code16(RALT(HU_UE));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(RALT(HU_UE)); break;
        case DOUBLE_TAP: unregister_code16(RALT(HU_OE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(HU_UE)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_LEFT));
        tap_code16(LGUI(KC_LEFT));
        tap_code16(LGUI(KC_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_LEFT));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_LEFT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_LEFT)); register_code16(LGUI(KC_LEFT));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_LEFT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_LEFT)); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_DOWN));
        tap_code16(LGUI(KC_DOWN));
        tap_code16(LGUI(KC_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_DOWN));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_DOWN)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_DOWN))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_DOWN)); register_code16(LGUI(KC_DOWN));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_DOWN))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_DOWN)); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_UP));
        tap_code16(LGUI(KC_UP));
        tap_code16(LGUI(KC_UP));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_UP));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_UP)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_UP))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_UP)); register_code16(LGUI(KC_UP));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_UP)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_UP))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_UP)); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_RIGHT));
        tap_code16(LGUI(KC_RIGHT));
        tap_code16(LGUI(KC_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_RIGHT));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_RIGHT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_RIGHT)); register_code16(LGUI(KC_RIGHT));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_RIGHT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_RIGHT)); break;
    }
    dance_state[7].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_7))SS_DELAY(100)  SS_RALT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_QUOTE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_APPLICATION);
        } else {
          unregister_code16(KC_APPLICATION);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_TAB));
        } else {
          unregister_code16(LCTL(KC_TAB));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOWN);
        } else {
          unregister_code16(KC_DOWN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UP);
        } else {
          unregister_code16(KC_UP);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_C);
        } else {
          unregister_code16(KC_C);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_V));
        } else {
          unregister_code16(LCTL(KC_V));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LEFT);
        } else {
          unregister_code16(KC_LEFT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RIGHT);
        } else {
          unregister_code16(KC_RIGHT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_TAB));
        } else {
          unregister_code16(LALT(KC_TAB));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_DLR);
        } else {
          unregister_code16(HU_DLR);
        }
      } else {
        if (record->event.pressed) {
          layer_on(10);
        } else {
          if (!is_layer_locked(10)) {
          layer_off(10);
          }
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_GUI);
        } else {
          unregister_code16(KC_RIGHT_GUI);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_CTRL);
        } else {
          unregister_code16(KC_RIGHT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F11);
        } else {
          unregister_code16(KC_F11);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F12);
        } else {
          unregister_code16(KC_F12);
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F13);
        } else {
          unregister_code16(KC_F13);
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F14);
        } else {
          unregister_code16(KC_F14);
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F15);
        } else {
          unregister_code16(KC_F15);
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_UP);
        } else {
          unregister_code16(KC_UP);
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT);
        } else {
          unregister_code16(KC_LEFT);
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT);
        } else {
          unregister_code16(KC_RIGHT);
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DOWN);
        } else {
          unregister_code16(KC_DOWN);
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F16);
        } else {
          unregister_code16(KC_F16);
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F17);
        } else {
          unregister_code16(KC_F17);
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F18);
        } else {
          unregister_code16(KC_F18);
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F19);
        } else {
          unregister_code16(KC_F19);
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F20);
        } else {
          unregister_code16(KC_F20);
        }  
      }  
      return false;
    case DUAL_FUNC_28:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }  
      }  
      return false;
    case DUAL_FUNC_29:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }  
      }  
      return false;
    case DUAL_FUNC_30:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }  
      }  
      return false;
    case DUAL_FUNC_31:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }  
      }  
      return false;
    case DUAL_FUNC_32:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }  
      }  
      return false;
    case DUAL_FUNC_33:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_ASTR);
        } else {
          unregister_code16(HU_ASTR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_34:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_EQL);
        } else {
          unregister_code16(HU_EQL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_35:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_AMPR);
        } else {
          unregister_code16(HU_AMPR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_36:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }  
      }  
      return false;
    case DUAL_FUNC_37:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }  
      }  
      return false;
    case DUAL_FUNC_38:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }  
      }  
      return false;
    case DUAL_FUNC_39:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }  
      }  
      return false;
    case DUAL_FUNC_40:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }  
      }  
      return false;
    case DUAL_FUNC_41:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_HASH);
        } else {
          unregister_code16(HU_HASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_GUI);
        } else {
          unregister_code16(KC_RIGHT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_42:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_LPRN);
        } else {
          unregister_code16(HU_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_SHIFT);
        } else {
          unregister_code16(KC_RIGHT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_43:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_RPRN);
        } else {
          unregister_code16(HU_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_CTRL);
        } else {
          unregister_code16(KC_RIGHT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_44:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_SCLN);
        } else {
          unregister_code16(HU_SCLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_45:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_W));
        } else {
          unregister_code16(LCTL(KC_W));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_F4));
        } else {
          unregister_code16(LALT(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_46:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(LSFT(KC_C))));
        } else {
          unregister_code16(LALT(LCTL(LSFT(KC_C))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(LSFT(KC_S))));
        } else {
          unregister_code16(LALT(LCTL(LSFT(KC_S))));
        }  
      }  
      return false;
    case DUAL_FUNC_47:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_BSPC)));
        } else {
          unregister_code16(LCTL(LSFT(KC_BSPC)));
        }  
      }  
      return false;
    case DUAL_FUNC_48:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_DELETE)));
        } else {
          unregister_code16(LCTL(LSFT(KC_DELETE)));
        }  
      }  
      return false;
    case DUAL_FUNC_49:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSPC);
        } else {
          unregister_code16(KC_BSPC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_BSPC));
        } else {
          unregister_code16(LCTL(KC_BSPC));
        }  
      }  
      return false;
    case DUAL_FUNC_50:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_DELETE));
        } else {
          unregister_code16(LCTL(KC_DELETE));
        }  
      }  
      return false;
    case DUAL_FUNC_51:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_4));
        } else {
          unregister_code16(LGUI(KC_4));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_52:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_5));
        } else {
          unregister_code16(LGUI(KC_5));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_53:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_6));
        } else {
          unregister_code16(LGUI(KC_6));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_0_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,0,255);
      }
      return false;
    case HSV_192_240_161:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(192,240,161);
      }
      return false;
    case HSV_1_218_204:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(1,218,204);
      }
      return false;
    case HSV_154_239_161:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(154,239,161);
      }
      return false;
  }
  return true;
}
