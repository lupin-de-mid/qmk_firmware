#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define LANG_CHANGE_DEFAULT LANG_CHANGE_WIN_SPACE

#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 4

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define COMBO_KEYS_COUNT 1
#define COMBO_MAX_SIZE 1
#define COMBO_STACK_MAX_SIZE 1
#define COMBO_WAIT_TIME 100

#ifdef RGBLIGHT_ENABLE
    #define RGB_DI_PIN D3
    #undef RGBLED_NUM
    #define RGBLED_NUM 14
    #define RGBLED_SPLIT     { RGBLED_NUM / 2, RGBLED_NUM / 2 }
    #define RGBLIGHT_LIMIT_VAL 128
    #define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL
    #define RGBLIGHT_LAYERS
#endif
