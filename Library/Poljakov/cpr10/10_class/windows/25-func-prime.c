/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 25. ���������� �������
 ����: 
   5
   7
   12
 ���������:
   5 - ������� �����
   7 - ������� �����
*/ 
#include <stdio.h>
#include <stdbool.h>

bool isPrime ( int n )
{
  int count, k;
  count = 0;
  k = 2;
  while ( k*k <= n  &&  count == 0) {
    if ( n % k == 0 ) 
       count ++;
    k ++;
    }
  return (count == 0);
}
main()
{
  int n;
  printf ( "������� �����: " );
  scanf ( "%d", &n );
  while ( isPrime ( n ) ) {
    printf ( "%d - ������� �����\n", n );  
    printf ( "������� �����: " );
    scanf ( "%d", &n );
    }  
  getchar();
}


