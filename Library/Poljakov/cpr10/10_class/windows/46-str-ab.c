/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 46. ������������ ��������� �����
 ����: 
   ����
 ���������:
   ����
*/ 

#include <stdio.h>
#include <string.h>

main()
{
  char s[80];  
  int i;
  printf ( "������� ������" );
  gets ( s );
  for ( i=0; i<strlen(s); i++ ) 
    if ( s[i] == '�' )
      s[i] = '�';
  puts ( s );   
  getchar();  
}


