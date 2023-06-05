// 12S22027 - Ferry Ando H.O. Panjaitan
// 12S22033 - Mickael Heri Irawan Sitompul


#include <stdio.h>

void main(int _argc, char **_argv) {
  int bulan;
  scanf("%d", &bulan);
  switch(bulan){
    case 1:
    printf("January\n");
    printf("February\n");
    printf("March\n");
    break;
    case 2:
    printf("February\n");
    printf("March\n");
    printf("April\n");
    break;
    case 3:
    printf("March\n");
    printf("April\n");
    printf("May\n");
    break;
    case 4:
    printf("April\n");
    printf("may\n");
    printf("June\n");
    break;
    case 5:
    printf("may\n");
    printf("June\n");
    printf("July\n");
    break;
    case 6:
    printf("June\n");
    printf("July\n");
    printf("August\n");
    break;
    case 7:
    printf("July\n");
    printf("August\n");
    printf("September\n");
    break;
    case 8:
    printf("August\n");
    printf("September\n");
    printf("October\n");
    case 9:
    printf("September\n");
    printf("October\n");
    printf("November\n");
    break;
    case 10:
    printf("October\n");
    printf("November\n");
    printf("December\n");
    break;
    case 11:
    printf("November\n");
    printf("December\n");
    printf("New year\n");
    printf("January\n");
    break;
    case 12:
    printf("December\n");
    printf("New year\n");
    printf("January\n");
    printf("February\n");
   }
}