/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 4. Структуры и файлы
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
  
main ()
{
  const int N = 100;
  TBook Books[N];
  int i, M;
  FILE *F;
  char s[80];  

  F = fopen ( "books.dat", "rb" );
  M = fread ( &Books[0], sizeof(TBook), N, F );
  fclose(F);

  printf ( "Имеющиеся данные о книгах:\n" );
  for ( i=0; i<M; i++ )
    printf ( "%s, %s, %d\n", 
             Books[i].author, Books[i].title, Books[i].count);
             
  if ( M < N ) {
    printf ( "\nВведите поля новой структуры:\n" );
    printf ( "author: " );
    gets ( Books[M].author );
    printf ( " title: " );
    gets ( Books[M].title );
    printf ( " count: " );
    gets ( s );
    sscanf ( s, "%d", &Books[M].count );
    M ++;
    
    F = fopen ( "books.dat", "wb" );
    fwrite ( &Books[0], sizeof(TBook), M, F );
    fclose(F);        
    }   
    
  getchar();
}
