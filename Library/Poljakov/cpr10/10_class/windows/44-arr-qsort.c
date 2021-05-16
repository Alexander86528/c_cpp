/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 44. ������� ���������� (QuickSort)
 ����: 
   ���
 ���������:
   ����� ����������: 
   6 34 44 55 67 78 82
*/ 
#include <stdio.h>

const int N = 7;
int A[N] = { 78, 6, 82, 67, 55, 44, 34 };
void qSort( int nStart, int nEnd )
{
  int L, R, c, X;
  if ( nStart >= nEnd ) return;
  L = nStart; R = nEnd;
  X = A[(L+R) / 2];       
  while ( L <= R ) {         // ���������� 
    while ( A[L] < X ) L++;
    while ( A[R] > X ) R--;
    if ( L <= R ) {
      c = A[L]; A[L] = A[R]; A[R] = c;
      L++; R--;
      }
    }
  qSort(nStart, R);   // ����������� ������ 
  qSort(L, nEnd);
}
main()
{
  int i;
  printf ( "�� ����������: \n" );
  for ( i=0; i<N; i++ ) 
    printf ( "%d ", A[i] );
  qSort ( 0, N-1 );
  printf ( "\n����� ����������: \n" );
  for ( i=0; i<N; i++ ) 
    printf ( "%d ", A[i] );
  getchar();  
}


