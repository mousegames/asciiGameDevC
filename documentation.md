# Documetation

## MovableChar
- struct
- used for charactars
```
typedef struct
{
  char charactar;
  int x;
  int y;
  char prompt[16];
} MovableChar;
```
### example
```
MovableChar player = {'@', 0, 0, ""};
```1AMamouse
## draw
- draws 4x16 screen
- no args
```
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
```
## update
- updates screen
- 1 MovableChar arg
```
void update(MovableChar charactar)
{
  screen[charactar.y][charactar.x] = charactar.charactar;
}
```
## clear
- clears screen
- no args
```
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 16; j++)
    {
      screen[i][j] = fill;
    }
  }
}
```