/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 46. Посимвольная обработка строк
 Вход: 
   аабб
 Результат:
   бббб
*/ 

#include <stdio.h>
#include <string.h>

main()
{
  char s[80];  
  int i;
  printf ( "Введите строку" );
  gets ( s );
  for ( i=0; i<strlen(s); i++ ) 
    if ( s[i] == 'а' )
      s[i] = 'б';
  puts ( s );   
  getchar();  
}

