/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 6. Динамические массивы
*/
#include <stdio.h>
#include <stdlib.h>
  
void printArray ( int X[], int N )
{
  int i;
  printf ( "Массив:\n" );
  for ( i=0; i<N; i++ )
    printf ( "%d ", X[i] );
  printf ( "\nРазмер массива %d\n", N );
}
 
main ()
{
  int *A;
  int i, N;

  printf ( "Введите размер массива: " );
  scanf ( "%d", &N );
  A = (int*) calloc ( N, sizeof(int) );
  for ( i=0; i<N; i++ )
    A[i] = i;
  printArray ( A, N );
  
  free(A);
                 
  getchar();
}
