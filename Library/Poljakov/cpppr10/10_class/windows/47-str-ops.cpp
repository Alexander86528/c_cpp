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
#include <iostream>
using namespace std;
main()
{
  string s, s1, s2;
  s1 = "������"; 
  s2 = "����"; 
  s  = s1 + ", " + s2 + "!"; 
  cout << s << endl;
  s = "0123456789";
  s1 = s.substr ( 3, 5 );
  cout << s1 << endl;
  s = "0123456789";
  s.erase ( 3, 6 );
  cout << s << endl;
  s = "0123456789";
  s.insert ( 3, "ABC" );
  cout << s << endl;
  s1 = "pass";
  s2 = "Pass";
  if ( s1 == s2 )
    cout << "������ " << s1 << " �������!\n";
  else  
    cout << "������ " << s1 << " �� �������...\n";
  cin.get(); 
}
