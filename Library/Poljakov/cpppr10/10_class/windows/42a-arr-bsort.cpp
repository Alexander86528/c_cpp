/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 42a. ���������� "������"
 ����: 
   1 
   3
   5 
   2 
   4
 ���������:
   ����� ����������:
   1 2 3 4 5
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, j, c;
  cout << "������� �������� �������: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  for ( i=0; i<N-1; i++ )
    for ( j=0; j<N-1-i; j++ )
      if ( A[j] > A[j+1] ) {
        c=A[j]; A[j]=A[j+1]; A[j+1]=c;
        }  
  cout << "����� ����������: \n";
  for ( i=0; i<N; i++ )
    cout << A[i] << " ";
  cin.get(); cin.get();
}
