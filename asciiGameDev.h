#include <stdio.h>

#ifndef ASCII_GAME_DEV
#define ASCII_GAME_DEV

typedef struct
{
  char charactar;
  int x;
  int y;
  char prompt[16];
} MovableChar;

extern char screen[4][16];

void draw();
void update(MovableChar charactar);
void clear(char fill);

#endif
