/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 4. ��������� �����, ������, ������������
 ����: 
   5 7
 ���������:
   5+7=12
*/
#include <iostream>
#include <iomanip>
using namespace std;
main()
{
   int a, b, c;   
   cout << "������� ��� ����� �����: ";
   cin >> a >> b;   
   c = a + b;
   cout << a << "+" << b << "=" << c;
   cin.get(); cin.get();
}
/*
#include <iostream>
using namespace std;
main()
{
   int a, b, c;   
   cout << "������ ��� ����� �����: ";
   cin >> a >> b;   
   c = a + b;
   cout.width(5);
   cout << a << "+" << b << "=" << c;
   cin.get(); cin.get();
}
*/

