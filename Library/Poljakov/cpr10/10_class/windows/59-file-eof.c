/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 59. Обработка неизвестного количества чисел
 Вход: 
   целые числа в файле input_2.txt в текущем каталоге  
 Результат: 
   сумма чисел в файле output_2.txt в текущем каталоге    
*/ 
#include <stdio.h>

main()
{
  FILE *Fin, *Fout;
  int x, sum;
  Fin = fopen ( "input_2.txt", "r" );
  if ( Fin ) {
    sum = 0;   
    while ( 1 == fscanf(Fin, "%d", &x) ) 
      sum += x;
    fclose ( Fin );
    Fout = fopen ( "output_2.txt", "w" );
    fprintf ( Fout, "%d", sum );
    fclose ( Fout );
    printf ( "Данные сохранены в файле 'output_2.txt'." );  
    }
  else
    printf ( "Не удалось открыть файл 'input_2.txt'." );  
  getchar();
}


