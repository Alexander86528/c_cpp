/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 60. ���������� ������� �� �����
 ����: 
   ������ � ����� input_3.txt � ������� �������� 
 ���������: 
   ��������������� ������ � ����� output_3.txt 
   � ������� ��������
*/ 
#include <iostream>
#include <fstream>
using namespace std;
main()
{
  const int MAX = 100;    
  int A[MAX];
  int i, j, c, N;
  ifstream Fin;
  ofstream Fout;

  Fin.open ( "input_3.txt" );
  if ( Fin ) {
    N = 0;
    while ( N < MAX  &&  Fin >> A[N] )
        N ++;
    Fin.close();
    for ( i=0; i<N-1; i++ )
      for ( j=N-2; j>=i; j-- )
        if ( A[j] > A[j+1] ) {
          c = A[j]; A[j] = A[j+1]; A[j+1] = c;   
          }
    Fout.open ( "output_3.txt" );
    for ( i=0; i<N; i++ )
      Fout << A[i] << endl;
    Fout.close();
    cout << "������ ��������� � ����� 'output_3.txt'.";  
    }
  else  
    cout << "�� ������� ������� ���� 'input_3.txt'.";
  cin.get();
}
