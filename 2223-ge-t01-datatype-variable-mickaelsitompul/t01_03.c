// 12S22027 - Ferry Ando H.O. Panjaitan
// 12S22033 - Mickael Heri Irawan Sitompul

#include <stdio.h>

int main(int _argc, char **_argv)

{
  int bilangan1, bilangan2, bilangan3, a, b;
  
  scanf("%d", &bilangan1);
  scanf("%d", &bilangan2);
  scanf("%d", &bilangan3);
  a = bilangan1 << bilangan2;
  b = a == bilangan3;
  printf("%d\n%d\n", a, b);
  
  return 0;
}
