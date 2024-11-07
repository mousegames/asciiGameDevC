# Ascii Game Dev
## download
### git
```
git clone https://mousegames/asciiGameDevC
```
### github cli
```
gh repo clone mousegames/asciiGameDevC

```

## getting started
### dependencies
- c standard library
- gcc or another c compiler
### moving @
```
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

```
### compile
- windows
```
gcc path\to\game.c path\to\aciiGameDev.c -o path\to\game.exe 
```
- linux
```
gcc path/to/game.c path/to/asciiiGameDev.c -o path/to/game.out
```
- mac
```
clang path/to/game.c path/to/asciiiGameDev.c -o path/to/game.out
```
