/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 54. ���������� �����
 ����:
   �������
   �������  
   ���
   ���
   ���
 ���������:
   ���
   ���
   ���
   �������
   �������
*/ 
#include <stdio.h>
#include <string.h>

main()
{
  const int N = 5;
  char s1[80], S[N][80];
  int i, j;
  printf ( "������� ������: \n" );
  for ( i=0; i<N; i++ )
    gets ( S[i] );    
  for ( i=0; i<N-1; i++ )
    for ( j=N-2; j>=i; j-- )
      if ( strcmp(S[j],S[j+1]) > 0 ) {
        strcpy(s1, S[j]);
        strcpy(S[j], S[j+1]);
        strcpy(S[j+1], s1);
        }     
  printf ( "����� ����������: \n" );
  for ( i=0; i<N; i++ )
    puts ( S[i] );
  getchar();  
}


