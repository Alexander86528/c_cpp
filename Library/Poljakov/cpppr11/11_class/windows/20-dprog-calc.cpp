/*
 ��������� � �������� ����������� ��� 11 ������
 �.�. �������� � �.�. �������.
 ����� 6.
 ��������� � 20. ������������ ����������������.
                 ���������� �������� ����������� ���������
*/
#include <iostream>
using namespace std;


main ()
{
  int *K;
  int i, N0, N;

  cout << "������� ��������� � �������� �����: \n";
  cin >> N0 >> N;

  K = new int[N+1];

  K[N0] = 1;
  for ( i=N0+1; i<=N; i++ ) {
    K[i] = K[i-1];
    if ( i % 3 == 0 )
      K[i] = K[i] + K[i/3];
    }

  cout << "���������� �������� " << K[N];

  cin.get(); cin.get(); 
}
