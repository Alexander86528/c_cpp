/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 11. �������� ������
 ����: 
   3
 ���������:
   ����
*/ 
#include <stdio.h>

main()
{
  int m;
  printf("������� ����� ������: ");
  scanf( "%d", &m );
  switch ( m ) { 
   case 1:  printf("������"); break;
   case 2:  printf("�������"); break;    
   case 3:  printf("����"); break;
   case 4:  printf("������"); break;
   case 5:  printf("���"); break;
   case 6:  printf("����");
            printf(", ����!");         
            break;
   case 7:  printf("����"); break;
   case 8:  printf("������"); break;
   case 9:  printf("��������"); break;
   case 10: printf("�������"); break;
   case 11: printf("������"); break;
   case 12: printf("�������"); break;
   default: printf("������"); break;
   }         
  getchar();
}
