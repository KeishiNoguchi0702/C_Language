#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool doorClosed = true;
  while (doorClosed == true) {
    printf("ノックする\n1分待つ\n");
  }
  return 0;
}
