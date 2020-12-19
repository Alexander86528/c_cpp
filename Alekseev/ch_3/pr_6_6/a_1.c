/*
Вводится последовательность ненулевых чисел 0 - конец последовательности.          
Определить сумму положительных элементов.
*/
#include <stdio.h>

int main()
{
  int a;
  unsigned s;
  
  s = 0;
  do 
  {
    printf("a = ");
    scanf("%d", &a);
    if (a > 0)
      s = s + a;
  }while (a != 0) ;
  printf("s = %u \n", s);
  
  return 0;
}