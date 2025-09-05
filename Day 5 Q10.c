#include<stdio.h>
int main()
{
  int ts, h, m, s;

  printf("ENter the total seconds which is to be converted: ");
  scanf("%d", &ts);

  hours = ts / 3600;
  minutes = (ts % 3600) / 60;
  seconds = ts % 60;

  printf("%d : %d : %d\n", h, m, s);

  return 0;

}
