/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 41. ����� ��������� �� �������
 ����: 
   5
   1 
   2
   3 
   4 
   5
 ���������:
   ׸���� ��������:
   2 4
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N], B[N];
  int i, count;
  printf ( "������� �������� �������: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  count = 0;
  for ( i=0; i<N; i++ ) 
    if ( A[i] % 2 == 0 ) {
      B[count] = A[i];
      count ++;
      }
  printf ( "׸���� ��������: \n" );
  for ( i=0; i<count; i++ ) 
    printf ( "%d ", B[i] );
  getchar();  
}


