#include<stdio.h>
int main ()
{
  int num1, num2;
int sum, diff, product, quotient;

printf("ENter two numbers: ");
scanf("%d %d", &num1, &num2);

sum = num1 + num2;
diff = num1 - num2;
product = num1 * num2;
quotient = num1 / num2;

printf("Sum=%d, diff=%d, product=%d, quotient=%d\n", sum, diff, product, quotient);

return 0;
}
