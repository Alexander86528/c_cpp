/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 48. ����� ��������� � ������
 ����: 
   ��� 
 ���������:
   ����� ������� 4
*/ 
#include <stdio.h>
#include <string.h>

main()
{
  char s[] = "����� ��� ����.";
  char *p;
  p = strchr ( s, '�' );
  if ( p != NULL ) 
       printf ( "����� ������� ������� 'c': %d\n", p-s );
  else printf ( "������ �� ������.\n" );
  p = strrchr ( s, '�' );
  if ( p != NULL ) 
       printf ( "����� ���������� ������� 'c': %d\n", p-s );
  else printf ( "������ �� ������.\n" );
  p = strstr ( s, "����" );
  if ( p != NULL ) 
       printf ( "����� '����' ���������� � ������� ����� %d\n", p-s );
  else printf ( "����� �� �������.\n" );
  getchar();  
}


