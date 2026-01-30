#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
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
  DANCE_8,
  DANCE_9,
};

#define DUAL_FUNC_0 LT(4, KC_F6)
#define DUAL_FUNC_1 LT(9, KC_E)
#define DUAL_FUNC_2 LT(13, KC_E)
#define DUAL_FUNC_3 LT(15, KC_F15)
#define DUAL_FUNC_4 LT(5, KC_4)
#define DUAL_FUNC_5 LT(10, KC_3)
#define DUAL_FUNC_6 LT(14, KC_Q)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TG(1),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           HU_0,           TD(DANCE_1),    
    HU_ACUT,        KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           HU_Y,           HU_QUOT,        RALT(HU_OE),    
    LT(4, KC_ESCAPE),MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_RGUI, KC_O),RALT(HU_UE),    
    TD(DANCE_0),    HU_Z,           KC_X,           MEH_T(KC_C),    LT(2, KC_D),    KC_V,                                           KC_K,           LT(2, KC_H),    MEH_T(KC_COMMA),KC_DOT,         HU_MINS,        RGUI(KC_S),     
                                                    LT(3, KC_SPACE),OSM(MOD_LSFT),                                  LT(2, KC_ENTER),LT(1, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         TD(DANCE_2),                                    KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         TO(0),          
    QK_DYNAMIC_TAPPING_TERM_PRINT,KC_KP_MINUS,    KC_7,           KC_8,           KC_9,           TD(DANCE_3),                                    RGB_VAI,        KC_F7,          KC_F8,          KC_F9,          KC_F10,         RGB_TOG,        
    QK_DYNAMIC_TAPPING_TERM_UP,MT(MOD_LGUI, KC_KP_PLUS),MT(MOD_LALT, KC_4),MT(MOD_LCTL, KC_5),MT(MOD_LSFT, KC_6),KC_KP_ASTERISK,                                 LSFT(KC_G),     MT(MOD_RSFT, KC_F4),MT(MOD_RCTL, KC_F5),MT(MOD_LALT, KC_F6),OSM(MOD_LGUI),  TOGGLE_LAYER_COLOR,
    QK_DYNAMIC_TAPPING_TERM_DOWN,TD(DANCE_4),    KC_1,           KC_2,           KC_3,           KC_KP_ENTER,                                    RGB_VAD,        KC_F1,          KC_F2,          KC_F3,          OSM(MOD_RALT),  RGB_MODE_FORWARD,
                                                    TD(DANCE_5),    LSFT(KC_ENTER),                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    QK_LLCK,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(0),          
    KC_NO,          HU_GRV,         HU_LESS,        HU_MORE,        HU_UNDS,        HU_PIPE,                                        HU_CIRC,        HU_LCBR,        HU_RCBR,        HU_DLR,         HU_EURO,        KC_NO,          
    KC_TRANSPARENT, HU_EXLM,        DUAL_FUNC_0,    TD(DANCE_6),    DUAL_FUNC_1,    HU_AMPR,                                        HU_HASH,        DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    HU_DQOT,        KC_NO,          
    KC_TRANSPARENT, ST_MACRO_0,     HU_PLUS,        HU_BSLS,        HU_TILD,        HU_PERC,                                        HU_AT,          HU_LBRC,        HU_RBRC,        HU_COLN,        ST_MACRO_1,     KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    QK_LLCK,        DM_RSTP,        DM_REC1,        DM_REC2,        KC_NO,          KC_NO,                                          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  LCTL(LSFT(KC_M)),KC_AUDIO_VOL_UP,KC_NO,          TO(0),          
    KC_NO,          KC_F5,          DM_PLY1,        DM_PLY2,        ST_MACRO_2,     ST_MACRO_3,                                     KC_PAGE_UP,     TD(DANCE_7),    KC_UP,          TD(DANCE_8),    KC_APPLICATION, LGUI(LSFT(KC_S)),
    KC_TRANSPARENT, OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  ST_MACRO_4,                                     KC_PGDN,        DUAL_FUNC_5,    KC_DOWN,        DUAL_FUNC_6,    KC_CAPS,        LSFT(KC_PSCR),  
    MO(4),          KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     LALT(LCTL(LSFT(KC_C))),KC_PC_PASTE,                                    KC_NO,          KC_PC_PASTE,    KC_TAB,         KC_PC_COPY,     KC_NO,          KC_MS_JIGGLER_TOGGLE,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       LCTL(KC_BSPC)
  ),
  [4] = LAYOUT_voyager(
    QK_LLCK,        KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          KC_NO,          KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          TO(0),          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_APPLICATION, LGUI(LSFT(KC_S)),
    KC_NO,          OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  ST_MACRO_5,                                     KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_CAPS,        LSFT(KC_PSCR),  
    KC_NO,          KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     LALT(LCTL(LSFT(KC_C))),KC_PC_PASTE,                                    KC_MS_BTN3,     KC_PC_PASTE,    KC_TAB,         KC_PC_COPY,     KC_MS_BTN3,     KC_MS_JIGGLER_TOGGLE,
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_MS_BTN1,     KC_MS_BTN2
  ),
  [5] = LAYOUT_voyager(
    TD(DANCE_9),    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(0),          
    KC_TAB,         KC_TAB,         KC_I,           KC_W,           KC_R,           KC_H,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_SHIFT,  KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_J,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_CTRL,   KC_F,           KC_C,           KC_K,           KC_M,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_SPACE,       KC_LEFT_SHIFT,                                  KC_NO,          KC_NO
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
const uint16_t PROGMEM combo1[] = { MT(MOD_RCTL, KC_E), MT(MOD_LCTL, KC_S), COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LALT, KC_I), MT(MOD_LALT, KC_R), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_L, KC_U, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, CW_TOGG),
    COMBO(combo1, KC_F24),
    COMBO(combo2, KC_ENTER),
    COMBO(combo3, KC_TAB),
    COMBO(combo4, LSFT(KC_TAB)),
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
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,255}, {31,245,245}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,255}, {31,245,245}, {0,0,255}, {192,218,204}, {192,218,204}, {192,218,204}, {0,0,255}, {192,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {2,218,204}, {2,218,204}, {2,218,204}, {2,218,204}, {1,218,204}, {0,0,255}, {2,218,204}, {2,218,204}, {2,218,204}, {0,0,255}, {131,255,255}, {31,245,245}, {2,218,204}, {2,218,204}, {2,218,204}, {0,0,0}, {192,218,204}, {0,0,0}, {0,0,0} },

    [2] = { {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {43,255,255}, {1,218,204}, {1,218,204}, {1,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,245,245}, {31,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {46,218,204}, {1,218,204}, {1,218,204}, {84,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,218,204}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {189,218,204}, {189,218,204}, {189,218,204}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {43,255,255}, {0,0,0}, {0,0,157}, {0,0,157}, {0,0,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {31,218,204}, {31,218,204}, {0,0,0}, {31,218,204}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {31,245,245}, {31,245,245}, {43,255,255}, {31,245,245}, {0,0,0}, {0,0,255}, {31,245,245}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,255}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {0,0,0}, {31,218,204}, {31,218,204} },

    [5] = { {0,0,0}, {0,0,0}, {43,255,255}, {2,218,204}, {31,245,245}, {2,218,204}, {0,0,0}, {0,0,255}, {0,0,255}, {154,239,161}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {154,239,161}, {154,239,161}, {154,239,161}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
    rgb_matrix_set_color( 42, rgb.r, rgb.g, rgb.b );
  } 
  if (capslock_active && biton32(layer_state) == 4) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 2, 218, 204 });
    rgb_matrix_set_color( 42, rgb.r, rgb.g, rgb.b );
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

