/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 22. ���������� ���������
 ����: 
   2 3
 ���������:
   ����� ������: x=3 y=2
*/ 
#include <iostream>
using namespace std;
void Swap ( int& a, int& b )
{
  int c;
  c = a; a = b; b = c;
}
main()
{
  int x, y;
  cout << "������� ��� ����� �����: ";
  cin >> x >> y;
  Swap ( x, y );
  cout << "����� ������: x=" << x << " y=" << y;
  cin.get();cin.get();
}
