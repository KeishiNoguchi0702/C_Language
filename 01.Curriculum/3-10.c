#include <stdio.h>

typedef char String[1024];

int main(void)
{
  int age = 34;
  String name = "野口敬司";
  printf("私は%dの%sです\n", age, name);
  return 0;
}
