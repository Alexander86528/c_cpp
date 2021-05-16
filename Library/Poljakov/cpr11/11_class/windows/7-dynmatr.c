/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 7. Динамические матрицы
                Выделение единого блока памяти
*/
#include <stdio.h>
#include <stdlib.h>
  
typedef int *pInt;  

void printMatrix ( pInt X[], int N, int M )
{
  int i, j;
  printf ( "Массив:\n" );
  for ( i=0; i<N; i++ ) {
    for ( j=0; j<M; j++ ) 
      printf ( "%3d", X[i][j] );
    printf("\n");  
    }
  printf ( "\nРазмер массива %d\n", N*M );
}
 
main ()
{
  pInt *A;
  int i, j, N, M;

  printf ( "Введите размеры матрицы (число строк и столбцов): " );
  scanf ( "%d%d", &N, &M );

  A = (pInt*) calloc ( N, sizeof(pInt) );
  A[0] = (int*) calloc ( M*N, sizeof(int) );
  for ( i=1; i<N; i++ )
    A[i] = A[i-1] + M;
    
  for ( i=0; i<N; i++ )
    for ( j=0; j<M; j++ )
      A[i][j] = i + j;

  printMatrix ( A, N, M );
  
  free(A[0]);
  free(A);
                 
  getchar();
}
