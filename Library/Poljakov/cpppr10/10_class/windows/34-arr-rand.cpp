/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 34. ���������� ������� ���������� �������
 ����: 
   ���
 ���������:
   <5 ��������� ����� �� 20 �� 100>
*/ 
#include <iostream>
#include <cstdlib>
using namespace std;
const int N = 5;
int irand ( int a, int b )
{
   return a + rand() % (b - a + 1);  
}
main()
{
  int A[N];
  int i, a = 20, b = 100;
  for ( i=0; i<N; i++ ) 
    A[i] = irand ( a, b );
  cout << "������ ��������� �����:\n";
  for ( i=0; i<N; i++ ) 
    cout << A[i] << " ";    
  cin.get(); 
}