static tap dance_state[10];

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
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: register_code16(LGUI(KC_L)); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: unregister_code16(LGUI(KC_L)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F15);
        tap_code16(KC_F15);
        tap_code16(KC_F15);
    }
    if(state->count > 3) {
        tap_code16(KC_F15);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_F15); break;
        case DOUBLE_TAP: layer_move(5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F15); register_code16(KC_F15);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_F15); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F15); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_KP_SLASH);
        tap_code16(KC_KP_SLASH);
        tap_code16(KC_KP_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_KP_SLASH);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_KP_SLASH); break;
        case DOUBLE_TAP: register_code16(HU_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_SLASH); register_code16(KC_KP_SLASH);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
        case DOUBLE_TAP: unregister_code16(HU_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_EQL);
        tap_code16(HU_EQL);
        tap_code16(HU_EQL);
    }
    if(state->count > 3) {
        tap_code16(HU_EQL);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(HU_EQL); break;
        case DOUBLE_TAP: register_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_EQL); register_code16(HU_EQL);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(HU_EQL); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_EQL); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_0);
        tap_code16(HU_0);
        tap_code16(HU_0);
    }
    if(state->count > 3) {
        tap_code16(HU_0);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(HU_0); break;
        case DOUBLE_TAP: register_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_0); register_code16(HU_0);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(HU_0); break;
        case DOUBLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_0); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_SLSH);
        tap_code16(HU_SLSH);
        tap_code16(HU_SLSH);
    }
    if(state->count > 3) {
        tap_code16(HU_SLSH);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(HU_SLSH); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(HU_SS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_SLSH); register_code16(HU_SLSH);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(HU_SLSH); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(HU_SS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_SLSH); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if(state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_HOME); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_HOME)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HOME); register_code16(KC_HOME);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_HOME); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_HOME)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HOME); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if(state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_END); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_END)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_END)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_END); register_code16(KC_END);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_END); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_END)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_END)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_END); break;
    }
    dance_state[8].step = 0;
}
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
    }
    dance_state[9].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_9_finished, dance_9_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
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
      SEND_STRING(SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_GRAVE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_7))SS_DELAY(100)  SS_RALT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_QUOTE)SS_DELAY(100)  SS_LCTL(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_QUOTE)SS_DELAY(100)  SS_LCTL(SS_TAP(X_V)));
    }
    break;

    case DUAL_FUNC_0:
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
    case DUAL_FUNC_1:
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
    case DUAL_FUNC_2:
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
    case DUAL_FUNC_3:
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
    case DUAL_FUNC_4:
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
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LEFT);
        } else {
          unregister_code16(KC_LEFT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_LEFT));
        } else {
          unregister_code16(LCTL(KC_LEFT));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RIGHT);
        } else {
          unregister_code16(KC_RIGHT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_RIGHT));
        } else {
          unregister_code16(LCTL(KC_RIGHT));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
