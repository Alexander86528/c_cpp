/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 29. ��������. �������� �������
 ����: 
   14 21
 ���������:
   ���(14,21) = 7
*/ 
#include <iostream>
using namespace std;
int NOD ( int a, int b )
{
  if (a == 0 || b == 0) 
    return a+b;
  if ( a > b )
       return NOD(a - b, b);
  else return NOD(a, b - a);
}
main()
{
  int x, y;
  cout << "������� ��� ����������� �����: ";
  cin >> x >> y;
  cout << "���(" << x << "," << y << ")=" << NOD(x,y);
  cin.get(); cin.get();
}
