/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 15. ���� while: ���������� ���� �����
 ����: 
   12345
 ���������:
   ���� � �����: 5
*/ 
#include <stdio.h>

main()
{
  int n, count;     
  printf("������ ����� �����: ");
  scanf("%d", &n);
  count = 0;
  while ( n > 0 ) {
    n = n / 10;
    count ++;
    }
  printf("���� � �����: %d\n", count );
  getchar();
}
