/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 21. ��������� � ����������
 ����: 
   99
 ���������:
   �������� ���: 01100011
*/ 
#include <iostream>
using namespace std;
void printBin ( int n )
{
  int k;
  k = 128;
  while ( k > 0 ) {
    cout <<  n / k;
    n = n % k;
    k = k / 2; 
    } 
}
main()
{
  int n;
  cout << "������� �����: ";
  cin >> n;
  cout << "�������� ���: ";
  printBin ( n );
  cin.get();cin.get();
}
