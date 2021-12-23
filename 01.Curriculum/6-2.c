#include <stdio.h>

typedef char String[1024];

int main(void)
{
  typedef struct {
    String name;
    int hp;
    int attack;
  } Monster;

  Monster seiryu = { "青龍", 100, 30 };
  Monster suzaku = { "朱雀", 120, 20 };
  Monster byakko = { "白虎", 110, 30 };
  Monster genbu =  { "玄武",  90, 40 };

  const String TEMPLATE = "%s : HP=%3d 攻撃力=%2d\n";
  printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
  printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
  printf(TEMPLATE, byakko.name, byakko.hp, byakko.attack);
  printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);

  return 0;
}
