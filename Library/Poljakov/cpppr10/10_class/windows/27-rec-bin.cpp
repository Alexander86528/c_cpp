/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 26. ��������. ��������� �����
 ����: 
   ��� 
 ���������:
   1 -> 3
   1 -> 2
   3 -> 2
   1 -> 3
   2 -> 1
   2 -> 3
   1 -> 3
*/ 
#include <iostream>
using namespace std;
void printBin ( int n )
{
  if ( n == 0 ) return;
  printBin ( n / 2 );
  cout << n % 2;
}
main()
{
  int N;
  cout << "������� ����������� �����: ";
  cin >> N;
  cout << "�������� ��� ";
  printBin ( N );
  cin.get(); cin.get();
}
