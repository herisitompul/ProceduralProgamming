// 12S22027 - Ferry Ando H.O Panjaitan
// 12S22033 - Mickael Heri Irawan Sitompul

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int angka, boeelan, angkanegative;
  char ascii;
  float fraction;

  scanf("%d\n", &angka);
  scanf("%c\n", &ascii);
  scanf("%d\n", &boeelan);
  scanf("%d\n", &angkanegative);
  scanf("%f", &fraction);

  printf("%d\n", angka);
  printf("%c\n", ascii);
  printf("%d\n", boeelan);
  printf("%d\n", angkanegative);
  printf("%.2f\n", fraction);

  return 0;
}