/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 43. ���������� �������
 ����: 
   1 
   3
   5 
   2 
   4
 ���������:
   ����� ����������:
   1 2 3 4 5
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, j, c, nMin;
  printf ( "������� �������� �������: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  for ( i=0; i<N-1; i++ ) {
    nMin = i;
    for ( j=i+1; j<N; j++ )
      if ( A[j] < A[nMin] ) 
        nMin = j;
    if ( i != nMin ) {
      c=A[i]; A[i]=A[nMin]; A[nMin]=c;   
      }          
    }
  printf ( "����� ����������: \n" );
  for ( i=0; i<N; i++ ) 
    printf ( "%d ", A[i] );
  getchar();  
}


