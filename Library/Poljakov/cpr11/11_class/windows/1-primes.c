/*
 ��������� � �������� ����������� ��� 11 ������
 �.�. �������� � �.�. �������.
 ����� 6.
 ��������� � 1. ������ ����������
 ����: 
   ���
 ���������: 
   ������� ����� �� 2 �� 100
*/
#include <stdio.h>
#include <stdbool.h>

main ()
{
  const int N = 100;
  int i, k;
  bool A[N+1];
  for ( i=2; i<=N; i++ )
    A[i] = true;
  k = 2;
  while ( k*k <= N ) {
    if ( A[k] ) {
      i = k*k;
      while ( i <= N ) {
        A[i] = false;
        i += k;  
        }
      }  
    k ++;
    }
  printf ( "������� ����� �� 2 �� %d\n", N );
  for ( i=2; i<=N; i++ )
    if ( A[i] )
      printf ( "%d ", i );  
  getchar();
}
