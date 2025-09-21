#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number for which the factorial is needed: ");
    scanf("%d", &n);

    double factorial = 1;
    for (int i = 1; i <= n; i++)
      {
        factorial *= i;
    }

    printf("Factorial of %d is %lf\n", n, factorial);
    return 0;
}
