#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(void)
{
  String answerNo;
  printf("カッコよくて最高な、C言語男子の名前は？\n");
  printf("1: Keishi 2: Keiji 3:Keipi 4:Kenji\n");
  scanf("%s", answerNo);
  int n = atoi(answerNo);

  if (n == 1 || n == 3) {
    printf("大正解！見る目あるね！\n");
  } else {
    printf("残念。\n");
  }
  return 0;
}
