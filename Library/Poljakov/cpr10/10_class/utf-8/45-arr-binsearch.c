/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 45. Двоичный поиск в массиве
 Вход: 
   3
 Результат:
   A[3]=3
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, X, L, R, c;
  for ( i=0; i<N; i++ ) 
    A[i] = i;
  printf ( "Исходный массив: \n" );
  for ( i=0; i<N; i++ )  
    printf ( "%d ", A[i] );
  printf ( "\nЧто ищем? " ); 
  scanf ( "%d", &X );
  L = 0; R = N;
  while ( L < R-1 ) {
    c = (L+R) / 2;
    if ( X < A[c] ) 
         R = c; 
    else L = c;
    }
  if ( A[L] == X ) 
       printf ( "A[%d]=%d", L, X );
  else printf ( "Не нашли!" );
  getchar();  
}


