#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  printf("あなたの運勢を占います\n");
  srand((unsigned)time(0UL));
  int fortune = rand() % 5 + 1;

  switch (fortune)
  {
  case 1:                                 /* FALL THROUGH */
  case 2:
    printf("いいね！\n");
    break;
  case 3:
    printf("ふつうですね\n");
    break;
  case 4:                                 /* FALL THROUGH */
  case 5:
    printf("うーん…\n");
    break;
  }
  return 0;
}
