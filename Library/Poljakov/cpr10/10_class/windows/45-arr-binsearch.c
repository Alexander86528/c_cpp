/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 45. �������� ����� � �������
 ����: 
   3
 ���������:
   A[3]=3
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, X, L, R, c;
  for ( i=0; i<N; i++ ) 
    A[i] = i;
  printf ( "�������� ������: \n" );
  for ( i=0; i<N; i++ )  
    printf ( "%d ", A[i] );
  printf ( "\n��� ����? " ); 
  scanf ( "%d", &X );
  L = 0; R = N;
  while ( L < R-1 ) {
    c = (L+R) / 2;
    if ( X < A[c] ) 
         R = c; 
    else L = c;
    }
  if ( A[L] == X ) 
       printf ( "A[%d]=%d", L, X );
  else printf ( "�� �����!" );
  getchar();  
}


