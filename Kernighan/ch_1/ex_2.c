/* 
Вывод таблицы температур по Фаренгейту и Цельсию 
для fahr = 0, 20, . .., 300; 
версия с вещественной арифметикой.
*/
#include <stdio.h>

int main()
{
   float fahr, celsius;
   int lower, upper, step;
   
   lower = 0;
   upper = 300;
   step = 20;
/*
°С = (5/9) (°F- 32)
*/
   fahr = lower;
   while(fahr <= upper)
   {
      celsius = (5.0/9.0)*(fahr - 32.0);
      printf("fahr = %3.0f \t celsius = %6.1f\n", fahr, celsius); 
      fahr = fahr + step;
   }
   
   
   return 0;
}