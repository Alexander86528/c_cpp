/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 17. ���� � ����������
 ����: 
   5
 ���������:
   2 4 8 16 32
*/ 
#include <stdio.h>

main()
{
  int n, k, M;     
  printf ( "������� ����� ����� �����: " );
  scanf ( "%d", &M );
  n = 2;
  for ( k=1; k<=M; k++ ) {
    printf ( "%d ", n );
    n = n * 2;
    }
  getchar();
}
