#include <stdio.h>

int main(void)
{
  const int TAX = 108;
  int fax = 50000;
  printf("50,000円から40,000円に値下げします\n");
  TAX = 40000;                                            //ここでコンパイルエラーが発生するので、間違いにきづける
  printf("FAXの新価格（税込み）：%d円\n", fax * TAX / 100);
  return 0;
}

// constを使用して変数が書き換えられないさまを確認する
