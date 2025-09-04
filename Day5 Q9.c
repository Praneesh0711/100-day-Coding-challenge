#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t;
    float simpleInterest, compoundInterest;

    printf("Enter the value for the principal: ");
    scanf("%f", &p);

    printf("Enter the value for rate: ");
    scanf("%f", &r);

    printf("Enter the value for time: ");
    scanf("%f", &t);

  
    simpleInterest = (p * r * t) / 100;

    compoundInterest = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest = %.2f, Compound Interest = %.2f\n", simpleInterest, compoundInterest);

    return 0;
}
