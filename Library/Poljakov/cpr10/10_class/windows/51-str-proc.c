/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 51. Строки в процедуре
 Вход: 
   нет 
 Результат: 
   A12B.A12B.A12B
*/ 
#include <stdio.h>
#include <string.h>

void replaceAll ( char s[], char wOld[], char wNew[] )
{
  int lenOld, lenNew;
  char *p, *pS, *pRes;
  char res[200];
  
  lenOld = strlen(wOld);
  lenNew = strlen(wNew);
  res[0] = '\0';
  
  pS = s; pRes = res;
  while ( strlen(pS) > 0 ) {
    p = strstr ( pS, wOld );
    if ( p == NULL ) {
      strcat ( res, s ); 
      strcpy ( s, res );
      return;
      }
    if ( p > pS ) {
      strncpy ( pRes, pS, p-pS );
      pRes += p-pS;
      pS = p;
      }
    strcpy ( pRes, wNew );
    pRes += lenNew;
    pS += lenOld;
    }
  strcpy ( s, res );
}

main()
{
  char s[80] = "12.12.12";
  replaceAll ( s, "12", "A12B" );
  puts ( s );    
  getchar();  
}


