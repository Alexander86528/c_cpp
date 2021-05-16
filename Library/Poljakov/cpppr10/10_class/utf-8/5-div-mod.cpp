/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 5. Операции деления, взятия остатка, округления
 Вход: 
   85
 Результат:
   8 5
   -3 1 
   253
   -1
   -2
   -1
   1
   1
   2
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
main()
{
   int a, b, d, y;
   float x;
   cout << "Введите целое число: ";
   cin >> d;     // d =85
   a = d / 10;   // = 8 
   b = d % 10;   // = 5 
   cout << a << " " << b << "\n";
   cout << (-7) / 2 << " ";
   cout << (-7) % 2 << endl;
   y = 2*a*a + b*b*b;
   cout << y << endl;
   cout << int(-1.6) << "\n";
   cout << floor(-1.6) << "\n";
   cout << ceil(-1.6) << "\n";
   cout << int(1.6) << endl;
   cout << floor(1.6) << "\n";
   cout << ceil(1.6) << "\n";
   cin.get(); cin.get();
}
