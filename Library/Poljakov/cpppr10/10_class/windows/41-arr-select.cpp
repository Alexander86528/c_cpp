/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 41. ����� ��������� �� �������
 ����: 
   5
   1 
   2
   3 
   4 
   5
 ���������:
   ׸���� ��������:
   2 4
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N], B[N];
  int i, count;
  cout << "������� �������� �������: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  count = 0;
  for ( i=0; i<N; i++ ) 
    if ( A[i] % 2 == 0 ) {
      B[count] = A[i];
      count ++;
      }  
  cout << "׸���� ��������: \n";
  for ( i=0; i<count; i++ )
    cout << B[i] << " ";
  cin.get(); cin.get();
}
