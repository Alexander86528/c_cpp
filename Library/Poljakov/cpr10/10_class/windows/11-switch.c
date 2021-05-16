/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 11. Оператор выбора
 Вход: 
   3
 Результат:
   март
*/ 
#include <stdio.h>

main()
{
  int m;
  printf("Введите номер месяца: ");
  scanf( "%d", &m );
  switch ( m ) { 
   case 1:  printf("январь"); break;
   case 2:  printf("февраль"); break;    
   case 3:  printf("март"); break;
   case 4:  printf("апрель"); break;
   case 5:  printf("май"); break;
   case 6:  printf("июнь");
            printf(", июнь!");         
            break;
   case 7:  printf("июль"); break;
   case 8:  printf("август"); break;
   case 9:  printf("сентябрь"); break;
   case 10: printf("октябрь"); break;
   case 11: printf("ноябрь"); break;
   case 12: printf("декабрь"); break;
   default: printf("ошибка"); break;
   }         
  getchar();
}
