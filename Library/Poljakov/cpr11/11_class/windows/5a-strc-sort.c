/*
 ��������� � �������� ����������� ��� 11 ������
 �.�. �������� � �.�. �������.
 ����� 6.
 ��������� � 5. ���������� �������� �� ����������
*/
#include <stdio.h>
#include <string.h>

typedef 
  struct {
    char author[40];  // �����, ������ 
    char title[80];   // ��������, ������
    int count;        // ����������, ����� 
    } 
  TBook; 
typedef TBook *PBook;
  
main ()
{
  const int N = 100;
  TBook Books[N];
  PBook p[N], p1;
  int i, j, M;
  FILE *F;

  for ( i=0; i<N; i++ ) p[i] = &Books[i];

  F = fopen ( "books.dat", "rb" );
  M = fread ( &Books[0], sizeof(TBook), N, F );
  fclose(F);

  printf ( "��������� ������ � ������:\n" );
  for ( i=0; i<M; i++ )
    printf ( "%s, %s, %d\n", 
             Books[i].author, Books[i].title, Books[i].count);

  for ( i=0; i<M-1; i++ )
    for ( j=M-2; j>=i; j-- )
      if ( strcmp(p[j]->author, p[j+1]->author) > 0 ) {
        p1 = p[j]; p[j] = p[j+1];
        p[j+1] = p1;
        }
  printf ( "\n����� ���������� ����� ���������:\n" );
  for ( i=0; i<M; i++ )
    printf ( "%s, %s, %d\n", 
             p[i]->author, p[i]->title, p[i]->count);
             
  getchar();
}
