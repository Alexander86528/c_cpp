/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 36. �������� ����� � �������
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
  int i, X;
  cout << "������� �������� �������: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  cout << "��� ����? "; 
  cin >> X;
  i = 0;
  while (i < N && A[i] != X) 
    i ++;
  if ( i < N ) 
       cout << "A[" << i << "]=" << X;
  else cout << "�� �����!";
  cin.get(); cin.get();
}
