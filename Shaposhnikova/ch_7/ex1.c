/*
Шапошникова стр. 32
Адрес переменной.
*/
#include <stdio.h>

int main()
{
   int i = 0;
   int j = 8;
   
   printf("i = %d &i = %p \n", i, &i);
   printf("j = %d \n", *&j);
   
   return 0;
}