/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 18. Динамическое программирование.
                 Числа Фибоначчи
*/
#include <stdio.h>
#include <time.h>

const int N = 45;

long int Fib ( int N )
{
  if ( N < 3 ) 
       return 1;
  else return Fib(N-1) + Fib(N-2);
}

main ()
{
  long int F[N+1];
  long int i, FN;
  long int f1, f2;
  clock_t t0, t1;
  
  printf ( "Вычисляется F(%d) ...\n", N );
  t0 = clock();
  FN = Fib(N);
  t1 = clock();
  printf ( "Рекурсивная функция: \n" );
  printf ( "  F(%d) = %ld, время %0.2f c\n", N, FN, (float)(t1-t0)/CLOCKS_PER_SEC );
 
  t0 = clock();
  F[1] = 1; F[2] = 1;
  for ( i=3; i<=N; i++ )
   F[i] = F[i-1] + F[i-2];
  t1 = clock();
  printf ( "Итерация с хранением данных в массиве\n" );
  printf ( "  F(%d) = %ld, время %0.2f c\n", N, FN, (float)(t1-t0)/CLOCKS_PER_SEC );

  t0 = clock();
  f2 = 1; f1 = 1;
  for ( i=3; i<=N; i++ ) {
    FN = f1 + f2;
    f2 = f1;
    f1 = FN;
    }
  t1 = clock();
  printf ( "Итерация без массива\n" );
  printf ( "  F(%d) = %ld, время %0.2f c\n", N, FN, (float)(t1-t0)/CLOCKS_PER_SEC );

  getchar();
}
