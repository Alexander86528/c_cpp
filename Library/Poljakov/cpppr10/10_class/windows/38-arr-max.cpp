/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 38. ����� ��������� � �������
 ����: 
   1 
   2
   8 
   4 
   5
   3
 ���������:
   ��������: A[2]=8
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, nMax;
  cout << "������� �������� �������: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  nMax = 0;
  for ( i=1; i<N; i++ )
    if ( A[i] > A[nMax] ) nMax = i;
  cout << "A[" << nMax << "]=" <<  A[nMax];
  cin.get(); cin.get();
}
