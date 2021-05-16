/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 28. Рекурсия. Сумма цифр
 Вход: 
   12345
 Результат:
  Сумма цифр 15
*/ 
#include <stdio.h>

int sumDig ( int n ) 
{
  int sum;
  sum = n % 10;
  if ( n >= 10 ) 
   sum += sumDig ( n / 10 );
  return sum;
}
main()
{
  int N;
  printf ( "Введите натуральное число: " );
  scanf ( "%d", &N );
  printf ( "Сумма цифр %d", sumDig ( N ) );
  getchar();
}


