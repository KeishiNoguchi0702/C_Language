#include <stdio.h>

int main(void)
{
  int tax = 108;
  int fax = 50000;
  printf("50,000円から40,000円に値下げします\n");
  tax = 40000;
  printf("FAXの新価格（税込み）：%d円\n", fax * tax / 100);
  return 0
}

// 固定したい変数が書き換えられてしまうと何が起こるか理解するための節
