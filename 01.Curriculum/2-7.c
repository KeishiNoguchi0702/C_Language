#include <stdio.h>

typedef char String[1024];

int main(void)
{
  String monsterName = "ドラゴン";
  printf("敵は%s\n", monsterName);
  return 0;
}

// C言語で最初の難関である文字列を、無理やり浸かるようにするプログラム
