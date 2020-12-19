/*
5. Дано двузначное число. 
Найти сумму его цифр. 
*/
#include <stdio.h>

int main()
{
   int a;
   
   printf("Введите двузначное число a = ");
   scanf("%d", &a);
//   printf(" int a = %d \n", a);
   while(a<10 || a>99)
   {
      printf("Ошибка! (a > 10 и a < 100) \n");
      printf("Введите двузначное число a =  ");
      scanf("%d", &a);
   }
   
  printf("Сумма цифр -> %d \n", a/10+a%10);  
  
   return 0;
}