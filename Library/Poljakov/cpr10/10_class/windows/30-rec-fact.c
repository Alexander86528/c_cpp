/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 30. ��������. ���������
 ����: 
   2
 ���������:
   -> N=2
   -> N=1
   <- N=1
   <- N=2
   2
*/ 
#include <stdio.h>

int Fact ( int N )
{
  int F;   
  printf ( "-> N=%d\n", N );
  if ( N <= 1 ) 
       F = 1;
  else F = N * Fact(N - 1);
  printf ( "<- N=%d\n", N );
  return F;
}
main()
{
  int N;
  printf ( "������� ����������� �����: " );
  scanf ( "%d", &N );
  printf ( "%d", Fact(N) );
  getchar();
}


