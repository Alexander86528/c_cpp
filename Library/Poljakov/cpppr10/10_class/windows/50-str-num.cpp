/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 50. �������������� "������-�����"
 ����: 
   ���
 ���������:
   246
   246.912
   123
   1.234560E+002
   123.456
*/ 
#include <iostream>
#include <sstream>
using namespace std;
main()
{
  string s;
  int N;
  double X;
  ostringstream ss;

  s = "123";
  N = atoi ( s.c_str() ); // N = 123 
  // N = stoi ( s ); // ������ � C++11
  cout << N*2 << endl;

  s = "123.456";
  X = atof ( s.c_str() ); // X = 123.456 
  // X = stof ( s ); // ������ � C++11
  cout << X*2 << endl;

  N = 123;
  ss << N;
  s = ss.str();             // s = "123" 
  // s = to_string ( N );   // ������ � C++11
  cout << s << endl;

  X = 123.456;
  ss.str("");   // ������� ������
  ss.width(13);
  ss.precision(6);
  ss << scientific << X;       
  s = ss.str();             // s ="1.234560E+002"
  // s = to_string ( X );   // ������ � C++11
  cout << s << endl;
  
  ss.str("");
  ss.width(7);
  ss.precision(3);
  ss << fixed << X;
  s = ss.str();   // s ="123.456"
  cout << s << endl;
  cin.get(); 
}
