/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 25. ���������� �������
 ����: 
   5
   7
   12
 ���������:
   5 - ������� �����
   7 - ������� �����
*/ 
#include <iostream>
using namespace std;
bool isPrime ( int n )
{
  int count, k;
  count = 0;
  k = 2;
  while ( k*k <= n  &&  count == 0) {
    if ( n % k == 0 ) 
       count ++;
    k ++;
    }
  return (count == 0);
}
main()
{
  int n;
  cout << "������� �����: ";
  cin >> n;
  while ( isPrime ( n ) ) {
    cout << n << " - ������� �����\n";
    cout << "������� �����: ";
    cin >> n;
    }
  cin.get();cin.get();
}
