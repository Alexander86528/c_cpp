/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 53. ����������� �������
 ����: 
   ��� 
 ���������: 
   <64 �����>
*/ 
#include <iostream>
#include <sstream>
using namespace std;
void TumbaWords( string A, string& w, int N)
{
  int i;     
  if ( N == w.size() ) {
    cout << w << endl;
    return;
    }
  for ( i=0; i<A.size(); i ++ ) {
    w[N] = A[i];
    TumbaWords(A, w, N+1);
    }
}
main()
{
  string word = "...";
  TumbaWords("����", word, 0);
  cin.get(); 
}
