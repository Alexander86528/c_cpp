/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 23. �������
 ����: 
   12345
 ���������:
   ����� ���� 15
*/ 
#include <stdio.h>

int sumDigits ( int n)
{ 
  int sum = 0;
  while ( n != 0 ) {
    sum += n % 10;
    n = n / 10;
    } 
  return sum;
}
main()
{
  int N;
  printf ( "������� ����� �����: " );
  scanf ( "%d", &N );
  printf ( "����� ����: %d", sumDigits(N) );
  getchar();
}


