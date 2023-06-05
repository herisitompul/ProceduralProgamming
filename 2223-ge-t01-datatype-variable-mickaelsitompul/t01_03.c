// NIM - Name
// NIM - Name

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int x, y, z, a, b;
  
  scanf("%d", &x);
  
  scanf("%d", &y);
  scanf("%d", &z);
  a = x >> y;

  b = a == z;
  printf("%d\n %d\n", a, b);


  return 0;
}
