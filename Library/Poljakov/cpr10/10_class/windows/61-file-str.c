/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 61. ��������� ���������� ����� � �����
 ����: ������ � ������� � ����� input_4.txt 
       � ������� ��������
   <������> <�������> <������> 
 ���������: ������ � �������, ������� < 5 ���, 
       � ����� output_4.txt � ������� ��������
*/ 
#include <stdio.h>
#include <string.h>

main()
{
  char s[80], *p;
  int age;
  FILE *Fin, *Fout;

  Fin = fopen ( "input_4.txt", "r" );  
  if ( Fin ) {
    Fout = fopen ( "output_4.txt", "w" );
    while ( fgets(s, 80, Fin) ) {
      p = strchr ( s, ' ' );
      sscanf ( p+1, "%d", &age );
      if ( age < 5 )
        fputs ( s, Fout );     
      }     
    fclose ( Fout );
    fclose ( Fin );
    printf ( "������ ��������� � ����� 'output_4.txt'." );  
    }
  else
    printf ( "�� ������� ������� ���� 'input_4.txt'." );  
  getchar();
}


