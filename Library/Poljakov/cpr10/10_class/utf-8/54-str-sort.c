/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 54. Сортировка строк
 Вход:
   пароход
   паровоз  
   пар
   Пар
   пАр
 Результат:
   Пар
   пАр
   пар
   паровоз
   пароход
*/ 
#include <stdio.h>
#include <string.h>

main()
{
  const int N = 5;
  char s1[80], S[N][80];
  int i, j;
  printf ( "Введите строки: \n" );
  for ( i=0; i<N; i++ )
    gets ( S[i] );    
  for ( i=0; i<N-1; i++ )
    for ( j=N-2; j>=i; j-- )
      if ( strcmp(S[j],S[j+1]) > 0 ) {
        strcpy(s1, S[j]);
        strcpy(S[j], S[j+1]);
        strcpy(S[j+1], s1);
        }     
  printf ( "После сортировки: \n" );
  for ( i=0; i<N; i++ )
    puts ( S[i] );
  getchar();  
}


