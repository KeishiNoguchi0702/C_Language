#include <stdio.h>

int main(void)
{
  float f = 3;
  double d = f;
  printf("%f\n", f);
  printf("%f\n", d);
  return 0;
}

// 型変換が自動的に行われるおかげで、コンパイルエラーが発生しないことを検証
