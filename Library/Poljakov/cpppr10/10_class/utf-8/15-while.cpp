/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 15. Цикл while: количество цифр числа
 Вход: 
   12345
 Результат:
   Цифр в числе: 5
*/ 
#include <iostream>
using namespace std;
main()
{
  int n, count;     
  cout << "ведите целое число: ";
  cin >> n;
  count = 0;
  while ( n > 0 ) {
    n = n / 10;
    count ++;
    }
  cout << "Цифр в числе: " << count;
  cin.get(); cin.get();
}
