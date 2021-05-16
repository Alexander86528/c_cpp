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
#include <iostream>
using namespace std;
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
  cout << "Введите два натуральных числа: ";
  cin >> x >> y;
  cout << "НОД(" << x << "," << y << ")=" << NOD(x,y);
  cin.get(); cin.get();
}
