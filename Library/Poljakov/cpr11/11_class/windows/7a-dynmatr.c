/*
 ��������� � �������� ����������� ��� 11 ������
 �.�. �������� � �.�. �������.
 ����� 6.
 ��������� � 7. ������������ �������
                ��������� ������ ������ �� ������ ������
*/
#include <stdio.h>
#include <stdlib.h>
  
typedef int *pInt;  

void printMatrix ( pInt X[], int N, int M )
{
  int i, j;
  printf ( "������:\n" );
  for ( i=0; i<N; i++ ) {
    for ( j=0; j<M; j++ ) 
      printf ( "%3d", X[i][j] );
    printf("\n");  
    }
  printf ( "\n������ ������� %d\n", N*M );
}
 
main ()
{
  pInt *A;
  int i, j, N, M;

  printf ( "������� ������� ������� (����� ����� � ��������): " );
  scanf ( "%d%d", &N, &M );

  A = (pInt*) calloc ( N, sizeof(pInt) );
  for ( i=0; i<N; i++ )
    A[i] = (int*) calloc ( M, sizeof(int) );
    
  for ( i=0; i<N; i++ )
    for ( j=0; j<M; j++ )
      A[i][j] = i + j;

  printMatrix ( A, N, M );
                 
  for ( i=0; i<N; i++ )
    free(A[i]);
  free(A);  

  getchar();
}
