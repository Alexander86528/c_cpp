/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 29. Рекурсия. Алгоритм Евклида
 Вход: 
   14 21
 Результат:
   НОД(14,21) = 7
*/ 
#include <stdio.h>

int NOD ( int a, int b )
{
  if (a == 0 || b == 0) 
    return a+b;
  if ( a > b )
       return NOD(a - b, b);
  else return NOD(a, b - a);
}
main()
{
  int x, y;
  printf ( "Введите два натуральных числа: " );
  scanf ( "%d%d", &x, &y );
  printf ( "НОД(%d,%d)=%d", x, y, NOD(x,y));
  getchar();
}


