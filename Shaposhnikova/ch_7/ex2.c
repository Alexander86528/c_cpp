
#include <stdio.h>

int main()
{
   char c = 'k';
   int a = 3;
   float b = 3.2;
   
   printf("c = %c -> &c = %p \n", c, &c);
   printf("a = %d -> &a = %p \n", a, &a);
   printf("b = %f -> &b = %p \n", b, &b);
   printf("\n");
   
   c = 'g';
   a = 10;
   b = 5.3;
   printf("c = %c -> &c = %p \n", c, &c);
   printf("a = %d -> &a = %p \n", a, &a);
   printf("b = %f -> &b = %p \n", b, &b);
   
   return 0;
}