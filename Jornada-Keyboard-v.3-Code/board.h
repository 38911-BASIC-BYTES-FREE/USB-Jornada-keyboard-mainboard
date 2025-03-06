/*
 board.h
 
 This is how the pins are connected to the keyboard
 
 */



// Standard LED is moved to pin 13 and disabled
#undef LED_BUILTIN
#define LED_BUILTIN 0
 
// See the keyboard schematic for row/col mapping
#define NROWS 6
#define NCOLS 14

#define ROW_01   8     //PB4  
#define ROW_02   9     //PB5  
#define ROW_03   10    //PB6
#define ROW_04   5     //PC6      
#define ROW_05   13    //PC7
#define ROW_06   A0    //PF7

#define COL_00   7     //PE6
#define COL_01   A5    //PF0
#define COL_02   A4    //PF1 
#define COL_03   A3    //PF4
#define COL_04   A2    //PF5
#define COL_05   A1    //PF6 
#define COL_06   0     //PD2
#define COL_07   2     //PD1
#define COL_08   3     //PD0
#define COL_09   11    //PB7
#define COL_10   SS    //PB0
#define COL_11   MISO  // PB3
#define COL_12   MOSI  // PB2
#define COL_13   SCK   //PB1

int Rows [NROWS] = {
  ROW_01,
  ROW_02,
  ROW_03,
  ROW_04,
  ROW_05,
  ROW_06
};

int Cols [NCOLS] = {
  COL_00,
  COL_01,
  COL_02,
  COL_03,
  COL_04,
  COL_05,
  COL_06,
  COL_07,
  COL_08,
  COL_09,
  COL_10,
  COL_11,
  COL_12,
  COL_13
};
