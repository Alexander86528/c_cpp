/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 21. ��������� � ����������
 ����: 
   99
 ���������:
   �������� ���: 01100011
*/ 
#include <stdio.h>

void printBin ( int n )
{
  int k;
  k = 128;
  while ( k > 0 ) {
    printf ( "%d", n / k );
    n = n % k;
    k = k / 2; 
    } 
}
main()
{
  int n;
  printf ( "������� �����: " );
  scanf ( "%d", &n );
  printf ( "�������� ���: " );
  printBin ( n );
  getchar();
}

