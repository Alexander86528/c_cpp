#include <stdio.h>

int main()
{
   int d1, d2, m1, m2, y1, y2;
   char c;
   
   printf("Enter  1-st date in format dd.mm.yyyy\n");
   scanf("%2d.%2d.%4d", &d1, &m1, &y1);
   
   printf("Enter  2-nd date in format dd.mm.yyyy\n");
   scanf("%2d.%2d.%4d", &d2, &m2, &y2);
   
   c = y1>y2 || y1==y2 && (m1>m2 || m1==m2 && d1>d2)
       ? '>'
       : y1==y2 && m1==m2 && d1==d2
       ? '='
       : '<';
   printf("%2d.%2d.%4d %c %2d.%2d.%4d\n", d1, m1, y1, c, d2, m2, y2);
   
   return 0;
}