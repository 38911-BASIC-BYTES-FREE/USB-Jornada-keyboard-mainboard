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
#define KEY_LEFT_CTRL  0x80
#define KEY_RIGHT_CTRL 0x84
#define KEY_LSHIFT     0x81
#define KEY_MENU       0xED
#define KEY_GUI        0x83
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
#define KEY_F12     0xCD
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

  {KEY_ESCAPE,KEY_F1,KEY_F2,KEY_F3,KEY_F4,KEY_F5,KEY_F6,KEY_F7,KEY_F8,KEY_F9,KEY_F10,KEY_F11,KEY_F12,KEY_DELETE},
  {KEY_GRAVE_ACCENT,KEY_1,KEY_2,KEY_3,KEY_4,KEY_5,KEY_6,KEY_7,KEY_8,KEY_9,KEY_0,KEY_MINUS,KEY_EQUALS,KEY_BACKSPACE},
  {KEY_TAB,KEY_Q,KEY_W,KEY_E,KEY_R,KEY_T,KEY_Y,KEY_U,KEY_I,KEY_O,KEY_P,KEY_LEFT_BRACKET,KEY_RIGHT_BRACKET,KEY_ENTER},
  {KEY_CAPSLOCK,KEY_A,KEY_S,KEY_D,KEY_F,KEY_G,KEY_H,KEY_J,KEY_K,KEY_L,KEY_SEMICOLON,KEY_QUOTE,KEY_BACKSLASH,0},
  {KEY_LSHIFT,KEY_Z,KEY_X,KEY_C,KEY_V,KEY_B,KEY_N,KEY_M,KEY_COMMA,KEY_PERIOD,KEY_FORWARD_SLASH,0,KEY_UP,KEY_RSHIFT},
  {KEY_LEFT_CTRL,KEY_MENU,KEY_GUI,KEY_LEFT_ALT,KEY_SPACE,0,0,KEY_SPACE,KEY_RIGHT_ALT,KEY_RIGHT_CTRL,0,KEY_LEFT,KEY_DOWN,KEY_RIGHT}
  
};
