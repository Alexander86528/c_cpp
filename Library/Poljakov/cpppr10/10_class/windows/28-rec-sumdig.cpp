/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 28. ��������. ����� ����
 ����: 
   12345
 ���������:
  ����� ���� 15
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
