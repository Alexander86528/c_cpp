/*
Вычислить факториал натурального числа.
*/
#include <stdio.h>

int main()
{
  int n, i;
  unsigned long f;
  
  printf("n = ");
  scanf("%d", &n);
  f = 1;
  i = 2;
  while (i <= n)
  {
    f = f * i;
    i = i + 1;
  }
  printf("n! = %lu \n", f);
  
  return 0;
}