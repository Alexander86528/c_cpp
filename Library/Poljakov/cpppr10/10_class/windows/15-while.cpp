/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 15. ���� while: ���������� ���� �����
 ����: 
   12345
 ���������:
   ���� � �����: 5
*/ 
#include <iostream>
using namespace std;
main()
{
  int n, count;     
  cout << "������ ����� �����: ";
  cin >> n;
  count = 0;
  while ( n > 0 ) {
    n = n / 10;
    count ++;
    }
  cout << "���� � �����: " << count;
  cin.get(); cin.get();
}
