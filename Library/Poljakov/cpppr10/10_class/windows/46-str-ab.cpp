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
#include <iostream>
using namespace std;
main()
{
  string s;
  int i;
  cout << "������� ������: ";
  getline ( cin, s );
  for ( i=0; i<s.size(); i++ ) 
    if ( s[i] == '�' )
      s[i] = '�';
  cout << s;
  cin.get(); 
}
