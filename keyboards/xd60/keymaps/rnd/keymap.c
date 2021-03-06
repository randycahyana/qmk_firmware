#include "xd60.h"
#include "action_layer.h"

#define QWERTY 0
#define DVORAK 1
#define FN 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0: QWERTY Layer
  [QWERTY] = LAYOUT_all(
      KC_GRV  , KC_1  , KC_2 , KC_3 , KC_4 , KC_5 , KC_6 , KC_7 , KC_8 , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC , KC_BSPC    , \
      KC_TAB  , KC_Q  , KC_W , KC_E , KC_R , KC_T , KC_Y , KC_U , KC_I , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS ,              \
      KC_ESC  , KC_A  , KC_S , KC_D , KC_F , KC_G , KC_H , KC_J , KC_K , KC_L    , KC_SCLN , KC_QUOT , KC_NO   , KC_ENT  ,              \
      KC_LSPO , KC_NO , KC_Z , KC_X , KC_C , KC_V , KC_B , KC_N , KC_M , KC_COMM , KC_DOT  , KC_SLSH , MO(FN)  , KC_UP   , TO(DVORAK) , \
      KC_LCTRL, KC_LGUI, KC_LALT,                        KC_SPC                  , KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RIGHT
      ),

  // 1: DVORAK Layer
  [DVORAK] = LAYOUT_all(
      KC_GRV  , KC_1    , KC_2    , KC_3   , KC_4 , KC_5 , KC_6 , KC_7 , KC_8 , KC_9 , KC_0 , KC_LBRC , KC_RBRC , KC_BSPC , KC_BSPC    , \
      KC_TAB  , KC_QUOT , KC_COMM , KC_DOT , KC_P , KC_Y , KC_F , KC_G , KC_C , KC_R , KC_L , KC_SLSH , KC_EQL  , KC_BSLS ,              \
      KC_ESC  , KC_A    , KC_O    , KC_E   , KC_U , KC_I , KC_D , KC_H , KC_T , KC_N , KC_S , KC_MINS , KC_NO   , KC_ENT  ,              \
      KC_LSPO , KC_NO   , KC_SCLN , KC_Q   , KC_J , KC_K , KC_X , KC_B , KC_M , KC_W , KC_V , KC_Z    , MO(FN)  , KC_UP   , TO(QWERTY) , \
      KC_LCTRL, KC_LGUI, KC_LALT,                        KC_SPC                  , KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RIGHT
      ),
  
  // 2: Function Layer
  [FN] = LAYOUT_all(
      TG(QWERTY) , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9    , KC_F10  , KC_F11  , KC_F12  , KC_DEL  , KC_DEL  , \
      KC_INSERT  , RGB_MOD , RGB_VAI , KC_TRNS , KC_TRNS , KC_HOME , KC_END  , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , KC_DEL  ,           \
      KC_PSCREEN , KC_MUTE , KC_VOLD , KC_VOLU , KC_TRNS , KC_TRNS , KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT , KC_TRNS , KC_TRNS , KC_NO   , KC_ENT  ,           \
      KC_TRNS    , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_AMPR , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , KC_PGUP , KC_TRNS , \
      KC_LCTRL	 , KC_LGUI , KC_TRNS,                              KC_SPC,                              KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDOWN,KC_END
      ),
};
