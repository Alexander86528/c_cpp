/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 23. �������
 ����: 
   12345
 ���������:
   ����� ���� 15
*/ 
#include <iostream>
using namespace std;
int sumDigits ( int n)
{ 
  int sum = 0;
  while ( n != 0 ) {
    sum += n % 10;
    n = n / 10;
    } 
  return sum;
}
main()
{
  int N;
  cout << "������� ����� �����: ";
  cin >> N;
  cout << "����� ���� " << sumDigits(N);
  cin.get();cin.get();
}
