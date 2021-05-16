/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 22. Изменяемые параметры
 Вход: 
   2 3
 Результат:
   После обмена: x=3 y=2
*/ 
#include <stdio.h>

void Swap ( int *adrA, int *adrB )
{
  int c;
  c = *adrA; *adrA = *adrB; *adrB = c;
}
main()
{
  int x, y;
  printf ( "Введите два целых числа: " );
  scanf ( "%d%d", &x, &y );
  Swap ( &x, &y );
  printf ( "После обмена: x=%d y=%d", x, y );
  getchar();
}


