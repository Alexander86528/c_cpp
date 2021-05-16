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
#include <iostream>
using namespace std;
void Swap ( int& a, int& b )
{
  int c;
  c = a; a = b; b = c;
}
main()
{
  int x, y;
  cout << "Введите два целых числа: ";
  cin >> x >> y;
  Swap ( x, y );
  cout << "После обмена: x=" << x << " y=" << y;
  cin.get();cin.get();
}
