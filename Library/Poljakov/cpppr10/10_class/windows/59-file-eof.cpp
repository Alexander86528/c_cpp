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
#include <iostream>
#include <fstream>
using namespace std;
main()
{
  ifstream Fin;
  ofstream Fout;
  int x, sum;
  Fin.open ( "input_2.txt" );
  if ( Fin ) {
    sum = 0;
    while ( Fin >> x )
       sum += x;
    Fin.close();
    Fout.open ( "output_2.txt" );
    Fout << sum;
    Fout.close();
    cout << "������ ��������� � ����� 'output_2.txt'.";  
    }
  else  
    cout << "�� ������� ������� ���� 'input_2.txt'.";
  cin.get();
}
