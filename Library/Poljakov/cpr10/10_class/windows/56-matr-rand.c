/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 56. ���������� ������� ���������� �������
 ����: 
   ��� 
 ���������:
   <��������� ������� 3 �� 4>
*/ 
#include <stdio.h>
#include <stdlib.h>

int irand ( int a, int b )
{
   return a + rand() % (b - a + 1);  
}
main()
{
  const int N = 3, M = 4;
  int A[N][M];
  int i, j;
  for ( i=0; i<N; i++ ) {
    for ( j=0; j<M; j++ ) {
      A[i][j] = irand ( 20, 80 );
      printf ( "%3d", A[i][j] );
      }
    printf ( "\n" );
    }
  getchar();
}


