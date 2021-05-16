/*
 ��������� � �������� ����������� ��� 11 ������
 �.�. �������� � �.�. �������.
 ����� 6.
 ��������� � 5. ���������� �������� �������������
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
  TBook Books[N], B;
  int i, j, M;
  FILE *F;

  F = fopen ( "books.dat", "rb" );
  M = fread ( &Books[0], sizeof(TBook), N, F );
  fclose(F);

  printf ( "��������� ������ � ������:\n" );
  for ( i=0; i<M; i++ )
    printf ( "%s, %s, %d\n", 
             Books[i].author, Books[i].title, Books[i].count);

  for ( i=0; i<M-1; i++ )
    for ( j=M-2; j>=i; j-- )
      if ( strcmp(Books[j].author, Books[j+1].author) > 0 ) {
        B = Books[j]; Books[j] = Books[j+1];
        Books[j+1] = B;
        }

  printf ( "\n����� ���������� �������������:\n" );
  for ( i=0; i<M; i++ )
    printf ( "%s, %s, %d\n", 
             Books[i].author, Books[i].title, Books[i].count);
               
  F = fopen ( "books_sort.dat", "wb" );
  fwrite ( &Books[0], sizeof(TBook), M, F );
  fclose(F);

  getchar();
}
