/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 37. Линейный поиск в массиве c break
 Вход: 
   1 
   2
   3 
   4 
   5
   3
 Результат:
   A[2]=3
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, X, nX;
  printf ( "Введите элементы массива: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  printf ( "Что ищем? " ); 
  scanf ( "%d", &X );
  nX = -1;
  for ( i=0; i<N; i++ )
    if ( A[i] == X ) {
      nX = i;
      break;
      }
  if ( nX >= 0 ) 
       printf ( "A[%d]=%d", nX, X );
  else printf ( "Не нашли!" );
  getchar();  
}


