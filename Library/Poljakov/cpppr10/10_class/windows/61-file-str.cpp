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
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
main()
{
  string s, s1;    
  int p, age;  
  ifstream Fin;
  ofstream Fout;

  Fin.open ( "input_4.txt" );
  if ( Fin ) {
    Fout.open ( "output_4.txt" );
    while ( getline(Fin, s) ) {
      p = s.find( ' ' );
      s1 = s.substr ( p+1 );
      age = atoi ( s1.c_str() );
      if ( age < 5 )
        Fout << s << endl;     
      }     
    Fout.close();
    Fin.close();
    cout << "������ ��������� � ����� 'output_4.txt'.";  
    }
  else  
    cout << "�� ������� ������� ���� 'input_4.txt'.";
  cin.get();
}
