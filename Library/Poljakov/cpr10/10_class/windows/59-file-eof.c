/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 59. ��������� ������������ ���������� �����
 ����: 
   ����� ����� � ����� input_2.txt � ������� ��������  
 ���������: 
   ����� ����� � ����� output_2.txt � ������� ��������    
*/ 
#include <stdio.h>

main()
{
  FILE *Fin, *Fout;
  int x, sum;
  Fin = fopen ( "input_2.txt", "r" );
  if ( Fin ) {
    sum = 0;   
    while ( 1 == fscanf(Fin, "%d", &x) ) 
      sum += x;
    fclose ( Fin );
    Fout = fopen ( "output_2.txt", "w" );
    fprintf ( Fout, "%d", sum );
    fclose ( Fout );
    printf ( "������ ��������� � ����� 'output_2.txt'." );  
    }
  else
    printf ( "�� ������� ������� ���� 'input_2.txt'." );  
  getchar();
}


