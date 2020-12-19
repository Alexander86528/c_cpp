/*
Шапошникова стр.33
*/
#include <stdio.h>

int main()
{
   int a, b, c;
   int *p, *q;
   a = 1;
   c = 3;
   
   p = &a;
   printf("*p = %d \n", *p);
   
   b = *p;
   printf("b = %d \n", b);
   
   printf("a = %d \n", a);
   *p = 0;
   printf("a = %d \n", a);
   
   q = &c;
   printf("*q = %d \n", *q);
   
   printf("c = %d \n", c);
   p = q;
   *p = 56;
   printf("c = %d \n", c);
   
   printf("p == q -> %d == %d \n", *p, *q);
   printf("p == q -> %p == %p \n", p, q);
   
   return 0;
}