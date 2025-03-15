/*
 PsionKeymapUSB.h
 
 Maps the keys to ASCII symbols as shown here:
 https://www.arduino.cc/en/Reference/KeyboardModifiers
 
 */

#define KEY_A          0x61
#define KEY_B          0x62
#define KEY_C          0x63
#define KEY_D          0x64
#define KEY_E          0x65
#define KEY_F          0x66
#define KEY_G          0x67
#define KEY_H          0x68
#define KEY_I          0x69
#define KEY_J          0x6A
#define KEY_K          0x6B
#define KEY_L          0x6C
#define KEY_M          0x6D
#define KEY_N          0x6E
#define KEY_O          0x6F
#define KEY_P          0x70
#define KEY_Q          0x71
#define KEY_R          0x72
#define KEY_S          0x73
#define KEY_T          0x74
#define KEY_U          0x75
#define KEY_V          0x76
#define KEY_W          0x77
#define KEY_X          0x78
#define KEY_Y          0x79
#define KEY_Z          0x7A

#define KEY_0          0x30
#define KEY_1          0x31
#define KEY_2          0x32
#define KEY_3          0x33
#define KEY_4          0x34
#define KEY_5          0x35
#define KEY_6          0x36
#define KEY_7          0x37
#define KEY_8          0x38
#define KEY_9          0x39

#define KEY_{          0x24
#define KEY_}          0x27

#define KEY_ENTER      0xB0
#define KEY_ESC        0xB1
#define KEY_BACKSPACE  0xB2
#define KEY_TAB        0xB3
#define KEY_SPACE      0x20
#define KEY_APOSTROPHE 0x60
#define KEY_COMMA      0x2C
#define KEY_PERIOD     0x2E
#define KEY_RIGHT      0xD7
#define KEY_LEFT       0xD8
#define KEY_DOWN       0xD9
#define KEY_UP         0xDA
#define KEY_CTRL       0x80   // Left CTRL
#define KEY_LSHIFT     0x81
#define KEY_MENU       0x83
#define KEY_RSHIFT     0x85
#define KEY_PWR        0xCD
#define KEY_BACKSLASH  0x5C
#define KEY_EQUALS     0x3D
#define KEY_MINUS      0xDE
#define KEY_DELETE     0xD4
#define KEY_RIGHT_ALT  0x86
#define KEY_QUOTE      0x27
#define KEY_FORWARD_SLASH 0xDC
#define KEY_GRAVE_ACCENT  0x60
#define KEY_LEFT_ALT  0x82
#define KEY_CAPSLOCK 0xC1
#define KEY_F11     0xCC
#define KEY_F10     0xCB
#define KEY_F9      0xCA
#define KEY_F8      0xC9
#define KEY_F7      0xC8
#define KEY_F6      0xC7
#define KEY_F5      0xC6
#define KEY_F4      0xC5
#define KEY_F3      0xC4
#define KEY_F2      0xC3
#define KEY_F1      0xC2
#define KEY_ESCAPE  0xB1
#define KEY_LEFT_BRACKET 0x5B
#define KEY_RIGHT_BRACKET 0x5D
#define KEY_SEMICOLON 0x3B

static int keyScancode [NROWS] [NCOLS] = {

  {KEY_F12,0,0,0,0,0,0,0,0,0,0,0,0,0                                                                      },
  {KEY_BACKSLASH,KEY_EQUALS,KEY_MINUS,KEY_0,0,KEY_9,KEY_8,KEY_7,KEY_6,KEY_5,KEY_4,KEY_3,KEY_2,KEY_1         },
  {0,0,0,0,0,KEY_DELETE,KEY_FORWARD_SLASH,0,0,0,KEY_SPACE,0,KEY_CTRL,KEY_MENU                                   },
  {0,KEY_ENTER,KEY_QUOTE,KEY_FORWARD_SLASH,0,KEY_PERIOD,KEY_COMMA,KEY_M,KEY_N,KEY_B,KEY_V,KEY_C,KEY_X,KEY_Z },
  {0,0,KEY_RIGHT,KEY_DOWN,0,KEY_LEFT,0,0,0,KEY_LEFT_ALT,0,0,0,0                            }, //COL_06 ROW_05 FN Key
  {0, KEY_F11,KEY_F10,KEY_F9,0,KEY_F8,KEY_F7,KEY_F6,KEY_F5,KEY_F4,KEY_F3,KEY_F2,KEY_F1,KEY_ESCAPE              },
  {0,KEY_BACKSLASH,KEY_RIGHT_BRACKET,KEY_SEMICOLON,0,KEY_L,KEY_K,KEY_J,KEY_H,KEY_G,KEY_F,KEY_D,KEY_S,KEY_A  },
  {0,KEY_RSHIFT,0,KEY_UP,0,0,0,0,0,0,0,KEY_LSHIFT,0,KEY_TAB                                                 },
  {0,KEY_BACKSPACE,KEY_BACKSLASH,KEY_P,0,KEY_O,KEY_I,KEY_U,KEY_Y,KEY_T,KEY_R,KEY_E,KEY_W,KEY_Q           }

};


static int keyScancodeFN [NROWS] [NCOLS] = {

  {0,0,0,0,0,0,0,0,0,0,0,0,0,0                                                                      },
  {0,0,0,0,0,0,0,0,0,0,KEY_EUR,KEY_POUND,KEY_GRAVE_ACCENT,KEY_TILDE         },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0                                   },
  {0,0,KEY_RIGHT_BRACKET,0,0,0,0,0,0,0,0,0,0,0 },
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0                            }, //Col6 Row5 FN Key
  {0, 0,0,0,0,0,0,0,0,0,0,0,0,0              },
  {0,0,0,KEY_LEFT_BRACKET,0,0,0,0,0,0,0,0,0,0  },
  {0,0,0,0,0,0,0,0,0,0,0,KEY_CAPSLOCK,0,0                                                 },
  {0,0,KEY_},KEY_{,0,0,0,0,0,0,0,0,0,0           }

};
