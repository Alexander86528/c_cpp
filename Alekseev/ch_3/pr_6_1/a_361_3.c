/*
Алексеев стр.86
Рис. 3.38 Задание 3
*/
#include <stdio.h>

int main()
{
  double x, y;
  
  printf("x = ");
  scanf("%lf", &x);
  
  if(x < -3 || x > 3)
    y = 3;
  else
    if(x >= -3 && x <= 0)
      y = x + 3;
    else
      y = 3 - x;
  printf("y = %lf \n", y);
  
  return 0;
}
