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
#include <iostream>
#include <fstream>
using namespace std;
main()
{
  ifstream Fin;
  ofstream Fout;
  int x;
  Fin.open ( "input_1.txt" );
  if ( Fin ) {
    Fin >> x;
    Fin.close();
    Fout.open ( "output_1.txt" );
    Fout << 2*x;
    Fout.close();
    cout << "������ ��������� � ����� 'output_1.txt'.";  
    }
  else  
    cout << "�� ������� ������� ���� 'input_1.txt'.";
  cin.get();
}
