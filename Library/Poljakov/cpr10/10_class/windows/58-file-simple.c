/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 58. Чтение и запись в файл
 Вход: 
   целое число в файле intput_1.txt в текущем каталоге 
 Результат: 
   удвоенное число в файле output_1.txt в текущем каталоге
*/ 
#include <stdio.h>

main()
{
  FILE *Fin, *Fout;
  int x;
  Fin = fopen ( "input_1.txt", "r" );
  if ( Fin ) {
    fscanf ( Fin, "%d", &x );
    fclose ( Fin );
    Fout = fopen ( "output_1.txt", "w" );
    fprintf ( Fout, "%d", 2*x );
    fclose ( Fout );
    printf ( "Данные сохранены в файле 'output_1.txt'." );  
    }
  else
    printf ( "Не удалось открыть файл 'input_1.txt'." );  
  getchar();
}


