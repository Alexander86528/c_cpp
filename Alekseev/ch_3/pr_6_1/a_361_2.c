/*
Алексеев стр. 86
рис. 3.37 Задание 2
*/
#include <stdio.h>

int main()
{
  double x, y;
  
  printf("x = ");
  scanf("%lf", &x);
  
  if(x <= -3)
    y = 3;
  else
    if(x > -3 && x < 0)
      y = -x;
    else
      if(x >= 0 && x <= 2)
	y = x;
      else
	y = 2;
  printf("y = %lf \n", y);
  
  return 0;
}
