/*
Алексеев стр.86
рис.3.39 Задание 4.
*/
#include <stdio.h>
#include <math.h>

int main()
{
  double x, y;
  
  printf("x = ");
  scanf("%lf", &x);
  
  if(x >= -sqrt(2.0) && x <= sqrt(2.0))
    y = 4.0 - x*x;
  else
    y = 2.0;
  
  printf("y = %lf \n", y);
  
  return 0;
}
