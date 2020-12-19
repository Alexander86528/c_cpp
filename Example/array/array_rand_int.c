#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
   int array_int[N];
   int a, b, ch;
   int i;
   
   srand(time(NULL));
   
   a = -10;
   b = 10;
   for(i = 0; i < 20; i++)
       array_int[i] = rand()%(b - (a) + 1) +(a);
       
   for(i = 0; i < 20; i++)
      printf("array_int[%d] = %d \12", i, array_int[i]);           
   
   return 0;
}