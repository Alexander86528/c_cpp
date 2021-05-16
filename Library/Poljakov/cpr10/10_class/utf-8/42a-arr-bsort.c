/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 42a. Сортировка "камнем"
 Вход: 
   1 
   3
   5 
   2 
   4
 Результат:
   После сортировки:
   1 2 3 4 5
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, j, c;
  printf ( "Введите элементы массива: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  for ( i=0; i<N-1; i++ )
    for ( j=0; j<N-1-i; j++ )
      if ( A[j] > A[j+1] ) {
        c=A[j]; A[j]=A[j+1]; A[j+1]=c;
        }  
  printf ( "После сортировки: \n" );
  for ( i=0; i<N; i++ ) 
    printf ( "%d ", A[i] );
  getchar();  
}


