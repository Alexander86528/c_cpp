/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 24. Логическая функция
 Вход: 
   15
 Результат:
   Простые числа: 2 3 5 7 11 13
*/ 
#include <stdio.h>
#include <stdbool.h>

bool isPrime ( int n )
{
  int count, k;
  count = 0;
  k = 2;
  while ( k*k <= n  &&  count == 0) {
    if ( n % k == 0 ) 
       count ++;
    k ++;
    }
  return (count == 0);
}
main()
{
  int n, M;
  printf ( "Введите максимальное число: " );
  scanf ( "%d", &M );
  printf ( "Простые числа: " );
  for ( n=2; n<=M; n++ ) 
    if ( isPrime(n) )
      printf ( "%d ", n );  
  getchar();
}


