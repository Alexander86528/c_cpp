/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 57. ����� ��������� �������
 ����: 
   ��� 
 ���������:
   ����� ��������� 54
*/ 
#include <stdio.h>

main()
{
  const int N = 3, M = 4;
  int A[N][M];
  int i, j, sum;
  for ( i=0; i<N; i++ ) {
    for ( j=0; j<M; j++ ) {
      A[i][j] = i + j + 2;
      printf ( "%3d", A[i][j] );
      }
    printf ( "\n" );
    }
  sum = 0;  
  for ( i=0; i<N; i++ ) 
    for ( j=0; j<M; j++ ) 
      sum += A[i][j];
  printf ( "����� ��������� %d", sum );
  getchar();
}


