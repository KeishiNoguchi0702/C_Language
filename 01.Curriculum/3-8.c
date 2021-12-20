#include <stdio.h>

int main(void)
{
  double d = 8.5 / 2; // intを自動的にdoubleに型変換してくれる
  long l= 5 + 2L; // intを自動的にlongに型変換してくれる
  printf("%f\n", d);
  printf("%ld\n", l);
  return 0;
}
