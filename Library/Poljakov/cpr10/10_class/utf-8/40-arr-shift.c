/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 40. Циклический сдвиг массива
 Вход: 
   1 
   2
   3 
   4 
   5
 Результат:
   После сдвига влево:
   2 3 4 5 1
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, c;
  printf ( "Введите элементы массива: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  c = A[0];
  for ( i=0; i <N-1; i++ )  
    A[i] = A[i+1];
  A[N-1] = c;   
  printf ( "После cдвига влево: \n" );
  for ( i=0; i<N; i++ ) 
    printf ( "%d ", A[i] );
  getchar();  
}


