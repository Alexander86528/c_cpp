/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 30. Рекурсия. Факториал
 Вход: 
   2
 Результат:
   -> N=2
   -> N=1
   <- N=1
   <- N=2
   2
*/ 
#include <stdio.h>

int Fact ( int N )
{
  int F;   
  printf ( "-> N=%d\n", N );
  if ( N <= 1 ) 
       F = 1;
  else F = N * Fact(N - 1);
  printf ( "<- N=%d\n", N );
  return F;
}
main()
{
  int N;
  printf ( "Введите натуральное число: " );
  scanf ( "%d", &N );
  printf ( "%d", Fact(N) );
  getchar();
}


