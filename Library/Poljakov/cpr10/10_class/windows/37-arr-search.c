/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 37. �������� ����� � ������� c break
 ����: 
   1 
   2
   3 
   4 
   5
   3
 ���������:
   A[2]=3
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, X, nX;
  printf ( "������� �������� �������: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  printf ( "��� ����? " ); 
  scanf ( "%d", &X );
  nX = -1;
  for ( i=0; i<N; i++ )
    if ( A[i] == X ) {
      nX = i;
      break;
      }
  if ( nX >= 0 ) 
       printf ( "A[%d]=%d", nX, X );
  else printf ( "�� �����!" );
  getchar();  
}


