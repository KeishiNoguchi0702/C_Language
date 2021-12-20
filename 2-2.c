#include <stdio.h>

int main(void)
{
  char c = 100;
  char d = c + 100; // make overflow
  printf("%d¥n", d);
  return 0;
}
