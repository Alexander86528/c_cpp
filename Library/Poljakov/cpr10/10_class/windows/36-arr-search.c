/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 36. �������� ����� � �������
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
  int i, X;
  printf ( "������� �������� �������: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  printf ( "��� ����? " ); 
  scanf ( "%d", &X );
  i = 0;
  while (i < N && A[i] != X) 
    i ++;
  if ( i <= N ) 
       printf ( "A[%d]=%d", i, X );
  else printf ( "�� �����!" );
  getchar();  
}


