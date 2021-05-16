/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 61. Обработка символьных строк в файле
 Вход: данные о собаках в файле input_4.txt 
       в текущем каталоге
   <кличка> <возраст> <порода> 
 Результат: данные о собаках, которым < 5 лет, 
       в файле output_4.txt в текущем каталоге
*/ 
#include <stdio.h>
#include <string.h>

main()
{
  char s[80], *p;
  int age;
  FILE *Fin, *Fout;

  Fin = fopen ( "input_4.txt", "r" );  
  if ( Fin ) {
    Fout = fopen ( "output_4.txt", "w" );
    while ( fgets(s, 80, Fin) ) {
      p = strchr ( s, ' ' );
      sscanf ( p+1, "%d", &age );
      if ( age < 5 )
        fputs ( s, Fout );     
      }     
    fclose ( Fout );
    fclose ( Fin );
    printf ( "Данные сохранены в файле 'output_4.txt'." );  
    }
  else
    printf ( "Не удалось открыть файл 'input_4.txt'." );  
  getchar();
}


