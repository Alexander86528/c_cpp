
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
°F = °C/(5/9) + 32 => °F = °C * 9 / 5 + 32;
*/
   celsius = lower;
   while(celsius <= upper)
   {
      fahr = (celsius * 9.0) / 5.0 + 32.0;
      printf("celsius = %3.0f \t fahr = %6.1f \n", celsius, fahr); 
      celsius = celsius + step;
   }
   
   return 0;
}