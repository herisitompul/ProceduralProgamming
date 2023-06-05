// 12S22027 - Ferry Ando H.O. Panjaitan
// 12S22033 - Mickael Heri Irawan Sitompul

#include <stdio.h>

int main(int _argc, char **_argv)
{
 float bilangan1, bilangan2, bilangan3, bilangan4, bilangan5;
 float results, Median;
 
 scanf("%f", &bilangan1);
 scanf("%f", &bilangan2);
 scanf("%f", &bilangan3);
 scanf("%f", &bilangan4);
 scanf("%f", &bilangan5);
 
 results = bilangan1 + bilangan2 + bilangan3 + bilangan4 + bilangan5;
 Median = results / 5;

 printf("%.3f\n%.3f\n", results, Median);


  return 0;
}
