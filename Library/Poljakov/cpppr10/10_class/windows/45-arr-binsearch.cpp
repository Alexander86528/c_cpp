/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 45. �������� ����� � �������
 ����: 
   ���
 ���������:
   A[3]=3
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, X, L, R, c;
  for ( i=0; i<N; i++ ) 
    A[i] = i;
  cout << "�������� ������: \n";
  for ( i=0; i<N; i++ )  
    cout << A[i] << " ";
  cout << "\n��� ����? "; 
  cin >> X;
  L = 0; R = N;
  while ( L < R-1 ) {
    c = (L+R) / 2;
    if ( X < A[c] ) 
         R = c; 
    else L = c;
    }
  if ( A[L] == X ) 
       cout << "A[" << L << "]=" << X;
  else cout << "�� �����!";
  cin.get(); cin.get();
}
