/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 41. Отбор элементов по условию
 Вход: 
   5
   1 
   2
   3 
   4 
   5
 Результат:
   Чётные элементы:
   2 4
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N], B[N];
  int i, count;
  printf ( "Введите элементы массива: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  count = 0;
  for ( i=0; i<N; i++ ) 
    if ( A[i] % 2 == 0 ) {
      B[count] = A[i];
      count ++;
      }
  printf ( "Чётные элементы: \n" );
  for ( i=0; i<count; i++ ) 
    printf ( "%d ", B[i] );
  getchar();  
}


