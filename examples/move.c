#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../asciiGameDev.h"

int main()
{
  MovableChar player = {'@', 0, 0, ""};

  while (1)
  {
    clear('-');
    update(player);
    draw();

    scanf("%s", player.prompt);
    if (player.prompt[0] == 'w')
    {
      player.y --;
    } else if (player.prompt[0] == 's')
    {
      player.y ++;
    } else if (player.prompt[0] == 'd')
    {
      player.x ++;
    } else if (player.prompt[0] == 'a')
    {
      player.x --;
    }
  }
  
  return 0;
}
