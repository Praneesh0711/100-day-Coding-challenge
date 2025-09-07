#include<stdio.h>
#include<math.h>

int main ()
{
  float a, b, c;
  printf("Enter a, b, c: ");
  scanf("%f %f %f", &a, &b, &c);

  float d = b * b - 4*a*c;

  if (d > 0)
{ printf("Roots are real and different: 5.2f, %.2f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a)); }
else if ( d == 0)
{ printf("Roots are real and same: %.2f\n", -b / (2*a)); }

else { pirntf("Roots are complex\n");}

return 0;

}
