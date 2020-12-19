/*
Найти наибольший общий делитель натуральных чисел A и B.
*/

#include <stdio.h>

int main()
{
  int a, b;
  
  printf("Введите натуральное число: a = ");
  scanf("%d", &a);
  
  printf("Введите натуральное число: b = ");
  scanf("%d", &b);
  
  while (a != b)
  {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  printf("nod = %d \n", a);
  
  return 0;
}

