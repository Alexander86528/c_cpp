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
#include <stdio.h>
#include <string.h>

void TumbaWords( char A[], char w[], int N)
{
  int i;     
  if ( N == strlen(w) ) {
    puts ( w );
    return;
    }
  for ( i=1; i<strlen(A); i ++ ) {
    w[N] = A[i];
    TumbaWords(A, w, N+1);
    }
}

main()
{
  char word[] = "...";
  TumbaWords("����", word, 0);
  getchar();  
}


