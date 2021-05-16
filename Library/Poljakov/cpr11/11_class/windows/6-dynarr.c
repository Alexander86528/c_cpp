/*
 ��������� � �������� ����������� ��� 11 ������
 �.�. �������� � �.�. �������.
 ����� 6.
 ��������� � 6. ������������ �������
*/
#include <stdio.h>
#include <stdlib.h>
  
void printArray ( int X[], int N )
{
  int i;
  printf ( "������:\n" );
  for ( i=0; i<N; i++ )
    printf ( "%d ", X[i] );
  printf ( "\n������ ������� %d\n", N );
}
 
main ()
{
  int *A;
  int i, N;

  printf ( "������� ������ �������: " );
  scanf ( "%d", &N );
  A = (int*) calloc ( N, sizeof(int) );
  for ( i=0; i<N; i++ )
    A[i] = i;
  printArray ( A, N );
  
  free(A);
                 
  getchar();
}
