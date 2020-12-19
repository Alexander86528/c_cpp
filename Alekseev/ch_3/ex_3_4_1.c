/*
  Вывести на экран таблицу значений функции exp(sin(x))*cos(x) на отрезке [0; pi] с шагом 0.1.
  */
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
  double x, y;
  
  x = 0;
  while(x <= PI)
  {
    y = exp(sin(x)) * cos(x);
    printf("x = %lf \t y = %lf \n", x, y);
    x = x + 0.1;
  }
  
  return 0;
}
