#include<stdio.h>
int mian()
{
  int a, b, buffer;

  scanf("%d %d", &a, &b);
  
  buffer = a;

  a = b;
  b = buffer;
  
  printf("After swap: %d %D\n", a, b);

  return 0;
}
