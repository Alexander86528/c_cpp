/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 8. �������� ���������
 ����: 
   5 7
 ���������:
   7
   7
   7
   7
*/ 
#include <iostream>
using namespace std;
main()
{
  int a, b, c, M, i;
  cout << "������� ��� ����� �����: ";
  cin >> a >> b;  
  cout << "������������ �����: \n";
  for ( i=1; i<=2; i++ ) { 
    if ( a > b ) 
         M = a;
    else M = b;
    cout << M << endl;  
    M = a;
    if ( b > a ) M = b;
    cout << M << endl;  
    c = a; a = b; b = c;
    }
  cin.get(); cin.get();
}
