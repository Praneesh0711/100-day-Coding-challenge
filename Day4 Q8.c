#include<stdio.h>
int main()
{
  int x, sum;

  printf("Enter the number: ");
  scanf("%d", &x);

  sum = x * (x + 1) / 2;

  printf("Sum=%d\n", sum);

  return 0;

}
