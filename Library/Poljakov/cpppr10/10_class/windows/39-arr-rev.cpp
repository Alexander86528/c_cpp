/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 39. ������ �������
 ����: 
   1 
   2
   3 
   4 
   5
 ���������:
   ����� �������:
   5 4 3 2 1
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, c;
  cout << "������� �������� �������: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  for ( i=0; i<(N/2); i++ ) {
    c = A[i];
    A[i] = A[N-1-i];
    A[N-1-i] = c;
    }
  cout << "����� �������: \n";
  for ( i=0; i<N; i++ )
    cout << A[i] << " ";
  cin.get(); cin.get();
}
