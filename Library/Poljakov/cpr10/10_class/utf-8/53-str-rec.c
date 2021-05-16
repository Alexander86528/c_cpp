/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 53. Рекурсивный перебор
 Вход: 
   нет 
 Результат: 
   <64 слова>
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
  TumbaWords("ЫШЧО", word, 0);
  getchar();  
}


