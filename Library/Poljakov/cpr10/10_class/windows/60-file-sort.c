/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 60. Сортировка массива из файла
 Вход: 
   массив в файле input_3.txt в текущем каталоге 
 Результат: 
   отсортированный массив в файле output_3.txt 
   в текущем каталоге
*/ 
#include <stdio.h>

main()
{
  const int MAX = 100;
  int A[MAX];
  int i, j, c, N;
  FILE *Fin, *Fout;

  Fin = fopen ( "input_3.txt", "r" );  
  if ( Fin ) {
    N = 0;   
    while ( N < MAX  &&  1 == fscanf(Fin, "%d", &A[N]) ) 
      N++;        
    fclose ( Fin );
    for ( i=0; i<N-1; i++ )
      for ( j=N-2; j>=i; j-- )
        if ( A[j] > A[j+1] ) {
          c = A[j]; A[j] = A[j+1]; A[j+1] = c;   
          }
    Fout = fopen ( "output_3.txt", "w" );
    for ( i=0; i<N; i++ )
      fprintf ( Fout, "%d\n", A[i] );
    fclose ( Fout );
    printf ( "Данные сохранены в файле 'output_3.txt'." );  
    }
  else
    printf ( "Не удалось открыть файл 'input_3.txt'." );  
  getchar();
}


