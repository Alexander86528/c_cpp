/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 32. ���������� � ����� �������
 ����: 
   ���
 ���������:
   0 1 4 9 16 
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i;
  for ( i=0; i<N; i++ ) 
    A[i] = i*i;
  for ( i=0; i<N; i++ ) 
    cout << A[i] << " ";    
  cin.get();  
}
