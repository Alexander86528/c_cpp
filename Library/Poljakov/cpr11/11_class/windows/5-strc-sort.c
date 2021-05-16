/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 5. Сортировка структур перестановкой
*/
#include <stdio.h>
#include <string.h>

typedef 
  struct {
    char author[40];  // автор, строка 
    char title[80];   // название, строка
    int count;        // количество, целое 
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

  printf ( "Имеющиеся данные о книгах:\n" );
  for ( i=0; i<M; i++ )
    printf ( "%s, %s, %d\n", 
             Books[i].author, Books[i].title, Books[i].count);

  for ( i=0; i<M-1; i++ )
    for ( j=M-2; j>=i; j-- )
      if ( strcmp(Books[j].author, Books[j+1].author) > 0 ) {
        B = Books[j]; Books[j] = Books[j+1];
        Books[j+1] = B;
        }

  printf ( "\nПосле сортировки перестановкой:\n" );
  for ( i=0; i<M; i++ )
    printf ( "%s, %s, %d\n", 
             Books[i].author, Books[i].title, Books[i].count);
               
  F = fopen ( "books_sort.dat", "wb" );
  fwrite ( &Books[0], sizeof(TBook), M, F );
  fclose(F);

  getchar();
}
