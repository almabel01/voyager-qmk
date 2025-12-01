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
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};

#define DUAL_FUNC_0 LT(2, KC_F8)
#define DUAL_FUNC_1 LT(2, KC_F5)
#define DUAL_FUNC_2 LT(10, KC_F5)
#define DUAL_FUNC_3 LT(7, KC_F8)
#define DUAL_FUNC_4 LT(15, KC_F13)
#define DUAL_FUNC_5 LT(6, KC_F18)
#define DUAL_FUNC_6 LT(4, KC_F6)
#define DUAL_FUNC_7 LT(6, KC_7)
#define DUAL_FUNC_8 LT(7, KC_F16)
#define DUAL_FUNC_9 LT(3, KC_F8)
#define DUAL_FUNC_10 LT(10, KC_F24)
#define DUAL_FUNC_11 LT(12, KC_F7)
#define DUAL_FUNC_12 LT(6, KC_F19)
#define DUAL_FUNC_13 LT(14, KC_F20)
#define DUAL_FUNC_14 LT(8, KC_F8)
#define DUAL_FUNC_15 LT(6, KC_Y)
#define DUAL_FUNC_16 LT(10, KC_3)
#define DUAL_FUNC_17 LT(4, KC_Q)
#define DUAL_FUNC_18 LT(8, KC_F7)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,                                    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   TD(DANCE_1),    
    LT(4, KC_TAB),  KC_Q,           KC_W,           KC_F,           LT(5, KC_P),    KC_B,                                           KC_J,           LT(5, KC_L),    KC_U,           HU_Y,           HU_QUOT,        KC_BSPC,        
    MT(MOD_LCTL, KC_ESCAPE),LT(2, KC_A),    MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),MT(MOD_LGUI, KC_G),                                MT(MOD_RGUI, KC_M),MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_LALT, KC_I),LT(2, KC_O),    MT(MOD_LCTL, KC_ENTER),
    DUAL_FUNC_5,    MT(MOD_RALT, HU_Z),KC_X,           MEH_T(KC_C),    LT(2, KC_D),    MT(MOD_LALT | MOD_LGUI, KC_V),                                MT(MOD_LALT | MOD_LGUI, KC_K),LT(2, KC_H),    MEH_T(HU_COMM), HU_DOT,         MT(MOD_RALT, HU_MINS),DUAL_FUNC_11,   
                                                    LT(3, KC_SPACE),MT(MOD_LSFT, KC_TAB),                                KC_F24,         LT(1, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,                                         KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         MO(7),          
    KC_TRANSPARENT, KC_KP_MINUS,    KC_7,           KC_8,           KC_9,           TD(DANCE_2),                                    KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_PLUS,     KC_4,           KC_5,           KC_6,           KC_KP_ASTERISK,                                 OSM(MOD_LGUI),  MT(MOD_RSFT, KC_F4),MT(MOD_RCTL, KC_F5),MT(MOD_LALT, KC_F6),KC_ENTER,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_EQUAL,    KC_1,           KC_2,           KC_3,           KC_SPACE,                                       LGUI(KC_LEFT_ALT),KC_F1,          KC_F2,          KC_F3,          OSM(MOD_RALT),  QK_LLCK,        
                                                    HU_0,           LSFT(KC_ENTER),                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,                                    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_14,   MO(7),          
    KC_NO,          HU_GRV,         HU_LESS,        HU_MORE,        HU_UNDS,        TD(DANCE_3),                                    HU_CIRC,        HU_LCBR,        HU_RCBR,        HU_DLR,         HU_QST,         KC_NO,          
    KC_TRANSPARENT, HU_EXLM,        DUAL_FUNC_12,   TD(DANCE_4),    DUAL_FUNC_13,   HU_AMPR,                                        HU_HASH,        DUAL_FUNC_15,   DUAL_FUNC_16,   DUAL_FUNC_17,   HU_DQOT,        KC_TRANSPARENT, 
    KC_NO,          HU_TILD,        HU_PLUS,        TD(DANCE_5),    HU_ACUT,        HU_PERC,                                        HU_AT,          HU_LBRC,        HU_RBRC,        HU_COLN,        ST_MACRO_0,     QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,                                    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_14,   MO(7),          
    KC_TRANSPARENT, KC_NO,          DM_PLY1,        DM_PLY2,        KC_NO,          KC_NO,                                          LCTL(LSFT(HU_Z)),KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_NO,          
    KC_TRANSPARENT, LT(4, KC_ENTER),OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_LGUI),                                  KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_1,     KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F23,         KC_DELETE
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MO(7),          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LCTL(LSFT(HU_Z)),KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_NO,          
    KC_NO,          KC_NO,          OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_LGUI),                                  LSFT(KC_ENTER), KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_MS_BTN3,                                     KC_MS_BTN3,     KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, QK_LLCK,        
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_MS_BTN1,     KC_MS_BTN2
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     LCTL(KC_5),                                     LCTL(KC_6),     LCTL(KC_7),     LCTL(KC_8),     LCTL(KC_9),     LCTL(HU_0),     MO(7),          
    KC_NO,          DUAL_FUNC_18,   LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     LGUI(HU_0),                                     KC_NO,          LGUI(LSFT(KC_LEFT)),LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)),LGUI(LSFT(KC_RIGHT)),KC_NO,          
    KC_NO,          KC_NO,          LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),     KC_NO,                                          KC_NO,          LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), KC_NO,          
    KC_NO,          KC_NO,          LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     KC_NO,                                          KC_NO,          LALT(LGUI(KC_LEFT)),KC_NO,          KC_NO,          LALT(LGUI(KC_RIGHT)),QK_LLCK,        
                                                    LCTL(LSFT(KC_TAB)),LALT(LSFT(KC_TAB)),                                LALT(KC_TAB),   LCTL(KC_TAB)
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, LCTL(LSFT(KC_1)),LCTL(LSFT(KC_2)),LCTL(LSFT(KC_3)),LCTL(LSFT(KC_4)),LCTL(LSFT(KC_5)),                                LCTL(LSFT(KC_6)),LCTL(LSFT(KC_7)),LCTL(LSFT(KC_8)),LCTL(LSFT(KC_9)),KC_TRANSPARENT, MO(7),          
    KC_TRANSPARENT, LALT(LSFT(KC_8)),LALT(LSFT(KC_Q)),LALT(LSFT(KC_D)),KC_TRANSPARENT, ST_MACRO_2,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,                                     LALT(LCTL(LSFT(KC_F11))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_7,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(LCTL(LSFT(KC_F12))),ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        TO(0),          KC_NO,          KC_NO,          KC_NO,          LGUI(KC_L),     KC_TRANSPARENT, 
    KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  LCTL(LSFT(KC_M)),KC_AUDIO_VOL_UP,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_RIGHT,    KC_NO,          
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
const uint16_t PROGMEM combo1[] = { KC_F, LT(5, KC_P), COMBO_END};
const uint16_t PROGMEM combo2[] = { LT(5, KC_L), KC_U, COMBO_END};
const uint16_t PROGMEM combo3[] = { MT(MOD_RCTL, KC_E), MT(MOD_LCTL, KC_S), COMBO_END};
const uint16_t PROGMEM combo4[] = { LT(3, KC_SPACE), LT(1, KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_DOWN, KC_UP, COMBO_END};
const uint16_t PROGMEM combo7[] = { MT(MOD_LALT, KC_I), MT(MOD_LALT, KC_R), COMBO_END};
const uint16_t PROGMEM combo8[] = { LT(2, KC_D), MT(MOD_LALT | MOD_LGUI, KC_V), COMBO_END};
const uint16_t PROGMEM combo9[] = { MEH_T(KC_C), LT(2, KC_D), COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_X, MEH_T(KC_C), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, CW_TOGG),
    COMBO(combo1, KC_TAB),
    COMBO(combo2, LSFT(KC_TAB)),
    COMBO(combo3, KC_F24),
    COMBO(combo4, KC_ENTER),
    COMBO(combo5, OSL(6)),
    COMBO(combo6, KC_TAB),
    COMBO(combo7, KC_ENTER),
    COMBO(combo8, LCTL(KC_V)),
    COMBO(combo9, LALT(LCTL(LSFT(KC_C)))),
    COMBO(combo10, LCTL(KC_C)),
};


bool capslock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

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

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,255}, {0,0,0}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,255}, {0,0,0}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,0}, {192,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,255,255}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,245,245}, {31,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,157}, {0,0,157}, {0,0,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {31,218,204}, {39,218,204}, {39,218,204}, {39,218,204}, {39,218,204}, {0,255,255}, {31,218,204}, {31,218,204} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {1,218,204}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {131,65,234}, {131,65,234}, {131,65,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,255,255}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {192,240,161}, {192,240,161}, {192,240,161}, {0,0,0}, {0,0,255}, {0,0,0}, {1,218,204}, {1,218,204}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {2,218,204}, {0,0,0}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0} },

    [7] = { {1,218,204}, {131,255,255}, {192,218,204}, {1,218,204}, {31,245,245}, {0,0,255}, {0,0,0}, {46,218,204}, {1,218,204}, {1,218,204}, {84,218,204}, {0,0,0}, {0,0,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {1,218,204}, {1,218,204}, {1,218,204}, {31,245,245}, {0,0,255}, {192,240,161}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {0,0,0}, {31,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,245,245}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {1,218,204}, {154,239,161} },

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

  if (capslock_active && biton32(layer_state) == 3) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 2, 218, 204 });
    rgb_matrix_set_color( 38, rgb.r, rgb.g, rgb.b );
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

