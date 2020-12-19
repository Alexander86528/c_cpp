#include <stdio.h>

int main()
{
   int d1, d2, m1, m2, y1, y2;
   int r1, r2;
   char c;
   
   printf("Enter  1-st date in format dd.mm.yyyy\n");
   scanf("%2d.%2d.%4d", &d1, &m1, &y1);
   
   printf("Enter  2-nd date in format dd.mm.yyyy\n");
   scanf("%2d.%2d.%4d", &d2, &m2, &y2);
   
   r1 = y1*10000 + m1*100 + d1;
   r2 = y2*10000 + m2*100 + d2;
   c = r1>r2 ? '>' : r1<r2 ? '<' : '=';
   printf("%2d.%2d.%4d %c %2d.%2d.%4d\n", d1, m1, y1, c, d2, m2, y2);
   
   return 0;
}