/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 38. Поиск максимума в массиве
 Вход: 
   1 
   2
   8 
   4 
   5
   3
 Результат:
   Максимум: A[2]=8
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, nMax;
  printf ( "Введите элементы массива: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  nMax = 0;
  for ( i=1; i<N; i++ )
    if ( A[i] > A[nMax] ) nMax = i;
  printf ( "A[%d]=%d", nMax, A[nMax] );
  getchar();  
}


