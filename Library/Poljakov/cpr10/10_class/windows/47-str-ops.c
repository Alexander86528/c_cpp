/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 47. �������� �� ��������
 ����: 
   ��� 
 ���������:
   ������, ����!
   34567
   0129
   012ABC3456789
*/ 
#include <stdio.h>
#include <string.h>

main()
{
  char s[80], s1[80] = "������", s2[80];  
  int i;
  strcpy ( s2, "����" ); 
  strcpy ( s, s1 );
  strcat ( s, ", " );
  strcat ( s, s2 );
  strcat ( s, "!" ); 
  puts ( s );
  strcpy ( s, "0123456789" );
  strncpy ( s1, &s[3], 5 );
  s1[5] = '\0';
  puts ( s1 );
  strcpy ( s, "0123456789" );
  strcpy ( &s[3], &s[9] );
  puts ( s );
  strcpy ( s, "0123456789" );
  strcpy ( s1, s+3 );
  strcpy ( s+3, "ABC" );
  strcat ( s, s1 );
  puts ( s );
  strcpy (s1, "pass");
  strcpy (s2, "Pass");
  if ( 0 == strcmp(s1, s2) )
    printf ( "������ %s �������!", s1);
  else  
    printf ( "������ %s �� �������...", s1);
  getchar();  
}


