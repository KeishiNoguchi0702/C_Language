#include <stdio.h>

int main(void)
{
  int x;
  printf("%d\n", x);
  return 0;
}

// 変数を宣言した直後にはランダムな値が入っている。
// 上記コードでは何も指定していないため、実行のたびに予測しない数値が表示される。
