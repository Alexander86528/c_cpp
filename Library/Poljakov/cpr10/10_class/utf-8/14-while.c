/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 14. Цикл с условием
 Вход: 
   2
 Результат:
   привет
   привет
*/ 
#include <stdio.h>

main()
{
  int N, k;
  printf("Сколько раз сделать? ");
  scanf ( "%d", &N );
  k = 0;
  while ( k < N ) {
    printf ( "привет\n" );
    k ++;
    }
  getchar();
}
