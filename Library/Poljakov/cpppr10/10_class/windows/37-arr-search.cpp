/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 37. �������� ����� � ������� c break
 ����: 
   1 
   2
   3 
   4 
   5
   3
 ���������:
   A[2]=3
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, X, nX;
  cout << "������� �������� �������: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  cout << "��� ����? "; 
  cin >> X;
  nX = -1;
  for ( i=0; i<N; i++ )
    if ( A[i] == X ) {
      nX = i;
      break;
      }
  if ( nX >= 0 )  
       cout << "A[" << i << "]=" << X;
  else cout << "�� �����!";
  cin.get(); cin.get();
}
