/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 9a. Алфавитно-частотный словарь.
                 Включение файла через #include                
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "wordlist.h"

main ()
{
  TWordList L;
  int p;
  char s[80];
  FILE *F;

  L.size = 0;
  L.capacity = 10;
  L.data = (TPair*) calloc ( L.capacity, sizeof(TPair) );

  F = fopen ( "input_list.txt", "r" );
  
  while ( 1 == fscanf(F, "%s", s) ) {
    p = Find ( L, s );
    if ( p >= 0 )
      L.data[p].count ++;
    else {
      p = FindPlace ( L, s );
      InsertWord ( &L, p, s );
      }
    }
  fclose(F);

  F = fopen ( "output_list.txt", "w" );
  for ( p=0; p<L.size; p++ )
    fprintf ( F, "%s: %d\n", L.data[p].word, L.data[p].count);    
  fclose(F);

  printf ( "\nРезультат записан в файл output_list.txt\n");

  getchar();
}
