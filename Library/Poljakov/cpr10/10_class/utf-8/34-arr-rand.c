/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 34. Заполнение массива случайными числами
 Вход: 
   нет
 Результат:
   <5 случайных чисел от 20 до 100>
*/ 
#include <stdio.h>
#include <stdlib.h>

const int N = 5;
int irand ( int a, int b )
{
   return a + rand() % (b - a + 1);  
}
main()
{
  int A[N];
  int i, a = 20, b = 100;
  for ( i=0; i<N; i++ ) 
    A[i] = irand ( a, b );
  printf ( "Массив случайных чисел:\n" );
  for ( i=0; i<N; i++ ) 
    printf ( "%d ", A[i] );    
  getchar();  
}


