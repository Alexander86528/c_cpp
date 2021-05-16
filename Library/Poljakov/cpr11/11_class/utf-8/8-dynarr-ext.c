/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 8. Расширение динамических массивов
*/
#include <stdio.h>
#include <stdlib.h>

void printArray ( int X[], int N )
{
  int i;
  for ( i=0; i<N; i++ )
    printf ( "%d ", X[i] );
  printf ( "\nРазмер массива %d\n", N );
}

main ()
{
  int *A;
  int i, j, x, N, length, c;

  length = 2;
  A = (int*) calloc ( 2, sizeof(int));
  printf ( "Вводите числа (0 - закончить ввод): \n" );

  N = 0;
  scanf ( "%d", &x );
  while ( x != 0 ) {
    N ++;
    if ( N > length ) {
      length += 2;   
      A = (int*) realloc(A, length*sizeof(int));
      printf ( "Размер массива увеличен до %d\n", length );
      }
    A[N-1] = x;    
    scanf ( "%d", &x );
    }

  printf ( "Массив до сортировки:\n" );
  printArray ( A, N );
  
  for ( i=0; i<N-1; i++ )
    for ( j=N-2; j>=i; j-- )
      if ( A[j] > A[j+1] ){
        c = A[j]; A[j] = A[j+1]; 
        A[j+1] = c;
        }

  printf ( "Массив после сортировки:\n" );
  printArray ( A, N );

  getchar();
}
