#include "asciiGameDev.h"

char screen[4][16];

void draw()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 16; j++)
    {
      printf("%c", (char)screen[i][j]);
    }
    printf("\n");
  }
}
void update(MovableChar charactar)
{
  screen[charactar.y][charactar.x] = charactar.charactar;
}
void clear(char fill)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 16; j++)
    {
      screen[i][j] = fill;
    }
  }
}
