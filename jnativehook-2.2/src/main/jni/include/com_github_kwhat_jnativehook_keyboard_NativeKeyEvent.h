/* JNativeHook: Global keyboard and mouse listeners for Java.
 * Copyright (C) 2006-2021 Alexander Barker.  All Rights Reserved.
 * https://github.com/kwhat/jnativehook/
 *
 * JNativeHook is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JNativeHook is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Redefined virtual constants for native use.  This file should be machine
 * generated however no tool exists for doing so.
 * Reference: com/github/kwhat/jnativehook/keyboard/NativeKeyEvent.java
 */

#ifndef _Included_com_github_kwhat_jnativehook_keyboard_NativeKeyEvent
#define _Included_com_github_kwhat_jnativehook_keyboard_NativeKeyEvent

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_NATIVE_KEY_FIRST                2400
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_NATIVE_KEY_LAST                 2402
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_NATIVE_KEY_TYPED                com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_NATIVE_KEY_FIRST
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_NATIVE_KEY_PRESSED              1 + com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_NATIVE_KEY_FIRST
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_NATIVE_KEY_RELEASED             2 + com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_NATIVE_KEY_FIRST


#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_LOCATION_UNKNOWN                0
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_LOCATION_STANDARD               1
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_LOCATION_LEFT                   2
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_LOCATION_RIGHT                  3
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_LOCATION_NUMPAD                 4


#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_ESCAPE                       0x0001

/** Constants for the F1 through F24 function keys. */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F1                           0x003B
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F2                           0x003C
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F3                           0x003D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F4                           0x003E
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F5                           0x003F
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F6                           0x0040
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F7                           0x0041
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F8                           0x0042
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F9                           0x0043
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F10                          0x0044
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F11                          0x0057
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F12                          0x0058

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F13                          0x005B
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F14                          0x005C
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F15                          0x005D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F16                          0x0063
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F17                          0x0064
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F18                          0x0065
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F19                          0x0066
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F20                          0x0067
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F21                          0x0068
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F22                          0x0069
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F23                          0x006A
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F24                          0x006B

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BACKQUOTE                    0x0029

/** VC_0 thru VC_9 */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_1                            0x0002
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_2                            0x0003
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_3                            0x0004
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_4                            0x0005
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_5                            0x0006
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_6                            0x0007
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_7                            0x0008
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_8                            0x0009
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_9                            0x000A
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_0                            0x000B

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_MINUS                        0x000C // '-'
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_EQUALS                       0x000D // '='
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BACKSPACE                    0x000E

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_TAB                          0x000F
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_CAPS_LOCK                    0x003A

/** VC_A thru VC_Z */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_A                            0x001E
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_B                            0x0030
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_C                            0x002E
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_D                            0x0020
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_E                            0x0012
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_F                            0x0021
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_G                            0x0022
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_H                            0x0023
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_I                            0x0017
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_J                            0x0024
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_K                            0x0025
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_L                            0x0026
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_M                            0x0032
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_N                            0x0031
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_O                            0x0018
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_P                            0x0019
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_Q                            0x0010
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_R                            0x0013
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_S                            0x001F
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_T                            0x0014
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_U                            0x0016
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_V                            0x002F
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_W                            0x0011
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_X                            0x002D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_Y                            0x0015
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_Z                            0x002C

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_OPEN_BRACKET                 0x001A // '['
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_CLOSE_BRACKET                0x001B // ']'
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BACK_SLASH                   0x002B // '\'

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SEMICOLON                    0x0027 // ';'
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_QUOTE                        0x0028
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_ENTER                        0x001C

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_COMMA                        0x0033 // ','
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_PERIOD                       0x0034 // '.'
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SLASH                        0x0035 // '/'

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SPACE                        0x0039


#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_PRINTSCREEN                  0x0E37
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SCROLL_LOCK                  0x0046
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_PAUSE                        0x0E45


/** Edit Key Zone */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_INSERT                       0x0E52
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_DELETE                       0x0E53
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_HOME                         0x0E47
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_END                          0x0E4F
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_PAGE_UP                      0x0E49
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_PAGE_DOWN                    0x0E51


/** Begin Cursor Key Zone */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_UP                           0xE048
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_LEFT                         0xE04B
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_RIGHT                        0xE04D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_DOWN                         0xE050


/** Begin Numeric Zone */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_NUM_LOCK                     0x0045
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_DIVIDE                    0x0E35
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_MULTIPLY                  0x0037
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_SUBTRACT                  0x004A
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_EQUALS                    0x0E0D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_ADD                       0x004E
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_ENTER                     0x0E1C
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_SEPARATOR                 0x0053

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_1                         0x004F
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_2                         0x0050
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_3                         0x0051
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_4                         0x004B
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_5                         0x004C
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_6                         0x004D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_7                         0x0047
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_8                         0x0048
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_9                         0x0049
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_0                         0x0052


/**  Modifier and Control Keys */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SHIFT_L                      0x002A
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SHIFT_R                      0x0036
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_CONTROL_L                    0x001D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_CONTROL_R                    0x0E1D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_ALT_L                        0x0038 // Option or Alt Key
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_ALT_R                        0x0E38 // Option or Alt Key
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_META_L                       0x0E5B // Windows or Command Key
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_META_R                       0x0E5C // Windows or Command Key
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_CONTEXT_MENU                 0x0E5D


/**  Media and Extra Keys */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_POWER                        0xE05E
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SLEEP                        0xE05F
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_WAKE                         0xE063

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_MEDIA_PLAY                   0xE022
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_MEDIA_STOP                   0xE024
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_MEDIA_PREVIOUS               0xE010
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_MEDIA_NEXT                   0xE019
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_MEDIA_SELECT                 0xE06D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_MEDIA_EJECT                  0xE02C

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_VOLUME_MUTE                  0xE020
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_VOLUME_UP                    0xE030
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_VOLUME_DOWN                  0xE02E

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_APP_MAIL                     0xE06C
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_APP_CALCULATOR               0xE021
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_APP_MUSIC                    0xE03C
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_APP_PICTURES                 0xE064

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BROWSER_SEARCH               0xE065
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BROWSER_HOME                 0xE032
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BROWSER_BACK                 0xE06A
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BROWSER_FORWARD              0xE069
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BROWSER_STOP                 0xE068
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BROWSER_REFRESH              0xE067
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_BROWSER_FAVORITES            0xE066

/** Japanese Language Keys */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KATAKANA                     0x0070
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_UNDERSCORE                   0x0073
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_FURIGANA                     0x0077
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KANJI                        0x0079
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_HIRAGANA                     0x007B
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_YEN                          0x007D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_KP_COMMA                     0x007E

/** Sun keyboards */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_HELP                     0xFF75

#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_STOP                     0xFF78
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_PROPS                    0xFF76
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_FRONT                    0xFF77
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_OPEN                     0xFF74
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_FIND                     0xFF7E
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_AGAIN                    0xFF79
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_UNDO                     0xFF7A
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_COPY                     0xFF7C
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_INSERT                   0xFF7D
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_SUN_CUT                      0xFF7B

/** This value is used to indicate that the keyCode is unknown. */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_VC_UNDEFINED                    0x0000

/** This is used to indicate that the keyChar is undefined. */
#define com_github_kwhat_jnativehook_keyboard_NativeKeyEvent_CHAR_UNDEFINED                  0xFFFF

#endif
