/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 38. ����� ��������� � �������
 ����: 
   1 
   2
   8 
   4 
   5
   3
 ���������:
   ��������: A[2]=8
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, nMax;
  printf ( "������� �������� �������: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  nMax = 0;
  for ( i=1; i<N; i++ )
    if ( A[i] > A[nMax] ) nMax = i;
  printf ( "A[%d]=%d", nMax, A[nMax] );
  getchar();  
}