static tap dance_state[6];

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
        tap_code16(HU_ACUT);
        tap_code16(HU_ACUT);
        tap_code16(HU_ACUT);
    }
    if(state->count > 3) {
        tap_code16(HU_ACUT);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(HU_ACUT); break;
        case DOUBLE_TAP: register_code16(HU_SS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_ACUT); register_code16(HU_ACUT);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(HU_ACUT); break;
        case DOUBLE_TAP: unregister_code16(HU_SS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_ACUT); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(HU_UE));
        tap_code16(RALT(HU_UE));
        tap_code16(RALT(HU_UE));
    }
    if(state->count > 3) {
        tap_code16(RALT(HU_UE));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(RALT(HU_UE)); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RALT(HU_OE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(HU_UE)); register_code16(RALT(HU_UE));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(RALT(HU_UE)); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(7)) {
            layer_off(7);
          }
        break;
        case DOUBLE_TAP: unregister_code16(RALT(HU_OE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(HU_UE)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_KP_SLASH);
        tap_code16(KC_KP_SLASH);
        tap_code16(KC_KP_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_KP_SLASH);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_KP_SLASH); break;
        case DOUBLE_TAP: register_code16(HU_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_SLASH); register_code16(KC_KP_SLASH);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
        case DOUBLE_TAP: unregister_code16(HU_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_BSLS);
        tap_code16(HU_BSLS);
        tap_code16(HU_BSLS);
    }
    if(state->count > 3) {
        tap_code16(HU_BSLS);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(HU_BSLS); break;
        case DOUBLE_TAP: register_code16(HU_PIPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_BSLS); register_code16(HU_BSLS);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(HU_BSLS); break;
        case DOUBLE_TAP: unregister_code16(HU_PIPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_BSLS); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_SLSH);
        tap_code16(HU_SLSH);
        tap_code16(HU_SLSH);
    }
    if(state->count > 3) {
        tap_code16(HU_SLSH);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(HU_SLSH); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(HU_SS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_SLSH); register_code16(HU_SLSH);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(HU_SLSH); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(HU_SS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_SLSH); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(HU_UE));
        tap_code16(RALT(HU_UE));
        tap_code16(RALT(HU_UE));
    }
    if(state->count > 3) {
        tap_code16(RALT(HU_UE));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(RALT(HU_UE)); break;
        case DOUBLE_TAP: register_code16(RALT(HU_OE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(HU_UE)); register_code16(RALT(HU_UE));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(RALT(HU_UE)); break;
        case DOUBLE_TAP: unregister_code16(RALT(HU_OE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(HU_UE)); break;
    }
    dance_state[5].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
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
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_QUOTE)SS_DELAY(300)  SS_LCTL(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_B))SS_DELAY(100)  SS_LSFT(SS_TAP(X_R))SS_DELAY(100)  SS_TAP(X_COMMA)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_Y)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_U));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_B))SS_DELAY(100)  SS_LSFT(SS_TAP(X_G))SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_S))SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;

    case DUAL_FUNC_0:
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
    case DUAL_FUNC_1:
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
    case DUAL_FUNC_2:
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
    case DUAL_FUNC_3:
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
    case DUAL_FUNC_4:
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
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_F));
        } else {
          unregister_code16(LCTL(KC_F));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
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
    case DUAL_FUNC_7:
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
    case DUAL_FUNC_8:
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
    case DUAL_FUNC_9:
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
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_0);
        } else {
          unregister_code16(HU_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_S));
        } else {
          unregister_code16(LGUI(KC_S));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_SHIFT);
        } else {
          unregister_code16(KC_RIGHT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
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
    case DUAL_FUNC_13:
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
    case DUAL_FUNC_14:
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
    case DUAL_FUNC_15:
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
    case DUAL_FUNC_16:
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
    case DUAL_FUNC_17:
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
    case DUAL_FUNC_18:
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
