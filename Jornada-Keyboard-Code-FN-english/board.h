/*
 board.h
 
 This is how the pins are connected to the keyboard
 
 */



// Standard LED is moved to pin 13 and disabled
#undef LED_BUILTIN
#define LED_BUILTIN 0
 
// See the keyboard schematic for row/col mapping
#define NROWS 9
#define NCOLS 14

#define ROW_01   7 //PE6 
#define ROW_02   A5 //PF0
#define ROW_03   A4 //PF1
#define ROW_04   A3 //PF4
#define ROW_05   A2 //PF5
#define ROW_06   A1 //PF6
#define ROW_07   A0 //PF7
#define ROW_08   13 //PC7
#define ROW_09   5 //PC6

#define COL_1    9 //PB5
#define COL_2    8 //PB4
#define COL_3    6 //PD7 
#define COL_4    12 //PD6
#define COL_5    4 //PD4
#define COL_6    1 //PD3
#define COL_7    0 //PD2
#define COL_8    2 //PD1
#define COL_9    3 //PD0
#define COL_10   11 //PB7 
#define COL_11   SS //PB0
#define COL_12   MISO // PB3
#define COL_13   MOSI // PB2
#define COL_14   SCK //PB1

int Rows [NROWS] = {
  ROW_01,
  ROW_02,
  ROW_03,
  ROW_04,
  ROW_05,
  ROW_06,
  ROW_07,
  ROW_08,
  ROW_09
};

int Cols [NCOLS] = {
  COL_1,
  COL_2,
  COL_3,
  COL_4,
  COL_5,
  COL_6,
  COL_7,
  COL_8,
  COL_9,
  COL_10,
  COL_11,
  COL_12,
  COL_13,
  COL_14
};
