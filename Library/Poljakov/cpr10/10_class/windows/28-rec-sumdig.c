/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 28. ��������. ����� ����
 ����: 
   12345
 ���������:
  ����� ���� 15
*/ 
#include <stdio.h>

int sumDig ( int n ) 
{
  int sum;
  sum = n % 10;
  if ( n >= 10 ) 
   sum += sumDig ( n / 10 );
  return sum;
}
main()
{
  int N;
  printf ( "������� ����������� �����: " );
  scanf ( "%d", &N );
  printf ( "����� ���� %d", sumDig ( N ) );
  getchar();
}


