/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 36. Линейный поиск в массиве
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
  int i, X;
  printf ( "Введите элементы массива: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  printf ( "Что ищем? " ); 
  scanf ( "%d", &X );
  i = 0;
  while (i < N && A[i] != X) 
    i ++;
  if ( i <= N ) 
       printf ( "A[%d]=%d", i, X );
  else printf ( "Не нашли!" );
  getchar();  
}


