#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number till you want the product of the even numbers: ");
  scanf("%d", &n);

  int product = 1;
  for (int i =2; i<= n; i += 2)
    { product *= i;}

  printf("%d\n", product);

  return 0;
}
