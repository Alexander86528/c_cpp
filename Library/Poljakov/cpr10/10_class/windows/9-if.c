/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 9. ��������� �������� ���������
 ����: 
   5 7
 ���������:
   ����� ������
*/ 
#include <stdio.h>

main()
{
  int a, b;
  printf("������� ������� ������ � ������: ");
  scanf("%d%d", &a, &b);  
  if ( a > b ) 
    printf("������ ������\n");
  else
    if ( a == b ) 
      printf("������ ��������");
    else 
      printf("����� ������");
  getchar();
}