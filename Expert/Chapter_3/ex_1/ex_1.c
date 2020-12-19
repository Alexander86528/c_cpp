/*
Ветвление при помощи конъюнкции, дизъюнкции, и логической условной операции.
Презентации модуль 3 стр.8
Лекции С_2.mp4 02:18:55
*/

#include <stdio.h>

int main()
{
   int a, b, c;
   
 // конъюнкция, дизъюнкция. В качестве if без(else).  
   printf("Enter time in format hh:mm:ss\n");
   scanf("%2d:%2d:%2d", &a, &b, &c) == 3
         && a>=0 && a<24
         && b>=0 && b<60
         && c>=0 && c<60
         && printf("%02d:%02d:%02d\n", a, b, c)
         || printf("Invalid format\n");
         
 // Условная операция в качестве if else.  
   printf("Введите a = ");
   scanf("%d", &a);
   printf("Введите b = ");
   scanf("%d", &b);
   printf("%d %c %d \n", a, a>b ? '>' : a<b ? '<' : '=', b);
   
   return 0;
}
