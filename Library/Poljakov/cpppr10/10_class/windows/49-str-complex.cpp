/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 49. ������ ������
 ����: 
   ������� ����������� ���������
 ���������:
   ��������� �.�.
*/ 
#include <iostream>
using namespace std;
main()
{
  string s, name, name2;
  int n;
  cout << "������� ���, �������� � �������: ";
  getline ( cin, s );
  n = s.find(' ');
  name = s.substr(0,1) + '.';    // ������ ����� �����
  s = s.substr ( n+1 );
  n = s.find(' ');
  name2 = s.substr(0,1) + '.';   // ������ ����� ��������
  s = s.substr ( n+1 ); // �������� ������� 
  s = s + ' ' + name + name2;
  cout << s;
  cin.get(); 
}
