/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 23. Функция
 Вход: 
   12345
 Результат:
   Сумма цифр 15
*/ 
#include <stdio.h>

int sumDigits ( int n)
{ 
  int sum = 0;
  while ( n != 0 ) {
    sum += n % 10;
    n = n / 10;
    } 
  return sum;
}
main()
{
  int N;
  printf ( "Введите целое число: " );
  scanf ( "%d", &N );
  printf ( "Сумма цифр: %d", sumDigits(N) );
  getchar();
}


