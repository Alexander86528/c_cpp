/*
Вычислить сумму натуральных чётных чисел не превышающих N.
*/
#include <stdio.h>

int main()
{
  unsigned s, n, i;
  
  printf("n = ");
  scanf("%u", &n);
  s = 0;
  i = 2;
  while (i <= n)
  {
    s = s + i;
    i = i +2;
  }
  printf("s = %u \n", s);
  
  return 0;
}