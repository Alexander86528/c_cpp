/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 50. Преобразования "строка-число"
 Вход: 
   нет
 Результат:
   246
   246.912
   123
   1.234560E+002
   123.456
*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
  char s[80];
  int N;
  float X;  
  
  strcpy ( s, "123" );
  N = atoi ( s );             // N = 123
  // sscanf ( s, "%d", &N );
  printf ( "%d\n", N*2 );
  
  strcpy ( s, "123.456" );
  X = atof ( s );             // X = 123.456
  // sscanf ( s, "%f", &X );
  printf ( "%7.3f\n", X*2 );
  
  N = 123;
  // itoa ( N, s, 10 );       // не входит в ANSI C и С++ 
  sprintf ( s, "%d", N );     // s = "123" 
  puts ( s );
  
  X = 123.456;
  sprintf ( s, "%e", X );     // s = "1.234560E+002" 
  puts ( s );  
  sprintf ( s, "%10.3f", X );  // s = "   123.456" 
  puts ( s );
    
  getchar();  
}


