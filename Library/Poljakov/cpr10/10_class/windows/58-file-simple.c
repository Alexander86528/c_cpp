/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 58. ������ � ������ � ����
 ����: 
   ����� ����� � ����� intput_1.txt � ������� �������� 
 ���������: 
   ��������� ����� � ����� output_1.txt � ������� ��������
*/ 
#include <stdio.h>

main()
{
  FILE *Fin, *Fout;
  int x;
  Fin = fopen ( "input_1.txt", "r" );
  if ( Fin ) {
    fscanf ( Fin, "%d", &x );
    fclose ( Fin );
    Fout = fopen ( "output_1.txt", "w" );
    fprintf ( Fout, "%d", 2*x );
    fclose ( Fout );
    printf ( "������ ��������� � ����� 'output_1.txt'." );  
    }
  else
    printf ( "�� ������� ������� ���� 'input_1.txt'." );  
  getchar();
}


